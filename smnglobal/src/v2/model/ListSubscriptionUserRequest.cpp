

#include "huaweicloud/smnglobal/v2/model/ListSubscriptionUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




ListSubscriptionUserRequest::ListSubscriptionUserRequest()
{
    name_ = "";
    nameIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    group_ = "";
    groupIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListSubscriptionUserRequest::~ListSubscriptionUserRequest() = default;

void ListSubscriptionUserRequest::validate()
{
}

web::json::value ListSubscriptionUserRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(groupIsSet_) {
        val[utility::conversions::to_string_t("group")] = ModelBase::toJson(group_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListSubscriptionUserRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListSubscriptionUserRequest::getName() const
{
    return name_;
}

void ListSubscriptionUserRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListSubscriptionUserRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListSubscriptionUserRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListSubscriptionUserRequest::getProtocol() const
{
    return protocol_;
}

void ListSubscriptionUserRequest::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ListSubscriptionUserRequest::protocolIsSet() const
{
    return protocolIsSet_;
}

void ListSubscriptionUserRequest::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string ListSubscriptionUserRequest::getStatus() const
{
    return status_;
}

void ListSubscriptionUserRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListSubscriptionUserRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListSubscriptionUserRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListSubscriptionUserRequest::getGroup() const
{
    return group_;
}

void ListSubscriptionUserRequest::setGroup(const std::string& value)
{
    group_ = value;
    groupIsSet_ = true;
}

bool ListSubscriptionUserRequest::groupIsSet() const
{
    return groupIsSet_;
}

void ListSubscriptionUserRequest::unsetgroup()
{
    groupIsSet_ = false;
}

int32_t ListSubscriptionUserRequest::getOffset() const
{
    return offset_;
}

void ListSubscriptionUserRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSubscriptionUserRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSubscriptionUserRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSubscriptionUserRequest::getLimit() const
{
    return limit_;
}

void ListSubscriptionUserRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSubscriptionUserRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSubscriptionUserRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


