

#include "huaweicloud/ecs/v2/model/ShowRecycleBinResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowRecycleBinResponse::ShowRecycleBinResponse()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    switch_ = "";
    switchIsSet_ = false;
    policyIsSet_ = false;
}

ShowRecycleBinResponse::~ShowRecycleBinResponse() = default;

void ShowRecycleBinResponse::validate()
{
}

web::json::value ShowRecycleBinResponse::toJson() const
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
bool ShowRecycleBinResponse::fromJson(const web::json::value& val)
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


std::string ShowRecycleBinResponse::getProjectId() const
{
    return projectId_;
}

void ShowRecycleBinResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowRecycleBinResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowRecycleBinResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowRecycleBinResponse::getSwitch() const
{
    return switch_;
}

void ShowRecycleBinResponse::setSwitch(const std::string& value)
{
    switch_ = value;
    switchIsSet_ = true;
}

bool ShowRecycleBinResponse::switchIsSet() const
{
    return switchIsSet_;
}

void ShowRecycleBinResponse::unsetswitch()
{
    switchIsSet_ = false;
}

RecycleBinPolicys ShowRecycleBinResponse::getPolicy() const
{
    return policy_;
}

void ShowRecycleBinResponse::setPolicy(const RecycleBinPolicys& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool ShowRecycleBinResponse::policyIsSet() const
{
    return policyIsSet_;
}

void ShowRecycleBinResponse::unsetpolicy()
{
    policyIsSet_ = false;
}

}
}
}
}
}


