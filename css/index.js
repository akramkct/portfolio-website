

/*--------------------Education-------------------------*/

var tablink = document.getElementsByClassName("tab-links");
var tabcontent = document.getElementsByClassName("tab-content");
//console.log(tablink);

function opentab(a){
    for(tablk of tablink ){
        //console.log(tablk);
        tablk.classList.remove("active-link");
    }
    for(tabcon of tabcontent ){
        //console.log(tablk);
        tabcon.classList.remove("active-tab");
    }

    event.currentTarget.classList.add("active-link");
    document.getElementById(a).classList.add("active-tab");
}

