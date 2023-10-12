

#include "huaweicloud/ecs/v2/model/NovaSecurityGroupCommonRule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaSecurityGroupCommonRule::NovaSecurityGroupCommonRule()
{
    fromPort_ = 0;
    fromPortIsSet_ = false;
    groupIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    ipProtocol_ = "";
    ipProtocolIsSet_ = false;
    ipRangeIsSet_ = false;
    parentGroupId_ = "";
    parentGroupIdIsSet_ = false;
    toPort_ = 0;
    toPortIsSet_ = false;
}

NovaSecurityGroupCommonRule::~NovaSecurityGroupCommonRule() = default;

void NovaSecurityGroupCommonRule::validate()
{
}

web::json::value NovaSecurityGroupCommonRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fromPortIsSet_) {
        val[utility::conversions::to_string_t("from_port")] = ModelBase::toJson(fromPort_);
    }
    if(groupIsSet_) {
        val[utility::conversions::to_string_t("group")] = ModelBase::toJson(group_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(ipProtocolIsSet_) {
        val[utility::conversions::to_string_t("ip_protocol")] = ModelBase::toJson(ipProtocol_);
    }
    if(ipRangeIsSet_) {
        val[utility::conversions::to_string_t("ip_range")] = ModelBase::toJson(ipRange_);
    }
    if(parentGroupIdIsSet_) {
        val[utility::conversions::to_string_t("parent_group_id")] = ModelBase::toJson(parentGroupId_);
    }
    if(toPortIsSet_) {
        val[utility::conversions::to_string_t("to_port")] = ModelBase::toJson(toPort_);
    }

    return val;
}
bool NovaSecurityGroupCommonRule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("from_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("from_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFromPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group"));
        if(!fieldValue.is_null())
        {
            NovaSecurityGroupCommonGroup refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_range"));
        if(!fieldValue.is_null())
        {
            NovaSecurityGroupCommonIpRange refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpRange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("to_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("to_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToPort(refVal);
        }
    }
    return ok;
}


int32_t NovaSecurityGroupCommonRule::getFromPort() const
{
    return fromPort_;
}

void NovaSecurityGroupCommonRule::setFromPort(int32_t value)
{
    fromPort_ = value;
    fromPortIsSet_ = true;
}

bool NovaSecurityGroupCommonRule::fromPortIsSet() const
{
    return fromPortIsSet_;
}

void NovaSecurityGroupCommonRule::unsetfromPort()
{
    fromPortIsSet_ = false;
}

NovaSecurityGroupCommonGroup NovaSecurityGroupCommonRule::getGroup() const
{
    return group_;
}

void NovaSecurityGroupCommonRule::setGroup(const NovaSecurityGroupCommonGroup& value)
{
    group_ = value;
    groupIsSet_ = true;
}

bool NovaSecurityGroupCommonRule::groupIsSet() const
{
    return groupIsSet_;
}

void NovaSecurityGroupCommonRule::unsetgroup()
{
    groupIsSet_ = false;
}

std::string NovaSecurityGroupCommonRule::getId() const
{
    return id_;
}

void NovaSecurityGroupCommonRule::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NovaSecurityGroupCommonRule::idIsSet() const
{
    return idIsSet_;
}

void NovaSecurityGroupCommonRule::unsetid()
{
    idIsSet_ = false;
}

std::string NovaSecurityGroupCommonRule::getIpProtocol() const
{
    return ipProtocol_;
}

void NovaSecurityGroupCommonRule::setIpProtocol(const std::string& value)
{
    ipProtocol_ = value;
    ipProtocolIsSet_ = true;
}

bool NovaSecurityGroupCommonRule::ipProtocolIsSet() const
{
    return ipProtocolIsSet_;
}

void NovaSecurityGroupCommonRule::unsetipProtocol()
{
    ipProtocolIsSet_ = false;
}

NovaSecurityGroupCommonIpRange NovaSecurityGroupCommonRule::getIpRange() const
{
    return ipRange_;
}

void NovaSecurityGroupCommonRule::setIpRange(const NovaSecurityGroupCommonIpRange& value)
{
    ipRange_ = value;
    ipRangeIsSet_ = true;
}

bool NovaSecurityGroupCommonRule::ipRangeIsSet() const
{
    return ipRangeIsSet_;
}

void NovaSecurityGroupCommonRule::unsetipRange()
{
    ipRangeIsSet_ = false;
}

std::string NovaSecurityGroupCommonRule::getParentGroupId() const
{
    return parentGroupId_;
}

void NovaSecurityGroupCommonRule::setParentGroupId(const std::string& value)
{
    parentGroupId_ = value;
    parentGroupIdIsSet_ = true;
}

bool NovaSecurityGroupCommonRule::parentGroupIdIsSet() const
{
    return parentGroupIdIsSet_;
}

void NovaSecurityGroupCommonRule::unsetparentGroupId()
{
    parentGroupIdIsSet_ = false;
}

int32_t NovaSecurityGroupCommonRule::getToPort() const
{
    return toPort_;
}

void NovaSecurityGroupCommonRule::setToPort(int32_t value)
{
    toPort_ = value;
    toPortIsSet_ = true;
}

bool NovaSecurityGroupCommonRule::toPortIsSet() const
{
    return toPortIsSet_;
}

void NovaSecurityGroupCommonRule::unsettoPort()
{
    toPortIsSet_ = false;
}

}
}
}
}
}


