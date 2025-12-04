

#include "huaweicloud/smn/v2/model/ShowKmsKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ShowKmsKeyRequest::ShowKmsKeyRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
}

ShowKmsKeyRequest::~ShowKmsKeyRequest() = default;

void ShowKmsKeyRequest::validate()
{
}

web::json::value ShowKmsKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }

    return val;
}
bool ShowKmsKeyRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowKmsKeyRequest::getTopicUrn() const
{
    return topicUrn_;
}

void ShowKmsKeyRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool ShowKmsKeyRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void ShowKmsKeyRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

}
}
}
}
}


