#include <iostream>
#include <cstring>
using namespace std;
class TollBooth
{
private:
    int T_wheel, F_wheel;
    double toll, tollVip;
    float payMoney, VipPaymoney;

public:
    TollBooth()
    {
        T_wheel = 0;
        F_wheel = 0;
        toll = 100;
        tollVip = 50;
    }
    void F_wheeler()
    {
        F_wheel++;
        payMoney = payMoney + toll;
    }
    void T_wheeler()
    {
        T_wheel++;
        VipPaymoney = VipPaymoney + tollVip;
    }
    void Collection()
    {
        int vehicle = F_wheel + T_wheel;
        int totalmoney = VipPaymoney + payMoney;
        cout << "\nTotal Number of Vehicles = " << vehicle << endl
             << endl;
        cout << "Number of Four Wheelers= " << F_wheel << endl;
        cout << "Money calculated by Four Wheelers = Rs." << payMoney << endl
             << endl;
        cout << "Number of Two Wheelers = " << T_wheel << endl;
        cout << "Money calculated by Two Wheelers = Rs." << VipPaymoney << endl
             << endl;
        cout << "Total money collected from Parking = " << totalmoney << endl;
    }
    void Exit()
    {
        cout << "You exited the program ";
        exit(0);
    }
    ~TollBooth()
    {
        cout << " ";
    }
};
class Clothes
{
private:
    int zar_fb, zar_cb, zar_fs, zar_cs;
    int pet_fb, pet_cb, pet_fs, pet_cs;
    int uspo_fb, uspo_cb, uspo_fs, uspo_cs;

public:
    long cost_zar_fs = 5500;
    long cost_zar_cs = 2500;
    long cost_zar_fb = 4500;
    long cost_zar_cb = 2000;
    long cost_pet_fs = 6000;
    long cost_pet_cs = 3000;
    long cost_pet_fb = 5000;
    long cost_pet_cb = 2500;
    long cost_uspo_fs = 6500;
    long cost_uspo_cs = 3000;
    long cost_uspo_fb = 5500;
    long cost_uspo_cb = 3000;
    long zar_sel, zar_by, pet_sel, pet_by, uspo_sel, uspo_by;
    void Zara_sell(int x, int y)
    {
        zar_fs = x;
        zar_cs = y;
        cout << "\nNumber of formal Zara wears sold = " << zar_fs << endl;
        cout << "Money earned by selling of formal Zara wears = Rs " << zar_fs * cost_zar_fs << endl;
        cout << "Number of casual Zara wears sold = " << zar_cs << endl;
        cout << "Money earned by selling of casual Zara wears = Rs " << zar_cs * cost_zar_cs << endl;
        cout << "\nTotal Zara wears sold in a day = " << zar_fs + zar_cs << endl;
        cout << "Total amount earned by selling Zara wears in a day = Rs " << (zar_fs * cost_zar_fs) + (zar_cs * cost_zar_cs) << endl;
        long zs = (zar_fs * cost_zar_fs) + (zar_cs * cost_zar_cs);
        zar_sel = zs;
    }
    void Zara_buy(int x, int y)
    {
        zar_fb = x;
        zar_cb = y;
        cout << "\nNumber of formal Zara wears ordered = " << zar_fb << endl;
        cout << "Money spent by ordering of formal Zara wears = Rs " << zar_fb * cost_zar_fb << endl;
        cout << "Number of casual Zara wears ordered = " << zar_cb << endl;
        cout << "Money spent by ordering of casual Zara wears = Rs " << zar_cb * cost_zar_cb << endl;
        cout << "\nTotal Zara wears ordered in a day = " << zar_fb + zar_cb << endl;
        cout << "Total amount spent by ordering Zara wears in a day = Rs " << (zar_fb * cost_zar_fb) + (zar_cb * cost_zar_cb) << endl;
        long zb = (zar_fb * cost_zar_fb) + (zar_cb * cost_zar_cb);
        zar_by = zb;
    }
    void Zara_prof()
    {
        long profz = zar_sel - zar_by;
        if (profz > 0)
            cout << "\nTotal profit in rupees = Rs " << profz;
        else
            cout << "\nTotal loss in rupees = Rs " << profz;
    }
    void Peter_Eng_sell(int x, int y)
    {
        pet_fs = x;
        pet_cs = y;
        cout << "\nNumber of formal PETER ENGLAND wears sold = " << pet_fs << endl;
        cout << "Money earned by selling of formal PETER ENGLAND wears = Rs " << pet_fs * cost_pet_fs << endl;
        cout << "Number of casual PETER ENGLAND wears sold = " << pet_cs << endl;
        cout << "Money earned by selling of casual PETER ENGLAND wears = Rs " << pet_cs * cost_pet_cs << endl;
        cout << "\nTotal PETER ENGLAND wears sold in a day = " << pet_fs + pet_cs << endl;
        cout << "Total amount earned by selling PETER ENGLAND wears in a day = Rs " << (pet_fs * cost_pet_fs) + (pet_cs * cost_pet_cs) << endl;
        long pets = (pet_fs * cost_pet_fs) + (pet_cs * cost_pet_cs);
        pet_sel = pets;
    }
    void Peter_Eng_buy(int x, int y)
    {
        pet_fb = x;
        pet_cb = y;
        cout << "\nNumber of formal PETER ENGLAND wears ordered = " << pet_fb << endl;
        cout << "Money spent by ordering of formal PETER ENGLAND wears = Rs " << pet_fb * cost_pet_fb << endl;
        cout << "Number of casual PETER ENGLAND wears ordered = " << pet_cb << endl;
        cout << "Money spent by ordering of casual PETER ENGLAND wears = Rs " << pet_cb * cost_pet_cb << endl;
        cout << "\nTotal PETER ENGLAND wears ordered in a day = " << pet_fb + pet_cb << endl;
        cout << "Total amount spent by ordering PETER ENGLAND wears in a day = Rs " << (pet_fb * cost_pet_fb) + (pet_cb * cost_pet_cb) << endl;
        long petb = (pet_fb * cost_pet_fb) + (pet_cb * cost_pet_cb);
        pet_by = petb;
    }
    void Pet_prof()
    {
        long profp = pet_sel - pet_by;
        if (profp > 0)
            cout << "\nTotal profit in rupees = Rs " << profp;
        else
            cout << "\nTotal loss in rupees = Rs " << profp;
    }
    void uspo_sell(int x, int y)
    {
        uspo_fs = x;
        uspo_cs = y;
        cout << "\nNumber of formal US POLO wears sold = " << uspo_fs << endl;
        cout << "Money earned by selling of formal US POLO wears = Rs " << uspo_fs * cost_uspo_fs << endl;
        cout << "Number of casual US POLO wears sold = " << uspo_cs << endl;
        cout << "Money earned by selling of casual US POLO wears = Rs " << uspo_cs * cost_uspo_cs << endl;
        cout << "\nTotal US POLO wears sold in a day = " << uspo_fs + uspo_cs << endl;
        cout << "Total amount earned by selling US POLO wears in a day = Rs " << (uspo_fs * cost_uspo_fs) + (uspo_cs * cost_uspo_cs) << endl;
        long uspos = (uspo_fs * cost_uspo_fs) + (uspo_cs * cost_uspo_cs);
        uspo_sel = uspos;
    }
    void uspo_buy(int x, int y)
    {
        uspo_fb = x;
        uspo_cb = y;
        cout << "\nNumber of formal US POLO wears ordered = " << uspo_fb << endl;
        cout << "Money spent by ordering of formal US POLO wears = Rs " << uspo_fb * cost_uspo_fb << endl;
        cout << "Number of casual US POLO wears ordered = " << uspo_cb << endl;
        cout << "Money spent by ordering of casual US POLO wears = Rs " << uspo_cb * cost_uspo_cb << endl;
        cout << "\nTotal US POLO wears ordered in a day = " << uspo_fb + uspo_cb << endl;
        cout << "Total amount spent by ordering US POLO wears in a day = Rs " << (uspo_fb * cost_uspo_fb) + (uspo_cb * cost_uspo_cb) << endl;
        long uspob = (uspo_fb * cost_uspo_fb) + (uspo_cb * cost_uspo_cb);
        uspo_by = uspob;
    }
    void uspo_prof()
    {
        long profus = uspo_sel - uspo_by;
        if (profus > 0)
            cout << "\nTotal profit in rupees = Rs " << profus;
        else
            cout << "\nTotal loss in rupees = Rs " << profus;
    }
};
class Games
{
    long cost_VR = 1500;
    long cost_Bowl = 1000;
    long cost_CS = 500;

public:
    void V_Reality(int x)
    {
        long t_cost_VR = x * cost_VR;
        cout << "\nMoney earned from VIRTUAL REALITY GAMING = " << t_cost_VR << endl;
        if (t_cost_VR > 15000)
            cout << "We are in Profit by " << t_cost_VR - 15000 << " amount." << endl;
    }
    void Bowling(int x)
    {
        long t_cost_Bowl = x * cost_Bowl;
        cout << "\nMoney earned from VIRTUAL REALITY GAMING = " << t_cost_Bowl << endl;
        if (t_cost_Bowl > 10000)
            cout << "We are in Profit " << t_cost_Bowl - 10000 << " amount. " << endl;
    }
    void Cricket(int x)
    {
        long t_cost_Cric = x * cost_Bowl;
        cout << "\nMoney earned from VIRTUAL REALITY GAMING = " << t_cost_Cric << endl;
        if (t_cost_Cric > 5000)
            cout << "We are in Profit " << t_cost_Cric - 5000 << " amount." << endl;
    }
};
class Sports
{
private:
    int nike_sw, nike_si, nike_sh, nike_swb, nike_sib, nike_shb;
    int add_sw, add_si, add_sh, add_swb, add_sib, add_shb;
    int puma_sw, puma_si, puma_sh, puma_swb, puma_sib, puma_shb;
    int musbl_nu, musbl_eq, musbl_acc, musbl_nub, musbl_eqb, musbl_accb;

public:
    long cost_nike_sw = 7000;
    long cost_nike_si = 4000;
    long cost_nike_sh = 80000;

    long cost_nike_swb = 5000;
    long cost_nike_sib = 3000;
    long cost_nike_shb = 5000;

    long cost_add_sw = 5000;
    long cost_add_si = 3000;
    long cost_add_sh = 50000;

    long cost_add_swb = 3500;
    long cost_add_sib = 2500;
    long cost_add_shb = 45000;

    long cost_puma_sw = 4500;
    long cost_puma_si = 3200;
    long cost_puma_sh = 55000;

    long cost_puma_swb = 3500;
    long cost_puma_sib = 2500;
    long cost_puma_shb = 42000;

    long cost_musbl_nu = 8000;
    long cost_musbl_eq = 90000;
    long cost_musbl_acc = 4500;

    long cost_musbl_nub = 6000;
    long cost_musbl_eqb = 85000;
    long cost_musbl_accb = 3500;

    long nike_sel, nike_by, add_sel, add_by, puma_sel, puma_by, musbl_sel, musbl_by;
    void nike_sell(int x, int y, int z)
    {
        nike_sw = x;
        nike_si = y;
        nike_sh = z;
        cout << "\nNumber of NIKE sports wear sold = " << nike_sw << endl;
        cout << "Money earned by selling NIKE sports wears = Rs " << nike_sw * cost_nike_sw << endl;
        cout << "Number of NIKE sports items sold = " << nike_si << endl;
        cout << "Money earned by selling of NIKE shoes = Rs " << nike_si * cost_nike_si << endl;
        cout << "Number of NIKE shoes sold = " << nike_sh << endl;
        cout << "Money earned by selling of NIKE shoes = Rs " << nike_sh * cost_nike_sh << endl;
        cout << "\nTotal NIKE stock sold in a day = " << nike_sw + nike_sw + nike_sh << endl;
        cout << "Total amount earned by selling NIKE stock in a day = Rs " << (nike_sw * cost_nike_sw) + (nike_si * cost_nike_si) + (nike_sh * cost_nike_sh) << endl;
        long nikes = (nike_sw * cost_nike_sw) + (nike_si * cost_nike_si) + (nike_sh * cost_nike_sh);
        nike_sel = nikes;
    }
    void nike_buy(int x, int y, int z)
    {
        nike_swb = x;
        nike_sib = y;
        nike_shb = z;
        cout << "\nNumber of NIKE sports wear ordered = " << nike_swb << endl;
        cout << "Money spent by ordering of NIKE sports wear = Rs " << nike_swb * cost_nike_swb << endl;
        cout << "Number of NIKE sports items ordered = " << nike_sib << endl;
        cout << "Money spent by ordering of NIKE sports items = Rs " << nike_sib * cost_nike_sib << endl;
        cout << "Number of NIKE shoes ordered = " << nike_shb << endl;
        cout << "Money spent by ordering of NIKE shoes = Rs " << nike_shb * cost_nike_shb << endl;

        cout << "\nTotal NIKE stock ordered in a day = " << nike_swb + nike_sib + nike_shb << endl;
        cout << "Total amount spent by ordering NIKE stock in a day = Rs " << (nike_swb * cost_nike_swb) + (nike_sib * cost_nike_sib) + (nike_shb * cost_nike_shb) << endl;
        long nikeb = (nike_swb * cost_nike_swb) + (nike_sib * cost_nike_sib) + (nike_shb * cost_nike_shb);
        nike_by = nikeb;
    }
    void nike_prof()
    {
        long profn = nike_sel - nike_by;
        if (profn > 0)
            cout << "\nTotal profit in rupees = Rs " << profn;
        else
            cout << "\nTotal loss in rupees = Rs " << profn;
    }

    void add_sell(int x, int y, int z)
    {
        add_sw = x;
        add_si = y;
        add_sh = z;
        cout << "\nNumber of ADDIDAS sports wear sold = " << add_sw << endl;
        cout << "Money earned by selling ADDIDAS sports wears = Rs " << add_sw * cost_add_sw << endl;
        cout << "Number of ADDIDAS sports items sold = " << add_si << endl;
        cout << "Money earned by selling of ADDIDAS shoes = Rs " << add_si * cost_add_si << endl;
        cout << "Number of ADDIDAS shoes sold = " << add_sh << endl;
        cout << "Money earned by selling of ADDIDAS shoes = Rs " << add_sh * cost_add_sh << endl;
        cout << "\nTotal ADDIDAS stock sold in a day = " << add_sw + add_sw + add_sh << endl;
        cout << "Total amount earned by selling ADDIDAS stock in a day = Rs " << (add_sw * cost_add_sw) + (add_si * cost_nike_si) << (nike_sh * cost_nike_sh) << endl;
        long adds = (add_sw * cost_add_sw) + (add_si * cost_add_si) + (add_sh * cost_add_sh);
        add_sel = adds;
    }
    void add_buy(int x, int y, int z)
    {
        add_swb = x;
        add_sib = y;
        add_shb = z;
        cout << "\nNumber of ADDIDAS sports wear ordered = " << add_swb << endl;
        cout << "Money spent by ordering of ADDIDAS sports wear = Rs " << add_swb * cost_add_swb << endl;
        cout << "Number of ADDIDAS sports items ordered = " << add_sib << endl;
        cout << "Money spent by ordering of ADDIDAS sports items = Rs " << add_sib * cost_add_sib << endl;
        cout << "Number of ADDIDAS shoes ordered = " << add_shb << endl;
        cout << "Money spent by ordering of ADDIDAS shoes = Rs " << add_shb * cost_add_shb << endl;

        cout << "\nTotal ADDIDAS stock ordered in a day = " << add_swb + add_sib + add_shb << endl;
        cout << "Total amount spent by ordering ADDIDAS stock in a day = Rs " << (add_swb * cost_add_swb) + (add_sib * cost_add_sib) + (add_shb * cost_add_shb) << endl;
        long addb = (add_swb * cost_add_swb) + (add_sib * cost_add_sib) + (add_shb * cost_add_shb);
        add_by = addb;
    }
    void add_prof()
    {
        long profa = add_sel - add_by;
        if (profa > 0)
            cout << "\nTotal profit in rupees = Rs " << profa;
        else
            cout << "\nTotal loss in rupees = Rs " << profa;
    }

    void puma_sell(int x, int y, int z)
    {
        puma_sw = x;
        puma_si = y;
        puma_sh = z;
        cout << "\nNumber of PUMA sports wear sold = " << puma_sw << endl;
        cout << "Money earned by selling PUMA sports wears = Rs " << puma_sw * cost_puma_sw << endl;
        cout << "Number of PUMA sports items sold = " << puma_si << endl;
        cout << "Money earned by selling of PUMA shoes = Rs " << puma_si * cost_puma_si << endl;
        cout << "Number of PUMA shoes sold = " << puma_sh << endl;
        cout << "Money earned by selling of PUMA shoes = Rs " << puma_sh * cost_puma_sh << endl;

        cout << "\nTotal PUMA stock sold in a day = " << puma_sw + puma_sw + puma_sh << endl;
        cout << "Total amount earned by selling PUMA stock in a day = Rs " << (puma_sw * cost_puma_sw) + (puma_si * cost_puma_si) + (puma_sh * cost_puma_sh) << endl;
        long pumas = (puma_sw * cost_puma_sw) + (puma_si * cost_puma_si) + (puma_sh * cost_puma_sh);
        puma_sel = pumas;
    }
    void puma_buy(int x, int y, int z)
    {
        puma_swb = x;
        puma_sib = y;
        puma_shb = z;
        cout << "\nNumber of PUMA sports wear ordered = " << puma_swb << endl;
        cout << "Money spent by ordering of PUMA sports wear = Rs " << puma_swb * cost_puma_swb << endl;
        cout << "Number of PUMA sports items ordered = " << puma_sib << endl;
        cout << "Money spent by ordering of PUMA sports items = Rs " << puma_sib * cost_puma_sib << endl;
        cout << "Number of PUMA shoes ordered = " << puma_shb << endl;
        cout << "Money spent by ordering of PUMA shoes = Rs " << puma_shb * cost_puma_shb << endl;

        cout << "\nTotal PUMA stock ordered in a day = " << puma_swb + puma_sib + puma_shb << endl;
        cout << "Total amount spent by ordering PUMA stock in a day = Rs " << (puma_swb * cost_puma_swb) + (puma_sib * cost_puma_sib) + (puma_shb * cost_puma_shb) << endl;
        long pumab = (puma_swb * cost_puma_swb) + (puma_sib * cost_puma_sib) + (puma_shb * cost_puma_shb);
        puma_by = pumab;
    }
    void puma_prof()
    {
        long profp = puma_sel - puma_by;
        if (profp > 0)
            cout << "\nTotal profit in rupees = Rs " << profp;
        else
            cout << "\nTotal loss in rupees = Rs " << profp;
    }

    void musbl_sell(int x, int y, int z)
    {
        musbl_nu = x;
        musbl_eq = y;
        musbl_acc = z;
        cout << "\nNumber of MUSCLE BLAZE Nutrition sold = " << musbl_nu << endl;
        cout << "Money earned by selling MUSCLE BLAZE Nutrition = Rs " << musbl_nu * cost_musbl_nu << endl;
        cout << "Number of MUSCLE BLAZE equipments sold = " << musbl_eq << endl;
        cout << "Money earned by selling of MUSCLE BLAZE equipments = Rs " << musbl_eq * cost_musbl_eq << endl;
        cout << "Number of MUSCLE BLAZE accessories sold = " << musbl_acc << endl;
        cout << "Money earned by selling of  MUSCLE BLAZE accessories = Rs " << musbl_acc * cost_musbl_acc << endl;
        cout << "\nTotal MUSCLE BLAZE stock sold in a day = " << musbl_nu + musbl_eq + musbl_acc << endl;
        long musbls = (musbl_nu * cost_musbl_nu) + (musbl_eq * cost_musbl_eq) + (musbl_acc * cost_musbl_acc);
        musbl_sel = musbls;
    }
    void musbl_buy(int x, int y, int z)
    {
        musbl_nub = x;
        musbl_eqb = y;
        musbl_accb = z;
        cout << "\nNumber of MUSCLE BLAZE Nutrition ordered = " << musbl_nub << endl;
        cout << "Money spent by ordering of MUSCLE BLAZE Nutrition = Rs " << musbl_nub * cost_musbl_nub << endl;
        cout << "Number of MUSCLE BLAZE equipments ordered = " << musbl_eqb << endl;
        cout << "Money spent by ordering of MUSCLE BLAZE equipments = Rs " << musbl_eqb * cost_musbl_eqb << endl;
        cout << "Number of MUSCLE BLAZE accessories ordered = " << musbl_accb << endl;
        cout << "Money spent by ordering of MUSCLE BLAZE accessories = Rs " << musbl_accb * cost_musbl_accb << endl;

        cout << "\nTotal MUSCLE BLAZE  stock ordered in a day = " << musbl_nub + musbl_eqb + musbl_accb << endl;
        cout << "Total amount spent by ordering MUSCLE BLAZE stock in a day = Rs " << (musbl_nub * cost_musbl_nub) + (musbl_eqb * cost_musbl_eqb) + (musbl_accb * cost_musbl_accb) << endl;
        long musbleb = (musbl_nub * cost_musbl_nub) + (musbl_eqb * cost_musbl_eqb) + (musbl_accb * cost_musbl_accb);
        musbl_by = musbleb;
    }
    void musbl_prof()
    {
        long profm = musbl_sel - musbl_by;
        if (profm > 0)
            cout << "\nTotal profit in rupees = Rs " << profm;
        else
            cout << "\nTotal loss in rupees = Rs " << profm;
    }
};
class Food
{
    long mcd_rev = 50000;
    long b_king_rev = 45000;
    long star_bks_rev = 40000;

public:
    void Mcd_revenue()
    {
        cout << "\nNumber of non-veg items sold in the whole day = 584";
        cout << "\n No. of veg items sold in the whole day = 789";
        cout << "\nRevenue generated by MCDonalds's = Rs." << mcd_rev << endl;
    }
    void Burg_king_revenue()
    {
        cout << "\nNumber of non-veg items sold in the whole day = 598";
        cout << "\nNumber of veg items sold in the whole day = 750";
        cout << "\nRevenue generated by Burger King = Rs." << b_king_rev << endl;
    }
    void Starbks_revenue()
    {
        cout << "\nNumber of items sold in a day = 976 " << endl;
        cout << "\nRevenue generated by Starbucks = Rs." << star_bks_rev << endl;
    }
};
class Movie
{
    int mor_ticks_sel, eve_ticks_sel, nt_ticks_sel, mor_ticks_canc, eve_ticks_canc, nt_ticks_canc;
    int mor_cost = 200;
    int eve_cost = 250;
    int nt_cost = 300;

public:
    void mor_tic_sel(int x)
    {
        mor_ticks_sel = x;
        cout << "Number of tickets sold in the morning show = " << mor_ticks_sel << endl;
        cout << "Total money earned by selling tickets of morning show = " << mor_ticks_sel * mor_cost << endl;
    }
    void mor_tic_canc(int x)
    {
        mor_ticks_canc = x;
        cout << "Number of tickets cancelled in the morning show = " << mor_ticks_canc << endl;
        cout << "Money deducted due to cancellation of morning show tickets = " << mor_ticks_canc * mor_cost << endl;
    }
    void net_mor_prof()
    {
        cout << "\nNet Profit = Rs. " << (mor_ticks_sel * mor_cost) - (mor_ticks_canc * mor_cost) << endl;
    }
    void eve_tic_sel(int x)
    {
        eve_ticks_sel = x;
        cout << "Number of tickets sold in the evening show = " << eve_ticks_sel << endl;
        cout << "\nTotal money earned by selling tickets of evening show = " << eve_ticks_sel * eve_cost << endl;
    }
    void eve_tic_canc(int x)
    {
        eve_ticks_canc = x;
        cout << "Number of tickets cancelled in the evening show = " << eve_ticks_canc << endl;
        cout << "\nMoney deducted due to cancellation of evening show tickets = " << eve_ticks_canc * eve_cost << endl;
    }
    void net_eve_prof()
    {
        cout << "\nNet Profit = Rs. " << (eve_ticks_sel * eve_cost) - (eve_ticks_canc * eve_cost) << endl;
    }
    void nt_tic_sel(int x)
    {
        nt_ticks_sel = x;
        cout << "Number of tickets sold in the night show = " << nt_ticks_sel << endl;
        cout << "\nTotal money earned by selling tickets of night show = " << nt_ticks_sel * nt_cost << endl;
    }
    void nt_tic_canc(int x)
    {
        nt_ticks_canc = x;
        cout << "Number of tickets cancelled in the night show = " << nt_ticks_canc << endl;
        cout << "\nMoney deducted due to cancellation of night show tickets = " << nt_ticks_canc * nt_cost << endl;
    }
    void net_nt_prof()
    {
        cout << "\nNet Profit = Rs. " << (nt_ticks_sel * nt_cost) - (nt_ticks_canc * nt_cost) << endl;
    }
    void total_prof()
    {
        long tot_prof = (mor_ticks_sel * mor_cost) - (mor_ticks_canc * mor_cost) + (eve_ticks_sel * eve_cost) - (eve_ticks_canc * eve_cost) + (nt_ticks_sel * nt_cost) - (nt_ticks_canc * nt_cost);
        cout << "\nTotal profit by the end of the day = Rs." << tot_prof << endl;
    }
};
int main()
{
    char username[20];
    char leftStr[] = "user";
    char rightStr[] = "user";
    int res = strcmp(leftStr, rightStr);
    int password, choice;
    char ar[] = {'u', 's', 'e', 'r'};
    char chm;
    int n;
    TollBooth toll;
    cout<<"\t\t\t\t\t!Welcome to the Binary Brains Mall!"<<endl;
    cout<<"\n Enter your login details."<<endl;
    cout << "Enter the USERNAME" << endl;
    cin >> username;
    cout << "Enter the PASSWORD" << endl;
    cin >> password;
    if (res == 0 && password == 1234)
    {
        while (choice != 7)
        {
            cout << "Enter 1 for parking revenue." << endl;
            cout << "Enter 2 for clothing management section." << endl;
            cout << "Enter 3 for gaming management section." << endl;
            cout << "Enter 4 for sports management section." << endl;
            cout << "Enter 5 for food management section." << endl;
            cout << "Enter 6 for movie management section." << endl;
            cin >> choice;
            if (choice == 1)
            {
                cout << "\t\t\t\t\t\tPARKING MANAGEMENT" << endl;
                cout << "\nEnter 1 : To ADD a FOUR-WHEELER." << endl;
                cout << "Enter 2 : To ADD a TWO-WHEELER." << endl;
                cout << "Enter 3 : For collection funds(FOR MANAGEMENT DEPARTMENT ONLY)*" << endl;
                cout << "Enter 4 : For exit ." << endl
                     << endl;
                for (; n != 4;)
                {
                    cout << "Enter your choice :" << endl;
                    cin >> n;
                    switch (n)
                    {
                        {
                        case 1:
                            toll.F_wheeler();
                            cout << "FOUR-WHEELER Parked successfully." << endl;
                            break;
                        case 2:
                            toll.T_wheeler();
                            cout << "TWO-WHEELER Parked successfully." << endl;
                            break;
                        case 3:
                            cout << "Enter the USERNAME" << endl;
                            cin >> username;
                            cout << "Enter the PASSWORD" << endl;
                            cin >> password;
                            if (res == 0 && password == 1234)
                            {
                                toll.Collection();
                            }
                            else
                            {
                                cout << "Invalid Password or Username" << endl;
                            }
                            break;
                        case 4:
                            cout << endl;
                            break;

                        default:
                            cout << "Please enter a valid choice." << endl;
                            break;
                        }
                    }
                }
            }

            else if (choice == 2)
            {

                Clothes cl;
                int fsz, csz, fbz, cbz, fsa, csa, fba, cba, fsn, csn, fbn, cbn;
                char ch, c;
                do
                {
                    cout << "\t\t\t\t\t\tCLOTHING MANAGEMENT" << endl;
                    cout << "\nPress 'Z' : for ZARA Brand." << endl;
                    cout << "Press 'P' : for PETER ENGLAND Brand." << endl;
                    cout << "Press 'U' : for US POLO Brand." << endl
                         << endl;
                    cin >> ch;
                    switch (ch)
                    {
                    case 'Z':
                    case 'z':
                        cout << "\nEnter the number of ZARA formals sold = ";
                        cin >> fsz;
                        cout << "Enter the number of ZARA casuals sold = ";
                        cin >> csz;
                        cl.Zara_sell(fsz, csz);
                        cout << "\nEnter the number of ZARA formals ordered = ";
                        cin >> fbz;
                        cout << "Enter the number of ZARA casuals ordered = ";
                        cin >> cbz;
                        cl.Zara_buy(fbz, cbz);
                        cl.Zara_prof();
                        break;
                    case 'P':
                    case 'p':
                        cout << "\nEnter the number of PETER ENGLAND formals sold = ";
                        cin >> fsa;
                        cout << "Enter the number of PETER ENGLAND casuals sold = ";
                        cin >> csa;
                        cl.Peter_Eng_sell(fsa, csa);
                        cout << "\nEnter the number of PETER ENGLAND formals ordered = ";
                        cin >> fba;
                        cout << "Enter the number of PETER ENGLAND casuals ordered = ";
                        cin >> cba;
                        cl.Peter_Eng_buy(fba, cba);
                        cl.Pet_prof();
                        break;
                    case 'U':
                    case 'u':
                        cout << "\nEnter the number of US POLO formals sold = ";
                        cin >> fsn;
                        cout << "Enter the number of US POLO casuals sold = ";
                        cin >> csn;
                        cl.uspo_sell(fsn, csn);
                        cout << "\nEnter the number of Nike formals ordered = ";
                        cin >> fbn;
                        cout << "Enter the number of Nike casuals ordered = ";
                        cin >> cbn;
                        cl.uspo_buy(fbn, cbn);
                        cl.uspo_prof();
                        break;
                    default:
                        cout << "Wrong Input ! ";
                        break;
                    }
                    cout << "\nDo you want to continue (y/n) ?";
                    cin >> c;
                } while (c == 'y' || c=='Y');
            }
            else if (choice == 3)
            {
                Games g;
                char ch, a;
                int m, n, c;
                do
                {
                    cout << "\t\t\t\t\t\tGAMING SECTION MANAGEMENT" << endl;
                    cout << "\nPress 'V' : for 'VIRTUAL REALITY GAME'." << endl;
                    cout << "Press 'B' : for 'BOWLING'." << endl;
                    cout << "Press 'C' : for 'CRICKET SHOTZ'." << endl
                         << endl;
                    cin >> ch;
                    switch (ch)
                    {
                    case 'V':
                    case 'v':
                        cout << "Enter the number of members played VIRTUAL REALITY GAME = ";
                        cin >> n;
                        g.V_Reality(n);
                        break;
                    case 'B':
                    case 'b':
                        cout << "Enter the number of members played BOWLING GAME = ";
                        cin >> m;
                        g.Bowling(m);
                        break;
                    case 'C':
                    case 'c':
                        cout << "Enter the number of members played CRICKET SHOTZ GAME = ";
                        cin >> c;
                        g.Cricket(c);
                        break;
                    default:
                        cout << "Wrong Input ! ";
                        break;
                    }
                    cout << "\nDo you want to continue (y/n) ?";
                    cin >> a;
                } while (a == 'y' || a == 'Y');
            }
            else if (choice == 4)
            {
                Sports sl;
                int nsw, nsi, ns, nswo, nsio, nso;
                int asw, asi, as, aswo, asio, aso;
                int psw, psi, ps, pswo, psio, pso;
                int msw, msi, ms, mswo, msio, mso;

                char ch, c;
                do
                {
                    cout << "\t\t\t\t\t\tSPORTS MANAGEMENT" << endl;
                    cout << "\nPress 'N' : for NIKE Enterprices." << endl;
                    cout << "Press 'A' : for ADDIDAS Enterprices." << endl;
                    cout << "Press 'P' : for PUMA Enterprices." << endl;
                    cout << "Press 'M' : for MUSCLEBlAZE Enterprices." << endl
                         << endl;
                    cin >> ch;
                    switch (ch)
                    {
                    case 'N':
                    case 'n':
                        cout << "\nEnter the number of NIKE sports wear sold = ";
                        cin >> nsw;
                        cout << "Enter the number of NIKE sports item sold = ";
                        cin >> nsi;
                        cout << "Enter the number of NIKE shoes sold = ";
                        cin >> ns;

                        sl.nike_sell(nsw, nsi, ns);
                        cout << "\nEnter the number of NIKE sports wear ordered = ";
                        cin >> nswo;
                        cout << "Enter the number of NIKE sports item ordered = ";
                        cin >> nsio;
                        cout << "Enter the number of NIKE shoes ordered = ";
                        cin >> nso;

                        sl.nike_buy(nswo, nsio, nso);
                        sl.nike_prof();
                        break;

                    case 'A':
                    case 'a':
                        cout << "\nEnter the number of ADDIDAS sports wear sold = ";
                        cin >> asw;
                        cout << "Enter the number of ADDIDAS sports item sold = ";
                        cin >> asi;
                        cout << "Enter the number of ADDIDAS shoes sold = ";
                        cin >> as;

                        sl.add_sell(asw, asi, as);
                        cout << "\nEnter the number of ADDIDAS sports wear ordered = ";
                        cin >> aswo;
                        cout << "Enter the number of ADDIDAS sports item ordered = ";
                        cin >> asio;
                        cout << "Enter the number of ADDIDAS shoes ordered = ";
                        cin >> aso;
                        sl.add_buy(aswo, asio, aso);
                        sl.add_prof();
                        break;

                    case 'P':
                    case 'p':
                        cout << "\nEnter the number of PUMA sports wear sold = ";
                        cin >> psw;
                        cout << "Enter the number of PUMA sports item sold = ";
                        cin >> psi;
                        cout << "Enter the number of PUMA shoes sold = ";
                        cin >> ps;
                        sl.puma_sell(psw, psi, ps);

                        cout << "\nEnter the number of PUMA sports wear ordered = ";
                        cin >> pswo;
                        cout << "Enter the number of PUMA sports item ordered = ";
                        cin >> psio;
                        cout << "Enter the number of PUMA shoes ordered = ";
                        cin >> pso;
                        sl.puma_buy(pswo, psio, pso);
                        sl.puma_prof();
                        break;

                    case 'M':
                    case 'm':
                        cout << "\nEnter the number of MUSCLE BLAZE Nutrition sold = ";
                        cin >> msw;
                        cout << "Enter the number of MUSCLE BLAZE equipments sold = ";
                        cin >> msi;
                        cout << "Enter the number of MUSCLE BLAZE accessories  sold = ";
                        cin >> ms;

                        sl.musbl_sell(msw, msi, ms);
                        cout << "\nEnter the number of MUSCLE BLAZE Nutrition ordered = ";
                        cin >> mswo;
                        cout << "Enter the number of MUSCLE BLAZE equipments ordered = ";
                        cin >> msio;
                        cout << "Enter the number of MUSCLE BLAZE accessories ordered = ";
                        cin >> mso;
                        sl.musbl_buy(mswo, msio, mso);
                        sl.musbl_prof();
                        break;
                    default:
                        cout << "Wrong Input ! ";
                        break;
                    }
                    cout << "\nDo you want to continue (y/n) ?";
                    cin >> c;
                } while (c == 'y' && 'Y');
            }
            else if (choice == 5)
            {
                Food F;
                char ch, c;
                do
                {
                    cout << "\t\t\t\t\t\tFOOD SECTION MANAGEMENT" << endl;
                    cout << "\nPress 'M' for McDonald's Revenue." << endl;
                    cout << "Press 'B' for Burger King's Revenue." << endl;
                    cout << "Press 'S' for StarBucks Revenue." << endl
                         << endl;
                    cin >> ch;
                    switch (ch)
                    {
                    case 'M':
                    case 'm':
                        F.Mcd_revenue();
                        break;
                    case 'B':
                    case 'b':
                        F.Burg_king_revenue();
                        break;
                    case 'S':
                    case 's':
                        F.Starbks_revenue();
                        break;
                    default:
                        cout << "Wrong Input !";
                        break;
                    }
                    cout << "Do you want to continue (y/n) ? ";
                    cin >> c;
                } while (c == 'y' || c == 'Y');
            }
            else if (choice == 6)
            {
                Movie M;
                char ch, c;
                int ms, es, ns, mc, nc, ec;
                do
                {
                    cout << "\t\t\t\t\t\tCINEMA SECTION MANAGEMENT" << endl
                         << endl;
                    cout << "\nPress 'M' for Morning show. " << endl;
                    cout << "Press 'E' for Evening show. " << endl;
                    cout << "Press 'N' for Night show. " << endl;
                    cout << "Press 'T' for full day profit.(Fill this after filling details of each section) " << endl
                         << endl;
                    cin >> ch;
                    switch (ch)
                    {
                    case 'M':
                    case 'm':
                        cout << "\nEnter the number of tickets sold in the morning show = ";
                        cin >> ms;
                        M.mor_tic_sel(ms);
                        cout << "\nEnter the number of tickets cancelled in the morning show = ";
                        cin >> mc;
                        M.mor_tic_canc(mc);
                        M.net_mor_prof();
                        break;
                    case 'E':
                    case 'e':
                        cout << "\nEnter the number of tickets sold in the evening show = ";
                        cin >> es;
                        M.eve_tic_sel(es);
                        cout << "\nEnter the number of tickets cancelled in the evening show = ";
                        cin >> ec;
                        M.eve_tic_canc(ec);
                        M.net_eve_prof();
                        break;
                    case 'N':
                    case 'n':
                        cout << "\nEnter the number of tickets sold in the night show = ";
                        cin >> ns;
                        M.nt_tic_sel(ns);
                        cout << "\nEnter the number of tickets cancelled in the night show = ";
                        cin >> nc;
                        M.nt_tic_canc(nc);
                        M.net_nt_prof();
                        break;
                    case 'T':
                    case 't':
                        M.total_prof();
                        break;

                    default:
                        cout << "Wrong choice!";
                        break;
                    }
                    cout << "Do you want to continue (y/n) ?";
                    cin >> c;

                } while (c == 'y' || c == 'Y');
            }
        }
    }
    else
    {
        cout << "Invalid Password or Username" << endl;
    }
}
