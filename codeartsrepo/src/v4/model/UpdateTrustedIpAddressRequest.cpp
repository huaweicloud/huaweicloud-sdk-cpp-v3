

#include "huaweicloud/codeartsrepo/v4/model/UpdateTrustedIpAddressRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateTrustedIpAddressRequest::UpdateTrustedIpAddressRequest()
{
    id_ = 0;
    idIsSet_ = false;
    ipId_ = 0;
    ipIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTrustedIpAddressRequest::~UpdateTrustedIpAddressRequest() = default;

void UpdateTrustedIpAddressRequest::validate()
{
}

web::json::value UpdateTrustedIpAddressRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(ipIdIsSet_) {
        val[utility::conversions::to_string_t("ip_id")] = ModelBase::toJson(ipId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateTrustedIpAddressRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpId(refVal);
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


int32_t UpdateTrustedIpAddressRequest::getId() const
{
    return id_;
}

void UpdateTrustedIpAddressRequest::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateTrustedIpAddressRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateTrustedIpAddressRequest::unsetid()
{
    idIsSet_ = false;
}

int32_t UpdateTrustedIpAddressRequest::getIpId() const
{
    return ipId_;
}

void UpdateTrustedIpAddressRequest::setIpId(int32_t value)
{
    ipId_ = value;
    ipIdIsSet_ = true;
}

bool UpdateTrustedIpAddressRequest::ipIdIsSet() const
{
    return ipIdIsSet_;
}

void UpdateTrustedIpAddressRequest::unsetipId()
{
    ipIdIsSet_ = false;
}

AddTrustedIpAddressRequestBody UpdateTrustedIpAddressRequest::getBody() const
{
    return body_;
}

void UpdateTrustedIpAddressRequest::setBody(const AddTrustedIpAddressRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTrustedIpAddressRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTrustedIpAddressRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


