

#include "huaweicloud/kms/v2/model/CreateKmsTagRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateKmsTagRequest::CreateKmsTagRequest()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateKmsTagRequest::~CreateKmsTagRequest() = default;

void CreateKmsTagRequest::validate()
{
}

web::json::value CreateKmsTagRequest::toJson() const
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

bool CreateKmsTagRequest::fromJson(const web::json::value& val)
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
            CreateKmsTagRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateKmsTagRequest::getKeyId() const
{
    return keyId_;
}

void CreateKmsTagRequest::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool CreateKmsTagRequest::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void CreateKmsTagRequest::unsetkeyId()
{
    keyIdIsSet_ = false;
}

CreateKmsTagRequestBody CreateKmsTagRequest::getBody() const
{
    return body_;
}

void CreateKmsTagRequest::setBody(const CreateKmsTagRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateKmsTagRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateKmsTagRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


