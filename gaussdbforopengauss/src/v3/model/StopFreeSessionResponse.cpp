

#include "huaweicloud/gaussdbforopengauss/v3/model/StopFreeSessionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




StopFreeSessionResponse::StopFreeSessionResponse()
{
    success_ = false;
    successIsSet_ = false;
}

StopFreeSessionResponse::~StopFreeSessionResponse() = default;

void StopFreeSessionResponse::validate()
{
}

web::json::value StopFreeSessionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }

    return val;
}
bool StopFreeSessionResponse::fromJson(const web::json::value& val)
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


bool StopFreeSessionResponse::isSuccess() const
{
    return success_;
}

void StopFreeSessionResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool StopFreeSessionResponse::successIsSet() const
{
    return successIsSet_;
}

void StopFreeSessionResponse::unsetsuccess()
{
    successIsSet_ = false;
}

}
}
}
}
}


