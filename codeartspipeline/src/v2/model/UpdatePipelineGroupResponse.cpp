

#include "huaweicloud/codeartspipeline/v2/model/UpdatePipelineGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UpdatePipelineGroupResponse::UpdatePipelineGroupResponse()
{
    success_ = false;
    successIsSet_ = false;
}

UpdatePipelineGroupResponse::~UpdatePipelineGroupResponse() = default;

void UpdatePipelineGroupResponse::validate()
{
}

web::json::value UpdatePipelineGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }

    return val;
}
bool UpdatePipelineGroupResponse::fromJson(const web::json::value& val)
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


bool UpdatePipelineGroupResponse::isSuccess() const
{
    return success_;
}

void UpdatePipelineGroupResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool UpdatePipelineGroupResponse::successIsSet() const
{
    return successIsSet_;
}

void UpdatePipelineGroupResponse::unsetsuccess()
{
    successIsSet_ = false;
}

}
}
}
}
}


