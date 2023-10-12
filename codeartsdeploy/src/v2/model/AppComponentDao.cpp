

#include "huaweicloud/codeartsdeploy/v2/model/AppComponentDao.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




AppComponentDao::AppComponentDao()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    compId_ = "";
    compIdIsSet_ = false;
    compName_ = "";
    compNameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
}

AppComponentDao::~AppComponentDao() = default;

void AppComponentDao::validate()
{
}

web::json::value AppComponentDao::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(compIdIsSet_) {
        val[utility::conversions::to_string_t("comp_id")] = ModelBase::toJson(compId_);
    }
    if(compNameIsSet_) {
        val[utility::conversions::to_string_t("comp_name")] = ModelBase::toJson(compName_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }

    return val;
}
bool AppComponentDao::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comp_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comp_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comp_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comp_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    return ok;
}


std::string AppComponentDao::getTaskId() const
{
    return taskId_;
}

void AppComponentDao::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool AppComponentDao::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void AppComponentDao::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string AppComponentDao::getAppId() const
{
    return appId_;
}

void AppComponentDao::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool AppComponentDao::appIdIsSet() const
{
    return appIdIsSet_;
}

void AppComponentDao::unsetappId()
{
    appIdIsSet_ = false;
}

std::string AppComponentDao::getAppName() const
{
    return appName_;
}

void AppComponentDao::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool AppComponentDao::appNameIsSet() const
{
    return appNameIsSet_;
}

void AppComponentDao::unsetappName()
{
    appNameIsSet_ = false;
}

std::string AppComponentDao::getCompId() const
{
    return compId_;
}

void AppComponentDao::setCompId(const std::string& value)
{
    compId_ = value;
    compIdIsSet_ = true;
}

bool AppComponentDao::compIdIsSet() const
{
    return compIdIsSet_;
}

void AppComponentDao::unsetcompId()
{
    compIdIsSet_ = false;
}

std::string AppComponentDao::getCompName() const
{
    return compName_;
}

void AppComponentDao::setCompName(const std::string& value)
{
    compName_ = value;
    compNameIsSet_ = true;
}

bool AppComponentDao::compNameIsSet() const
{
    return compNameIsSet_;
}

void AppComponentDao::unsetcompName()
{
    compNameIsSet_ = false;
}

std::string AppComponentDao::getDomainId() const
{
    return domainId_;
}

void AppComponentDao::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool AppComponentDao::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void AppComponentDao::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string AppComponentDao::getRegion() const
{
    return region_;
}

void AppComponentDao::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool AppComponentDao::regionIsSet() const
{
    return regionIsSet_;
}

void AppComponentDao::unsetregion()
{
    regionIsSet_ = false;
}

std::string AppComponentDao::getState() const
{
    return state_;
}

void AppComponentDao::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool AppComponentDao::stateIsSet() const
{
    return stateIsSet_;
}

void AppComponentDao::unsetstate()
{
    stateIsSet_ = false;
}

}
}
}
}
}


