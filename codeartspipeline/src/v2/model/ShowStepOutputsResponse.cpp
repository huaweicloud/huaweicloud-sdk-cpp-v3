

#include "huaweicloud/codeartspipeline/v2/model/ShowStepOutputsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowStepOutputsResponse::ShowStepOutputsResponse()
{
    stepOutputsIsSet_ = false;
    currentSystemTime_ = 0L;
    currentSystemTimeIsSet_ = false;
}

ShowStepOutputsResponse::~ShowStepOutputsResponse() = default;

void ShowStepOutputsResponse::validate()
{
}

web::json::value ShowStepOutputsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(stepOutputsIsSet_) {
        val[utility::conversions::to_string_t("step_outputs")] = ModelBase::toJson(stepOutputs_);
    }
    if(currentSystemTimeIsSet_) {
        val[utility::conversions::to_string_t("current_system_time")] = ModelBase::toJson(currentSystemTime_);
    }

    return val;
}
bool ShowStepOutputsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("step_outputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_outputs"));
        if(!fieldValue.is_null())
        {
            std::vector<OutputResp_step_outputs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepOutputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_system_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_system_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentSystemTime(refVal);
        }
    }
    return ok;
}


std::vector<OutputResp_step_outputs>& ShowStepOutputsResponse::getStepOutputs()
{
    return stepOutputs_;
}

void ShowStepOutputsResponse::setStepOutputs(const std::vector<OutputResp_step_outputs>& value)
{
    stepOutputs_ = value;
    stepOutputsIsSet_ = true;
}

bool ShowStepOutputsResponse::stepOutputsIsSet() const
{
    return stepOutputsIsSet_;
}

void ShowStepOutputsResponse::unsetstepOutputs()
{
    stepOutputsIsSet_ = false;
}

int64_t ShowStepOutputsResponse::getCurrentSystemTime() const
{
    return currentSystemTime_;
}

void ShowStepOutputsResponse::setCurrentSystemTime(int64_t value)
{
    currentSystemTime_ = value;
    currentSystemTimeIsSet_ = true;
}

bool ShowStepOutputsResponse::currentSystemTimeIsSet() const
{
    return currentSystemTimeIsSet_;
}

void ShowStepOutputsResponse::unsetcurrentSystemTime()
{
    currentSystemTimeIsSet_ = false;
}

}
}
}
}
}


