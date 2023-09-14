

#include "huaweicloud/smn/v2/model/DeleteTopicAttributesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DeleteTopicAttributesRequest::DeleteTopicAttributesRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
}

DeleteTopicAttributesRequest::~DeleteTopicAttributesRequest() = default;

void DeleteTopicAttributesRequest::validate()
{
}

web::json::value DeleteTopicAttributesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }

    return val;
}

bool DeleteTopicAttributesRequest::fromJson(const web::json::value& val)
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

std::string DeleteTopicAttributesRequest::getTopicUrn() const
{
    return topicUrn_;
}

void DeleteTopicAttributesRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool DeleteTopicAttributesRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void DeleteTopicAttributesRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

}
}
}
}
}


