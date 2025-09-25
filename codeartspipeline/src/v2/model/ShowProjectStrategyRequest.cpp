

#include "huaweicloud/codeartspipeline/v2/model/ShowProjectStrategyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowProjectStrategyRequest::ShowProjectStrategyRequest()
{
    ruleSetId_ = "";
    ruleSetIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

ShowProjectStrategyRequest::~ShowProjectStrategyRequest() = default;

void ShowProjectStrategyRequest::validate()
{
}

web::json::value ShowProjectStrategyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleSetIdIsSet_) {
        val[utility::conversions::to_string_t("rule_set_id")] = ModelBase::toJson(ruleSetId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ShowProjectStrategyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rule_set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleSetId(refVal);
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
    return ok;
}


std::string ShowProjectStrategyRequest::getRuleSetId() const
{
    return ruleSetId_;
}

void ShowProjectStrategyRequest::setRuleSetId(const std::string& value)
{
    ruleSetId_ = value;
    ruleSetIdIsSet_ = true;
}

bool ShowProjectStrategyRequest::ruleSetIdIsSet() const
{
    return ruleSetIdIsSet_;
}

void ShowProjectStrategyRequest::unsetruleSetId()
{
    ruleSetIdIsSet_ = false;
}

std::string ShowProjectStrategyRequest::getProjectId() const
{
    return projectId_;
}

void ShowProjectStrategyRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowProjectStrategyRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowProjectStrategyRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


