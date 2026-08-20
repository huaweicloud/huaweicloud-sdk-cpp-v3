

#include "huaweicloud/codeartspipeline/v2/model/ExtensionExecution.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ExtensionExecution::ExtensionExecution()
{
    stepsIsSet_ = false;
}

ExtensionExecution::~ExtensionExecution() = default;

void ExtensionExecution::validate()
{
}

web::json::value ExtensionExecution::toJson() const
{
    web::json::value val = web::json::value::object();

    if(stepsIsSet_) {
        val[utility::conversions::to_string_t("steps")] = ModelBase::toJson(steps_);
    }

    return val;
}
bool ExtensionExecution::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("steps"));
        if(!fieldValue.is_null())
        {
            std::vector<ExtensionExecutionStep> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSteps(refVal);
        }
    }
    return ok;
}


std::vector<ExtensionExecutionStep>& ExtensionExecution::getSteps()
{
    return steps_;
}

void ExtensionExecution::setSteps(const std::vector<ExtensionExecutionStep>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool ExtensionExecution::stepsIsSet() const
{
    return stepsIsSet_;
}

void ExtensionExecution::unsetsteps()
{
    stepsIsSet_ = false;
}

}
}
}
}
}


