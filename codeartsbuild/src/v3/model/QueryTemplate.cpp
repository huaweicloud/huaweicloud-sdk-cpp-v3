

#include "huaweicloud/codeartsbuild/v3/model/QueryTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




QueryTemplate::QueryTemplate()
{
    stepsIsSet_ = false;
}

QueryTemplate::~QueryTemplate() = default;

void QueryTemplate::validate()
{
}

web::json::value QueryTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(stepsIsSet_) {
        val[utility::conversions::to_string_t("steps")] = ModelBase::toJson(steps_);
    }

    return val;
}
bool QueryTemplate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("steps"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateBuildJobSteps> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSteps(refVal);
        }
    }
    return ok;
}


std::vector<CreateBuildJobSteps>& QueryTemplate::getSteps()
{
    return steps_;
}

void QueryTemplate::setSteps(const std::vector<CreateBuildJobSteps>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool QueryTemplate::stepsIsSet() const
{
    return stepsIsSet_;
}

void QueryTemplate::unsetsteps()
{
    stepsIsSet_ = false;
}

}
}
}
}
}


