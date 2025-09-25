

#include "huaweicloud/codeartspipeline/v2/model/DeletePipelineGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




DeletePipelineGroupResponse::DeletePipelineGroupResponse()
{
    success_ = false;
    successIsSet_ = false;
}

DeletePipelineGroupResponse::~DeletePipelineGroupResponse() = default;

void DeletePipelineGroupResponse::validate()
{
}

web::json::value DeletePipelineGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }

    return val;
}
bool DeletePipelineGroupResponse::fromJson(const web::json::value& val)
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


bool DeletePipelineGroupResponse::isSuccess() const
{
    return success_;
}

void DeletePipelineGroupResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool DeletePipelineGroupResponse::successIsSet() const
{
    return successIsSet_;
}

void DeletePipelineGroupResponse::unsetsuccess()
{
    successIsSet_ = false;
}

}
}
}
}
}


