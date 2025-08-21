

#include "huaweicloud/cfw/v1/model/ListCustomerIpsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListCustomerIpsRequest::ListCustomerIpsRequest()
{
    actionType_ = 0;
    actionTypeIsSet_ = false;
    affectedOs_ = 0;
    affectedOsIsSet_ = false;
    attackType_ = 0;
    attackTypeIsSet_ = false;
    ipsName_ = "";
    ipsNameIsSet_ = false;
    ipsId_ = "";
    ipsIdIsSet_ = false;
    protocol_ = 0;
    protocolIsSet_ = false;
    severity_ = 0;
    severityIsSet_ = false;
    software_ = 0;
    softwareIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListCustomerIpsRequest::~ListCustomerIpsRequest() = default;

void ListCustomerIpsRequest::validate()
{
}

web::json::value ListCustomerIpsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionTypeIsSet_) {
        val[utility::conversions::to_string_t("action_type")] = ModelBase::toJson(actionType_);
    }
    if(affectedOsIsSet_) {
        val[utility::conversions::to_string_t("affected_os")] = ModelBase::toJson(affectedOs_);
    }
    if(attackTypeIsSet_) {
        val[utility::conversions::to_string_t("attack_type")] = ModelBase::toJson(attackType_);
    }
    if(ipsNameIsSet_) {
        val[utility::conversions::to_string_t("ips_name")] = ModelBase::toJson(ipsName_);
    }
    if(ipsIdIsSet_) {
        val[utility::conversions::to_string_t("ips_id")] = ModelBase::toJson(ipsId_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(severityIsSet_) {
        val[utility::conversions::to_string_t("severity")] = ModelBase::toJson(severity_);
    }
    if(softwareIsSet_) {
        val[utility::conversions::to_string_t("software")] = ModelBase::toJson(software_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListCustomerIpsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("affected_os"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affected_os"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffectedOs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attack_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("software"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("software"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSoftware(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
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
    return ok;
}


int32_t ListCustomerIpsRequest::getActionType() const
{
    return actionType_;
}

void ListCustomerIpsRequest::setActionType(int32_t value)
{
    actionType_ = value;
    actionTypeIsSet_ = true;
}

bool ListCustomerIpsRequest::actionTypeIsSet() const
{
    return actionTypeIsSet_;
}

void ListCustomerIpsRequest::unsetactionType()
{
    actionTypeIsSet_ = false;
}

int32_t ListCustomerIpsRequest::getAffectedOs() const
{
    return affectedOs_;
}

void ListCustomerIpsRequest::setAffectedOs(int32_t value)
{
    affectedOs_ = value;
    affectedOsIsSet_ = true;
}

bool ListCustomerIpsRequest::affectedOsIsSet() const
{
    return affectedOsIsSet_;
}

void ListCustomerIpsRequest::unsetaffectedOs()
{
    affectedOsIsSet_ = false;
}

int32_t ListCustomerIpsRequest::getAttackType() const
{
    return attackType_;
}

void ListCustomerIpsRequest::setAttackType(int32_t value)
{
    attackType_ = value;
    attackTypeIsSet_ = true;
}

bool ListCustomerIpsRequest::attackTypeIsSet() const
{
    return attackTypeIsSet_;
}

void ListCustomerIpsRequest::unsetattackType()
{
    attackTypeIsSet_ = false;
}

std::string ListCustomerIpsRequest::getIpsName() const
{
    return ipsName_;
}

void ListCustomerIpsRequest::setIpsName(const std::string& value)
{
    ipsName_ = value;
    ipsNameIsSet_ = true;
}

bool ListCustomerIpsRequest::ipsNameIsSet() const
{
    return ipsNameIsSet_;
}

void ListCustomerIpsRequest::unsetipsName()
{
    ipsNameIsSet_ = false;
}

std::string ListCustomerIpsRequest::getIpsId() const
{
    return ipsId_;
}

void ListCustomerIpsRequest::setIpsId(const std::string& value)
{
    ipsId_ = value;
    ipsIdIsSet_ = true;
}

bool ListCustomerIpsRequest::ipsIdIsSet() const
{
    return ipsIdIsSet_;
}

void ListCustomerIpsRequest::unsetipsId()
{
    ipsIdIsSet_ = false;
}

int32_t ListCustomerIpsRequest::getProtocol() const
{
    return protocol_;
}

void ListCustomerIpsRequest::setProtocol(int32_t value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ListCustomerIpsRequest::protocolIsSet() const
{
    return protocolIsSet_;
}

void ListCustomerIpsRequest::unsetprotocol()
{
    protocolIsSet_ = false;
}

int32_t ListCustomerIpsRequest::getSeverity() const
{
    return severity_;
}

void ListCustomerIpsRequest::setSeverity(int32_t value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool ListCustomerIpsRequest::severityIsSet() const
{
    return severityIsSet_;
}

void ListCustomerIpsRequest::unsetseverity()
{
    severityIsSet_ = false;
}

int32_t ListCustomerIpsRequest::getSoftware() const
{
    return software_;
}

void ListCustomerIpsRequest::setSoftware(int32_t value)
{
    software_ = value;
    softwareIsSet_ = true;
}

bool ListCustomerIpsRequest::softwareIsSet() const
{
    return softwareIsSet_;
}

void ListCustomerIpsRequest::unsetsoftware()
{
    softwareIsSet_ = false;
}

std::string ListCustomerIpsRequest::getObjectId() const
{
    return objectId_;
}

void ListCustomerIpsRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ListCustomerIpsRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ListCustomerIpsRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string ListCustomerIpsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListCustomerIpsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListCustomerIpsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListCustomerIpsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListCustomerIpsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListCustomerIpsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListCustomerIpsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListCustomerIpsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t ListCustomerIpsRequest::getLimit() const
{
    return limit_;
}

void ListCustomerIpsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListCustomerIpsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListCustomerIpsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListCustomerIpsRequest::getOffset() const
{
    return offset_;
}

void ListCustomerIpsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListCustomerIpsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListCustomerIpsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


