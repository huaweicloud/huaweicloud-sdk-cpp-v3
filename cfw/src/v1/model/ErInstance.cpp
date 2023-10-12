

#include "huaweicloud/cfw/v1/model/ErInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ErInstance::ErInstance()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    enableIpv6_ = "";
    enableIpv6IsSet_ = false;
}

ErInstance::~ErInstance() = default;

void ErInstance::validate()
{
}

web::json::value ErInstance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(enableIpv6IsSet_) {
        val[utility::conversions::to_string_t("enable_ipv6")] = ModelBase::toJson(enableIpv6_);
    }

    return val;
}
bool ErInstance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_ipv6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_ipv6"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableIpv6(refVal);
        }
    }
    return ok;
}


std::string ErInstance::getId() const
{
    return id_;
}

void ErInstance::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ErInstance::idIsSet() const
{
    return idIsSet_;
}

void ErInstance::unsetid()
{
    idIsSet_ = false;
}

std::string ErInstance::getName() const
{
    return name_;
}

void ErInstance::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ErInstance::nameIsSet() const
{
    return nameIsSet_;
}

void ErInstance::unsetname()
{
    nameIsSet_ = false;
}

std::string ErInstance::getState() const
{
    return state_;
}

void ErInstance::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ErInstance::stateIsSet() const
{
    return stateIsSet_;
}

void ErInstance::unsetstate()
{
    stateIsSet_ = false;
}

std::string ErInstance::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ErInstance::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ErInstance::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ErInstance::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ErInstance::getProjectId() const
{
    return projectId_;
}

void ErInstance::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ErInstance::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ErInstance::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ErInstance::getEnableIpv6() const
{
    return enableIpv6_;
}

void ErInstance::setEnableIpv6(const std::string& value)
{
    enableIpv6_ = value;
    enableIpv6IsSet_ = true;
}

bool ErInstance::enableIpv6IsSet() const
{
    return enableIpv6IsSet_;
}

void ErInstance::unsetenableIpv6()
{
    enableIpv6IsSet_ = false;
}

}
}
}
}
}


