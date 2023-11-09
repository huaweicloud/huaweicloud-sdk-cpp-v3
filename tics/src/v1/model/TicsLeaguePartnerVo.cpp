

#include "huaweicloud/tics/v1/model/TicsLeaguePartnerVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




TicsLeaguePartnerVo::TicsLeaguePartnerVo()
{
    id_ = "";
    idIsSet_ = false;
    partnerDomainAlias_ = "";
    partnerDomainAliasIsSet_ = false;
    partnerDomainName_ = "";
    partnerDomainNameIsSet_ = false;
    partnerStatus_ = "";
    partnerStatusIsSet_ = false;
}

TicsLeaguePartnerVo::~TicsLeaguePartnerVo() = default;

void TicsLeaguePartnerVo::validate()
{
}

web::json::value TicsLeaguePartnerVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(partnerDomainAliasIsSet_) {
        val[utility::conversions::to_string_t("partner_domain_alias")] = ModelBase::toJson(partnerDomainAlias_);
    }
    if(partnerDomainNameIsSet_) {
        val[utility::conversions::to_string_t("partner_domain_name")] = ModelBase::toJson(partnerDomainName_);
    }
    if(partnerStatusIsSet_) {
        val[utility::conversions::to_string_t("partner_status")] = ModelBase::toJson(partnerStatus_);
    }

    return val;
}
bool TicsLeaguePartnerVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("partner_domain_alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partner_domain_alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartnerDomainAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("partner_domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partner_domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartnerDomainName(refVal);
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
    return ok;
}


std::string TicsLeaguePartnerVo::getId() const
{
    return id_;
}

void TicsLeaguePartnerVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TicsLeaguePartnerVo::idIsSet() const
{
    return idIsSet_;
}

void TicsLeaguePartnerVo::unsetid()
{
    idIsSet_ = false;
}

std::string TicsLeaguePartnerVo::getPartnerDomainAlias() const
{
    return partnerDomainAlias_;
}

void TicsLeaguePartnerVo::setPartnerDomainAlias(const std::string& value)
{
    partnerDomainAlias_ = value;
    partnerDomainAliasIsSet_ = true;
}

bool TicsLeaguePartnerVo::partnerDomainAliasIsSet() const
{
    return partnerDomainAliasIsSet_;
}

void TicsLeaguePartnerVo::unsetpartnerDomainAlias()
{
    partnerDomainAliasIsSet_ = false;
}

std::string TicsLeaguePartnerVo::getPartnerDomainName() const
{
    return partnerDomainName_;
}

void TicsLeaguePartnerVo::setPartnerDomainName(const std::string& value)
{
    partnerDomainName_ = value;
    partnerDomainNameIsSet_ = true;
}

bool TicsLeaguePartnerVo::partnerDomainNameIsSet() const
{
    return partnerDomainNameIsSet_;
}

void TicsLeaguePartnerVo::unsetpartnerDomainName()
{
    partnerDomainNameIsSet_ = false;
}

std::string TicsLeaguePartnerVo::getPartnerStatus() const
{
    return partnerStatus_;
}

void TicsLeaguePartnerVo::setPartnerStatus(const std::string& value)
{
    partnerStatus_ = value;
    partnerStatusIsSet_ = true;
}

bool TicsLeaguePartnerVo::partnerStatusIsSet() const
{
    return partnerStatusIsSet_;
}

void TicsLeaguePartnerVo::unsetpartnerStatus()
{
    partnerStatusIsSet_ = false;
}

}
}
}
}
}


