const templateStr = `
<ul class="users">
  <% users.forEach((user) => { %>
    <li class="user-item">
      <%= 'My name is ' + user.name %>
    </li>
  <% }) %>
</ul>
`
const data = {
    users: [
      { name: 'Jerry', age: 12 },
      { name: 'Lucy', age: 13 }, 
      { name: 'Tomy', age: 14 }
    ]
  }
  const render = (template, data) => {
    template =  template.replace('<% ','${');
    
    template =  template.replace('{ %>','}');
    template =  template.replace('<%= ','${');
   
    console.log(template)
  }
  render(templateStr, data)
