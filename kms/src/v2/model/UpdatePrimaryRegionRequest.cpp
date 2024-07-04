

#include "huaweicloud/kms/v2/model/UpdatePrimaryRegionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




UpdatePrimaryRegionRequest::UpdatePrimaryRegionRequest()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePrimaryRegionRequest::~UpdatePrimaryRegionRequest() = default;

void UpdatePrimaryRegionRequest::validate()
{
}

web::json::value UpdatePrimaryRegionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdatePrimaryRegionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdatePrimaryRegionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePrimaryRegionRequest::getKeyId() const
{
    return keyId_;
}

void UpdatePrimaryRegionRequest::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool UpdatePrimaryRegionRequest::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void UpdatePrimaryRegionRequest::unsetkeyId()
{
    keyIdIsSet_ = false;
}

UpdatePrimaryRegionRequestBody UpdatePrimaryRegionRequest::getBody() const
{
    return body_;
}

void UpdatePrimaryRegionRequest::setBody(const UpdatePrimaryRegionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePrimaryRegionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePrimaryRegionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


