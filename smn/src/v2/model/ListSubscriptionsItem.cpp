

#include "huaweicloud/smn/v2/model/ListSubscriptionsItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListSubscriptionsItem::ListSubscriptionsItem()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    subscriptionUrn_ = "";
    subscriptionUrnIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    endpoint_ = "";
    endpointIsSet_ = false;
    remark_ = "";
    remarkIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

ListSubscriptionsItem::~ListSubscriptionsItem() = default;

void ListSubscriptionsItem::validate()
{
}

web::json::value ListSubscriptionsItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(subscriptionUrnIsSet_) {
        val[utility::conversions::to_string_t("subscription_urn")] = ModelBase::toJson(subscriptionUrn_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }
    if(remarkIsSet_) {
        val[utility::conversions::to_string_t("remark")] = ModelBase::toJson(remark_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ListSubscriptionsItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscription_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remark"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemark(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string ListSubscriptionsItem::getTopicUrn() const
{
    return topicUrn_;
}

void ListSubscriptionsItem::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool ListSubscriptionsItem::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void ListSubscriptionsItem::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::string ListSubscriptionsItem::getProtocol() const
{
    return protocol_;
}

void ListSubscriptionsItem::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ListSubscriptionsItem::protocolIsSet() const
{
    return protocolIsSet_;
}

void ListSubscriptionsItem::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string ListSubscriptionsItem::getSubscriptionUrn() const
{
    return subscriptionUrn_;
}

void ListSubscriptionsItem::setSubscriptionUrn(const std::string& value)
{
    subscriptionUrn_ = value;
    subscriptionUrnIsSet_ = true;
}

bool ListSubscriptionsItem::subscriptionUrnIsSet() const
{
    return subscriptionUrnIsSet_;
}

void ListSubscriptionsItem::unsetsubscriptionUrn()
{
    subscriptionUrnIsSet_ = false;
}

std::string ListSubscriptionsItem::getOwner() const
{
    return owner_;
}

void ListSubscriptionsItem::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool ListSubscriptionsItem::ownerIsSet() const
{
    return ownerIsSet_;
}

void ListSubscriptionsItem::unsetowner()
{
    ownerIsSet_ = false;
}

std::string ListSubscriptionsItem::getEndpoint() const
{
    return endpoint_;
}

void ListSubscriptionsItem::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool ListSubscriptionsItem::endpointIsSet() const
{
    return endpointIsSet_;
}

void ListSubscriptionsItem::unsetendpoint()
{
    endpointIsSet_ = false;
}

std::string ListSubscriptionsItem::getRemark() const
{
    return remark_;
}

void ListSubscriptionsItem::setRemark(const std::string& value)
{
    remark_ = value;
    remarkIsSet_ = true;
}

bool ListSubscriptionsItem::remarkIsSet() const
{
    return remarkIsSet_;
}

void ListSubscriptionsItem::unsetremark()
{
    remarkIsSet_ = false;
}

int32_t ListSubscriptionsItem::getStatus() const
{
    return status_;
}

void ListSubscriptionsItem::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListSubscriptionsItem::statusIsSet() const
{
    return statusIsSet_;
}

void ListSubscriptionsItem::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


