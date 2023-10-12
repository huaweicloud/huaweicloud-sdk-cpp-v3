

#include "huaweicloud/smn/v2/model/ListTopicAttributesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListTopicAttributesResponse::ListTopicAttributesResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    attributesIsSet_ = false;
}

ListTopicAttributesResponse::~ListTopicAttributesResponse() = default;

void ListTopicAttributesResponse::validate()
{
}

web::json::value ListTopicAttributesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(attributesIsSet_) {
        val[utility::conversions::to_string_t("attributes")] = ModelBase::toJson(attributes_);
    }

    return val;
}
bool ListTopicAttributesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attributes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attributes"));
        if(!fieldValue.is_null())
        {
            TopicAttribute refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttributes(refVal);
        }
    }
    return ok;
}


std::string ListTopicAttributesResponse::getRequestId() const
{
    return requestId_;
}

void ListTopicAttributesResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListTopicAttributesResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListTopicAttributesResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

TopicAttribute ListTopicAttributesResponse::getAttributes() const
{
    return attributes_;
}

void ListTopicAttributesResponse::setAttributes(const TopicAttribute& value)
{
    attributes_ = value;
    attributesIsSet_ = true;
}

bool ListTopicAttributesResponse::attributesIsSet() const
{
    return attributesIsSet_;
}

void ListTopicAttributesResponse::unsetattributes()
{
    attributesIsSet_ = false;
}

}
}
}
}
}


