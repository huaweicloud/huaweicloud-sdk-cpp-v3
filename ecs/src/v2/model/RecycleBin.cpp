

#include "huaweicloud/ecs/v2/model/RecycleBin.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




RecycleBin::RecycleBin()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    switch_ = "";
    switchIsSet_ = false;
    policyIsSet_ = false;
}

RecycleBin::~RecycleBin() = default;

void RecycleBin::validate()
{
}

web::json::value RecycleBin::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(switchIsSet_) {
        val[utility::conversions::to_string_t("switch")] = ModelBase::toJson(switch_);
    }
    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }

    return val;
}
bool RecycleBin::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            RecycleBinPolicys refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    return ok;
}


std::string RecycleBin::getProjectId() const
{
    return projectId_;
}

void RecycleBin::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RecycleBin::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RecycleBin::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string RecycleBin::getSwitch() const
{
    return switch_;
}

void RecycleBin::setSwitch(const std::string& value)
{
    switch_ = value;
    switchIsSet_ = true;
}

bool RecycleBin::switchIsSet() const
{
    return switchIsSet_;
}

void RecycleBin::unsetswitch()
{
    switchIsSet_ = false;
}

RecycleBinPolicys RecycleBin::getPolicy() const
{
    return policy_;
}

void RecycleBin::setPolicy(const RecycleBinPolicys& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool RecycleBin::policyIsSet() const
{
    return policyIsSet_;
}

void RecycleBin::unsetpolicy()
{
    policyIsSet_ = false;
}

}
}
}
}
}


