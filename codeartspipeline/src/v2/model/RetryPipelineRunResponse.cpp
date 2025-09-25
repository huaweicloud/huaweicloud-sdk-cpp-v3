

#include "huaweicloud/codeartspipeline/v2/model/RetryPipelineRunResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RetryPipelineRunResponse::RetryPipelineRunResponse()
{
    success_ = false;
    successIsSet_ = false;
}

RetryPipelineRunResponse::~RetryPipelineRunResponse() = default;

void RetryPipelineRunResponse::validate()
{
}

web::json::value RetryPipelineRunResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }

    return val;
}
bool RetryPipelineRunResponse::fromJson(const web::json::value& val)
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


bool RetryPipelineRunResponse::isSuccess() const
{
    return success_;
}

void RetryPipelineRunResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool RetryPipelineRunResponse::successIsSet() const
{
    return successIsSet_;
}

void RetryPipelineRunResponse::unsetsuccess()
{
    successIsSet_ = false;
}

}
}
}
}
}


