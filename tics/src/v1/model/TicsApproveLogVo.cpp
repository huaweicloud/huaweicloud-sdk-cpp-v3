

#include "huaweicloud/tics/v1/model/TicsApproveLogVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




TicsApproveLogVo::TicsApproveLogVo()
{
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    creatorId_ = "";
    creatorIdIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    domainAlias_ = "";
    domainAliasIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    leagueIsSet_ = false;
    leagueId_ = "";
    leagueIdIsSet_ = false;
    leagueName_ = "";
    leagueNameIsSet_ = false;
    partnerId_ = "";
    partnerIdIsSet_ = false;
    partnerStatus_ = "";
    partnerStatusIsSet_ = false;
    partnersIsSet_ = false;
    updateId_ = "";
    updateIdIsSet_ = false;
    updateName_ = "";
    updateNameIsSet_ = false;
    updateTime_ = utility::datetime();
    updateTimeIsSet_ = false;
}

TicsApproveLogVo::~TicsApproveLogVo() = default;

void TicsApproveLogVo::validate()
{
}

web::json::value TicsApproveLogVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(creatorIdIsSet_) {
        val[utility::conversions::to_string_t("creator_id")] = ModelBase::toJson(creatorId_);
    }
    if(creatorNameIsSet_) {
        val[utility::conversions::to_string_t("creator_name")] = ModelBase::toJson(creatorName_);
    }
    if(domainAliasIsSet_) {
        val[utility::conversions::to_string_t("domain_alias")] = ModelBase::toJson(domainAlias_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(leagueIsSet_) {
        val[utility::conversions::to_string_t("league")] = ModelBase::toJson(league_);
    }
    if(leagueIdIsSet_) {
        val[utility::conversions::to_string_t("league_id")] = ModelBase::toJson(leagueId_);
    }
    if(leagueNameIsSet_) {
        val[utility::conversions::to_string_t("league_name")] = ModelBase::toJson(leagueName_);
    }
    if(partnerIdIsSet_) {
        val[utility::conversions::to_string_t("partner_id")] = ModelBase::toJson(partnerId_);
    }
    if(partnerStatusIsSet_) {
        val[utility::conversions::to_string_t("partner_status")] = ModelBase::toJson(partnerStatus_);
    }
    if(partnersIsSet_) {
        val[utility::conversions::to_string_t("partners")] = ModelBase::toJson(partners_);
    }
    if(updateIdIsSet_) {
        val[utility::conversions::to_string_t("update_id")] = ModelBase::toJson(updateId_);
    }
    if(updateNameIsSet_) {
        val[utility::conversions::to_string_t("update_name")] = ModelBase::toJson(updateName_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool TicsApproveLogVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
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
    if(val.has_field(utility::conversions::to_string_t("domain_alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("league"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("league"));
        if(!fieldValue.is_null())
        {
            TicsLeagueNoticeVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeague(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("league_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("league_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeagueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("league_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("league_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeagueName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("partner_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partner_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartnerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("partner_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partner_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartnerStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("partners"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partners"));
        if(!fieldValue.is_null())
        {
            std::vector<TicsLeaguePartnerVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartners(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


utility::datetime TicsApproveLogVo::getCreateTime() const
{
    return createTime_;
}

void TicsApproveLogVo::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TicsApproveLogVo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TicsApproveLogVo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TicsApproveLogVo::getCreatorId() const
{
    return creatorId_;
}

void TicsApproveLogVo::setCreatorId(const std::string& value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool TicsApproveLogVo::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void TicsApproveLogVo::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

std::string TicsApproveLogVo::getCreatorName() const
{
    return creatorName_;
}

void TicsApproveLogVo::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool TicsApproveLogVo::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void TicsApproveLogVo::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string TicsApproveLogVo::getDomainAlias() const
{
    return domainAlias_;
}

void TicsApproveLogVo::setDomainAlias(const std::string& value)
{
    domainAlias_ = value;
    domainAliasIsSet_ = true;
}

bool TicsApproveLogVo::domainAliasIsSet() const
{
    return domainAliasIsSet_;
}

void TicsApproveLogVo::unsetdomainAlias()
{
    domainAliasIsSet_ = false;
}

std::string TicsApproveLogVo::getDomainName() const
{
    return domainName_;
}

void TicsApproveLogVo::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool TicsApproveLogVo::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void TicsApproveLogVo::unsetdomainName()
{
    domainNameIsSet_ = false;
}

TicsLeagueNoticeVo TicsApproveLogVo::getLeague() const
{
    return league_;
}

void TicsApproveLogVo::setLeague(const TicsLeagueNoticeVo& value)
{
    league_ = value;
    leagueIsSet_ = true;
}

bool TicsApproveLogVo::leagueIsSet() const
{
    return leagueIsSet_;
}

void TicsApproveLogVo::unsetleague()
{
    leagueIsSet_ = false;
}

std::string TicsApproveLogVo::getLeagueId() const
{
    return leagueId_;
}

void TicsApproveLogVo::setLeagueId(const std::string& value)
{
    leagueId_ = value;
    leagueIdIsSet_ = true;
}

bool TicsApproveLogVo::leagueIdIsSet() const
{
    return leagueIdIsSet_;
}

void TicsApproveLogVo::unsetleagueId()
{
    leagueIdIsSet_ = false;
}

std::string TicsApproveLogVo::getLeagueName() const
{
    return leagueName_;
}

void TicsApproveLogVo::setLeagueName(const std::string& value)
{
    leagueName_ = value;
    leagueNameIsSet_ = true;
}

bool TicsApproveLogVo::leagueNameIsSet() const
{
    return leagueNameIsSet_;
}

void TicsApproveLogVo::unsetleagueName()
{
    leagueNameIsSet_ = false;
}

std::string TicsApproveLogVo::getPartnerId() const
{
    return partnerId_;
}

void TicsApproveLogVo::setPartnerId(const std::string& value)
{
    partnerId_ = value;
    partnerIdIsSet_ = true;
}

bool TicsApproveLogVo::partnerIdIsSet() const
{
    return partnerIdIsSet_;
}

void TicsApproveLogVo::unsetpartnerId()
{
    partnerIdIsSet_ = false;
}

std::string TicsApproveLogVo::getPartnerStatus() const
{
    return partnerStatus_;
}

void TicsApproveLogVo::setPartnerStatus(const std::string& value)
{
    partnerStatus_ = value;
    partnerStatusIsSet_ = true;
}

bool TicsApproveLogVo::partnerStatusIsSet() const
{
    return partnerStatusIsSet_;
}

void TicsApproveLogVo::unsetpartnerStatus()
{
    partnerStatusIsSet_ = false;
}

std::vector<TicsLeaguePartnerVo>& TicsApproveLogVo::getPartners()
{
    return partners_;
}

void TicsApproveLogVo::setPartners(const std::vector<TicsLeaguePartnerVo>& value)
{
    partners_ = value;
    partnersIsSet_ = true;
}

bool TicsApproveLogVo::partnersIsSet() const
{
    return partnersIsSet_;
}

void TicsApproveLogVo::unsetpartners()
{
    partnersIsSet_ = false;
}

std::string TicsApproveLogVo::getUpdateId() const
{
    return updateId_;
}

void TicsApproveLogVo::setUpdateId(const std::string& value)
{
    updateId_ = value;
    updateIdIsSet_ = true;
}

bool TicsApproveLogVo::updateIdIsSet() const
{
    return updateIdIsSet_;
}

void TicsApproveLogVo::unsetupdateId()
{
    updateIdIsSet_ = false;
}

std::string TicsApproveLogVo::getUpdateName() const
{
    return updateName_;
}

void TicsApproveLogVo::setUpdateName(const std::string& value)
{
    updateName_ = value;
    updateNameIsSet_ = true;
}

bool TicsApproveLogVo::updateNameIsSet() const
{
    return updateNameIsSet_;
}

void TicsApproveLogVo::unsetupdateName()
{
    updateNameIsSet_ = false;
}

utility::datetime TicsApproveLogVo::getUpdateTime() const
{
    return updateTime_;
}

void TicsApproveLogVo::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool TicsApproveLogVo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void TicsApproveLogVo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


