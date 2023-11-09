

#include "huaweicloud/tics/v1/model/TicsLeagueNoticeVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




TicsLeagueNoticeVo::TicsLeagueNoticeVo()
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
    createTime_ = 0L;
    createTimeIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    expireTime_ = 0L;
    expireTimeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    partners_ = 0L;
    partnersIsSet_ = false;
}

TicsLeagueNoticeVo::~TicsLeagueNoticeVo() = default;

void TicsLeagueNoticeVo::validate()
{
}

web::json::value TicsLeagueNoticeVo::toJson() const
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
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(creatorNameIsSet_) {
        val[utility::conversions::to_string_t("creator_name")] = ModelBase::toJson(creatorName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(partnersIsSet_) {
        val[utility::conversions::to_string_t("partners")] = ModelBase::toJson(partners_);
    }

    return val;
}
bool TicsLeagueNoticeVo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
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
    return ok;
}


std::string TicsLeagueNoticeVo::getBcsChannelName() const
{
    return bcsChannelName_;
}

void TicsLeagueNoticeVo::setBcsChannelName(const std::string& value)
{
    bcsChannelName_ = value;
    bcsChannelNameIsSet_ = true;
}

bool TicsLeagueNoticeVo::bcsChannelNameIsSet() const
{
    return bcsChannelNameIsSet_;
}

void TicsLeagueNoticeVo::unsetbcsChannelName()
{
    bcsChannelNameIsSet_ = false;
}

std::string TicsLeagueNoticeVo::getBcsIp() const
{
    return bcsIp_;
}

void TicsLeagueNoticeVo::setBcsIp(const std::string& value)
{
    bcsIp_ = value;
    bcsIpIsSet_ = true;
}

bool TicsLeagueNoticeVo::bcsIpIsSet() const
{
    return bcsIpIsSet_;
}

void TicsLeagueNoticeVo::unsetbcsIp()
{
    bcsIpIsSet_ = false;
}

std::string TicsLeagueNoticeVo::getBcsOrgName() const
{
    return bcsOrgName_;
}

void TicsLeagueNoticeVo::setBcsOrgName(const std::string& value)
{
    bcsOrgName_ = value;
    bcsOrgNameIsSet_ = true;
}

bool TicsLeagueNoticeVo::bcsOrgNameIsSet() const
{
    return bcsOrgNameIsSet_;
}

void TicsLeagueNoticeVo::unsetbcsOrgName()
{
    bcsOrgNameIsSet_ = false;
}

std::string TicsLeagueNoticeVo::getBlockChainId() const
{
    return blockChainId_;
}

void TicsLeagueNoticeVo::setBlockChainId(const std::string& value)
{
    blockChainId_ = value;
    blockChainIdIsSet_ = true;
}

bool TicsLeagueNoticeVo::blockChainIdIsSet() const
{
    return blockChainIdIsSet_;
}

void TicsLeagueNoticeVo::unsetblockChainId()
{
    blockChainIdIsSet_ = false;
}

std::string TicsLeagueNoticeVo::getBlockChainName() const
{
    return blockChainName_;
}

void TicsLeagueNoticeVo::setBlockChainName(const std::string& value)
{
    blockChainName_ = value;
    blockChainNameIsSet_ = true;
}

bool TicsLeagueNoticeVo::blockChainNameIsSet() const
{
    return blockChainNameIsSet_;
}

void TicsLeagueNoticeVo::unsetblockChainName()
{
    blockChainNameIsSet_ = false;
}

int64_t TicsLeagueNoticeVo::getCreateTime() const
{
    return createTime_;
}

void TicsLeagueNoticeVo::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TicsLeagueNoticeVo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TicsLeagueNoticeVo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TicsLeagueNoticeVo::getCreatorName() const
{
    return creatorName_;
}

void TicsLeagueNoticeVo::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool TicsLeagueNoticeVo::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void TicsLeagueNoticeVo::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string TicsLeagueNoticeVo::getDescription() const
{
    return description_;
}

void TicsLeagueNoticeVo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TicsLeagueNoticeVo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TicsLeagueNoticeVo::unsetdescription()
{
    descriptionIsSet_ = false;
}

int64_t TicsLeagueNoticeVo::getExpireTime() const
{
    return expireTime_;
}

void TicsLeagueNoticeVo::setExpireTime(int64_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool TicsLeagueNoticeVo::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void TicsLeagueNoticeVo::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

std::string TicsLeagueNoticeVo::getId() const
{
    return id_;
}

void TicsLeagueNoticeVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TicsLeagueNoticeVo::idIsSet() const
{
    return idIsSet_;
}

void TicsLeagueNoticeVo::unsetid()
{
    idIsSet_ = false;
}

std::string TicsLeagueNoticeVo::getName() const
{
    return name_;
}

void TicsLeagueNoticeVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TicsLeagueNoticeVo::nameIsSet() const
{
    return nameIsSet_;
}

void TicsLeagueNoticeVo::unsetname()
{
    nameIsSet_ = false;
}

int64_t TicsLeagueNoticeVo::getPartners() const
{
    return partners_;
}

void TicsLeagueNoticeVo::setPartners(int64_t value)
{
    partners_ = value;
    partnersIsSet_ = true;
}

bool TicsLeagueNoticeVo::partnersIsSet() const
{
    return partnersIsSet_;
}

void TicsLeagueNoticeVo::unsetpartners()
{
    partnersIsSet_ = false;
}

}
}
}
}
}


