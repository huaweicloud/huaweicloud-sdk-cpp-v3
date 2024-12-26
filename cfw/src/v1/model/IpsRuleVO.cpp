

#include "huaweicloud/cfw/v1/model/IpsRuleVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




IpsRuleVO::IpsRuleVO()
{
    affectedApplication_ = "";
    affectedApplicationIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    defaultStatus_ = "";
    defaultStatusIsSet_ = false;
    ipsCve_ = "";
    ipsCveIsSet_ = false;
    ipsGroup_ = "";
    ipsGroupIsSet_ = false;
    ipsId_ = "";
    ipsIdIsSet_ = false;
    ipsLevel_ = "";
    ipsLevelIsSet_ = false;
    ipsName_ = "";
    ipsNameIsSet_ = false;
    ipsRulesType_ = "";
    ipsRulesTypeIsSet_ = false;
    ipsStatus_ = "";
    ipsStatusIsSet_ = false;
}

IpsRuleVO::~IpsRuleVO() = default;

void IpsRuleVO::validate()
{
}

web::json::value IpsRuleVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(affectedApplicationIsSet_) {
        val[utility::conversions::to_string_t("affected_application")] = ModelBase::toJson(affectedApplication_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(defaultStatusIsSet_) {
        val[utility::conversions::to_string_t("default_status")] = ModelBase::toJson(defaultStatus_);
    }
    if(ipsCveIsSet_) {
        val[utility::conversions::to_string_t("ips_cve")] = ModelBase::toJson(ipsCve_);
    }
    if(ipsGroupIsSet_) {
        val[utility::conversions::to_string_t("ips_group")] = ModelBase::toJson(ipsGroup_);
    }
    if(ipsIdIsSet_) {
        val[utility::conversions::to_string_t("ips_id")] = ModelBase::toJson(ipsId_);
    }
    if(ipsLevelIsSet_) {
        val[utility::conversions::to_string_t("ips_level")] = ModelBase::toJson(ipsLevel_);
    }
    if(ipsNameIsSet_) {
        val[utility::conversions::to_string_t("ips_name")] = ModelBase::toJson(ipsName_);
    }
    if(ipsRulesTypeIsSet_) {
        val[utility::conversions::to_string_t("ips_rules_type")] = ModelBase::toJson(ipsRulesType_);
    }
    if(ipsStatusIsSet_) {
        val[utility::conversions::to_string_t("ips_status")] = ModelBase::toJson(ipsStatus_);
    }

    return val;
}
bool IpsRuleVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("affected_application"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affected_application"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffectedApplication(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips_cve"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_cve"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsCve(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsGroup(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ips_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsLevel(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ips_rules_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_rules_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsRulesType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsStatus(refVal);
        }
    }
    return ok;
}


std::string IpsRuleVO::getAffectedApplication() const
{
    return affectedApplication_;
}

void IpsRuleVO::setAffectedApplication(const std::string& value)
{
    affectedApplication_ = value;
    affectedApplicationIsSet_ = true;
}

bool IpsRuleVO::affectedApplicationIsSet() const
{
    return affectedApplicationIsSet_;
}

void IpsRuleVO::unsetaffectedApplication()
{
    affectedApplicationIsSet_ = false;
}

std::string IpsRuleVO::getCreateTime() const
{
    return createTime_;
}

void IpsRuleVO::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool IpsRuleVO::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void IpsRuleVO::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string IpsRuleVO::getDefaultStatus() const
{
    return defaultStatus_;
}

void IpsRuleVO::setDefaultStatus(const std::string& value)
{
    defaultStatus_ = value;
    defaultStatusIsSet_ = true;
}

bool IpsRuleVO::defaultStatusIsSet() const
{
    return defaultStatusIsSet_;
}

void IpsRuleVO::unsetdefaultStatus()
{
    defaultStatusIsSet_ = false;
}

std::string IpsRuleVO::getIpsCve() const
{
    return ipsCve_;
}

void IpsRuleVO::setIpsCve(const std::string& value)
{
    ipsCve_ = value;
    ipsCveIsSet_ = true;
}

bool IpsRuleVO::ipsCveIsSet() const
{
    return ipsCveIsSet_;
}

void IpsRuleVO::unsetipsCve()
{
    ipsCveIsSet_ = false;
}

std::string IpsRuleVO::getIpsGroup() const
{
    return ipsGroup_;
}

void IpsRuleVO::setIpsGroup(const std::string& value)
{
    ipsGroup_ = value;
    ipsGroupIsSet_ = true;
}

bool IpsRuleVO::ipsGroupIsSet() const
{
    return ipsGroupIsSet_;
}

void IpsRuleVO::unsetipsGroup()
{
    ipsGroupIsSet_ = false;
}

std::string IpsRuleVO::getIpsId() const
{
    return ipsId_;
}

void IpsRuleVO::setIpsId(const std::string& value)
{
    ipsId_ = value;
    ipsIdIsSet_ = true;
}

bool IpsRuleVO::ipsIdIsSet() const
{
    return ipsIdIsSet_;
}

void IpsRuleVO::unsetipsId()
{
    ipsIdIsSet_ = false;
}

std::string IpsRuleVO::getIpsLevel() const
{
    return ipsLevel_;
}

void IpsRuleVO::setIpsLevel(const std::string& value)
{
    ipsLevel_ = value;
    ipsLevelIsSet_ = true;
}

bool IpsRuleVO::ipsLevelIsSet() const
{
    return ipsLevelIsSet_;
}

void IpsRuleVO::unsetipsLevel()
{
    ipsLevelIsSet_ = false;
}

std::string IpsRuleVO::getIpsName() const
{
    return ipsName_;
}

void IpsRuleVO::setIpsName(const std::string& value)
{
    ipsName_ = value;
    ipsNameIsSet_ = true;
}

bool IpsRuleVO::ipsNameIsSet() const
{
    return ipsNameIsSet_;
}

void IpsRuleVO::unsetipsName()
{
    ipsNameIsSet_ = false;
}

std::string IpsRuleVO::getIpsRulesType() const
{
    return ipsRulesType_;
}

void IpsRuleVO::setIpsRulesType(const std::string& value)
{
    ipsRulesType_ = value;
    ipsRulesTypeIsSet_ = true;
}

bool IpsRuleVO::ipsRulesTypeIsSet() const
{
    return ipsRulesTypeIsSet_;
}

void IpsRuleVO::unsetipsRulesType()
{
    ipsRulesTypeIsSet_ = false;
}

std::string IpsRuleVO::getIpsStatus() const
{
    return ipsStatus_;
}

void IpsRuleVO::setIpsStatus(const std::string& value)
{
    ipsStatus_ = value;
    ipsStatusIsSet_ = true;
}

bool IpsRuleVO::ipsStatusIsSet() const
{
    return ipsStatusIsSet_;
}

void IpsRuleVO::unsetipsStatus()
{
    ipsStatusIsSet_ = false;
}

}
}
}
}
}


