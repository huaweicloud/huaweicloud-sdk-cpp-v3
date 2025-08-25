

#include "huaweicloud/cce/v3/model/MigrateNodesSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




MigrateNodesSpec::MigrateNodesSpec()
{
    os_ = "";
    osIsSet_ = false;
    extendParamIsSet_ = false;
    loginIsSet_ = false;
    runtimeIsSet_ = false;
    nodesIsSet_ = false;
}

MigrateNodesSpec::~MigrateNodesSpec() = default;

void MigrateNodesSpec::validate()
{
}

web::json::value MigrateNodesSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(osIsSet_) {
        val[utility::conversions::to_string_t("os")] = ModelBase::toJson(os_);
    }
    if(extendParamIsSet_) {
        val[utility::conversions::to_string_t("extendParam")] = ModelBase::toJson(extendParam_);
    }
    if(loginIsSet_) {
        val[utility::conversions::to_string_t("login")] = ModelBase::toJson(login_);
    }
    if(runtimeIsSet_) {
        val[utility::conversions::to_string_t("runtime")] = ModelBase::toJson(runtime_);
    }
    if(nodesIsSet_) {
        val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(nodes_);
    }

    return val;
}
bool MigrateNodesSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("os"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extendParam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendParam"));
        if(!fieldValue.is_null())
        {
            MigrateNodeExtendParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendParam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("login"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("login"));
        if(!fieldValue.is_null())
        {
            Login refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("runtime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtime"));
        if(!fieldValue.is_null())
        {
            Runtime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<NodeItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodes(refVal);
        }
    }
    return ok;
}


std::string MigrateNodesSpec::getOs() const
{
    return os_;
}

void MigrateNodesSpec::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool MigrateNodesSpec::osIsSet() const
{
    return osIsSet_;
}

void MigrateNodesSpec::unsetos()
{
    osIsSet_ = false;
}

MigrateNodeExtendParam MigrateNodesSpec::getExtendParam() const
{
    return extendParam_;
}

void MigrateNodesSpec::setExtendParam(const MigrateNodeExtendParam& value)
{
    extendParam_ = value;
    extendParamIsSet_ = true;
}

bool MigrateNodesSpec::extendParamIsSet() const
{
    return extendParamIsSet_;
}

void MigrateNodesSpec::unsetextendParam()
{
    extendParamIsSet_ = false;
}

Login MigrateNodesSpec::getLogin() const
{
    return login_;
}

void MigrateNodesSpec::setLogin(const Login& value)
{
    login_ = value;
    loginIsSet_ = true;
}

bool MigrateNodesSpec::loginIsSet() const
{
    return loginIsSet_;
}

void MigrateNodesSpec::unsetlogin()
{
    loginIsSet_ = false;
}

Runtime MigrateNodesSpec::getRuntime() const
{
    return runtime_;
}

void MigrateNodesSpec::setRuntime(const Runtime& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool MigrateNodesSpec::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void MigrateNodesSpec::unsetruntime()
{
    runtimeIsSet_ = false;
}

std::vector<NodeItem>& MigrateNodesSpec::getNodes()
{
    return nodes_;
}

void MigrateNodesSpec::setNodes(const std::vector<NodeItem>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool MigrateNodesSpec::nodesIsSet() const
{
    return nodesIsSet_;
}

void MigrateNodesSpec::unsetnodes()
{
    nodesIsSet_ = false;
}

}
}
}
}
}


