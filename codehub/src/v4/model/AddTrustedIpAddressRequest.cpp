

#include "huaweicloud/codehub/v4/model/AddTrustedIpAddressRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




AddTrustedIpAddressRequest::AddTrustedIpAddressRequest()
{
    id_ = 0;
    idIsSet_ = false;
    bodyIsSet_ = false;
}

AddTrustedIpAddressRequest::~AddTrustedIpAddressRequest() = default;

void AddTrustedIpAddressRequest::validate()
{
}

web::json::value AddTrustedIpAddressRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddTrustedIpAddressRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AddTrustedIpAddressRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t AddTrustedIpAddressRequest::getId() const
{
    return id_;
}

void AddTrustedIpAddressRequest::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AddTrustedIpAddressRequest::idIsSet() const
{
    return idIsSet_;
}

void AddTrustedIpAddressRequest::unsetid()
{
    idIsSet_ = false;
}

AddTrustedIpAddressRequestBody AddTrustedIpAddressRequest::getBody() const
{
    return body_;
}

void AddTrustedIpAddressRequest::setBody(const AddTrustedIpAddressRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddTrustedIpAddressRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddTrustedIpAddressRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


