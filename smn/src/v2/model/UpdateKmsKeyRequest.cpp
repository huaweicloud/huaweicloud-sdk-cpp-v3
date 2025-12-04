

#include "huaweicloud/smn/v2/model/UpdateKmsKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateKmsKeyRequest::UpdateKmsKeyRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateKmsKeyRequest::~UpdateKmsKeyRequest() = default;

void UpdateKmsKeyRequest::validate()
{
}

web::json::value UpdateKmsKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateKmsKeyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateKmsKeyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateKmsKeyRequest::getTopicUrn() const
{
    return topicUrn_;
}

void UpdateKmsKeyRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool UpdateKmsKeyRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void UpdateKmsKeyRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::string UpdateKmsKeyRequest::getId() const
{
    return id_;
}

void UpdateKmsKeyRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateKmsKeyRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateKmsKeyRequest::unsetid()
{
    idIsSet_ = false;
}

UpdateKmsKeyRequestBody UpdateKmsKeyRequest::getBody() const
{
    return body_;
}

void UpdateKmsKeyRequest::setBody(const UpdateKmsKeyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateKmsKeyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateKmsKeyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


