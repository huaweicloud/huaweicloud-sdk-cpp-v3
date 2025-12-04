

#include "huaweicloud/smn/v2/model/DeleteKmsKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DeleteKmsKeyRequest::DeleteKmsKeyRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

DeleteKmsKeyRequest::~DeleteKmsKeyRequest() = default;

void DeleteKmsKeyRequest::validate()
{
}

web::json::value DeleteKmsKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteKmsKeyRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteKmsKeyRequest::getTopicUrn() const
{
    return topicUrn_;
}

void DeleteKmsKeyRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool DeleteKmsKeyRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void DeleteKmsKeyRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::string DeleteKmsKeyRequest::getId() const
{
    return id_;
}

void DeleteKmsKeyRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteKmsKeyRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteKmsKeyRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


