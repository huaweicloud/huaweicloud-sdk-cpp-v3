

#include "huaweicloud/smn/v2/model/DeleteTopicAttributeByNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DeleteTopicAttributeByNameRequest::DeleteTopicAttributeByNameRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

DeleteTopicAttributeByNameRequest::~DeleteTopicAttributeByNameRequest() = default;

void DeleteTopicAttributeByNameRequest::validate()
{
}

web::json::value DeleteTopicAttributeByNameRequest::toJson() const
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
bool DeleteTopicAttributeByNameRequest::fromJson(const web::json::value& val)
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


std::string DeleteTopicAttributeByNameRequest::getTopicUrn() const
{
    return topicUrn_;
}

void DeleteTopicAttributeByNameRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool DeleteTopicAttributeByNameRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void DeleteTopicAttributeByNameRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::string DeleteTopicAttributeByNameRequest::getName() const
{
    return name_;
}

void DeleteTopicAttributeByNameRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DeleteTopicAttributeByNameRequest::nameIsSet() const
{
    return nameIsSet_;
}

void DeleteTopicAttributeByNameRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


