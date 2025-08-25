

#include "huaweicloud/cce/v3/model/NodeTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeTemplate::NodeTemplate()
{
    os_ = "";
    osIsSet_ = false;
    imageID_ = "";
    imageIDIsSet_ = false;
    loginIsSet_ = false;
    lifeCycleIsSet_ = false;
    runtimeConfigIsSet_ = false;
    extendParamIsSet_ = false;
}

NodeTemplate::~NodeTemplate() = default;

void NodeTemplate::validate()
{
}

web::json::value NodeTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(osIsSet_) {
        val[utility::conversions::to_string_t("os")] = ModelBase::toJson(os_);
    }
    if(imageIDIsSet_) {
        val[utility::conversions::to_string_t("imageID")] = ModelBase::toJson(imageID_);
    }
    if(loginIsSet_) {
        val[utility::conversions::to_string_t("login")] = ModelBase::toJson(login_);
    }
    if(lifeCycleIsSet_) {
        val[utility::conversions::to_string_t("lifeCycle")] = ModelBase::toJson(lifeCycle_);
    }
    if(runtimeConfigIsSet_) {
        val[utility::conversions::to_string_t("runtimeConfig")] = ModelBase::toJson(runtimeConfig_);
    }
    if(extendParamIsSet_) {
        val[utility::conversions::to_string_t("extendParam")] = ModelBase::toJson(extendParam_);
    }

    return val;
}
bool NodeTemplate::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("imageID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("imageID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("login"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("login"));
        if(!fieldValue.is_null())
        {
            NodeTemplate_login refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lifeCycle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lifeCycle"));
        if(!fieldValue.is_null())
        {
            NodeTemplate_lifeCycle refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLifeCycle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("runtimeConfig"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtimeConfig"));
        if(!fieldValue.is_null())
        {
            NodeTemplate_runtimeConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntimeConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extendParam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendParam"));
        if(!fieldValue.is_null())
        {
            NodeTemplate_extendParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendParam(refVal);
        }
    }
    return ok;
}


std::string NodeTemplate::getOs() const
{
    return os_;
}

void NodeTemplate::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool NodeTemplate::osIsSet() const
{
    return osIsSet_;
}

void NodeTemplate::unsetos()
{
    osIsSet_ = false;
}

std::string NodeTemplate::getImageID() const
{
    return imageID_;
}

void NodeTemplate::setImageID(const std::string& value)
{
    imageID_ = value;
    imageIDIsSet_ = true;
}

bool NodeTemplate::imageIDIsSet() const
{
    return imageIDIsSet_;
}

void NodeTemplate::unsetimageID()
{
    imageIDIsSet_ = false;
}

NodeTemplate_login NodeTemplate::getLogin() const
{
    return login_;
}

void NodeTemplate::setLogin(const NodeTemplate_login& value)
{
    login_ = value;
    loginIsSet_ = true;
}

bool NodeTemplate::loginIsSet() const
{
    return loginIsSet_;
}

void NodeTemplate::unsetlogin()
{
    loginIsSet_ = false;
}

NodeTemplate_lifeCycle NodeTemplate::getLifeCycle() const
{
    return lifeCycle_;
}

void NodeTemplate::setLifeCycle(const NodeTemplate_lifeCycle& value)
{
    lifeCycle_ = value;
    lifeCycleIsSet_ = true;
}

bool NodeTemplate::lifeCycleIsSet() const
{
    return lifeCycleIsSet_;
}

void NodeTemplate::unsetlifeCycle()
{
    lifeCycleIsSet_ = false;
}

NodeTemplate_runtimeConfig NodeTemplate::getRuntimeConfig() const
{
    return runtimeConfig_;
}

void NodeTemplate::setRuntimeConfig(const NodeTemplate_runtimeConfig& value)
{
    runtimeConfig_ = value;
    runtimeConfigIsSet_ = true;
}

bool NodeTemplate::runtimeConfigIsSet() const
{
    return runtimeConfigIsSet_;
}

void NodeTemplate::unsetruntimeConfig()
{
    runtimeConfigIsSet_ = false;
}

NodeTemplate_extendParam NodeTemplate::getExtendParam() const
{
    return extendParam_;
}

void NodeTemplate::setExtendParam(const NodeTemplate_extendParam& value)
{
    extendParam_ = value;
    extendParamIsSet_ = true;
}

bool NodeTemplate::extendParamIsSet() const
{
    return extendParamIsSet_;
}

void NodeTemplate::unsetextendParam()
{
    extendParamIsSet_ = false;
}

}
}
}
}
}


