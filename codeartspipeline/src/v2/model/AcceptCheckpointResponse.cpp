

#include "huaweicloud/codeartspipeline/v2/model/AcceptCheckpointResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




AcceptCheckpointResponse::AcceptCheckpointResponse()
{
    success_ = false;
    successIsSet_ = false;
}

AcceptCheckpointResponse::~AcceptCheckpointResponse() = default;

void AcceptCheckpointResponse::validate()
{
}

web::json::value AcceptCheckpointResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }

    return val;
}
bool AcceptCheckpointResponse::fromJson(const web::json::value& val)
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


bool AcceptCheckpointResponse::isSuccess() const
{
    return success_;
}

void AcceptCheckpointResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool AcceptCheckpointResponse::successIsSet() const
{
    return successIsSet_;
}

void AcceptCheckpointResponse::unsetsuccess()
{
    successIsSet_ = false;
}

}
}
}
}
}


