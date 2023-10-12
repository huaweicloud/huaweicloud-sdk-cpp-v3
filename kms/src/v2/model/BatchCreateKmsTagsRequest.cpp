

#include "huaweicloud/kms/v2/model/BatchCreateKmsTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




BatchCreateKmsTagsRequest::BatchCreateKmsTagsRequest()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateKmsTagsRequest::~BatchCreateKmsTagsRequest() = default;

void BatchCreateKmsTagsRequest::validate()
{
}

web::json::value BatchCreateKmsTagsRequest::toJson() const
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
bool BatchCreateKmsTagsRequest::fromJson(const web::json::value& val)
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
            BatchCreateKmsTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCreateKmsTagsRequest::getKeyId() const
{
    return keyId_;
}

void BatchCreateKmsTagsRequest::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool BatchCreateKmsTagsRequest::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void BatchCreateKmsTagsRequest::unsetkeyId()
{
    keyIdIsSet_ = false;
}

BatchCreateKmsTagsRequestBody BatchCreateKmsTagsRequest::getBody() const
{
    return body_;
}

void BatchCreateKmsTagsRequest::setBody(const BatchCreateKmsTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateKmsTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateKmsTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


