

#include "huaweicloud/codeartspipeline/v2/model/DeletePipelineTagResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




DeletePipelineTagResponse::DeletePipelineTagResponse()
{
    success_ = false;
    successIsSet_ = false;
}

DeletePipelineTagResponse::~DeletePipelineTagResponse() = default;

void DeletePipelineTagResponse::validate()
{
}

web::json::value DeletePipelineTagResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }

    return val;
}
bool DeletePipelineTagResponse::fromJson(const web::json::value& val)
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


bool DeletePipelineTagResponse::isSuccess() const
{
    return success_;
}

void DeletePipelineTagResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool DeletePipelineTagResponse::successIsSet() const
{
    return successIsSet_;
}

void DeletePipelineTagResponse::unsetsuccess()
{
    successIsSet_ = false;
}

}
}
}
}
}


