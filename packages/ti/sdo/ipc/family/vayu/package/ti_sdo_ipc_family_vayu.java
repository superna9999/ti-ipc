/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-y25
 */
import java.util.*;
import org.mozilla.javascript.*;
import xdc.services.intern.xsr.*;
import xdc.services.spec.Session;

public class ti_sdo_ipc_family_vayu
{
    static final String VERS = "@(#) xdc-y25\n";

    static final Proto.Elm $$T_Bool = Proto.Elm.newBool();
    static final Proto.Elm $$T_Num = Proto.Elm.newNum();
    static final Proto.Elm $$T_Str = Proto.Elm.newStr();
    static final Proto.Elm $$T_Obj = Proto.Elm.newObj();

    static final Proto.Fxn $$T_Met = new Proto.Fxn(null, null, 0, -1, false);
    static final Proto.Map $$T_Map = new Proto.Map($$T_Obj);
    static final Proto.Arr $$T_Vec = new Proto.Arr($$T_Obj);

    static final XScriptO $$DEFAULT = Value.DEFAULT;
    static final Object $$UNDEF = Undefined.instance;

    static final Proto.Obj $$Package = (Proto.Obj)Global.get("$$Package");
    static final Proto.Obj $$Module = (Proto.Obj)Global.get("$$Module");
    static final Proto.Obj $$Instance = (Proto.Obj)Global.get("$$Instance");
    static final Proto.Obj $$Params = (Proto.Obj)Global.get("$$Params");

    static final Object $$objFldGet = Global.get("$$objFldGet");
    static final Object $$objFldSet = Global.get("$$objFldSet");
    static final Object $$proxyGet = Global.get("$$proxyGet");
    static final Object $$proxySet = Global.get("$$proxySet");
    static final Object $$delegGet = Global.get("$$delegGet");
    static final Object $$delegSet = Global.get("$$delegSet");

    Scriptable xdcO;
    Session ses;
    Value.Obj om;

    boolean isROV;
    boolean isCFG;

    Proto.Obj pkgP;
    Value.Obj pkgV;

    ArrayList<Object> imports = new ArrayList<Object>();
    ArrayList<Object> loggables = new ArrayList<Object>();
    ArrayList<Object> mcfgs = new ArrayList<Object>();
    ArrayList<Object> icfgs = new ArrayList<Object>();
    ArrayList<String> inherits = new ArrayList<String>();
    ArrayList<Object> proxies = new ArrayList<Object>();
    ArrayList<Object> sizes = new ArrayList<Object>();
    ArrayList<Object> tdefs = new ArrayList<Object>();

    void $$IMPORTS()
    {
        Global.callFxn("loadPackage", xdcO, "ti.sdo.ipc");
        Global.callFxn("loadPackage", xdcO, "xdc");
        Global.callFxn("loadPackage", xdcO, "xdc.corevers");
        Global.callFxn("loadPackage", xdcO, "ti.sdo.utils");
        Global.callFxn("loadPackage", xdcO, "ti.sdo.ipc.interfaces");
        Global.callFxn("loadPackage", xdcO, "ti.sdo.ipc.notifyDrivers");
        Global.callFxn("loadPackage", xdcO, "xdc.rov");
    }

    void $$OBJECTS()
    {
        pkgP = (Proto.Obj)om.bind("ti.sdo.ipc.family.vayu.Package", new Proto.Obj());
        pkgV = (Value.Obj)om.bind("ti.sdo.ipc.family.vayu", new Value.Obj("ti.sdo.ipc.family.vayu", pkgP));
    }

    void NotifySetup$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sdo.ipc.family.vayu.NotifySetup.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sdo.ipc.family.vayu.NotifySetup", new Value.Obj("ti.sdo.ipc.family.vayu.NotifySetup", po));
        pkgV.bind("NotifySetup", vo);
        // decls 
    }

    void InterruptArp32$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sdo.ipc.family.vayu.InterruptArp32.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sdo.ipc.family.vayu.InterruptArp32", new Value.Obj("ti.sdo.ipc.family.vayu.InterruptArp32", po));
        pkgV.bind("InterruptArp32", vo);
        // decls 
        om.bind("ti.sdo.ipc.family.vayu.InterruptArp32.IntInfo", om.findStrict("ti.sdo.ipc.notifyDrivers.IInterrupt.IntInfo", "ti.sdo.ipc.family.vayu"));
        spo = (Proto.Obj)om.bind("ti.sdo.ipc.family.vayu.InterruptArp32$$FxnTable", new Proto.Obj());
        om.bind("ti.sdo.ipc.family.vayu.InterruptArp32.FxnTable", new Proto.Str(spo, false));
        spo = (Proto.Obj)om.bind("ti.sdo.ipc.family.vayu.InterruptArp32$$Module_State", new Proto.Obj());
        om.bind("ti.sdo.ipc.family.vayu.InterruptArp32.Module_State", new Proto.Str(spo, false));
    }

    void InterruptDsp$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sdo.ipc.family.vayu.InterruptDsp.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sdo.ipc.family.vayu.InterruptDsp", new Value.Obj("ti.sdo.ipc.family.vayu.InterruptDsp", po));
        pkgV.bind("InterruptDsp", vo);
        // decls 
        om.bind("ti.sdo.ipc.family.vayu.InterruptDsp.IntInfo", om.findStrict("ti.sdo.ipc.notifyDrivers.IInterrupt.IntInfo", "ti.sdo.ipc.family.vayu"));
        spo = (Proto.Obj)om.bind("ti.sdo.ipc.family.vayu.InterruptDsp$$InterruptDataView", new Proto.Obj());
        om.bind("ti.sdo.ipc.family.vayu.InterruptDsp.InterruptDataView", new Proto.Str(spo, false));
        spo = (Proto.Obj)om.bind("ti.sdo.ipc.family.vayu.InterruptDsp$$FxnTable", new Proto.Obj());
        om.bind("ti.sdo.ipc.family.vayu.InterruptDsp.FxnTable", new Proto.Str(spo, false));
        spo = (Proto.Obj)om.bind("ti.sdo.ipc.family.vayu.InterruptDsp$$Module_State", new Proto.Obj());
        om.bind("ti.sdo.ipc.family.vayu.InterruptDsp.Module_State", new Proto.Str(spo, false));
    }

    void InterruptBenelli$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sdo.ipc.family.vayu.InterruptBenelli.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sdo.ipc.family.vayu.InterruptBenelli", new Value.Obj("ti.sdo.ipc.family.vayu.InterruptBenelli", po));
        pkgV.bind("InterruptBenelli", vo);
        // decls 
        om.bind("ti.sdo.ipc.family.vayu.InterruptBenelli.IntInfo", om.findStrict("ti.sdo.ipc.notifyDrivers.IInterrupt.IntInfo", "ti.sdo.ipc.family.vayu"));
        spo = (Proto.Obj)om.bind("ti.sdo.ipc.family.vayu.InterruptBenelli$$FxnTable", new Proto.Obj());
        om.bind("ti.sdo.ipc.family.vayu.InterruptBenelli.FxnTable", new Proto.Str(spo, false));
        spo = (Proto.Obj)om.bind("ti.sdo.ipc.family.vayu.InterruptBenelli$$Module_State", new Proto.Obj());
        om.bind("ti.sdo.ipc.family.vayu.InterruptBenelli.Module_State", new Proto.Str(spo, false));
    }

    void NotifySetup$$CONSTS()
    {
        // module NotifySetup
        om.bind("ti.sdo.ipc.family.vayu.NotifySetup.attach", new Extern("ti_sdo_ipc_family_vayu_NotifySetup_attach__E", "xdc_Int(*)(xdc_UInt16,xdc_Ptr)", true, false));
        om.bind("ti.sdo.ipc.family.vayu.NotifySetup.sharedMemReq", new Extern("ti_sdo_ipc_family_vayu_NotifySetup_sharedMemReq__E", "xdc_SizeT(*)(xdc_UInt16,xdc_Ptr)", true, false));
        om.bind("ti.sdo.ipc.family.vayu.NotifySetup.numIntLines", new Extern("ti_sdo_ipc_family_vayu_NotifySetup_numIntLines__E", "xdc_UInt16(*)(xdc_UInt16)", true, false));
    }

    void InterruptArp32$$CONSTS()
    {
        // module InterruptArp32
        om.bind("ti.sdo.ipc.family.vayu.InterruptArp32.intEnable", new Extern("ti_sdo_ipc_family_vayu_InterruptArp32_intEnable__E", "xdc_Void(*)(xdc_UInt16,ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*)", true, false));
        om.bind("ti.sdo.ipc.family.vayu.InterruptArp32.intDisable", new Extern("ti_sdo_ipc_family_vayu_InterruptArp32_intDisable__E", "xdc_Void(*)(xdc_UInt16,ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*)", true, false));
        om.bind("ti.sdo.ipc.family.vayu.InterruptArp32.intRegister", new Extern("ti_sdo_ipc_family_vayu_InterruptArp32_intRegister__E", "xdc_Void(*)(xdc_UInt16,ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*,xdc_Fxn,xdc_UArg)", true, false));
        om.bind("ti.sdo.ipc.family.vayu.InterruptArp32.intUnregister", new Extern("ti_sdo_ipc_family_vayu_InterruptArp32_intUnregister__E", "xdc_Void(*)(xdc_UInt16,ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*)", true, false));
        om.bind("ti.sdo.ipc.family.vayu.InterruptArp32.intSend", new Extern("ti_sdo_ipc_family_vayu_InterruptArp32_intSend__E", "xdc_Void(*)(xdc_UInt16,ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*,xdc_UArg)", true, false));
        om.bind("ti.sdo.ipc.family.vayu.InterruptArp32.intPost", new Extern("ti_sdo_ipc_family_vayu_InterruptArp32_intPost__E", "xdc_Void(*)(xdc_UInt16,ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*,xdc_UArg)", true, false));
        om.bind("ti.sdo.ipc.family.vayu.InterruptArp32.intClear", new Extern("ti_sdo_ipc_family_vayu_InterruptArp32_intClear__E", "xdc_UInt(*)(xdc_UInt16,ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*)", true, false));
        om.bind("ti.sdo.ipc.family.vayu.InterruptArp32.intShmStub", new Extern("ti_sdo_ipc_family_vayu_InterruptArp32_intShmStub__I", "xdc_Void(*)(xdc_UArg)", true, false));
    }

    void InterruptDsp$$CONSTS()
    {
        // module InterruptDsp
        om.bind("ti.sdo.ipc.family.vayu.InterruptDsp.intEnable", new Extern("ti_sdo_ipc_family_vayu_InterruptDsp_intEnable__E", "xdc_Void(*)(xdc_UInt16,ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*)", true, false));
        om.bind("ti.sdo.ipc.family.vayu.InterruptDsp.intDisable", new Extern("ti_sdo_ipc_family_vayu_InterruptDsp_intDisable__E", "xdc_Void(*)(xdc_UInt16,ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*)", true, false));
        om.bind("ti.sdo.ipc.family.vayu.InterruptDsp.intRegister", new Extern("ti_sdo_ipc_family_vayu_InterruptDsp_intRegister__E", "xdc_Void(*)(xdc_UInt16,ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*,xdc_Fxn,xdc_UArg)", true, false));
        om.bind("ti.sdo.ipc.family.vayu.InterruptDsp.intUnregister", new Extern("ti_sdo_ipc_family_vayu_InterruptDsp_intUnregister__E", "xdc_Void(*)(xdc_UInt16,ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*)", true, false));
        om.bind("ti.sdo.ipc.family.vayu.InterruptDsp.intSend", new Extern("ti_sdo_ipc_family_vayu_InterruptDsp_intSend__E", "xdc_Void(*)(xdc_UInt16,ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*,xdc_UArg)", true, false));
        om.bind("ti.sdo.ipc.family.vayu.InterruptDsp.intPost", new Extern("ti_sdo_ipc_family_vayu_InterruptDsp_intPost__E", "xdc_Void(*)(xdc_UInt16,ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*,xdc_UArg)", true, false));
        om.bind("ti.sdo.ipc.family.vayu.InterruptDsp.intClear", new Extern("ti_sdo_ipc_family_vayu_InterruptDsp_intClear__E", "xdc_UInt(*)(xdc_UInt16,ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*)", true, false));
        om.bind("ti.sdo.ipc.family.vayu.InterruptDsp.intShmStub", new Extern("ti_sdo_ipc_family_vayu_InterruptDsp_intShmStub__I", "xdc_Void(*)(xdc_UArg)", true, false));
    }

    void InterruptBenelli$$CONSTS()
    {
        // module InterruptBenelli
        om.bind("ti.sdo.ipc.family.vayu.InterruptBenelli.intEnable", new Extern("ti_sdo_ipc_family_vayu_InterruptBenelli_intEnable__E", "xdc_Void(*)(xdc_UInt16,ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*)", true, false));
        om.bind("ti.sdo.ipc.family.vayu.InterruptBenelli.intDisable", new Extern("ti_sdo_ipc_family_vayu_InterruptBenelli_intDisable__E", "xdc_Void(*)(xdc_UInt16,ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*)", true, false));
        om.bind("ti.sdo.ipc.family.vayu.InterruptBenelli.intRegister", new Extern("ti_sdo_ipc_family_vayu_InterruptBenelli_intRegister__E", "xdc_Void(*)(xdc_UInt16,ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*,xdc_Fxn,xdc_UArg)", true, false));
        om.bind("ti.sdo.ipc.family.vayu.InterruptBenelli.intUnregister", new Extern("ti_sdo_ipc_family_vayu_InterruptBenelli_intUnregister__E", "xdc_Void(*)(xdc_UInt16,ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*)", true, false));
        om.bind("ti.sdo.ipc.family.vayu.InterruptBenelli.intSend", new Extern("ti_sdo_ipc_family_vayu_InterruptBenelli_intSend__E", "xdc_Void(*)(xdc_UInt16,ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*,xdc_UArg)", true, false));
        om.bind("ti.sdo.ipc.family.vayu.InterruptBenelli.intPost", new Extern("ti_sdo_ipc_family_vayu_InterruptBenelli_intPost__E", "xdc_Void(*)(xdc_UInt16,ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*,xdc_UArg)", true, false));
        om.bind("ti.sdo.ipc.family.vayu.InterruptBenelli.intClear", new Extern("ti_sdo_ipc_family_vayu_InterruptBenelli_intClear__E", "xdc_UInt(*)(xdc_UInt16,ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*)", true, false));
        om.bind("ti.sdo.ipc.family.vayu.InterruptBenelli.intShmDucatiStub", new Extern("ti_sdo_ipc_family_vayu_InterruptBenelli_intShmDucatiStub__I", "xdc_Void(*)(xdc_UArg)", true, false));
        om.bind("ti.sdo.ipc.family.vayu.InterruptBenelli.intShmMbxStub", new Extern("ti_sdo_ipc_family_vayu_InterruptBenelli_intShmMbxStub__I", "xdc_Void(*)(xdc_UArg)", true, false));
    }

    void NotifySetup$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

    }

    void InterruptArp32$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

    }

    void InterruptDsp$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

    }

    void InterruptBenelli$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

    }

    void NotifySetup$$FUNCTIONS()
    {
        Proto.Fxn fxn;

    }

    void InterruptArp32$$FUNCTIONS()
    {
        Proto.Fxn fxn;

    }

    void InterruptDsp$$FUNCTIONS()
    {
        Proto.Fxn fxn;

    }

    void InterruptBenelli$$FUNCTIONS()
    {
        Proto.Fxn fxn;

    }

    void NotifySetup$$SIZES()
    {
        Proto.Str so;
        Object fxn;

    }

    void InterruptArp32$$SIZES()
    {
        Proto.Str so;
        Object fxn;

        so = (Proto.Str)om.findStrict("ti.sdo.ipc.family.vayu.InterruptArp32.FxnTable", "ti.sdo.ipc.family.vayu");
        sizes.clear();
        sizes.add(Global.newArray("func", "UFxn"));
        sizes.add(Global.newArray("arg", "UIArg"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.ipc.family.vayu.InterruptArp32.FxnTable']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.ipc.family.vayu.InterruptArp32.FxnTable']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.ipc.family.vayu.InterruptArp32.FxnTable'], fld); }");
        so.bind("$offsetof", fxn);
        so = (Proto.Str)om.findStrict("ti.sdo.ipc.family.vayu.InterruptArp32.Module_State", "ti.sdo.ipc.family.vayu");
        sizes.clear();
        sizes.add(Global.newArray("fxnTable", "A8;Sti.sdo.ipc.family.vayu.InterruptArp32;FxnTable"));
        sizes.add(Global.newArray("numPlugged", "A10;UInt"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.ipc.family.vayu.InterruptArp32.Module_State']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.ipc.family.vayu.InterruptArp32.Module_State']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.ipc.family.vayu.InterruptArp32.Module_State'], fld); }");
        so.bind("$offsetof", fxn);
    }

    void InterruptDsp$$SIZES()
    {
        Proto.Str so;
        Object fxn;

        so = (Proto.Str)om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp.FxnTable", "ti.sdo.ipc.family.vayu");
        sizes.clear();
        sizes.add(Global.newArray("func", "UFxn"));
        sizes.add(Global.newArray("arg", "UIArg"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.ipc.family.vayu.InterruptDsp.FxnTable']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.ipc.family.vayu.InterruptDsp.FxnTable']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.ipc.family.vayu.InterruptDsp.FxnTable'], fld); }");
        so.bind("$offsetof", fxn);
        so = (Proto.Str)om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp.Module_State", "ti.sdo.ipc.family.vayu");
        sizes.clear();
        sizes.add(Global.newArray("fxnTable", "A8;Sti.sdo.ipc.family.vayu.InterruptDsp;FxnTable"));
        sizes.add(Global.newArray("numPlugged", "A2;UInt"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.ipc.family.vayu.InterruptDsp.Module_State']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.ipc.family.vayu.InterruptDsp.Module_State']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.ipc.family.vayu.InterruptDsp.Module_State'], fld); }");
        so.bind("$offsetof", fxn);
    }

    void InterruptBenelli$$SIZES()
    {
        Proto.Str so;
        Object fxn;

        so = (Proto.Str)om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli.FxnTable", "ti.sdo.ipc.family.vayu");
        sizes.clear();
        sizes.add(Global.newArray("func", "UFxn"));
        sizes.add(Global.newArray("arg", "UIArg"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.ipc.family.vayu.InterruptBenelli.FxnTable']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.ipc.family.vayu.InterruptBenelli.FxnTable']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.ipc.family.vayu.InterruptBenelli.FxnTable'], fld); }");
        so.bind("$offsetof", fxn);
        so = (Proto.Str)om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli.Module_State", "ti.sdo.ipc.family.vayu");
        sizes.clear();
        sizes.add(Global.newArray("fxnTable", "A8;Sti.sdo.ipc.family.vayu.InterruptBenelli;FxnTable"));
        sizes.add(Global.newArray("numPlugged", "A10;UInt"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.ipc.family.vayu.InterruptBenelli.Module_State']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.ipc.family.vayu.InterruptBenelli.Module_State']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.ipc.family.vayu.InterruptBenelli.Module_State'], fld); }");
        so.bind("$offsetof", fxn);
    }

    void NotifySetup$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sdo/ipc/family/vayu/NotifySetup.xs");
        om.bind("ti.sdo.ipc.family.vayu.NotifySetup$$capsule", cap);
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.vayu.NotifySetup.Module", "ti.sdo.ipc.family.vayu");
        po.init("ti.sdo.ipc.family.vayu.NotifySetup.Module", om.findStrict("ti.sdo.ipc.interfaces.INotifySetup.Module", "ti.sdo.ipc.family.vayu"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
            po.addFld("dspIntVectId0", Proto.Elm.newCNum("(xdc_UInt)"), 4L, "w");
            po.addFld("dspIntVectId1", Proto.Elm.newCNum("(xdc_UInt)"), 5L, "w");
            po.addFld("eveIntVectId_INTC0", Proto.Elm.newCNum("(xdc_UInt)"), 4L, "w");
            po.addFld("eveIntVectId_INTC1", Proto.Elm.newCNum("(xdc_UInt)"), 8L, "w");
            po.addFld("procIdTable", new Proto.Arr(Proto.Elm.newCNum("(xdc_UInt32)"), false, xdc.services.intern.xsr.Enum.intValue(8L)), $$DEFAULT, "w");
            po.addFld("eve0ProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("eve1ProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("eve2ProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("eve3ProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("dsp0ProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("dsp1ProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("videoProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("vpssProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
        }//isCFG
        fxn = Global.get(cap, "module$use");
        if (fxn != null) om.bind("ti.sdo.ipc.family.vayu.NotifySetup$$module$use", true);
        if (fxn != null) po.addFxn("module$use", $$T_Met, fxn);
        fxn = Global.get(cap, "module$meta$init");
        if (fxn != null) om.bind("ti.sdo.ipc.family.vayu.NotifySetup$$module$meta$init", true);
        if (fxn != null) po.addFxn("module$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$static$init");
        if (fxn != null) om.bind("ti.sdo.ipc.family.vayu.NotifySetup$$module$static$init", true);
        if (fxn != null) po.addFxn("module$static$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$validate");
        if (fxn != null) om.bind("ti.sdo.ipc.family.vayu.NotifySetup$$module$validate", true);
        if (fxn != null) po.addFxn("module$validate", $$T_Met, fxn);
    }

    void InterruptArp32$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sdo/ipc/family/vayu/InterruptArp32.xs");
        om.bind("ti.sdo.ipc.family.vayu.InterruptArp32$$capsule", cap);
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptArp32.Module", "ti.sdo.ipc.family.vayu");
        po.init("ti.sdo.ipc.family.vayu.InterruptArp32.Module", om.findStrict("ti.sdo.ipc.notifyDrivers.IInterrupt.Module", "ti.sdo.ipc.family.vayu"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
            po.addFld("mailboxBaseAddr", new Proto.Arr(Proto.Elm.newCNum("(xdc_UInt32)"), false, xdc.services.intern.xsr.Enum.intValue(10L)), $$DEFAULT, "w");
            po.addFld("mailboxTable", new Proto.Arr(Proto.Elm.newCNum("(xdc_UInt32)"), false, xdc.services.intern.xsr.Enum.intValue(64L)), $$DEFAULT, "w");
            po.addFld("eveInterruptTable", new Proto.Arr(Proto.Elm.newCNum("(xdc_UInt32)"), false, xdc.services.intern.xsr.Enum.intValue(8L)), $$DEFAULT, "w");
            po.addFld("procIdTable", new Proto.Arr(Proto.Elm.newCNum("(xdc_UInt32)"), false, xdc.services.intern.xsr.Enum.intValue(8L)), $$DEFAULT, "w");
            po.addFld("eve0ProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("eve1ProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("eve2ProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("eve3ProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("dsp0ProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("dsp1ProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("videoProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("vpssProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
        }//isCFG
        fxn = Global.get(cap, "module$use");
        if (fxn != null) om.bind("ti.sdo.ipc.family.vayu.InterruptArp32$$module$use", true);
        if (fxn != null) po.addFxn("module$use", $$T_Met, fxn);
        fxn = Global.get(cap, "module$meta$init");
        if (fxn != null) om.bind("ti.sdo.ipc.family.vayu.InterruptArp32$$module$meta$init", true);
        if (fxn != null) po.addFxn("module$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$static$init");
        if (fxn != null) om.bind("ti.sdo.ipc.family.vayu.InterruptArp32$$module$static$init", true);
        if (fxn != null) po.addFxn("module$static$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$validate");
        if (fxn != null) om.bind("ti.sdo.ipc.family.vayu.InterruptArp32$$module$validate", true);
        if (fxn != null) po.addFxn("module$validate", $$T_Met, fxn);
        // struct InterruptArp32.FxnTable
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptArp32$$FxnTable", "ti.sdo.ipc.family.vayu");
        po.init("ti.sdo.ipc.family.vayu.InterruptArp32.FxnTable", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("func", new Proto.Adr("xdc_Fxn", "Pf"), $$UNDEF, "w");
                po.addFld("arg", new Proto.Adr("xdc_UArg", "Pv"), $$UNDEF, "w");
        // struct InterruptArp32.Module_State
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptArp32$$Module_State", "ti.sdo.ipc.family.vayu");
        po.init("ti.sdo.ipc.family.vayu.InterruptArp32.Module_State", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("fxnTable", new Proto.Arr((Proto)om.findStrict("ti.sdo.ipc.family.vayu.InterruptArp32.FxnTable", "ti.sdo.ipc.family.vayu"), false, xdc.services.intern.xsr.Enum.intValue(8L)), $$DEFAULT, "w");
                po.addFld("numPlugged", new Proto.Arr(Proto.Elm.newCNum("(xdc_UInt)"), false, xdc.services.intern.xsr.Enum.intValue(10L)), $$DEFAULT, "w");
    }

    void InterruptDsp$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sdo/ipc/family/vayu/InterruptDsp.xs");
        om.bind("ti.sdo.ipc.family.vayu.InterruptDsp$$capsule", cap);
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp.Module", "ti.sdo.ipc.family.vayu");
        po.init("ti.sdo.ipc.family.vayu.InterruptDsp.Module", om.findStrict("ti.sdo.ipc.notifyDrivers.IInterrupt.Module", "ti.sdo.ipc.family.vayu"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
            po.addFld("rovViewInfo", (Proto)om.findStrict("xdc.rov.ViewInfo.Instance", "ti.sdo.ipc.family.vayu"), $$UNDEF, "wh");
            po.addFld("mailboxBaseAddr", new Proto.Arr(Proto.Elm.newCNum("(xdc_UInt32)"), false, xdc.services.intern.xsr.Enum.intValue(10L)), $$DEFAULT, "w");
            po.addFld("mailboxTable", new Proto.Arr(Proto.Elm.newCNum("(xdc_UInt32)"), false, xdc.services.intern.xsr.Enum.intValue(64L)), $$DEFAULT, "w");
            po.addFld("dspInterruptTable", new Proto.Arr(Proto.Elm.newCNum("(xdc_UInt32)"), false, xdc.services.intern.xsr.Enum.intValue(8L)), $$DEFAULT, "w");
            po.addFld("procIdTable", new Proto.Arr(Proto.Elm.newCNum("(xdc_UInt32)"), false, xdc.services.intern.xsr.Enum.intValue(8L)), $$DEFAULT, "w");
            po.addFld("eve0ProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("eve1ProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("eve2ProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("eve3ProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("dsp0ProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("dsp1ProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("videoProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("vpssProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
        }//isCFG
        fxn = Global.get(cap, "module$use");
        if (fxn != null) om.bind("ti.sdo.ipc.family.vayu.InterruptDsp$$module$use", true);
        if (fxn != null) po.addFxn("module$use", $$T_Met, fxn);
        fxn = Global.get(cap, "module$meta$init");
        if (fxn != null) om.bind("ti.sdo.ipc.family.vayu.InterruptDsp$$module$meta$init", true);
        if (fxn != null) po.addFxn("module$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$static$init");
        if (fxn != null) om.bind("ti.sdo.ipc.family.vayu.InterruptDsp$$module$static$init", true);
        if (fxn != null) po.addFxn("module$static$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$validate");
        if (fxn != null) om.bind("ti.sdo.ipc.family.vayu.InterruptDsp$$module$validate", true);
        if (fxn != null) po.addFxn("module$validate", $$T_Met, fxn);
        // struct InterruptDsp.InterruptDataView
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp$$InterruptDataView", "ti.sdo.ipc.family.vayu");
        po.init("ti.sdo.ipc.family.vayu.InterruptDsp.InterruptDataView", null);
                po.addFld("$hostonly", $$T_Num, 1, "r");
                po.addFld("remoteProcName", $$T_Str, $$UNDEF, "w");
                po.addFld("registered", $$T_Bool, $$UNDEF, "w");
                po.addFld("enabled", $$T_Bool, $$UNDEF, "w");
                po.addFld("intPending", $$T_Bool, $$UNDEF, "w");
                po.addFld("payload", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
        // struct InterruptDsp.FxnTable
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp$$FxnTable", "ti.sdo.ipc.family.vayu");
        po.init("ti.sdo.ipc.family.vayu.InterruptDsp.FxnTable", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("func", new Proto.Adr("xdc_Fxn", "Pf"), $$UNDEF, "w");
                po.addFld("arg", new Proto.Adr("xdc_UArg", "Pv"), $$UNDEF, "w");
        // struct InterruptDsp.Module_State
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp$$Module_State", "ti.sdo.ipc.family.vayu");
        po.init("ti.sdo.ipc.family.vayu.InterruptDsp.Module_State", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("fxnTable", new Proto.Arr((Proto)om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp.FxnTable", "ti.sdo.ipc.family.vayu"), false, xdc.services.intern.xsr.Enum.intValue(8L)), $$DEFAULT, "w");
                po.addFld("numPlugged", new Proto.Arr(Proto.Elm.newCNum("(xdc_UInt)"), false, xdc.services.intern.xsr.Enum.intValue(2L)), $$DEFAULT, "w");
    }

    void InterruptBenelli$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sdo/ipc/family/vayu/InterruptBenelli.xs");
        om.bind("ti.sdo.ipc.family.vayu.InterruptBenelli$$capsule", cap);
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli.Module", "ti.sdo.ipc.family.vayu");
        po.init("ti.sdo.ipc.family.vayu.InterruptBenelli.Module", om.findStrict("ti.sdo.ipc.notifyDrivers.IInterrupt.Module", "ti.sdo.ipc.family.vayu"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
            po.addFld("mailboxBaseAddr", new Proto.Arr(Proto.Elm.newCNum("(xdc_UInt32)"), false, xdc.services.intern.xsr.Enum.intValue(10L)), $$DEFAULT, "w");
            po.addFld("mailboxTable", new Proto.Arr(Proto.Elm.newCNum("(xdc_UInt32)"), false, xdc.services.intern.xsr.Enum.intValue(64L)), $$DEFAULT, "w");
            po.addFld("ducatiCtrlBaseAddr", Proto.Elm.newCNum("(xdc_UInt32)"), 0x40001000L, "w");
            po.addFld("benelliInterruptTable", new Proto.Arr(Proto.Elm.newCNum("(xdc_UInt32)"), false, xdc.services.intern.xsr.Enum.intValue(8L)), $$DEFAULT, "w");
            po.addFld("procIdTable", new Proto.Arr(Proto.Elm.newCNum("(xdc_UInt32)"), false, xdc.services.intern.xsr.Enum.intValue(8L)), $$DEFAULT, "w");
            po.addFld("eve0ProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("eve1ProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("eve2ProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("eve3ProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("dsp0ProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("dsp1ProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("videoProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
            po.addFld("vpssProcId", Proto.Elm.newCNum("(xdc_UInt)"), 0xFFFFL, "w");
        }//isCFG
        fxn = Global.get(cap, "module$use");
        if (fxn != null) om.bind("ti.sdo.ipc.family.vayu.InterruptBenelli$$module$use", true);
        if (fxn != null) po.addFxn("module$use", $$T_Met, fxn);
        fxn = Global.get(cap, "module$meta$init");
        if (fxn != null) om.bind("ti.sdo.ipc.family.vayu.InterruptBenelli$$module$meta$init", true);
        if (fxn != null) po.addFxn("module$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$static$init");
        if (fxn != null) om.bind("ti.sdo.ipc.family.vayu.InterruptBenelli$$module$static$init", true);
        if (fxn != null) po.addFxn("module$static$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$validate");
        if (fxn != null) om.bind("ti.sdo.ipc.family.vayu.InterruptBenelli$$module$validate", true);
        if (fxn != null) po.addFxn("module$validate", $$T_Met, fxn);
        // struct InterruptBenelli.FxnTable
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli$$FxnTable", "ti.sdo.ipc.family.vayu");
        po.init("ti.sdo.ipc.family.vayu.InterruptBenelli.FxnTable", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("func", new Proto.Adr("xdc_Fxn", "Pf"), $$UNDEF, "w");
                po.addFld("arg", new Proto.Adr("xdc_UArg", "Pv"), $$UNDEF, "w");
        // struct InterruptBenelli.Module_State
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli$$Module_State", "ti.sdo.ipc.family.vayu");
        po.init("ti.sdo.ipc.family.vayu.InterruptBenelli.Module_State", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("fxnTable", new Proto.Arr((Proto)om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli.FxnTable", "ti.sdo.ipc.family.vayu"), false, xdc.services.intern.xsr.Enum.intValue(8L)), $$DEFAULT, "w");
                po.addFld("numPlugged", new Proto.Arr(Proto.Elm.newCNum("(xdc_UInt)"), false, xdc.services.intern.xsr.Enum.intValue(10L)), $$DEFAULT, "w");
    }

    void NotifySetup$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.family.vayu.NotifySetup", "ti.sdo.ipc.family.vayu");
    }

    void InterruptArp32$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptArp32", "ti.sdo.ipc.family.vayu");
        vo.bind("FxnTable$fetchDesc", Global.newObject("type", "ti.sdo.ipc.family.vayu.InterruptArp32.FxnTable", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptArp32$$FxnTable", "ti.sdo.ipc.family.vayu");
        vo.bind("Module_State$fetchDesc", Global.newObject("type", "ti.sdo.ipc.family.vayu.InterruptArp32.Module_State", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptArp32$$Module_State", "ti.sdo.ipc.family.vayu");
    }

    void InterruptDsp$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp", "ti.sdo.ipc.family.vayu");
        vo.bind("FxnTable$fetchDesc", Global.newObject("type", "ti.sdo.ipc.family.vayu.InterruptDsp.FxnTable", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp$$FxnTable", "ti.sdo.ipc.family.vayu");
        vo.bind("Module_State$fetchDesc", Global.newObject("type", "ti.sdo.ipc.family.vayu.InterruptDsp.Module_State", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp$$Module_State", "ti.sdo.ipc.family.vayu");
    }

    void InterruptBenelli$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli", "ti.sdo.ipc.family.vayu");
        vo.bind("FxnTable$fetchDesc", Global.newObject("type", "ti.sdo.ipc.family.vayu.InterruptBenelli.FxnTable", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli$$FxnTable", "ti.sdo.ipc.family.vayu");
        vo.bind("Module_State$fetchDesc", Global.newObject("type", "ti.sdo.ipc.family.vayu.InterruptBenelli.Module_State", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli$$Module_State", "ti.sdo.ipc.family.vayu");
    }

    void $$SINGLETONS()
    {
        pkgP.init("ti.sdo.ipc.family.vayu.Package", (Proto.Obj)om.findStrict("xdc.IPackage.Module", "ti.sdo.ipc.family.vayu"));
        pkgP.bind("$capsule", $$UNDEF);
        pkgV.init2(pkgP, "ti.sdo.ipc.family.vayu", Value.DEFAULT, false);
        pkgV.bind("$name", "ti.sdo.ipc.family.vayu");
        pkgV.bind("$category", "Package");
        pkgV.bind("$$qn", "ti.sdo.ipc.family.vayu.");
        pkgV.bind("$vers", Global.newArray("1, 0, 0, 0"));
        Value.Map atmap = (Value.Map)pkgV.getv("$attr");
        atmap.seal("length");
        imports.clear();
        imports.add(Global.newArray("ti.sdo.ipc", Global.newArray()));
        pkgV.bind("$imports", imports);
        StringBuilder sb = new StringBuilder();
        sb.append("var pkg = xdc.om['ti.sdo.ipc.family.vayu'];\n");
        sb.append("if (pkg.$vers.length >= 3) {\n");
            sb.append("pkg.$vers.push(Packages.xdc.services.global.Vers.getDate(xdc.csd() + '/..'));\n");
        sb.append("}\n");
        sb.append("pkg.build.libraries = [\n");
            sb.append("'lib/debug/ti.sdo.ipc.family.vayu.ae66',\n");
            sb.append("'lib/debug/ti.sdo.ipc.family.vayu.ae66e',\n");
            sb.append("'lib/debug/ti.sdo.ipc.family.vayu.aem3',\n");
            sb.append("'lib/debug/ti.sdo.ipc.family.vayu.aearp32',\n");
        sb.append("];\n");
        sb.append("pkg.build.libDesc = [\n");
            sb.append("['lib/debug/ti.sdo.ipc.family.vayu.ae66', {target: 'ti.targets.elf.C66', suffix: 'e66'}],\n");
            sb.append("['lib/debug/ti.sdo.ipc.family.vayu.ae66e', {target: 'ti.targets.elf.C66_big_endian', suffix: 'e66e'}],\n");
            sb.append("['lib/debug/ti.sdo.ipc.family.vayu.aem3', {target: 'ti.targets.arm.elf.M3', suffix: 'em3'}],\n");
            sb.append("['lib/debug/ti.sdo.ipc.family.vayu.aearp32', {target: 'ti.targets.arp32.elf.ARP32', suffix: 'earp32'}],\n");
        sb.append("];\n");
        Global.eval(sb.toString());
    }

    void NotifySetup$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.family.vayu.NotifySetup", "ti.sdo.ipc.family.vayu");
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.vayu.NotifySetup.Module", "ti.sdo.ipc.family.vayu");
        vo.init2(po, "ti.sdo.ipc.family.vayu.NotifySetup", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", om.findStrict("ti.sdo.ipc.family.vayu.NotifySetup$$capsule", "ti.sdo.ipc.family.vayu"));
        vo.bind("$package", om.findStrict("ti.sdo.ipc.family.vayu", "ti.sdo.ipc.family.vayu"));
        tdefs.clear();
        proxies.clear();
        mcfgs.clear();
        icfgs.clear();
        inherits.clear();
        mcfgs.add("Module__diagsEnabled");
        icfgs.add("Module__diagsEnabled");
        mcfgs.add("Module__diagsIncluded");
        icfgs.add("Module__diagsIncluded");
        mcfgs.add("Module__diagsMask");
        icfgs.add("Module__diagsMask");
        mcfgs.add("Module__gateObj");
        icfgs.add("Module__gateObj");
        mcfgs.add("Module__gatePrms");
        icfgs.add("Module__gatePrms");
        mcfgs.add("Module__id");
        icfgs.add("Module__id");
        mcfgs.add("Module__loggerDefined");
        icfgs.add("Module__loggerDefined");
        mcfgs.add("Module__loggerObj");
        icfgs.add("Module__loggerObj");
        mcfgs.add("Module__loggerFxn0");
        icfgs.add("Module__loggerFxn0");
        mcfgs.add("Module__loggerFxn1");
        icfgs.add("Module__loggerFxn1");
        mcfgs.add("Module__loggerFxn2");
        icfgs.add("Module__loggerFxn2");
        mcfgs.add("Module__loggerFxn4");
        icfgs.add("Module__loggerFxn4");
        mcfgs.add("Module__loggerFxn8");
        icfgs.add("Module__loggerFxn8");
        mcfgs.add("Module__startupDoneFxn");
        icfgs.add("Module__startupDoneFxn");
        mcfgs.add("Object__count");
        icfgs.add("Object__count");
        mcfgs.add("Object__heap");
        icfgs.add("Object__heap");
        mcfgs.add("Object__sizeof");
        icfgs.add("Object__sizeof");
        mcfgs.add("Object__table");
        icfgs.add("Object__table");
        mcfgs.add("dspIntVectId0");
        mcfgs.add("dspIntVectId1");
        mcfgs.add("eveIntVectId_INTC0");
        mcfgs.add("eveIntVectId_INTC1");
        mcfgs.add("procIdTable");
        mcfgs.add("eve0ProcId");
        icfgs.add("eve0ProcId");
        mcfgs.add("eve1ProcId");
        icfgs.add("eve1ProcId");
        mcfgs.add("eve2ProcId");
        icfgs.add("eve2ProcId");
        mcfgs.add("eve3ProcId");
        icfgs.add("eve3ProcId");
        mcfgs.add("dsp0ProcId");
        icfgs.add("dsp0ProcId");
        mcfgs.add("dsp1ProcId");
        icfgs.add("dsp1ProcId");
        mcfgs.add("videoProcId");
        icfgs.add("videoProcId");
        mcfgs.add("vpssProcId");
        icfgs.add("vpssProcId");
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        vo.bind("$$mcfgs", Global.newArray(mcfgs.toArray()));
        vo.bind("$$icfgs", Global.newArray(icfgs.toArray()));
        inherits.add("ti.sdo.ipc.interfaces");
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sdo.ipc.family.vayu")).add(vo);
        vo.bind("$$instflag", 0);
        vo.bind("$$iobjflag", 0);
        vo.bind("$$sizeflag", 1);
        vo.bind("$$dlgflag", 0);
        vo.bind("$$iflag", 1);
        vo.bind("$$romcfgs", "|");
        vo.bind("$$nortsflag", 0);
        if (isCFG) {
            Proto.Str ps = (Proto.Str)vo.find("Module_State");
            if (ps != null) vo.bind("$object", ps.newInstance());
            vo.bind("$$meta_iobj", 1);
        }//isCFG
        vo.bind("attach", om.findStrict("ti.sdo.ipc.family.vayu.NotifySetup.attach", "ti.sdo.ipc.family.vayu"));
        vo.bind("sharedMemReq", om.findStrict("ti.sdo.ipc.family.vayu.NotifySetup.sharedMemReq", "ti.sdo.ipc.family.vayu"));
        vo.bind("numIntLines", om.findStrict("ti.sdo.ipc.family.vayu.NotifySetup.numIntLines", "ti.sdo.ipc.family.vayu"));
        vo.bind("$$fxntab", Global.newArray("ti_sdo_ipc_family_vayu_NotifySetup_Module__startupDone__E", "ti_sdo_ipc_family_vayu_NotifySetup_attach__E", "ti_sdo_ipc_family_vayu_NotifySetup_sharedMemReq__E", "ti_sdo_ipc_family_vayu_NotifySetup_numIntLines__E"));
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray());
        vo.bind("$$assertDescCfgs", Global.newArray());
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.seal("length");
        vo.bind("MODULE_STARTUP$", 0);
        vo.bind("PROXY$", 0);
        loggables.clear();
        vo.bind("$$loggables", loggables.toArray());
        pkgV.bind("NotifySetup", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("NotifySetup");
    }

    void InterruptArp32$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptArp32", "ti.sdo.ipc.family.vayu");
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptArp32.Module", "ti.sdo.ipc.family.vayu");
        vo.init2(po, "ti.sdo.ipc.family.vayu.InterruptArp32", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", om.findStrict("ti.sdo.ipc.family.vayu.InterruptArp32$$capsule", "ti.sdo.ipc.family.vayu"));
        vo.bind("$package", om.findStrict("ti.sdo.ipc.family.vayu", "ti.sdo.ipc.family.vayu"));
        tdefs.clear();
        proxies.clear();
        mcfgs.clear();
        icfgs.clear();
        inherits.clear();
        mcfgs.add("Module__diagsEnabled");
        icfgs.add("Module__diagsEnabled");
        mcfgs.add("Module__diagsIncluded");
        icfgs.add("Module__diagsIncluded");
        mcfgs.add("Module__diagsMask");
        icfgs.add("Module__diagsMask");
        mcfgs.add("Module__gateObj");
        icfgs.add("Module__gateObj");
        mcfgs.add("Module__gatePrms");
        icfgs.add("Module__gatePrms");
        mcfgs.add("Module__id");
        icfgs.add("Module__id");
        mcfgs.add("Module__loggerDefined");
        icfgs.add("Module__loggerDefined");
        mcfgs.add("Module__loggerObj");
        icfgs.add("Module__loggerObj");
        mcfgs.add("Module__loggerFxn0");
        icfgs.add("Module__loggerFxn0");
        mcfgs.add("Module__loggerFxn1");
        icfgs.add("Module__loggerFxn1");
        mcfgs.add("Module__loggerFxn2");
        icfgs.add("Module__loggerFxn2");
        mcfgs.add("Module__loggerFxn4");
        icfgs.add("Module__loggerFxn4");
        mcfgs.add("Module__loggerFxn8");
        icfgs.add("Module__loggerFxn8");
        mcfgs.add("Module__startupDoneFxn");
        icfgs.add("Module__startupDoneFxn");
        mcfgs.add("Object__count");
        icfgs.add("Object__count");
        mcfgs.add("Object__heap");
        icfgs.add("Object__heap");
        mcfgs.add("Object__sizeof");
        icfgs.add("Object__sizeof");
        mcfgs.add("Object__table");
        icfgs.add("Object__table");
        vo.bind("IntInfo", om.findStrict("ti.sdo.ipc.notifyDrivers.IInterrupt.IntInfo", "ti.sdo.ipc.family.vayu"));
        tdefs.add(om.findStrict("ti.sdo.ipc.notifyDrivers.IInterrupt.IntInfo", "ti.sdo.ipc.family.vayu"));
        mcfgs.add("mailboxBaseAddr");
        mcfgs.add("mailboxTable");
        mcfgs.add("eveInterruptTable");
        mcfgs.add("procIdTable");
        mcfgs.add("eve0ProcId");
        icfgs.add("eve0ProcId");
        mcfgs.add("eve1ProcId");
        icfgs.add("eve1ProcId");
        mcfgs.add("eve2ProcId");
        icfgs.add("eve2ProcId");
        mcfgs.add("eve3ProcId");
        icfgs.add("eve3ProcId");
        mcfgs.add("dsp0ProcId");
        icfgs.add("dsp0ProcId");
        mcfgs.add("dsp1ProcId");
        icfgs.add("dsp1ProcId");
        mcfgs.add("videoProcId");
        icfgs.add("videoProcId");
        mcfgs.add("vpssProcId");
        icfgs.add("vpssProcId");
        vo.bind("FxnTable", om.findStrict("ti.sdo.ipc.family.vayu.InterruptArp32.FxnTable", "ti.sdo.ipc.family.vayu"));
        tdefs.add(om.findStrict("ti.sdo.ipc.family.vayu.InterruptArp32.FxnTable", "ti.sdo.ipc.family.vayu"));
        vo.bind("Module_State", om.findStrict("ti.sdo.ipc.family.vayu.InterruptArp32.Module_State", "ti.sdo.ipc.family.vayu"));
        tdefs.add(om.findStrict("ti.sdo.ipc.family.vayu.InterruptArp32.Module_State", "ti.sdo.ipc.family.vayu"));
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        vo.bind("$$mcfgs", Global.newArray(mcfgs.toArray()));
        vo.bind("$$icfgs", Global.newArray(icfgs.toArray()));
        inherits.add("ti.sdo.ipc.notifyDrivers");
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sdo.ipc.family.vayu")).add(vo);
        vo.bind("$$instflag", 0);
        vo.bind("$$iobjflag", 0);
        vo.bind("$$sizeflag", 1);
        vo.bind("$$dlgflag", 0);
        vo.bind("$$iflag", 1);
        vo.bind("$$romcfgs", "|");
        vo.bind("$$nortsflag", 0);
        if (isCFG) {
            Proto.Str ps = (Proto.Str)vo.find("Module_State");
            if (ps != null) vo.bind("$object", ps.newInstance());
            vo.bind("$$meta_iobj", 1);
        }//isCFG
        vo.bind("intEnable", om.findStrict("ti.sdo.ipc.family.vayu.InterruptArp32.intEnable", "ti.sdo.ipc.family.vayu"));
        vo.bind("intDisable", om.findStrict("ti.sdo.ipc.family.vayu.InterruptArp32.intDisable", "ti.sdo.ipc.family.vayu"));
        vo.bind("intRegister", om.findStrict("ti.sdo.ipc.family.vayu.InterruptArp32.intRegister", "ti.sdo.ipc.family.vayu"));
        vo.bind("intUnregister", om.findStrict("ti.sdo.ipc.family.vayu.InterruptArp32.intUnregister", "ti.sdo.ipc.family.vayu"));
        vo.bind("intSend", om.findStrict("ti.sdo.ipc.family.vayu.InterruptArp32.intSend", "ti.sdo.ipc.family.vayu"));
        vo.bind("intPost", om.findStrict("ti.sdo.ipc.family.vayu.InterruptArp32.intPost", "ti.sdo.ipc.family.vayu"));
        vo.bind("intClear", om.findStrict("ti.sdo.ipc.family.vayu.InterruptArp32.intClear", "ti.sdo.ipc.family.vayu"));
        vo.bind("intShmStub", om.findStrict("ti.sdo.ipc.family.vayu.InterruptArp32.intShmStub", "ti.sdo.ipc.family.vayu"));
        vo.bind("$$fxntab", Global.newArray("ti_sdo_ipc_family_vayu_InterruptArp32_Module__startupDone__E", "ti_sdo_ipc_family_vayu_InterruptArp32_intEnable__E", "ti_sdo_ipc_family_vayu_InterruptArp32_intDisable__E", "ti_sdo_ipc_family_vayu_InterruptArp32_intRegister__E", "ti_sdo_ipc_family_vayu_InterruptArp32_intUnregister__E", "ti_sdo_ipc_family_vayu_InterruptArp32_intSend__E", "ti_sdo_ipc_family_vayu_InterruptArp32_intPost__E", "ti_sdo_ipc_family_vayu_InterruptArp32_intClear__E"));
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray());
        vo.bind("$$assertDescCfgs", Global.newArray());
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.seal("length");
        vo.bind("MODULE_STARTUP$", 0);
        vo.bind("PROXY$", 0);
        loggables.clear();
        vo.bind("$$loggables", loggables.toArray());
        pkgV.bind("InterruptArp32", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("InterruptArp32");
    }

    void InterruptDsp$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp", "ti.sdo.ipc.family.vayu");
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp.Module", "ti.sdo.ipc.family.vayu");
        vo.init2(po, "ti.sdo.ipc.family.vayu.InterruptDsp", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp$$capsule", "ti.sdo.ipc.family.vayu"));
        vo.bind("$package", om.findStrict("ti.sdo.ipc.family.vayu", "ti.sdo.ipc.family.vayu"));
        tdefs.clear();
        proxies.clear();
        mcfgs.clear();
        icfgs.clear();
        inherits.clear();
        mcfgs.add("Module__diagsEnabled");
        icfgs.add("Module__diagsEnabled");
        mcfgs.add("Module__diagsIncluded");
        icfgs.add("Module__diagsIncluded");
        mcfgs.add("Module__diagsMask");
        icfgs.add("Module__diagsMask");
        mcfgs.add("Module__gateObj");
        icfgs.add("Module__gateObj");
        mcfgs.add("Module__gatePrms");
        icfgs.add("Module__gatePrms");
        mcfgs.add("Module__id");
        icfgs.add("Module__id");
        mcfgs.add("Module__loggerDefined");
        icfgs.add("Module__loggerDefined");
        mcfgs.add("Module__loggerObj");
        icfgs.add("Module__loggerObj");
        mcfgs.add("Module__loggerFxn0");
        icfgs.add("Module__loggerFxn0");
        mcfgs.add("Module__loggerFxn1");
        icfgs.add("Module__loggerFxn1");
        mcfgs.add("Module__loggerFxn2");
        icfgs.add("Module__loggerFxn2");
        mcfgs.add("Module__loggerFxn4");
        icfgs.add("Module__loggerFxn4");
        mcfgs.add("Module__loggerFxn8");
        icfgs.add("Module__loggerFxn8");
        mcfgs.add("Module__startupDoneFxn");
        icfgs.add("Module__startupDoneFxn");
        mcfgs.add("Object__count");
        icfgs.add("Object__count");
        mcfgs.add("Object__heap");
        icfgs.add("Object__heap");
        mcfgs.add("Object__sizeof");
        icfgs.add("Object__sizeof");
        mcfgs.add("Object__table");
        icfgs.add("Object__table");
        vo.bind("IntInfo", om.findStrict("ti.sdo.ipc.notifyDrivers.IInterrupt.IntInfo", "ti.sdo.ipc.family.vayu"));
        tdefs.add(om.findStrict("ti.sdo.ipc.notifyDrivers.IInterrupt.IntInfo", "ti.sdo.ipc.family.vayu"));
        vo.bind("InterruptDataView", om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp.InterruptDataView", "ti.sdo.ipc.family.vayu"));
        tdefs.add(om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp.InterruptDataView", "ti.sdo.ipc.family.vayu"));
        mcfgs.add("mailboxBaseAddr");
        mcfgs.add("mailboxTable");
        mcfgs.add("dspInterruptTable");
        mcfgs.add("procIdTable");
        mcfgs.add("eve0ProcId");
        icfgs.add("eve0ProcId");
        mcfgs.add("eve1ProcId");
        icfgs.add("eve1ProcId");
        mcfgs.add("eve2ProcId");
        icfgs.add("eve2ProcId");
        mcfgs.add("eve3ProcId");
        icfgs.add("eve3ProcId");
        mcfgs.add("dsp0ProcId");
        icfgs.add("dsp0ProcId");
        mcfgs.add("dsp1ProcId");
        icfgs.add("dsp1ProcId");
        mcfgs.add("videoProcId");
        icfgs.add("videoProcId");
        mcfgs.add("vpssProcId");
        icfgs.add("vpssProcId");
        vo.bind("FxnTable", om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp.FxnTable", "ti.sdo.ipc.family.vayu"));
        tdefs.add(om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp.FxnTable", "ti.sdo.ipc.family.vayu"));
        vo.bind("Module_State", om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp.Module_State", "ti.sdo.ipc.family.vayu"));
        tdefs.add(om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp.Module_State", "ti.sdo.ipc.family.vayu"));
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        vo.bind("$$mcfgs", Global.newArray(mcfgs.toArray()));
        vo.bind("$$icfgs", Global.newArray(icfgs.toArray()));
        inherits.add("ti.sdo.ipc.notifyDrivers");
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sdo.ipc.family.vayu")).add(vo);
        vo.bind("$$instflag", 0);
        vo.bind("$$iobjflag", 0);
        vo.bind("$$sizeflag", 1);
        vo.bind("$$dlgflag", 0);
        vo.bind("$$iflag", 1);
        vo.bind("$$romcfgs", "|");
        vo.bind("$$nortsflag", 0);
        if (isCFG) {
            Proto.Str ps = (Proto.Str)vo.find("Module_State");
            if (ps != null) vo.bind("$object", ps.newInstance());
            vo.bind("$$meta_iobj", 1);
        }//isCFG
        vo.bind("intEnable", om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp.intEnable", "ti.sdo.ipc.family.vayu"));
        vo.bind("intDisable", om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp.intDisable", "ti.sdo.ipc.family.vayu"));
        vo.bind("intRegister", om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp.intRegister", "ti.sdo.ipc.family.vayu"));
        vo.bind("intUnregister", om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp.intUnregister", "ti.sdo.ipc.family.vayu"));
        vo.bind("intSend", om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp.intSend", "ti.sdo.ipc.family.vayu"));
        vo.bind("intPost", om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp.intPost", "ti.sdo.ipc.family.vayu"));
        vo.bind("intClear", om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp.intClear", "ti.sdo.ipc.family.vayu"));
        vo.bind("intShmStub", om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp.intShmStub", "ti.sdo.ipc.family.vayu"));
        vo.bind("$$fxntab", Global.newArray("ti_sdo_ipc_family_vayu_InterruptDsp_Module__startupDone__E", "ti_sdo_ipc_family_vayu_InterruptDsp_intEnable__E", "ti_sdo_ipc_family_vayu_InterruptDsp_intDisable__E", "ti_sdo_ipc_family_vayu_InterruptDsp_intRegister__E", "ti_sdo_ipc_family_vayu_InterruptDsp_intUnregister__E", "ti_sdo_ipc_family_vayu_InterruptDsp_intSend__E", "ti_sdo_ipc_family_vayu_InterruptDsp_intPost__E", "ti_sdo_ipc_family_vayu_InterruptDsp_intClear__E"));
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray());
        vo.bind("$$assertDescCfgs", Global.newArray());
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.seal("length");
        vo.bind("MODULE_STARTUP$", 0);
        vo.bind("PROXY$", 0);
        loggables.clear();
        vo.bind("$$loggables", loggables.toArray());
        pkgV.bind("InterruptDsp", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("InterruptDsp");
    }

    void InterruptBenelli$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli", "ti.sdo.ipc.family.vayu");
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli.Module", "ti.sdo.ipc.family.vayu");
        vo.init2(po, "ti.sdo.ipc.family.vayu.InterruptBenelli", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli$$capsule", "ti.sdo.ipc.family.vayu"));
        vo.bind("$package", om.findStrict("ti.sdo.ipc.family.vayu", "ti.sdo.ipc.family.vayu"));
        tdefs.clear();
        proxies.clear();
        mcfgs.clear();
        icfgs.clear();
        inherits.clear();
        mcfgs.add("Module__diagsEnabled");
        icfgs.add("Module__diagsEnabled");
        mcfgs.add("Module__diagsIncluded");
        icfgs.add("Module__diagsIncluded");
        mcfgs.add("Module__diagsMask");
        icfgs.add("Module__diagsMask");
        mcfgs.add("Module__gateObj");
        icfgs.add("Module__gateObj");
        mcfgs.add("Module__gatePrms");
        icfgs.add("Module__gatePrms");
        mcfgs.add("Module__id");
        icfgs.add("Module__id");
        mcfgs.add("Module__loggerDefined");
        icfgs.add("Module__loggerDefined");
        mcfgs.add("Module__loggerObj");
        icfgs.add("Module__loggerObj");
        mcfgs.add("Module__loggerFxn0");
        icfgs.add("Module__loggerFxn0");
        mcfgs.add("Module__loggerFxn1");
        icfgs.add("Module__loggerFxn1");
        mcfgs.add("Module__loggerFxn2");
        icfgs.add("Module__loggerFxn2");
        mcfgs.add("Module__loggerFxn4");
        icfgs.add("Module__loggerFxn4");
        mcfgs.add("Module__loggerFxn8");
        icfgs.add("Module__loggerFxn8");
        mcfgs.add("Module__startupDoneFxn");
        icfgs.add("Module__startupDoneFxn");
        mcfgs.add("Object__count");
        icfgs.add("Object__count");
        mcfgs.add("Object__heap");
        icfgs.add("Object__heap");
        mcfgs.add("Object__sizeof");
        icfgs.add("Object__sizeof");
        mcfgs.add("Object__table");
        icfgs.add("Object__table");
        vo.bind("IntInfo", om.findStrict("ti.sdo.ipc.notifyDrivers.IInterrupt.IntInfo", "ti.sdo.ipc.family.vayu"));
        tdefs.add(om.findStrict("ti.sdo.ipc.notifyDrivers.IInterrupt.IntInfo", "ti.sdo.ipc.family.vayu"));
        mcfgs.add("mailboxBaseAddr");
        mcfgs.add("mailboxTable");
        mcfgs.add("ducatiCtrlBaseAddr");
        mcfgs.add("benelliInterruptTable");
        mcfgs.add("procIdTable");
        mcfgs.add("eve0ProcId");
        icfgs.add("eve0ProcId");
        mcfgs.add("eve1ProcId");
        icfgs.add("eve1ProcId");
        mcfgs.add("eve2ProcId");
        icfgs.add("eve2ProcId");
        mcfgs.add("eve3ProcId");
        icfgs.add("eve3ProcId");
        mcfgs.add("dsp0ProcId");
        icfgs.add("dsp0ProcId");
        mcfgs.add("dsp1ProcId");
        icfgs.add("dsp1ProcId");
        mcfgs.add("videoProcId");
        icfgs.add("videoProcId");
        mcfgs.add("vpssProcId");
        icfgs.add("vpssProcId");
        vo.bind("FxnTable", om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli.FxnTable", "ti.sdo.ipc.family.vayu"));
        tdefs.add(om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli.FxnTable", "ti.sdo.ipc.family.vayu"));
        vo.bind("Module_State", om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli.Module_State", "ti.sdo.ipc.family.vayu"));
        tdefs.add(om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli.Module_State", "ti.sdo.ipc.family.vayu"));
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        vo.bind("$$mcfgs", Global.newArray(mcfgs.toArray()));
        vo.bind("$$icfgs", Global.newArray(icfgs.toArray()));
        inherits.add("ti.sdo.ipc.notifyDrivers");
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sdo.ipc.family.vayu")).add(vo);
        vo.bind("$$instflag", 0);
        vo.bind("$$iobjflag", 0);
        vo.bind("$$sizeflag", 1);
        vo.bind("$$dlgflag", 0);
        vo.bind("$$iflag", 1);
        vo.bind("$$romcfgs", "|");
        vo.bind("$$nortsflag", 0);
        if (isCFG) {
            Proto.Str ps = (Proto.Str)vo.find("Module_State");
            if (ps != null) vo.bind("$object", ps.newInstance());
            vo.bind("$$meta_iobj", 1);
        }//isCFG
        vo.bind("intEnable", om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli.intEnable", "ti.sdo.ipc.family.vayu"));
        vo.bind("intDisable", om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli.intDisable", "ti.sdo.ipc.family.vayu"));
        vo.bind("intRegister", om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli.intRegister", "ti.sdo.ipc.family.vayu"));
        vo.bind("intUnregister", om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli.intUnregister", "ti.sdo.ipc.family.vayu"));
        vo.bind("intSend", om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli.intSend", "ti.sdo.ipc.family.vayu"));
        vo.bind("intPost", om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli.intPost", "ti.sdo.ipc.family.vayu"));
        vo.bind("intClear", om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli.intClear", "ti.sdo.ipc.family.vayu"));
        vo.bind("intShmDucatiStub", om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli.intShmDucatiStub", "ti.sdo.ipc.family.vayu"));
        vo.bind("intShmMbxStub", om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli.intShmMbxStub", "ti.sdo.ipc.family.vayu"));
        vo.bind("$$fxntab", Global.newArray("ti_sdo_ipc_family_vayu_InterruptBenelli_Module__startupDone__E", "ti_sdo_ipc_family_vayu_InterruptBenelli_intEnable__E", "ti_sdo_ipc_family_vayu_InterruptBenelli_intDisable__E", "ti_sdo_ipc_family_vayu_InterruptBenelli_intRegister__E", "ti_sdo_ipc_family_vayu_InterruptBenelli_intUnregister__E", "ti_sdo_ipc_family_vayu_InterruptBenelli_intSend__E", "ti_sdo_ipc_family_vayu_InterruptBenelli_intPost__E", "ti_sdo_ipc_family_vayu_InterruptBenelli_intClear__E"));
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray());
        vo.bind("$$assertDescCfgs", Global.newArray());
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.seal("length");
        vo.bind("MODULE_STARTUP$", 0);
        vo.bind("PROXY$", 0);
        loggables.clear();
        vo.bind("$$loggables", loggables.toArray());
        pkgV.bind("InterruptBenelli", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("InterruptBenelli");
    }

    void $$INITIALIZATION()
    {
        Value.Obj vo;

        if (isCFG) {
        }//isCFG
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sdo.ipc.family.vayu.NotifySetup", "ti.sdo.ipc.family.vayu"));
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sdo.ipc.family.vayu.InterruptArp32", "ti.sdo.ipc.family.vayu"));
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp", "ti.sdo.ipc.family.vayu"));
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sdo.ipc.family.vayu.InterruptBenelli", "ti.sdo.ipc.family.vayu"));
        if (isCFG) {
            vo = (Value.Obj)om.findStrict("ti.sdo.ipc.family.vayu.InterruptDsp", "ti.sdo.ipc.family.vayu");
            Global.put(vo, "rovViewInfo", Global.callFxn("create", (Scriptable)om.find("xdc.rov.ViewInfo"), Global.newObject("viewMap", Global.newArray(new Object[]{Global.newArray(new Object[]{"IncomingInterrupts", Global.newObject("type", om.find("xdc.rov.ViewInfo.MODULE_DATA"), "viewInitFxn", "viewInitInterrupt", "structName", "InterruptDataView")})}))));
        }//isCFG
        Global.callFxn("init", pkgV);
        ((Value.Obj)om.getv("ti.sdo.ipc.family.vayu.NotifySetup")).bless();
        ((Value.Obj)om.getv("ti.sdo.ipc.family.vayu.InterruptArp32")).bless();
        ((Value.Obj)om.getv("ti.sdo.ipc.family.vayu.InterruptDsp")).bless();
        ((Value.Obj)om.getv("ti.sdo.ipc.family.vayu.InterruptBenelli")).bless();
        ((Value.Arr)om.findStrict("$packages", "ti.sdo.ipc.family.vayu")).add(pkgV);
    }

    public void exec( Scriptable xdcO, Session ses )
    {
        this.xdcO = xdcO;
        this.ses = ses;
        om = (Value.Obj)xdcO.get("om", null);

        Object o = om.geto("$name");
        String s = o instanceof String ? (String)o : null;
        isCFG = s != null && s.equals("cfg");
        isROV = s != null && s.equals("rov");

        $$IMPORTS();
        $$OBJECTS();
        NotifySetup$$OBJECTS();
        InterruptArp32$$OBJECTS();
        InterruptDsp$$OBJECTS();
        InterruptBenelli$$OBJECTS();
        NotifySetup$$CONSTS();
        InterruptArp32$$CONSTS();
        InterruptDsp$$CONSTS();
        InterruptBenelli$$CONSTS();
        NotifySetup$$CREATES();
        InterruptArp32$$CREATES();
        InterruptDsp$$CREATES();
        InterruptBenelli$$CREATES();
        NotifySetup$$FUNCTIONS();
        InterruptArp32$$FUNCTIONS();
        InterruptDsp$$FUNCTIONS();
        InterruptBenelli$$FUNCTIONS();
        NotifySetup$$SIZES();
        InterruptArp32$$SIZES();
        InterruptDsp$$SIZES();
        InterruptBenelli$$SIZES();
        NotifySetup$$TYPES();
        InterruptArp32$$TYPES();
        InterruptDsp$$TYPES();
        InterruptBenelli$$TYPES();
        if (isROV) {
            NotifySetup$$ROV();
            InterruptArp32$$ROV();
            InterruptDsp$$ROV();
            InterruptBenelli$$ROV();
        }//isROV
        $$SINGLETONS();
        NotifySetup$$SINGLETONS();
        InterruptArp32$$SINGLETONS();
        InterruptDsp$$SINGLETONS();
        InterruptBenelli$$SINGLETONS();
        $$INITIALIZATION();
    }
}
