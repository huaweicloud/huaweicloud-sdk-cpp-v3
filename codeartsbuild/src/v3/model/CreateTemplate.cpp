

#include "huaweicloud/codeartsbuild/v3/model/CreateTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CreateTemplate::CreateTemplate()
{
    stepsIsSet_ = false;
}

CreateTemplate::~CreateTemplate() = default;

void CreateTemplate::validate()
{
}

web::json::value CreateTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(stepsIsSet_) {
        val[utility::conversions::to_string_t("steps")] = ModelBase::toJson(steps_);
    }

    return val;
}
bool CreateTemplate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("steps"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateTemplateSteps> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSteps(refVal);
        }
    }
    return ok;
}


std::vector<CreateTemplateSteps>& CreateTemplate::getSteps()
{
    return steps_;
}

void CreateTemplate::setSteps(const std::vector<CreateTemplateSteps>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool CreateTemplate::stepsIsSet() const
{
    return stepsIsSet_;
}

void CreateTemplate::unsetsteps()
{
    stepsIsSet_ = false;
}

}
}
}
}
}


