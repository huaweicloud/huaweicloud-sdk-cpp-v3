

#include "huaweicloud/codeartscheck/v2/model/DeleteRulesetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




DeleteRulesetRequest::DeleteRulesetRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    rulesetId_ = "";
    rulesetIdIsSet_ = false;
}

DeleteRulesetRequest::~DeleteRulesetRequest() = default;

void DeleteRulesetRequest::validate()
{
}

web::json::value DeleteRulesetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(rulesetIdIsSet_) {
        val[utility::conversions::to_string_t("ruleset_id")] = ModelBase::toJson(rulesetId_);
    }

    return val;
}
bool DeleteRulesetRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ruleset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ruleset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRulesetId(refVal);
        }
    }
    return ok;
}


std::string DeleteRulesetRequest::getProjectId() const
{
    return projectId_;
}

void DeleteRulesetRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteRulesetRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteRulesetRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DeleteRulesetRequest::getRulesetId() const
{
    return rulesetId_;
}

void DeleteRulesetRequest::setRulesetId(const std::string& value)
{
    rulesetId_ = value;
    rulesetIdIsSet_ = true;
}

bool DeleteRulesetRequest::rulesetIdIsSet() const
{
    return rulesetIdIsSet_;
}

void DeleteRulesetRequest::unsetrulesetId()
{
    rulesetIdIsSet_ = false;
}

}
}
}
}
}


