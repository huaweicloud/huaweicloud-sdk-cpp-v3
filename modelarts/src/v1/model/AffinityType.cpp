

#include "huaweicloud/modelarts/v1/model/AffinityType.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AffinityType::AffinityType()
{
    requiredDuringSchedulingIgnoredDuringExecutionIsSet_ = false;
    preferredDuringSchedulingIgnoredDuringExecutionIsSet_ = false;
}

AffinityType::~AffinityType() = default;

void AffinityType::validate()
{
}

web::json::value AffinityType::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requiredDuringSchedulingIgnoredDuringExecutionIsSet_) {
        val[utility::conversions::to_string_t("required_during_scheduling_ignored_during_execution")] = ModelBase::toJson(requiredDuringSchedulingIgnoredDuringExecution_);
    }
    if(preferredDuringSchedulingIgnoredDuringExecutionIsSet_) {
        val[utility::conversions::to_string_t("preferred_during_scheduling_ignored_during_execution")] = ModelBase::toJson(preferredDuringSchedulingIgnoredDuringExecution_);
    }

    return val;
}
bool AffinityType::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("required_during_scheduling_ignored_during_execution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("required_during_scheduling_ignored_during_execution"));
        if(!fieldValue.is_null())
        {
            std::vector<AffinityRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequiredDuringSchedulingIgnoredDuringExecution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("preferred_during_scheduling_ignored_during_execution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("preferred_during_scheduling_ignored_during_execution"));
        if(!fieldValue.is_null())
        {
            std::vector<AffinityRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreferredDuringSchedulingIgnoredDuringExecution(refVal);
        }
    }
    return ok;
}


std::vector<AffinityRule>& AffinityType::getRequiredDuringSchedulingIgnoredDuringExecution()
{
    return requiredDuringSchedulingIgnoredDuringExecution_;
}

void AffinityType::setRequiredDuringSchedulingIgnoredDuringExecution(const std::vector<AffinityRule>& value)
{
    requiredDuringSchedulingIgnoredDuringExecution_ = value;
    requiredDuringSchedulingIgnoredDuringExecutionIsSet_ = true;
}

bool AffinityType::requiredDuringSchedulingIgnoredDuringExecutionIsSet() const
{
    return requiredDuringSchedulingIgnoredDuringExecutionIsSet_;
}

void AffinityType::unsetrequiredDuringSchedulingIgnoredDuringExecution()
{
    requiredDuringSchedulingIgnoredDuringExecutionIsSet_ = false;
}

std::vector<AffinityRule>& AffinityType::getPreferredDuringSchedulingIgnoredDuringExecution()
{
    return preferredDuringSchedulingIgnoredDuringExecution_;
}

void AffinityType::setPreferredDuringSchedulingIgnoredDuringExecution(const std::vector<AffinityRule>& value)
{
    preferredDuringSchedulingIgnoredDuringExecution_ = value;
    preferredDuringSchedulingIgnoredDuringExecutionIsSet_ = true;
}

bool AffinityType::preferredDuringSchedulingIgnoredDuringExecutionIsSet() const
{
    return preferredDuringSchedulingIgnoredDuringExecutionIsSet_;
}

void AffinityType::unsetpreferredDuringSchedulingIgnoredDuringExecution()
{
    preferredDuringSchedulingIgnoredDuringExecutionIsSet_ = false;
}

}
}
}
}
}


