import pgzero
import pgzrun
import random
TITLE = "Fnaf 1"
FPS = 240
WIDTH = 1280
HEIGHT = 720
mode = "menu"
doorL = False
lightL = False
doorR = False
lightR = False
Bonnie_here = False
Chicka_here = False
Freddy_here = False
Foxy_attacks = False
Animatronics_active = False
monik = 0
bonnie = Actor("301.png")
chicka = Actor("281.png")
bonnie_attacking = False
speed = 10
someone_walking = False
v = 0
h = 0
m = 0
n = 0.03
p = 9
r = 0
b = 0
o = 0
c = 0
f = 0
fred = 0
freddy = 0
feddyV = 0
freddy_fazbear = 0
Feddy = 0.1
vent_sp = ["57.png", "60.png", "59.png"]
buttons1_sp = ["122.png", "124.png", "125.png", "130.png"]
buttons2_sp = ["134.png", "135.png", "131.png", "47.png"]
monitor_sp = ["142.png", "144.png", "132.png", "133.png", "136.png", "137.png", "138.png", "139.png", "140.png", "141.png"]
cameras_sp = ["19.png", "48.png", "66.png", "337.png", "0.png", "62.png", "67.png", "49.png", "83.png", "42.png", "41.png"]
cur_camera = 0

main_view = Actor("39.png", center = (640, 360))
vent = Actor("57.png", center = (689, 401))
buttons1 = Actor("122.png", topleft = (-170, 250))
buttons2 = Actor("134.png", topleft = (1320, 250))
doorLeft = Actor("102.png", center = (30, -400))
doorRight = Actor("118.png", center = (1230, -400))
nose = Actor("590.png", center = (517, 240))
pomehi = Actor("18.png")
pomehi_sp = ["12.png", "13.png", "14.png", "15.png", "16.png", "17.png", "18.png", "20.png"]
pomehi_cam = Actor("12.png")

monitor = Actor("142.png")
mon_open = Actor("420.png", center = (600, 680))
powerspeed = 4

#435
ambiences = ["ambience2.wav", "coldpresc b.wav"]
camera_navigation = Actor("164.png", center = (1050, 470))

cam1A = Actor("170.png", (1000, 300))
cam1A.point = 1
cam1B = Actor("171.png", (980, 350))
cam1B.point = 2
cam1C = Actor("177.png", (940, 450))
cam1C.point = 3
cam2A = Actor("172.png", (980, 560))
cam2A.point = 4
cam2B = Actor("165.png", (980, 598))
cam2B.point = 5
cam3 = Actor("168.png", (900, 550))
cam3.point = 6
cam4A = Actor("169.png", (1090, 560))
cam4A.point = 7
cam4B = Actor("173.png", (1090, 598))
cam4B.point = 8
cam5 = Actor("174.png", (860, 400))
cam5.point = 9
cam6 = Actor("175.png", (1180, 540))
cam6.point = 10
cam7 = Actor("176.png", (1200, 400))
cam7.point = 11
cams_buttons = [cam1A, cam1B, cam1C, cam2A, cam2B, cam3, cam4A, cam4B, cam5, cam6, cam7]
cams_buttons_sp = ["170_.png", "171_.png", "177_.png", "172_.png", "165_.png", "168_.png", "169_.png", "173_.png", "174_.png", "175_.png", "176_.png"]
cams_buttons_sp_n = ["170.png", "171.png", "177.png", "172.png", "165.png", "168.png", "169.png", "173.png", "174.png", "175.png", "176.png"]
camera_name = Actor("54.png", center = (1000, 250))
camera_names = ["54.png", "72.png", "70.png", "74.png", "76.png", "50.png", "79.png", "75.png", "71.png", "78.png", "77.png"]
bonnie_screamer_sp = ["301.png", "300.png", "299.png", "291.png", "303.png", "293.png", "294.png", "295.png", "296.png", "297.png", "298.png", "299.png", "300.png", "301.png", "300.png", "299.png", "291.png", "303.png", "293.png", "294.png", "295.png", "296.png", "297.png", "298.png"]
chicka_screamer_sp = ["281.png", "65.png", "69.png", "216.png", "228.png", "230.png", "231.png", "232.png", "233.png", "234.png", "235.png", "236.png", "237.png", "239.png", "279.png", "239.png", "237.png", "236.png", "235.png", "234.png", "233.png", "232.png", "231.png", "230.png", "228.png"]

monitor.y = 440

office_sp = ("39.png", "58.png", "127.png", "225.png", "227.png")
battery = Actor("212.png", center = (170, 680))
whiteColor = (255, 255, 255)
camera_outliine = Rect(20, 20, 1240, 690)
usagepic = Actor("209.png", center = (70, 680))
battery_sp = ["212.png", "213.png", "214.png", "456.png", "455.png"]
usage = 1
record_sign = Actor("7.png", center = (60, 60))
record_sp = ["7.png", "7_.png"]

power_left_pic = Actor("207.png", center = (103, 640))
powerleft = 100
night_pic = Actor("447.png", center = (1180, 90))
night = 1
AM = Actor("251.png", center = (1220, 50))
hour = 0

views_with_Bonnie = ["68.png", ["90.png", "120.png"], "205.png", "190.png", "206.png", "188.png"]
views_with_Chicka = ["224.png", ["215.png", "222.png"], ["217.png", "219.png"], ["221.png", "226.png"], "220.png"]
bonnie_step = 0
bonnie_wait_speed = 2
bonnie_seen = False
lightAllowed = True
bon_cadr = 0

chicka_step = 0
chicka_wait_speed = 3
chicka_seen = False
chicka_attacking = False
chi_cadr = 0

Freddy = Actor("307.png")
Freddy_attacking = False
ambiences2 = []
mouse_location = 0

old_cam_image = "19.png"

five = Actor("350_.png", center = (560, 360))
six = Actor("351_.png", center = (560, 440))
AM2 = Actor("352_.png", center = (660, 360))
star_win = False
star = Actor("star", topleft = (100, 380))

menu_view = Actor("431.png")
menu_sp = ["431.png", "440.png", "441.png", "442.png"]
new_game = Actor("448_.png", topleft = (100, 500))
continue_button = Actor("449_.png", topleft = (100, 550))
arrow = Actor("450_.png", topleft = (20, 500))
arrow_collide = False
demo = Actor("572_.png", topleft = (20, 680))
start_hello = Actor("453_.png", center = (640, 360))
fnaf = Actor("444_.png", topleft = (100, 150))
feddy = Actor("304.png")
feddy_sp = ["304.png", "305.png"]
fredbear = 0.001
fedyy_screamer_sp = ["307.png", "348.png", "308.png", "309.png", "310.png", "311.png", "312.png", "313.png", "314.png", "315.png", "316.png", "317.png", "318.png", "319.png", "320.png", "321.png", "322.png", "323.png", "324.png", "325.png"]
def draw():
    screen.fill("black")
    if mode == "game":
        if bonnie_attacking == False and chicka_attacking == False:
            main_view.draw()
            if doorL == True:
                doorLeft.draw()
            if doorR == True:
                doorRight.draw()
            if monik == 0:
                mon_open.draw()
            nose.draw()
            vent.draw()
            buttons1.draw()
            buttons2.draw()
            if doorL == True:
                doorLeft.draw()
            if doorR == True:
                doorRight.draw()
            monitor.draw()
            battery.draw()
            usagepic.draw()
            power_left_pic.draw()
            night_pic.draw()
            AM.draw()
            screen.draw.text(str(powerleft), center = (210, 645), fontname = "fnaf_font", color = "white")
            screen.draw.text(str(hour), center = (1175, 62), fontname = "fnaf_font", color = "white", fontsize = 32)
            screen.draw.text(str(night), center = (1238, 96), fontname = "fnaf_font", color = "white", fontsize = 24)
        elif bonnie_attacking == True:
            bonnie.draw()
            monitor.draw()
        elif chicka_attacking == True:
            chicka.draw()
            monitor.draw()
    elif mode == "cameras":
        screen.fill("black")
        main_view.draw()
        pomehi_cam.draw()
        camera_navigation.draw()
        if monik == 0:
            mon_open.draw()
        if main_view.image != cameras_sp[cur_camera] and someone_walking == False:
            main_view.image = cameras_sp[cur_camera]
        for j in range(len(cams_buttons)):
            cams_buttons[j].draw()
            if cams_buttons[cur_camera].image != cams_buttons_sp[cur_camera]:
                cams_buttons[cur_camera].image = cams_buttons_sp[cur_camera]
            for q in range(len(cams_buttons)):
                if cams_buttons[q] != cams_buttons[cur_camera]:
                    if cams_buttons[q].image != cams_buttons_sp_n[cams_buttons[q].point - 1]:
                        cams_buttons[q].image = cams_buttons_sp_n[cams_buttons[q].point - 1]
        screen.draw.rect(camera_outliine, whiteColor)
        battery.draw()
        record_sign.draw()
        usagepic.draw()
        screen.draw.text(str(powerleft), center = (210, 645), fontname = "fnaf_font", color = "white")
        screen.draw.text(str(hour), center = (1175, 62), fontname = "fnaf_font", color = "white", fontsize = 32)
        screen.draw.text(str(night), center = (1238, 96), fontname = "fnaf_font", color = "white", fontsize = 24)
        power_left_pic.draw()
        night_pic.draw()
        AM.draw()
        camera_name.draw()
    elif mode == "lose":
        screen.fill("black")
        pomehi_cam.draw()
    elif mode == "menu":
        menu_view.draw()
        continue_button.draw()
        demo.draw()
        screen.draw.text("©TimBeaver, 2022. Original game: ©Scott Cawthon, 2014", topleft = (720, 700), color = "white", fontsize = 24)
        pomehi_cam.draw()
        new_game.draw()
        fnaf.draw()
        if arrow_collide == True:
            arrow.draw()
        if star_win == True:
            star.draw()
    elif mode == "transition":
        screen.fill("black")
        start_hello.draw()
    elif mode == "outpower":
        if Freddy_attacking == False:
            feddy.draw()
            monitor.draw()
        elif Freddy_attacking == True:
            Freddy.draw()
    elif mode == "win":
        screen.fill("black")
        five.draw()
        six.draw()
        AM2.draw()
        screen.draw.filled_rect(Rect(520, 400, 75, 82), (0, 0, 0))
        screen.draw.filled_rect(Rect(520, 222, 75, 100), (0, 0, 0))


def update(dt):
    global powerspeed, mode, powerleft, hour
    musicbg2()
    if mode == "game":
        if lightL == True:
            if main_view.image != office_sp[1]:
                main_view.image = office_sp[1]
        if lightL == True and Bonnie_here == True:
            if main_view.image != office_sp[3]:
                main_view.image = office_sp[3]
        elif lightL == False and lightR == False:
            if main_view.image != office_sp[0]:
                main_view.image = office_sp[0]
        if lightR == True:
            if main_view.image != office_sp[2]:
                main_view.image = office_sp[2]
        if lightR == True and Chicka_here == True:
            if main_view.image != office_sp[4]:
                main_view.image = office_sp[4]
        elif lightR == False and lightL == False:
            if main_view.image != office_sp[0]:
                main_view.image = office_sp[0]
        if mouse_location < 580 and main_view.x < 810:
            main_view.x += speed
            vent.x += speed
            buttons1.x += speed
            buttons2.x += speed
            doorLeft.x += speed
            doorRight.x += speed
            nose.x += speed
        elif mouse_location > 700 and main_view.x > 490:
            main_view.x -= speed
            vent.x -= speed
            buttons1.x -= speed
            buttons2.x -= speed
            doorLeft.x -= speed
            doorRight.x -= speed
            nose.x -= speed
        feddy.x = main_view.x
    elif mode == "cameras":
        if camera_name.image != camera_names[cur_camera]:
            camera_name.image = camera_names[cur_camera]
        if mouse_location < 580 and main_view.x < 810:
            main_view.x += speed
            vent.x += speed
            buttons1.x += speed
            buttons2.x += speed
            doorLeft.x += speed
            doorRight.x += speed
            nose.x += speed
        elif mouse_location > 700 and main_view.x > 490:
            main_view.x -= speed
            vent.x -= speed
            buttons1.x -= speed
            buttons2.x -= speed
            doorLeft.x -= speed
            doorRight.x -= speed
            nose.x -= speed
        change_cam_for_Bonnie()
        change_cam_for_Chicka()
        feddy.x = main_view.x
    elif mode == "outpower":
        if mouse_location < 580 and feddy.x < 810:
            feddy.x += 7
        elif mouse_location > 700 and feddy.x > 490:
            feddy.x -= 7
    if battery.image != battery_sp[usage - 1]:
        battery.image = battery_sp[usage - 1]
    if usage == 1:
        powerspeed = 4
    elif usage == 2:
        powerspeed = 3
    elif usage == 3:
        powerspeed = 1.7
    elif usage == 4:
        powerspeed = 1.4
    elif usage == 5:
        powerspeed = 1
    if powerleft == -1:
        clock.schedule_unique(change_mode, 0.001)
        powerleft -= 1
    if hour == 6:
        clock.schedule_unique(change_mode, 0.0001)
        hour += 1
    


def on_mouse_move(pos):
    global mode, monik, n, mouse_location, arrow_collide
    mouse_location = pos[0]
    if mode == "game":
        n = 0.03
        if not(mon_open.collidepoint(pos)):
            monik = 0
        if mon_open.collidepoint(pos) and monik == 0:
            clock.schedule_unique(change_mode, 0.32)
            monitor.y = 360
            monitor.image = monitor_sp[0]
            music.play_once("put_down.wav")
            for i in range(len(monitor_sp) - 1):
                clock.schedule(mon_anim, n)
                n += 0.03
            monik = 1
    if mode == "cameras":
        n = 0.03
        if not(mon_open.collidepoint(pos)):
            monik = 0
        if mon_open.collidepoint(pos) and monik == 0:
            clock.schedule_unique(change_mode, 0.01)
            music.play_once("put_down.wav")
            monitor.y = 360
            monik = 1
    if mode == "menu":
        if new_game.collidepoint(pos) and arrow_collide == False:
            arrow_collide = True
            arrow.y = new_game.y
        if not(new_game.collidepoint(pos)):
            arrow_collide = False
        
def on_mouse_down(pos, button):
    global doorL, doorR, lightL, lightR, mode, cur_camera, old_image, old_button, usage, bonnie_seen, chicka_seen
    if mode == "game":
        if (button == mouse.LEFT and buttons1.collidepoint(pos) and pos[1] < 358 and pos[1] > 300 and doorL == False):
            if lightAllowed:
                buttons1.image = buttons1_sp[1]
                doorL = True
                usage += 1
                music.play_once("doorclose.wav")
                animate(doorLeft, tween = "decelerate", duration = 0.4, y = 435)
            else:
                music.play_once("error.wav")
        elif (button == mouse.LEFT and buttons1.collidepoint(pos) and pos[1] < 358 and pos[1] > 300 and doorL == True):
            buttons1.image = buttons1_sp[0]
            clock.schedule_unique(doorLF, 0.4)
            music.play_once("doorclose.wav")
            animate(doorLeft, tween = "accelerate", duration = 0.4, y = -400)
        elif (button == mouse.LEFT and buttons2.collidepoint(pos) and pos[1] < 358 and pos[1] > 300 and doorR == False):
            if lightAllowed:
                buttons2.image = buttons2_sp[1]
                doorR = True
                usage += 1
                music.play_once("doorclose.wav")
                animate(doorRight, tween = "decelerate", duration = 0.4, y = 435)
            else:
                music.play_once("error.wav")
        elif (button == mouse.LEFT and buttons2.collidepoint(pos) and pos[1] < 358 and pos[1] > 300 and doorR == True):
            buttons2.image = buttons2_sp[0]
            clock.schedule_unique(doorRF, 0.4)
            music.play_once("doorclose.wav")
            animate(doorRight, tween = "accelerate", duration = 0.4, y = -400)
        elif (button == mouse.LEFT and buttons1.collidepoint(pos) and pos[1] < 437 and pos[1] > 380 and lightL == False and doorL == False):
            if lightAllowed:
                buttons1.image = buttons1_sp[2]
                usage += 1
                lightL = True
                if Bonnie_here == True and bonnie_seen == False:
                    music.play_once("windowscare.wav")
                    bonnie_seen = True
            else:
                music.play_once("error.wav")

        elif (button == mouse.LEFT and buttons2.collidepoint(pos) and pos[1] < 437 and pos[1] > 380 and lightL == False and doorR == False):
            if lightAllowed:
                buttons2.image = buttons2_sp[2]
                usage += 1
                lightR = True
                if Chicka_here == True and chicka_seen == False:
                    music.play_once("windowscare.wav")
                    chicka_seen = True
            else:
                music.play_once("error.wav")
        elif (button == mouse.LEFT and buttons2.collidepoint(pos) and pos[1] < 437 and pos[1] > 380 and lightL == False and doorR == True):
            if lightAllowed:
                buttons2.image = buttons2_sp[3]
                usage += 1
                lightR = True
            else:
                music.play_once("error.wav")
        elif (button == mouse.LEFT and buttons1.collidepoint(pos) and pos[1] < 437 and pos[1] > 380 and lightL == False and doorL == True):
            if lightAllowed:
                buttons1.image = buttons1_sp[3]
                usage += 1
                lightL = True
            else:
                music.play_once("error.wav")
        if (button == mouse.LEFT and nose.collidepoint(pos)):
            music.play_once("partyfavorraspypart_ac01__3.wav")
    elif mode == "cameras":
        for i in range(len(cams_buttons)):
            if cams_buttons[i].collidepoint(pos) and button == mouse.LEFT and cur_camera != cams_buttons[i].point - 1:
                cur_camera = cams_buttons[i].point - 1
                music.play_once("blip3.wav")
    elif mode == "menu":
        if new_game.collidepoint(pos) and button == mouse.LEFT:
            mode = "transition"
            music.play_once("blip3.wav")
            clock.schedule_unique(change_mode, 3)
def on_mouse_up(button, pos):
    global lightL, lightR, usage
    if (button == mouse.LEFT and lightL == True and doorL == False):
        buttons1.image = buttons1_sp[0]
        usage -= 1
        lightL = False
    elif (button == mouse.LEFT and lightR == True and doorR == False):
        buttons2.image = buttons2_sp[0]
        usage -= 1
        lightR = False
    elif (button == mouse.LEFT and lightL == True and doorL == True):
        buttons1.image = buttons1_sp[1]
        usage -= 1
        lightL = False
    elif (button == mouse.LEFT and lightR == True and doorR == True):
        buttons2.image = buttons2_sp[1]
        usage -= 1
        lightR = False


def vent_anim():
    global v
    vent.image = vent_sp[v]
    v += 1
    if v == 3:
        v = 0
def doorLF():
    global doorL, usage
    usage -= 1
    doorL = False
def doorRF():
    global doorR, usage
    usage -= 1
    doorR = False




def musicbg2():
    if mode == "game" or mode == "cameras":
        if len(ambiences2) == 0:
            if (music.is_playing("buzz_fan_florescent2.wav") == False) and (music.is_playing("eerieambiencelargesca_mv005.wav") == False):
                music.play_once("buzz_fan_florescent2.wav")
            if Animatronics_active == True:
                music.play_once("eerieambiencelargesca_mv005.wav")
                ambiences2.append("eerieambiencelargesca_mv005.wav")
        else:
            if (music.is_playing("buzz_fan_florescent2.wav") == False) and (music.is_playing("eerieambiencelargesca_mv005.wav") == False):
                music.play_once("buzz_fan_florescent2.wav")
    elif mode == "menu":
        if (music.is_playing("darkness music.wav") == False):
            music.play_once("darkness music.wav")




def change_mode():
    global mode, m, usage, lightL, lightR, o, speed, bonnie_attacking, chicka_attacking, bon_cadr, chi_cadr, bonnie_step, chicka_step, Animatronics_active, doorL, doorR, lightAllowed, powerleft, hour, Bonnie_here,  bonnie_seen, Chicka_here, chicka_seen
    clock.unschedule(vent_anim)
    clock.unschedule(record_anim)
    clock.unschedule(pomehi_cam_anim)
    m = 0
    o = 0
    if (lightL == True and doorL == False):
        buttons1.image = buttons1_sp[0]
        usage -= 1
        lightL = False
    elif (lightR == True and doorR == False):
        buttons2.image = buttons2_sp[0]
        usage -= 1
        lightR = False
    elif (lightL == True and doorL == True):
        buttons1.image = buttons1_sp[1]
        usage -= 1
        lightL = False
    elif (lightR == True and doorR == True):
        buttons2.image = buttons2_sp[1]
        usage -= 1
        lightR = False
    if mode == "game" and hour < 6:
        clock.schedule_interval(record_anim, 0.5)
        clock.schedule_interval(pomehi_cam_anim, 0.07)
        music.set_volume(0.6)
        mode = "cameras"
        speed = 5
        usage += 1
        clock.unschedule(mon_anim)
    elif mode == "cameras" and powerleft > -1 and hour < 6:
        usage -= 1
        animate(monitor, tween = "accel_decel", duration = 0.32, y = 1080)
        music.set_volume(1)
        clock.schedule_interval(vent_anim, 0.03)
        speed = 10
        mode = "game"
    elif mode == "lose":
        usage = 1
        clock.unschedule(vent_anim)
        clock.unschedule(timer)
        clock.unschedule(power_minus)
        clock.unschedule(BonnieAI)
        clock.unschedule(ChickaAI)
        clock.schedule(feddy_v_menu, Feddy)
        clock.schedule_interval(pomehi_cam_anim, 0.07)
        o = 0
        speed = 10
        bonnie_attacking = False
        bon_cadr = 0
        chicka_attacking = False
        chi_cadr = 0
        usage = 1
        doorL = False
        doorLeft.y = -400
        doorR = False
        doorRight.y = -400
        Animatronics_active = False
        bonnie_step = 0
        chicka_step = 0
        lightAllowed = True
        powerleft = 100
        hour = 0
        Bonnie_here = False
        bonnie_seen = False
        Chicka_here = False
        chicka_seen = False
        buttons1.image = buttons1_sp[0]
        buttons2.image = buttons2_sp[0]
        if "eerieambiencelargesca_mv005.wav" in ambiences2:
            ambiences2.remove("eerieambiencelargesca_mv005.wav")
        mode = "menu"
    elif mode == "transition":
        clock.schedule_interval(vent_anim, 0.03)
        clock.schedule_interval(timer, 43)
        clock.unschedule(feddy_v_menu)
        clock.schedule(power_minus, powerspeed)
        clock.schedule(BonnieAI, 86)
        clock.schedule(ChickaAI, 112)
        mode = "game"
    if powerleft < 0 and hour < 6:
        powerleft -= 1
        if mode == "cameras":
            animate(monitor, tween = "accel_decel", duration = 0.32, y = 1080)
            music.set_volume(1)
            music.play_once("put_down.wav")
        music.play_once("powerdown.wav")
        mode = "outpower"
        clock.schedule(feddy_anim, 10)
    if hour >= 6:
        music.play_once("chimes 2.wav")
        usage = 1
        clock.unschedule(vent_anim)
        clock.unschedule(timer)
        clock.unschedule(power_minus)
        clock.unschedule(BonnieAI)
        clock.unschedule(ChickaAI)
        clock.unschedule(feddy_v_menu)
        clock.schedule_interval(pomehi_cam_anim, 0.07)
        o = 0
        speed = 10
        bonnie_attacking = False
        bon_cadr = 0
        chicka_attacking = False
        chi_cadr = 0
        usage = 1
        doorL = False
        doorLeft.y = -400
        doorR = False
        doorRight.y = -400
        Animatronics_active = False
        bonnie_step = 0
        chicka_step = 0
        lightAllowed = True
        powerleft = 100
        hour = 0
        Bonnie_here = False
        bonnie_seen = False
        Chicka_here = False
        chicka_seen = False
        buttons1.image = buttons1_sp[0]
        buttons2.image = buttons2_sp[0]
        if "eerieambiencelargesca_mv005.wav" in ambiences2:
            ambiences2.remove("eerieambiencelargesca_mv005.wav")
        clock.schedule_unique(hours_anim, 1)
        clock.schedule_unique(winned, 13)
        mode = "win"

def mon_anim():
    global m
    if m == len(monitor_sp):
        m = 0
    else:
        m += 1
    monitor.image = monitor_sp[m]
def record_anim():
    global r
    record_sign.image = record_sp[r]
    r += 1
    if r == 2:
        r = 0
def pomehi_cam_anim():
    global o
    pomehi_cam.image = pomehi_sp[o]
    o += 1
    if o == len(pomehi_sp):
        o = 0
def timer():
    global hour
    hour += 1
def power_minus():
    global powerleft
    clock.unschedule(power_minus)
    powerleft -= 1
    clock.schedule(power_minus, powerspeed)
def BonnieAI():
    global bonnie_step, Animatronics_active, Bonnie_here, bonnie_wait_speed, old_cam_image, someone_walking
    if powerleft > 0:
        clock.unschedule(BonnieAI)
        Animatronics_active = True
        if night == 1:
            bonnie_wait_speed = random.triangular(12, 20)
        elif night == 2:
            bonnie_wait_speed = random.triangular(5, 10)
        if bonnie_step > 0 and bonnie_step < 7:
            music.play_once("deep_steps.wav")
        if bonnie_step < 7:
            bonnie_step += 1
            if mode == "cameras":
                old_cam_image = main_view.image
            someone_walking = True
            main_view.image = "591.png"
            clock.schedule_unique(anti_pomeh, 1.1)
            clock.schedule(BonnieAI, bonnie_wait_speed)
        if bonnie_step == 7:
            Bonnie_here = True
            clock.schedule_unique(bonnie_waiting_to_scream, bonnie_wait_speed)
def ChickaAI():
    global chicka_step, Animatronics_active, Chicka_here, chicka_wait_speed, old_cam_image, someone_walking
    if powerleft > 0:
        clock.unschedule(ChickaAI)
        Animatronics_active = True
        if night == 1:
            chicka_wait_speed = random.triangular(14, 22)
        elif night == 2:
            chicka_wait_speed = random.triangular(6, 12)
        if chicka_step > 0 and chicka_step < 9:
            music.play_once("deep_steps.wav")
        if chicka_step < 9:
            chicka_step += 1
            if mode == "cameras":
                old_cam_image = main_view.image
            someone_walking = True
            main_view.image = "591.png"
            clock.schedule_unique(anti_pomeh, 1.1)
            clock.schedule(ChickaAI, chicka_wait_speed)
        if chicka_step == 9:
            Chicka_here = True
            clock.schedule_unique(chicka_waiting_to_scream, random.triangular(5, chicka_wait_speed + 2))
def change_cam_for_Bonnie():
    if cur_camera == 0:
            if bonnie_step > 0:
                if main_view.image != views_with_Bonnie[0] and someone_walking == False:
                    main_view.image = views_with_Bonnie[0]
    elif cur_camera == 1:
        if chicka_step == 1 and bonnie_step == 1:
            if main_view.image != "592.png" and someone_walking == False:
                main_view.image = "592.png"
        elif bonnie_step == 1:
            if main_view.image != views_with_Bonnie[1][0] and someone_walking == False:
                main_view.image = views_with_Bonnie[1][0]
        elif bonnie_step == 2 and chicka_step != 2:
            if main_view.image != views_with_Bonnie[1][1] and someone_walking == False:
                main_view.image = views_with_Bonnie[1][1]
    elif cur_camera == 3:
        if bonnie_step == 5:
            if main_view.image != views_with_Bonnie[4] and someone_walking == False:
                main_view.image = views_with_Bonnie[4]
    elif cur_camera == 4:
        if bonnie_step == 6:
            if main_view.image != views_with_Bonnie[5] and someone_walking == False:
                main_view.image = views_with_Bonnie[5]
    elif cur_camera == 5:
        if bonnie_step == 4:
            if main_view.image != views_with_Bonnie[3] and someone_walking == False:
                main_view.image = views_with_Bonnie[3]
    elif cur_camera == 8:
        if bonnie_step == 3:
            if main_view.image != views_with_Bonnie[2] and someone_walking == False:
                main_view.image = views_with_Bonnie[2]
def change_cam_for_Chicka():
    if cur_camera == 0:
            if chicka_step > 0:
                if main_view.image != views_with_Chicka[0] and someone_walking == False:
                    main_view.image = views_with_Chicka[0]
    elif cur_camera == 1:
        if chicka_step == 1 and bonnie_step == 1:
            if main_view.image != "592.png" and someone_walking == False:
                main_view.image = "592.png"
        elif chicka_step == 1:
            if main_view.image != views_with_Chicka[1][0] and someone_walking == False:
                main_view.image = views_with_Chicka[1][0]
        elif chicka_step == 2:
            if main_view.image != views_with_Chicka[1][1] and someone_walking == False:
                main_view.image = views_with_Chicka[1][1]
    elif cur_camera == 6:
        if chicka_step == 6:
            if main_view.image != views_with_Chicka[3][0] and someone_walking == False:
                main_view.image = views_with_Chicka[3][0]
        elif chicka_step == 7:
            if main_view.image != views_with_Chicka[3][1] and someone_walking == False:
                main_view.image = views_with_Chicka[3][1]
    elif cur_camera == 7:
        if chicka_step == 8:
            if main_view.image != views_with_Chicka[4] and someone_walking == False:
                main_view.image = views_with_Chicka[4]
    elif cur_camera == 10:
        if chicka_step == 3:
            if main_view.image != views_with_Chicka[2][0] and someone_walking == False:
                main_view.image = views_with_Chicka[2][0]
        elif chicka_step == 4:
            if main_view.image != views_with_Chicka[2][1] and someone_walking == False:
                main_view.image = views_with_Chicka[2][1]
def bonnie_waiting_to_scream():
    global lightAllowed, Bonnie_here, bonnie_step, someone_walking
    if powerleft > 0:
        if doorL == True:
            music.play_once("deep_steps.wav")
            bonnie_step = random.randint(1, 3)
            Bonnie_here = False
            someone_walking = True
            main_view.image = "591.png"
            clock.schedule_unique(anti_pomeh, 1.1)
            clock.schedule(BonnieAI, bonnie_wait_speed)
        else:
            lightAllowed = False
            clock.schedule(bonnie_screamer, 4)
def chicka_waiting_to_scream():
    global lightAllowed, Chicka_here, chicka_step, someone_walking
    if powerleft > 0:
        if doorR == True:
            music.play_once("deep_steps.wav")
            chicka_step = random.randint(1, 3)
            Chicka_here = False
            someone_walking = True
            main_view.image = "591.png"
            clock.schedule_unique(anti_pomeh, 1.1)
            clock.schedule(ChickaAI, chicka_wait_speed)
        else:
            lightAllowed = False
            clock.schedule(chicka_screamer, 4)
def bonnie_screamer():
    global mode, bon_cadr, b, bonnie_attacking, usage, speed
    if powerleft > 0:
        clock.unschedule(bonnie_screamer)
        bonnie_attacking = True
        b += 0.001
        if mode != "game":
            usage -= 1
            animate(monitor, tween = "accel_decel", duration = 0.32, y = 1080)
            music.set_volume(1)
            speed = 10
            mode = "game"
        if bon_cadr == 0:
            music.play_once("xscream.wav")
        bonnie.image = bonnie_screamer_sp[bon_cadr]
        bon_cadr += 1
        clock.schedule(bonnie_screamer, b)
        if bon_cadr == len(bonnie_screamer_sp):
            clock.unschedule(bonnie_screamer)
            bon_cadr = 0
            mode = "lose"
            music.play_once("static.wav")
            clock.schedule_interval(pomehi_cam_anim, 0.07)
            clock.schedule_unique(change_mode, 8)
            clock.unschedule(vent_anim)
            clock.unschedule(timer)
            clock.unschedule(feddy_v_menu)
            clock.unschedule(power_minus)
            clock.unschedule(BonnieAI)
            clock.unschedule(ChickaAI)
def chicka_screamer():
    global mode, chi_cadr, c, chicka_attacking, usage, speed
    if powerleft > 0:
        clock.unschedule(chicka_screamer)
        chicka_attacking = True
        c += 0.001
        if mode != "game":
            usage -= 1
            animate(monitor, tween = "accel_decel", duration = 0.32, y = 1080)
            music.set_volume(1)
            speed = 10
            mode = "game"
        if chi_cadr == 0:
            music.play_once("xscream.wav")
        chicka.image = chicka_screamer_sp[chi_cadr]
        chi_cadr += 1
        clock.schedule(chicka_screamer, c)
        if chi_cadr == len(chicka_screamer_sp):
            clock.unschedule(chicka_screamer)
            chi_cadr = 0
            mode = "lose"
            music.play_once("static.wav")
            clock.schedule_interval(pomehi_cam_anim, 0.07)
            clock.schedule_unique(change_mode, 8)
            clock.unschedule(vent_anim)
            clock.unschedule(feddy_v_menu)
            clock.unschedule(timer)
            clock.unschedule(power_minus)
            clock.unschedule(BonnieAI)
            clock.unschedule(ChickaAI)
def anti_pomeh():
    global someone_walking
    someone_walking = False
    main_view.image = old_cam_image
def feddy_anim():
    global f, fred, freddy
    clock.unschedule(feddy_anim)
    fred = random.choice([0.04, 0.2])
    feddy.image = feddy_sp[f]
    f += 1
    if f == 2:
        f = 0
    if freddy == 0:
        music.play_once("music box.wav")
    freddy += 1
    if freddy == 125:
        clock.unschedule(feddy_anim)
        feddy.image = feddy_sp[0]
        music.play_once("running fast3.wav")
        clock.schedule(feddy_screamer, 3)
    else:
        clock.schedule(feddy_anim, fred)

def feddy_v_menu():
    global feddyV, Feddy
    clock.unschedule(feddy_v_menu)
    Feddy = random.choice([0.1, 0.6])
    feddyV = random.randint(0, len(menu_sp) - 1)
    menu_view.image = menu_sp[feddyV]
    clock.schedule(feddy_v_menu, Feddy)


def feddy_screamer():
    global freddy_fazbear, Freddy_attacking, fredbear, mode, usage, speed
    clock.unschedule(feddy_screamer)
    Freddy_attacking = True
    Freddy.image = fedyy_screamer_sp[freddy_fazbear]
    if freddy_fazbear == 0:
        music.play_once("xscream.wav")
    freddy_fazbear += 1
    fredbear += 0.001
    if freddy_fazbear == len(fedyy_screamer_sp):
            clock.unschedule(feddy_screamer)
            freddy_fazbear = 0
            mode = "lose"
            music.play_once("static.wav")
            clock.schedule_interval(pomehi_cam_anim, 0.07)
            clock.schedule_unique(change_mode, 8)
            clock.unschedule(vent_anim)
            clock.unschedule(timer)
            clock.unschedule(power_minus)
            clock.unschedule(BonnieAI)
            clock.unschedule(ChickaAI)
    else:
        clock.schedule(feddy_screamer, fredbear)
def hours_anim():
    animate(five, tween = "linear", duration = 3, y = five.y - 80)
    animate(six, tween = "linear", duration = 3, y = six.y - 80)
def winned():
    global mode, m, usage, lightL, lightR, o, speed, bonnie_attacking, chicka_attacking, bon_cadr, chi_cadr, bonnie_step, chicka_step, Animatronics_active, doorL, doorR, lightAllowed, powerleft, hour, Bonnie_here,  bonnie_seen, Chicka_here, chicka_seen, star_win
    if mode == "win":
        usage = 1
        clock.unschedule(vent_anim)
        clock.unschedule(timer)
        clock.unschedule(power_minus)
        clock.unschedule(BonnieAI)
        clock.unschedule(ChickaAI)
        clock.schedule_interval(pomehi_cam_anim, 0.07)
        o = 0
        speed = 10
        bonnie_attacking = False
        bon_cadr = 0
        chicka_attacking = False
        chi_cadr = 0
        usage = 1
        doorL = False
        doorLeft.y = -400
        doorR = False
        doorRight.y = -400
        Animatronics_active = False
        bonnie_step = 0
        chicka_step = 0
        lightAllowed = True
        powerleft = 100
        hour = 0
        Bonnie_here = False
        bonnie_seen = False
        Chicka_here = False
        chicka_seen = False
        buttons1.image = buttons1_sp[0]
        buttons2.image = buttons2_sp[0]
        if "eerieambiencelargesca_mv005.wav" in ambiences2:
            ambiences2.remove("eerieambiencelargesca_mv005.wav")
        star_win = True
        clock.schedule(feddy_v_menu, Feddy)
        mode = "menu"




clock.schedule(feddy_v_menu, Feddy)
clock.schedule_interval(pomehi_cam_anim, 0.07)
pgzrun.go()