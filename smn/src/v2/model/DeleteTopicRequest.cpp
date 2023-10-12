

#include "huaweicloud/smn/v2/model/DeleteTopicRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DeleteTopicRequest::DeleteTopicRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
}

DeleteTopicRequest::~DeleteTopicRequest() = default;

void DeleteTopicRequest::validate()
{
}

web::json::value DeleteTopicRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }

    return val;
}
bool DeleteTopicRequest::fromJson(const web::json::value& val)
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


std::string DeleteTopicRequest::getTopicUrn() const
{
    return topicUrn_;
}

void DeleteTopicRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool DeleteTopicRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void DeleteTopicRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

}
}
}
}
}


