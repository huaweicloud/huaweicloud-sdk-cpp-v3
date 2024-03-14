

#include "huaweicloud/cdn/v1/model/UpdatePrivateBucketAccessResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdatePrivateBucketAccessResponse::UpdatePrivateBucketAccessResponse()
{
    status_ = false;
    statusIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdatePrivateBucketAccessResponse::~UpdatePrivateBucketAccessResponse() = default;

void UpdatePrivateBucketAccessResponse::validate()
{
}

web::json::value UpdatePrivateBucketAccessResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdatePrivateBucketAccessResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
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


bool UpdatePrivateBucketAccessResponse::isStatus() const
{
    return status_;
}

void UpdatePrivateBucketAccessResponse::setStatus(bool value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdatePrivateBucketAccessResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdatePrivateBucketAccessResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdatePrivateBucketAccessResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdatePrivateBucketAccessResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdatePrivateBucketAccessResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdatePrivateBucketAccessResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


