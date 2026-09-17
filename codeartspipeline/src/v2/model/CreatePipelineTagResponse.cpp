

#include "huaweicloud/codeartspipeline/v2/model/CreatePipelineTagResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreatePipelineTagResponse::CreatePipelineTagResponse()
{
    success_ = false;
    successIsSet_ = false;
}

CreatePipelineTagResponse::~CreatePipelineTagResponse() = default;

void CreatePipelineTagResponse::validate()
{
}

web::json::value CreatePipelineTagResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }

    return val;
}
bool CreatePipelineTagResponse::fromJson(const web::json::value& val)
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


bool CreatePipelineTagResponse::isSuccess() const
{
    return success_;
}

void CreatePipelineTagResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool CreatePipelineTagResponse::successIsSet() const
{
    return successIsSet_;
}

void CreatePipelineTagResponse::unsetsuccess()
{
    successIsSet_ = false;
}

}
}
}
}
}


