

#include "huaweicloud/smn/v2/model/ListTopicDetailsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListTopicDetailsRequest::ListTopicDetailsRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
}

ListTopicDetailsRequest::~ListTopicDetailsRequest() = default;

void ListTopicDetailsRequest::validate()
{
}

web::json::value ListTopicDetailsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }

    return val;
}

bool ListTopicDetailsRequest::fromJson(const web::json::value& val)
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

std::string ListTopicDetailsRequest::getTopicUrn() const
{
    return topicUrn_;
}

void ListTopicDetailsRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool ListTopicDetailsRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void ListTopicDetailsRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

}
}
}
}
}


