

#include "huaweicloud/tics/v1/model/TicsLeagueListVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




TicsLeagueListVo::TicsLeagueListVo()
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
    expireTime_ = 0L;
    expireTimeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    leagueStatus_ = "";
    leagueStatusIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    partners_ = 0L;
    partnersIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

TicsLeagueListVo::~TicsLeagueListVo() = default;

void TicsLeagueListVo::validate()
{
}

web::json::value TicsLeagueListVo::toJson() const
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
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
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
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool TicsLeagueListVo::fromJson(const web::json::value& val)
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


std::string TicsLeagueListVo::getBcsChannelName() const
{
    return bcsChannelName_;
}

void TicsLeagueListVo::setBcsChannelName(const std::string& value)
{
    bcsChannelName_ = value;
    bcsChannelNameIsSet_ = true;
}

bool TicsLeagueListVo::bcsChannelNameIsSet() const
{
    return bcsChannelNameIsSet_;
}

void TicsLeagueListVo::unsetbcsChannelName()
{
    bcsChannelNameIsSet_ = false;
}

std::string TicsLeagueListVo::getBcsIp() const
{
    return bcsIp_;
}

void TicsLeagueListVo::setBcsIp(const std::string& value)
{
    bcsIp_ = value;
    bcsIpIsSet_ = true;
}

bool TicsLeagueListVo::bcsIpIsSet() const
{
    return bcsIpIsSet_;
}

void TicsLeagueListVo::unsetbcsIp()
{
    bcsIpIsSet_ = false;
}

std::string TicsLeagueListVo::getBcsOrgName() const
{
    return bcsOrgName_;
}

void TicsLeagueListVo::setBcsOrgName(const std::string& value)
{
    bcsOrgName_ = value;
    bcsOrgNameIsSet_ = true;
}

bool TicsLeagueListVo::bcsOrgNameIsSet() const
{
    return bcsOrgNameIsSet_;
}

void TicsLeagueListVo::unsetbcsOrgName()
{
    bcsOrgNameIsSet_ = false;
}

std::string TicsLeagueListVo::getBlockChainId() const
{
    return blockChainId_;
}

void TicsLeagueListVo::setBlockChainId(const std::string& value)
{
    blockChainId_ = value;
    blockChainIdIsSet_ = true;
}

bool TicsLeagueListVo::blockChainIdIsSet() const
{
    return blockChainIdIsSet_;
}

void TicsLeagueListVo::unsetblockChainId()
{
    blockChainIdIsSet_ = false;
}

std::string TicsLeagueListVo::getBlockChainName() const
{
    return blockChainName_;
}

void TicsLeagueListVo::setBlockChainName(const std::string& value)
{
    blockChainName_ = value;
    blockChainNameIsSet_ = true;
}

bool TicsLeagueListVo::blockChainNameIsSet() const
{
    return blockChainNameIsSet_;
}

void TicsLeagueListVo::unsetblockChainName()
{
    blockChainNameIsSet_ = false;
}

utility::datetime TicsLeagueListVo::getCreateDate() const
{
    return createDate_;
}

void TicsLeagueListVo::setCreateDate(const utility::datetime& value)
{
    createDate_ = value;
    createDateIsSet_ = true;
}

bool TicsLeagueListVo::createDateIsSet() const
{
    return createDateIsSet_;
}

void TicsLeagueListVo::unsetcreateDate()
{
    createDateIsSet_ = false;
}

int64_t TicsLeagueListVo::getCreateTime() const
{
    return createTime_;
}

void TicsLeagueListVo::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TicsLeagueListVo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TicsLeagueListVo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TicsLeagueListVo::getCreatorId() const
{
    return creatorId_;
}

void TicsLeagueListVo::setCreatorId(const std::string& value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool TicsLeagueListVo::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void TicsLeagueListVo::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

std::string TicsLeagueListVo::getCreatorName() const
{
    return creatorName_;
}

void TicsLeagueListVo::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool TicsLeagueListVo::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void TicsLeagueListVo::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

int64_t TicsLeagueListVo::getExpireTime() const
{
    return expireTime_;
}

void TicsLeagueListVo::setExpireTime(int64_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool TicsLeagueListVo::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void TicsLeagueListVo::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

std::string TicsLeagueListVo::getId() const
{
    return id_;
}

void TicsLeagueListVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TicsLeagueListVo::idIsSet() const
{
    return idIsSet_;
}

void TicsLeagueListVo::unsetid()
{
    idIsSet_ = false;
}

std::string TicsLeagueListVo::getLeagueStatus() const
{
    return leagueStatus_;
}

void TicsLeagueListVo::setLeagueStatus(const std::string& value)
{
    leagueStatus_ = value;
    leagueStatusIsSet_ = true;
}

bool TicsLeagueListVo::leagueStatusIsSet() const
{
    return leagueStatusIsSet_;
}

void TicsLeagueListVo::unsetleagueStatus()
{
    leagueStatusIsSet_ = false;
}

std::string TicsLeagueListVo::getName() const
{
    return name_;
}

void TicsLeagueListVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TicsLeagueListVo::nameIsSet() const
{
    return nameIsSet_;
}

void TicsLeagueListVo::unsetname()
{
    nameIsSet_ = false;
}

int64_t TicsLeagueListVo::getPartners() const
{
    return partners_;
}

void TicsLeagueListVo::setPartners(int64_t value)
{
    partners_ = value;
    partnersIsSet_ = true;
}

bool TicsLeagueListVo::partnersIsSet() const
{
    return partnersIsSet_;
}

void TicsLeagueListVo::unsetpartners()
{
    partnersIsSet_ = false;
}

std::string TicsLeagueListVo::getType() const
{
    return type_;
}

void TicsLeagueListVo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TicsLeagueListVo::typeIsSet() const
{
    return typeIsSet_;
}

void TicsLeagueListVo::unsettype()
{
    typeIsSet_ = false;
}

std::string TicsLeagueListVo::getVersion() const
{
    return version_;
}

void TicsLeagueListVo::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool TicsLeagueListVo::versionIsSet() const
{
    return versionIsSet_;
}

void TicsLeagueListVo::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


