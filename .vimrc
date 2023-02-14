"*********************************
"
"        Base Configuration
"
"*********************************

" 语法高亮
syntax on
" 设置行号
set number
" 设置相对行号
set relativenumber
" 智能匹配大括号
set smartindent
" 智能匹配
set cindent
" 高亮对应括号
set showmatch
" 对应括号高亮的时间（单位是十分之一秒）
set matchtime=1
" 代码最低是五行
set scrolloff=5
" Highlight before search
set hlsearch
" 设置tap键的距离为4
set smarttab
set tabstop=4
set shiftwidth=4
set expandtab
" Encoding Rule
set encoding=utf-8
set fileencodings=utf-8,ucs-bom,shift-jis,gb18030,gbk,gb2312,cp936,utf-16,big5,euc-jp,latin1
" open system copy board
set clipboard^=unnamed,unnamedplus
"*********************************
"
"      Personal Configuration
"
"*********************************

" 添加deus颜色
colors deus

" 函数非对齐操作
imap {<ENTER> {<ENTER>}<LEFT><ENTER><UP><SPACE><SPACE><SPACE><SPACE>

"*********************************
"
"             NerdTree
"
"*********************************

" Nerdtree Icon
let g:NERDTreeDirArrowExpandable = '▸'
let g:NERDTreeDirArrowCollapsible = '▾'
" Nerdtree quick start
map <F2> :NERDTreeMirror<CR>
map <F2> :NERDTreeToggle<CR>

"*********************************
"
"             Vim-go
"
"*********************************

" Vim-go base configuration
let g:go_autodetect_gopath = 1
let g:go_list_type = "quickfix"
let g:go_version_warning = 1
let g:go_highlight_types = 1
let g:go_highlight_fields = 1
let g:go_highlight_functions = 1
let g:go_highlight_function_calls = 1
let g:go_highlight_operators = 1
let g:go_highlight_extra_types = 1
let g:go_highlight_methods = 1
let g:go_highlight_generate_tags = 1
let g:godef_split=2
" disable vim-go go-glopls
let g:go_gopls_enabled = 0

"*********************************
"
"             Tagbar
"
"*********************************

" Tagbar plug
let g:tagbar_width=25
" Tagbar quick start
nmap <F8> :TagbarToggle<CR>

" Colors Deus setting
set t_Co=256
set termguicolors

let &t_8f = "\<Esc>[38;2;%lu;%lu;%lum"
let &t_8b = "\<Esc>[48;2;%lu;%lu;%lum"

set background=dark    " Setting dark mode
colorscheme deus
let g:deus_termcolors=256


