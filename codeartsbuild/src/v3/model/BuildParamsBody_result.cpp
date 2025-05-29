

#include "huaweicloud/codeartsbuild/v3/model/BuildParamsBody_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




BuildParamsBody_result::BuildParamsBody_result()
{
    buildParametersIsSet_ = false;
}

BuildParamsBody_result::~BuildParamsBody_result() = default;

void BuildParamsBody_result::validate()
{
}

web::json::value BuildParamsBody_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(buildParametersIsSet_) {
        val[utility::conversions::to_string_t("build_parameters")] = ModelBase::toJson(buildParameters_);
    }

    return val;
}
bool BuildParamsBody_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("build_parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<BuildParams> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildParameters(refVal);
        }
    }
    return ok;
}


std::vector<BuildParams>& BuildParamsBody_result::getBuildParameters()
{
    return buildParameters_;
}

void BuildParamsBody_result::setBuildParameters(const std::vector<BuildParams>& value)
{
    buildParameters_ = value;
    buildParametersIsSet_ = true;
}

bool BuildParamsBody_result::buildParametersIsSet() const
{
    return buildParametersIsSet_;
}

void BuildParamsBody_result::unsetbuildParameters()
{
    buildParametersIsSet_ = false;
}

}
}
}
}
}


