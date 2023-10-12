

#include "huaweicloud/smn/v2/model/ListTopicAttributesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListTopicAttributesRequest::ListTopicAttributesRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ListTopicAttributesRequest::~ListTopicAttributesRequest() = default;

void ListTopicAttributesRequest::validate()
{
}

web::json::value ListTopicAttributesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ListTopicAttributesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string ListTopicAttributesRequest::getTopicUrn() const
{
    return topicUrn_;
}

void ListTopicAttributesRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool ListTopicAttributesRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void ListTopicAttributesRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::string ListTopicAttributesRequest::getName() const
{
    return name_;
}

void ListTopicAttributesRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListTopicAttributesRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListTopicAttributesRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


