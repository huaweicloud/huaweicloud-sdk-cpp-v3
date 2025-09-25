

#include "huaweicloud/codeartspipeline/v2/model/StartPipelineParameters.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




StartPipelineParameters::StartPipelineParameters()
{
    buildParamsIsSet_ = false;
}

StartPipelineParameters::~StartPipelineParameters() = default;

void StartPipelineParameters::validate()
{
}

web::json::value StartPipelineParameters::toJson() const
{
    web::json::value val = web::json::value::object();

    if(buildParamsIsSet_) {
        val[utility::conversions::to_string_t("build_params")] = ModelBase::toJson(buildParams_);
    }

    return val;
}
bool StartPipelineParameters::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("build_params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_params"));
        if(!fieldValue.is_null())
        {
            std::vector<StartPipelineBuildParams> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildParams(refVal);
        }
    }
    return ok;
}


std::vector<StartPipelineBuildParams>& StartPipelineParameters::getBuildParams()
{
    return buildParams_;
}

void StartPipelineParameters::setBuildParams(const std::vector<StartPipelineBuildParams>& value)
{
    buildParams_ = value;
    buildParamsIsSet_ = true;
}

bool StartPipelineParameters::buildParamsIsSet() const
{
    return buildParamsIsSet_;
}

void StartPipelineParameters::unsetbuildParams()
{
    buildParamsIsSet_ = false;
}

}
}
}
}
}


