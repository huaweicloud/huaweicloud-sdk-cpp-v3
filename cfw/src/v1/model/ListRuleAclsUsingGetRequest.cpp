

#include "huaweicloud/cfw/v1/model/ListRuleAclsUsingGetRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListRuleAclsUsingGetRequest::ListRuleAclsUsingGetRequest()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
    protocol_ = 0;
    protocolIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    direction_ = 0;
    directionIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    actionType_ = 0;
    actionTypeIsSet_ = false;
    addressType_ = 0;
    addressTypeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
}

ListRuleAclsUsingGetRequest::~ListRuleAclsUsingGetRequest() = default;

void ListRuleAclsUsingGetRequest::validate()
{
}

web::json::value ListRuleAclsUsingGetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(directionIsSet_) {
        val[utility::conversions::to_string_t("direction")] = ModelBase::toJson(direction_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(actionTypeIsSet_) {
        val[utility::conversions::to_string_t("action_type")] = ModelBase::toJson(actionType_);
    }
    if(addressTypeIsSet_) {
        val[utility::conversions::to_string_t("address_type")] = ModelBase::toJson(addressType_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }

    return val;
}

bool ListRuleAclsUsingGetRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("direction"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDirection(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("action_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddressType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    return ok;
}

std::string ListRuleAclsUsingGetRequest::getObjectId() const
{
    return objectId_;
}

void ListRuleAclsUsingGetRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ListRuleAclsUsingGetRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ListRuleAclsUsingGetRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

int32_t ListRuleAclsUsingGetRequest::getType() const
{
    return type_;
}

void ListRuleAclsUsingGetRequest::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListRuleAclsUsingGetRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListRuleAclsUsingGetRequest::unsettype()
{
    typeIsSet_ = false;
}

int32_t ListRuleAclsUsingGetRequest::getProtocol() const
{
    return protocol_;
}

void ListRuleAclsUsingGetRequest::setProtocol(int32_t value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ListRuleAclsUsingGetRequest::protocolIsSet() const
{
    return protocolIsSet_;
}

void ListRuleAclsUsingGetRequest::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string ListRuleAclsUsingGetRequest::getIp() const
{
    return ip_;
}

void ListRuleAclsUsingGetRequest::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool ListRuleAclsUsingGetRequest::ipIsSet() const
{
    return ipIsSet_;
}

void ListRuleAclsUsingGetRequest::unsetip()
{
    ipIsSet_ = false;
}

std::string ListRuleAclsUsingGetRequest::getName() const
{
    return name_;
}

void ListRuleAclsUsingGetRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListRuleAclsUsingGetRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListRuleAclsUsingGetRequest::unsetname()
{
    nameIsSet_ = false;
}

int32_t ListRuleAclsUsingGetRequest::getDirection() const
{
    return direction_;
}

void ListRuleAclsUsingGetRequest::setDirection(int32_t value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool ListRuleAclsUsingGetRequest::directionIsSet() const
{
    return directionIsSet_;
}

void ListRuleAclsUsingGetRequest::unsetdirection()
{
    directionIsSet_ = false;
}

int32_t ListRuleAclsUsingGetRequest::getStatus() const
{
    return status_;
}

void ListRuleAclsUsingGetRequest::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListRuleAclsUsingGetRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListRuleAclsUsingGetRequest::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ListRuleAclsUsingGetRequest::getActionType() const
{
    return actionType_;
}

void ListRuleAclsUsingGetRequest::setActionType(int32_t value)
{
    actionType_ = value;
    actionTypeIsSet_ = true;
}

bool ListRuleAclsUsingGetRequest::actionTypeIsSet() const
{
    return actionTypeIsSet_;
}

void ListRuleAclsUsingGetRequest::unsetactionType()
{
    actionTypeIsSet_ = false;
}

int32_t ListRuleAclsUsingGetRequest::getAddressType() const
{
    return addressType_;
}

void ListRuleAclsUsingGetRequest::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool ListRuleAclsUsingGetRequest::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void ListRuleAclsUsingGetRequest::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

int32_t ListRuleAclsUsingGetRequest::getLimit() const
{
    return limit_;
}

void ListRuleAclsUsingGetRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRuleAclsUsingGetRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRuleAclsUsingGetRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListRuleAclsUsingGetRequest::getOffset() const
{
    return offset_;
}

void ListRuleAclsUsingGetRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRuleAclsUsingGetRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRuleAclsUsingGetRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListRuleAclsUsingGetRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListRuleAclsUsingGetRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListRuleAclsUsingGetRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListRuleAclsUsingGetRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListRuleAclsUsingGetRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListRuleAclsUsingGetRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListRuleAclsUsingGetRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListRuleAclsUsingGetRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


