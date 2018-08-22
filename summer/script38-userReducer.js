/**
 * 环境中已经注入了 React-redux，你可以直接使用 connect，或者 ReactRedux.connect
 */
const ADD_USER = 'ADD_USER';
const DELETE_USER = 'DELETE_USER';
const UPDATE_USER = 'UPDATE_USER';

const usersReducer =  (state = [], action) => {
    switch(action.type) {
        case ADD_USER: 
            return [...state,action.user];
        case DELETE_USER: 
            return [...state.slice(0,action.index),...state.slice(action.index+1)];
        case UPDATE_USER:
            return [...state.map((user,i)=>{
                        if(i===action.index) {
                            return {
                                ...user,
                                ...action.user
                            }
                        }
                        else {
                            return user;
                        }
                    })
                ];
        default:return state;
    }
}

class User extends Component {
  constructor(props) {
    
    super(props);
    this.state = {
      id :  props.id
    }
  }
  handleDelete() {
      this.props.onDelete(this.state.id);
    
  }
  render () {
    const { user } = this.props
    return (
      <div>
        <div>Name: {user.username}</div>
        <div>Age: {user.age}</div>
        <div>Gender: {user.gender}</div>
        <button onClick = {this.handleDelete}>删除</button>
      </div>
    )
  }
}

class UsersList extends Component {
   constructor(props){
      super(props);
    this.state = {
      users:[],
      id:0
      
    }
   }
    handleName(e) {
      this.setState({name:e.target.value})
    }
    handleAge(e) {
      this.setState({age:e.target.value})
    }
    handleGender(e) {
      let target = e.target;
      let value = target.type = 'radio' ? target.checked : target.value;
      let name = target.name;
      this.setState({[name]:value});
    }
    handleAdd() {
      let id = this.state.id++;
      this.setState({id});
      let users = usersReducer(this.state.users,{
        type:'ADD_USER',
        user:{
          username:this.state.name,
          age:this.state.age,
          gender:this.state.gender
        }
      });
      this.setState({users,id});
    }
    handleDelete(id) {
      let users = usersReducer(this.state.users,
        {
          type: 'DELETE_USER',
          index: id,//删除特定下标用户
        
      })
    this.setState({users});
  }
  render () {
    let users = this.state.users;
    return (
      <div>
        {/* 输入用户信息，点击“新增”按钮可以增加用户 */}
        <div className='add-user'>
          <div>Username: <input type='text'  value={this.state.name} onChange={this.handleName}/></div>
          <div>Age: <input type='number' value={this.state.age} onChange={this.handleAge}/></div>
          <div>Gender:
            <label>Male: <input type='radio' name='gender' value='male' onChange={this.handleGender} /></label>
            <label>Female: <input type='radio' name='gender' value='female' onChange={this.handleGender}/></label>
          </div>
          <button onClick = {this.handleAdd}>增加</button>
        </div>
        {/* 显示用户列表 */}
        <div className='users-list'>
          {users.map((user,index)=>{
            return (<User user={user} id = {index} onDelete = {this.handleDelete} />)
          })}
          
        </div>
      </div>
    )
  }
}
