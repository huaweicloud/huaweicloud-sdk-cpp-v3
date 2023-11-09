

#include "huaweicloud/tics/v1/model/ShowLeagueResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ShowLeagueResponse::ShowLeagueResponse()
{
    bcsChannelName_ = "";
    bcsChannelNameIsSet_ = false;
    bcsIp_ = "";
    bcsIpIsSet_ = false;
    bcsOrgName_ = "";
    bcsOrgNameIsSet_ = false;
    blockChainId_ = "";
    blockChainIdIsSet_ = false;
    blockChainName_ = "";
    blockChainNameIsSet_ = false;
    createDate_ = utility::datetime();
    createDateIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    creatorId_ = "";
    creatorIdIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    dpEnabled_ = false;
    dpEnabledIsSet_ = false;
    expireTime_ = 0L;
    expireTimeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    isAccessControl_ = false;
    isAccessControlIsSet_ = false;
    isNeedApproval_ = false;
    isNeedApprovalIsSet_ = false;
    leagueStatus_ = "";
    leagueStatusIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    partners_ = 0L;
    partnersIsSet_ = false;
    privacyProtectionType_ = "";
    privacyProtectionTypeIsSet_ = false;
    resourceSpecCode_ = "";
    resourceSpecCodeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

ShowLeagueResponse::~ShowLeagueResponse() = default;

void ShowLeagueResponse::validate()
{
}

web::json::value ShowLeagueResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bcsChannelNameIsSet_) {
        val[utility::conversions::to_string_t("bcs_channel_name")] = ModelBase::toJson(bcsChannelName_);
    }
    if(bcsIpIsSet_) {
        val[utility::conversions::to_string_t("bcs_ip")] = ModelBase::toJson(bcsIp_);
    }
    if(bcsOrgNameIsSet_) {
        val[utility::conversions::to_string_t("bcs_org_name")] = ModelBase::toJson(bcsOrgName_);
    }
    if(blockChainIdIsSet_) {
        val[utility::conversions::to_string_t("block_chain_id")] = ModelBase::toJson(blockChainId_);
    }
    if(blockChainNameIsSet_) {
        val[utility::conversions::to_string_t("block_chain_name")] = ModelBase::toJson(blockChainName_);
    }
    if(createDateIsSet_) {
        val[utility::conversions::to_string_t("create_date")] = ModelBase::toJson(createDate_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(creatorIdIsSet_) {
        val[utility::conversions::to_string_t("creator_id")] = ModelBase::toJson(creatorId_);
    }
    if(creatorNameIsSet_) {
        val[utility::conversions::to_string_t("creator_name")] = ModelBase::toJson(creatorName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(dpEnabledIsSet_) {
        val[utility::conversions::to_string_t("dp_enabled")] = ModelBase::toJson(dpEnabled_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(isAccessControlIsSet_) {
        val[utility::conversions::to_string_t("is_access_control")] = ModelBase::toJson(isAccessControl_);
    }
    if(isNeedApprovalIsSet_) {
        val[utility::conversions::to_string_t("is_need_approval")] = ModelBase::toJson(isNeedApproval_);
    }
    if(leagueStatusIsSet_) {
        val[utility::conversions::to_string_t("league_status")] = ModelBase::toJson(leagueStatus_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(partnersIsSet_) {
        val[utility::conversions::to_string_t("partners")] = ModelBase::toJson(partners_);
    }
    if(privacyProtectionTypeIsSet_) {
        val[utility::conversions::to_string_t("privacy_protection_type")] = ModelBase::toJson(privacyProtectionType_);
    }
    if(resourceSpecCodeIsSet_) {
        val[utility::conversions::to_string_t("resource_spec_code")] = ModelBase::toJson(resourceSpecCode_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool ShowLeagueResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bcs_channel_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bcs_channel_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBcsChannelName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bcs_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bcs_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBcsIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bcs_org_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bcs_org_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBcsOrgName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("block_chain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("block_chain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockChainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("block_chain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("block_chain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockChainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dp_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dp_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDpEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_access_control"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_access_control"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAccessControl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_need_approval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_need_approval"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsNeedApproval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("league_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("league_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeagueStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("partners"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partners"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartners(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("privacy_protection_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("privacy_protection_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivacyProtectionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}


std::string ShowLeagueResponse::getBcsChannelName() const
{
    return bcsChannelName_;
}

void ShowLeagueResponse::setBcsChannelName(const std::string& value)
{
    bcsChannelName_ = value;
    bcsChannelNameIsSet_ = true;
}

bool ShowLeagueResponse::bcsChannelNameIsSet() const
{
    return bcsChannelNameIsSet_;
}

void ShowLeagueResponse::unsetbcsChannelName()
{
    bcsChannelNameIsSet_ = false;
}

std::string ShowLeagueResponse::getBcsIp() const
{
    return bcsIp_;
}

void ShowLeagueResponse::setBcsIp(const std::string& value)
{
    bcsIp_ = value;
    bcsIpIsSet_ = true;
}

bool ShowLeagueResponse::bcsIpIsSet() const
{
    return bcsIpIsSet_;
}

void ShowLeagueResponse::unsetbcsIp()
{
    bcsIpIsSet_ = false;
}

std::string ShowLeagueResponse::getBcsOrgName() const
{
    return bcsOrgName_;
}

void ShowLeagueResponse::setBcsOrgName(const std::string& value)
{
    bcsOrgName_ = value;
    bcsOrgNameIsSet_ = true;
}

bool ShowLeagueResponse::bcsOrgNameIsSet() const
{
    return bcsOrgNameIsSet_;
}

void ShowLeagueResponse::unsetbcsOrgName()
{
    bcsOrgNameIsSet_ = false;
}

std::string ShowLeagueResponse::getBlockChainId() const
{
    return blockChainId_;
}

void ShowLeagueResponse::setBlockChainId(const std::string& value)
{
    blockChainId_ = value;
    blockChainIdIsSet_ = true;
}

bool ShowLeagueResponse::blockChainIdIsSet() const
{
    return blockChainIdIsSet_;
}

void ShowLeagueResponse::unsetblockChainId()
{
    blockChainIdIsSet_ = false;
}

std::string ShowLeagueResponse::getBlockChainName() const
{
    return blockChainName_;
}

void ShowLeagueResponse::setBlockChainName(const std::string& value)
{
    blockChainName_ = value;
    blockChainNameIsSet_ = true;
}

bool ShowLeagueResponse::blockChainNameIsSet() const
{
    return blockChainNameIsSet_;
}

void ShowLeagueResponse::unsetblockChainName()
{
    blockChainNameIsSet_ = false;
}

utility::datetime ShowLeagueResponse::getCreateDate() const
{
    return createDate_;
}

void ShowLeagueResponse::setCreateDate(const utility::datetime& value)
{
    createDate_ = value;
    createDateIsSet_ = true;
}

bool ShowLeagueResponse::createDateIsSet() const
{
    return createDateIsSet_;
}

void ShowLeagueResponse::unsetcreateDate()
{
    createDateIsSet_ = false;
}

int64_t ShowLeagueResponse::getCreateTime() const
{
    return createTime_;
}

void ShowLeagueResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowLeagueResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowLeagueResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowLeagueResponse::getCreatorId() const
{
    return creatorId_;
}

void ShowLeagueResponse::setCreatorId(const std::string& value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool ShowLeagueResponse::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void ShowLeagueResponse::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

std::string ShowLeagueResponse::getCreatorName() const
{
    return creatorName_;
}

void ShowLeagueResponse::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool ShowLeagueResponse::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void ShowLeagueResponse::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string ShowLeagueResponse::getDescription() const
{
    return description_;
}

void ShowLeagueResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowLeagueResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowLeagueResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool ShowLeagueResponse::isDpEnabled() const
{
    return dpEnabled_;
}

void ShowLeagueResponse::setDpEnabled(bool value)
{
    dpEnabled_ = value;
    dpEnabledIsSet_ = true;
}

bool ShowLeagueResponse::dpEnabledIsSet() const
{
    return dpEnabledIsSet_;
}

void ShowLeagueResponse::unsetdpEnabled()
{
    dpEnabledIsSet_ = false;
}

int64_t ShowLeagueResponse::getExpireTime() const
{
    return expireTime_;
}

void ShowLeagueResponse::setExpireTime(int64_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool ShowLeagueResponse::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void ShowLeagueResponse::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

std::string ShowLeagueResponse::getId() const
{
    return id_;
}

void ShowLeagueResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowLeagueResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowLeagueResponse::unsetid()
{
    idIsSet_ = false;
}

bool ShowLeagueResponse::isIsAccessControl() const
{
    return isAccessControl_;
}

void ShowLeagueResponse::setIsAccessControl(bool value)
{
    isAccessControl_ = value;
    isAccessControlIsSet_ = true;
}

bool ShowLeagueResponse::isAccessControlIsSet() const
{
    return isAccessControlIsSet_;
}

void ShowLeagueResponse::unsetisAccessControl()
{
    isAccessControlIsSet_ = false;
}

bool ShowLeagueResponse::isIsNeedApproval() const
{
    return isNeedApproval_;
}

void ShowLeagueResponse::setIsNeedApproval(bool value)
{
    isNeedApproval_ = value;
    isNeedApprovalIsSet_ = true;
}

bool ShowLeagueResponse::isNeedApprovalIsSet() const
{
    return isNeedApprovalIsSet_;
}

void ShowLeagueResponse::unsetisNeedApproval()
{
    isNeedApprovalIsSet_ = false;
}

std::string ShowLeagueResponse::getLeagueStatus() const
{
    return leagueStatus_;
}

void ShowLeagueResponse::setLeagueStatus(const std::string& value)
{
    leagueStatus_ = value;
    leagueStatusIsSet_ = true;
}

bool ShowLeagueResponse::leagueStatusIsSet() const
{
    return leagueStatusIsSet_;
}

void ShowLeagueResponse::unsetleagueStatus()
{
    leagueStatusIsSet_ = false;
}

std::string ShowLeagueResponse::getName() const
{
    return name_;
}

void ShowLeagueResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowLeagueResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowLeagueResponse::unsetname()
{
    nameIsSet_ = false;
}

int64_t ShowLeagueResponse::getPartners() const
{
    return partners_;
}

void ShowLeagueResponse::setPartners(int64_t value)
{
    partners_ = value;
    partnersIsSet_ = true;
}

bool ShowLeagueResponse::partnersIsSet() const
{
    return partnersIsSet_;
}

void ShowLeagueResponse::unsetpartners()
{
    partnersIsSet_ = false;
}

std::string ShowLeagueResponse::getPrivacyProtectionType() const
{
    return privacyProtectionType_;
}

void ShowLeagueResponse::setPrivacyProtectionType(const std::string& value)
{
    privacyProtectionType_ = value;
    privacyProtectionTypeIsSet_ = true;
}

bool ShowLeagueResponse::privacyProtectionTypeIsSet() const
{
    return privacyProtectionTypeIsSet_;
}

void ShowLeagueResponse::unsetprivacyProtectionType()
{
    privacyProtectionTypeIsSet_ = false;
}

std::string ShowLeagueResponse::getResourceSpecCode() const
{
    return resourceSpecCode_;
}

void ShowLeagueResponse::setResourceSpecCode(const std::string& value)
{
    resourceSpecCode_ = value;
    resourceSpecCodeIsSet_ = true;
}

bool ShowLeagueResponse::resourceSpecCodeIsSet() const
{
    return resourceSpecCodeIsSet_;
}

void ShowLeagueResponse::unsetresourceSpecCode()
{
    resourceSpecCodeIsSet_ = false;
}

std::string ShowLeagueResponse::getType() const
{
    return type_;
}

void ShowLeagueResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowLeagueResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowLeagueResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowLeagueResponse::getVersion() const
{
    return version_;
}

void ShowLeagueResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowLeagueResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ShowLeagueResponse::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


