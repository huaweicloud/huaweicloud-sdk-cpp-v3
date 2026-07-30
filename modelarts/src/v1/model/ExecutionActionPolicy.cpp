

#include "huaweicloud/modelarts/v1/model/ExecutionActionPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ExecutionActionPolicy::ExecutionActionPolicy()
{
    rerunStepsIsSet_ = false;
}

ExecutionActionPolicy::~ExecutionActionPolicy() = default;

void ExecutionActionPolicy::validate()
{
}

web::json::value ExecutionActionPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rerunStepsIsSet_) {
        val[utility::conversions::to_string_t("rerun_steps")] = ModelBase::toJson(rerunSteps_);
    }

    return val;
}
bool ExecutionActionPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rerun_steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rerun_steps"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRerunSteps(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ExecutionActionPolicy::getRerunSteps()
{
    return rerunSteps_;
}

void ExecutionActionPolicy::setRerunSteps(const std::vector<std::string>& value)
{
    rerunSteps_ = value;
    rerunStepsIsSet_ = true;
}

bool ExecutionActionPolicy::rerunStepsIsSet() const
{
    return rerunStepsIsSet_;
}

void ExecutionActionPolicy::unsetrerunSteps()
{
    rerunStepsIsSet_ = false;
}

}
}
}
}
}


