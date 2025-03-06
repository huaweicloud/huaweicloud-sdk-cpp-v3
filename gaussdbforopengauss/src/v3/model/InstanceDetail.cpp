

#include "huaweicloud/gaussdbforopengauss/v3/model/InstanceDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




InstanceDetail::InstanceDetail()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    solution_ = "";
    solutionIsSet_ = false;
    hotfixVersions_ = "";
    hotfixVersionsIsSet_ = false;
}

InstanceDetail::~InstanceDetail() = default;

void InstanceDetail::validate()
{
}

web::json::value InstanceDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(solutionIsSet_) {
        val[utility::conversions::to_string_t("solution")] = ModelBase::toJson(solution_);
    }
    if(hotfixVersionsIsSet_) {
        val[utility::conversions::to_string_t("hotfix_versions")] = ModelBase::toJson(hotfixVersions_);
    }

    return val;
}
bool InstanceDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("solution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("solution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSolution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hotfix_versions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hotfix_versions"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotfixVersions(refVal);
        }
    }
    return ok;
}


std::string InstanceDetail::getInstanceId() const
{
    return instanceId_;
}

void InstanceDetail::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool InstanceDetail::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void InstanceDetail::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string InstanceDetail::getInstanceName() const
{
    return instanceName_;
}

void InstanceDetail::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool InstanceDetail::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void InstanceDetail::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string InstanceDetail::getStatus() const
{
    return status_;
}

void InstanceDetail::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool InstanceDetail::statusIsSet() const
{
    return statusIsSet_;
}

void InstanceDetail::unsetstatus()
{
    statusIsSet_ = false;
}

std::string InstanceDetail::getType() const
{
    return type_;
}

void InstanceDetail::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool InstanceDetail::typeIsSet() const
{
    return typeIsSet_;
}

void InstanceDetail::unsettype()
{
    typeIsSet_ = false;
}

std::string InstanceDetail::getSolution() const
{
    return solution_;
}

void InstanceDetail::setSolution(const std::string& value)
{
    solution_ = value;
    solutionIsSet_ = true;
}

bool InstanceDetail::solutionIsSet() const
{
    return solutionIsSet_;
}

void InstanceDetail::unsetsolution()
{
    solutionIsSet_ = false;
}

std::string InstanceDetail::getHotfixVersions() const
{
    return hotfixVersions_;
}

void InstanceDetail::setHotfixVersions(const std::string& value)
{
    hotfixVersions_ = value;
    hotfixVersionsIsSet_ = true;
}

bool InstanceDetail::hotfixVersionsIsSet() const
{
    return hotfixVersionsIsSet_;
}

void InstanceDetail::unsethotfixVersions()
{
    hotfixVersionsIsSet_ = false;
}

}
}
}
}
}


