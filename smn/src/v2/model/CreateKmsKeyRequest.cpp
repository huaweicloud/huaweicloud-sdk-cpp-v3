

#include "huaweicloud/smn/v2/model/CreateKmsKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




CreateKmsKeyRequest::CreateKmsKeyRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    bodyIsSet_ = false;
}

CreateKmsKeyRequest::~CreateKmsKeyRequest() = default;

void CreateKmsKeyRequest::validate()
{
}

web::json::value CreateKmsKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateKmsKeyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("topic_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AddKmsKeyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateKmsKeyRequest::getTopicUrn() const
{
    return topicUrn_;
}

void CreateKmsKeyRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool CreateKmsKeyRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void CreateKmsKeyRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

AddKmsKeyRequestBody CreateKmsKeyRequest::getBody() const
{
    return body_;
}

void CreateKmsKeyRequest::setBody(const AddKmsKeyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateKmsKeyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateKmsKeyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


