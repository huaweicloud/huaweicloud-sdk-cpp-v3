

#include "huaweicloud/cfw/v1/model/ListAclRulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAclRulesRequest::ListAclRulesRequest()
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
    tagsId_ = "";
    tagsIdIsSet_ = false;
    source_ = "";
    sourceIsSet_ = false;
    destination_ = "";
    destinationIsSet_ = false;
    service_ = "";
    serviceIsSet_ = false;
    application_ = "";
    applicationIsSet_ = false;
}

ListAclRulesRequest::~ListAclRulesRequest() = default;

void ListAclRulesRequest::validate()
{
}

web::json::value ListAclRulesRequest::toJson() const
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
    if(tagsIdIsSet_) {
        val[utility::conversions::to_string_t("tags_id")] = ModelBase::toJson(tagsId_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(destinationIsSet_) {
        val[utility::conversions::to_string_t("destination")] = ModelBase::toJson(destination_);
    }
    if(serviceIsSet_) {
        val[utility::conversions::to_string_t("service")] = ModelBase::toJson(service_);
    }
    if(applicationIsSet_) {
        val[utility::conversions::to_string_t("application")] = ModelBase::toJson(application_);
    }

    return val;
}
bool ListAclRulesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tags_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagsId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestination(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setService(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplication(refVal);
        }
    }
    return ok;
}


std::string ListAclRulesRequest::getObjectId() const
{
    return objectId_;
}

void ListAclRulesRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ListAclRulesRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ListAclRulesRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

int32_t ListAclRulesRequest::getType() const
{
    return type_;
}

void ListAclRulesRequest::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListAclRulesRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListAclRulesRequest::unsettype()
{
    typeIsSet_ = false;
}

int32_t ListAclRulesRequest::getProtocol() const
{
    return protocol_;
}

void ListAclRulesRequest::setProtocol(int32_t value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ListAclRulesRequest::protocolIsSet() const
{
    return protocolIsSet_;
}

void ListAclRulesRequest::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string ListAclRulesRequest::getIp() const
{
    return ip_;
}

void ListAclRulesRequest::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool ListAclRulesRequest::ipIsSet() const
{
    return ipIsSet_;
}

void ListAclRulesRequest::unsetip()
{
    ipIsSet_ = false;
}

std::string ListAclRulesRequest::getName() const
{
    return name_;
}

void ListAclRulesRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListAclRulesRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListAclRulesRequest::unsetname()
{
    nameIsSet_ = false;
}

int32_t ListAclRulesRequest::getDirection() const
{
    return direction_;
}

void ListAclRulesRequest::setDirection(int32_t value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool ListAclRulesRequest::directionIsSet() const
{
    return directionIsSet_;
}

void ListAclRulesRequest::unsetdirection()
{
    directionIsSet_ = false;
}

int32_t ListAclRulesRequest::getStatus() const
{
    return status_;
}

void ListAclRulesRequest::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAclRulesRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListAclRulesRequest::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ListAclRulesRequest::getActionType() const
{
    return actionType_;
}

void ListAclRulesRequest::setActionType(int32_t value)
{
    actionType_ = value;
    actionTypeIsSet_ = true;
}

bool ListAclRulesRequest::actionTypeIsSet() const
{
    return actionTypeIsSet_;
}

void ListAclRulesRequest::unsetactionType()
{
    actionTypeIsSet_ = false;
}

int32_t ListAclRulesRequest::getAddressType() const
{
    return addressType_;
}

void ListAclRulesRequest::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool ListAclRulesRequest::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void ListAclRulesRequest::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

int32_t ListAclRulesRequest::getLimit() const
{
    return limit_;
}

void ListAclRulesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAclRulesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAclRulesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListAclRulesRequest::getOffset() const
{
    return offset_;
}

void ListAclRulesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAclRulesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAclRulesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAclRulesRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListAclRulesRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListAclRulesRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListAclRulesRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListAclRulesRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListAclRulesRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListAclRulesRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListAclRulesRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string ListAclRulesRequest::getTagsId() const
{
    return tagsId_;
}

void ListAclRulesRequest::setTagsId(const std::string& value)
{
    tagsId_ = value;
    tagsIdIsSet_ = true;
}

bool ListAclRulesRequest::tagsIdIsSet() const
{
    return tagsIdIsSet_;
}

void ListAclRulesRequest::unsettagsId()
{
    tagsIdIsSet_ = false;
}

std::string ListAclRulesRequest::getSource() const
{
    return source_;
}

void ListAclRulesRequest::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool ListAclRulesRequest::sourceIsSet() const
{
    return sourceIsSet_;
}

void ListAclRulesRequest::unsetsource()
{
    sourceIsSet_ = false;
}

std::string ListAclRulesRequest::getDestination() const
{
    return destination_;
}

void ListAclRulesRequest::setDestination(const std::string& value)
{
    destination_ = value;
    destinationIsSet_ = true;
}

bool ListAclRulesRequest::destinationIsSet() const
{
    return destinationIsSet_;
}

void ListAclRulesRequest::unsetdestination()
{
    destinationIsSet_ = false;
}

std::string ListAclRulesRequest::getService() const
{
    return service_;
}

void ListAclRulesRequest::setService(const std::string& value)
{
    service_ = value;
    serviceIsSet_ = true;
}

bool ListAclRulesRequest::serviceIsSet() const
{
    return serviceIsSet_;
}

void ListAclRulesRequest::unsetservice()
{
    serviceIsSet_ = false;
}

std::string ListAclRulesRequest::getApplication() const
{
    return application_;
}

void ListAclRulesRequest::setApplication(const std::string& value)
{
    application_ = value;
    applicationIsSet_ = true;
}

bool ListAclRulesRequest::applicationIsSet() const
{
    return applicationIsSet_;
}

void ListAclRulesRequest::unsetapplication()
{
    applicationIsSet_ = false;
}

}
}
}
}
}


