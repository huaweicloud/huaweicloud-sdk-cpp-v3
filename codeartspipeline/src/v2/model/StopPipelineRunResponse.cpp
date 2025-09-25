

#include "huaweicloud/codeartspipeline/v2/model/StopPipelineRunResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




StopPipelineRunResponse::StopPipelineRunResponse()
{
    success_ = false;
    successIsSet_ = false;
}

StopPipelineRunResponse::~StopPipelineRunResponse() = default;

void StopPipelineRunResponse::validate()
{
}

web::json::value StopPipelineRunResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }

    return val;
}
bool StopPipelineRunResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    return ok;
}


bool StopPipelineRunResponse::isSuccess() const
{
    return success_;
}

void StopPipelineRunResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool StopPipelineRunResponse::successIsSet() const
{
    return successIsSet_;
}

void StopPipelineRunResponse::unsetsuccess()
{
    successIsSet_ = false;
}

}
}
}
}
}


