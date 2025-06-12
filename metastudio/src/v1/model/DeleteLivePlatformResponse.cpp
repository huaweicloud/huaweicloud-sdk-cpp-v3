

#include "huaweicloud/metastudio/v1/model/DeleteLivePlatformResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteLivePlatformResponse::DeleteLivePlatformResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteLivePlatformResponse::~DeleteLivePlatformResponse() = default;

void DeleteLivePlatformResponse::validate()
{
}

web::json::value DeleteLivePlatformResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteLivePlatformResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string DeleteLivePlatformResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteLivePlatformResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteLivePlatformResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteLivePlatformResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


