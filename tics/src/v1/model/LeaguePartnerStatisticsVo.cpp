

#include "huaweicloud/tics/v1/model/LeaguePartnerStatisticsVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




LeaguePartnerStatisticsVo::LeaguePartnerStatisticsVo()
{
    partnerAccessCnt_ = 0L;
    partnerAccessCntIsSet_ = false;
    partnerDomainAlias_ = "";
    partnerDomainAliasIsSet_ = false;
    partnerDomainName_ = "";
    partnerDomainNameIsSet_ = false;
    partnerJobCnt_ = 0L;
    partnerJobCntIsSet_ = false;
    partnerJobInsCnt_ = 0L;
    partnerJobInsCntIsSet_ = false;
    partnerJobInsFailCnt_ = 0L;
    partnerJobInsFailCntIsSet_ = false;
    partnerJobInsInterceptCnt_ = 0L;
    partnerJobInsInterceptCntIsSet_ = false;
    partnerJobInsSuccessCnt_ = 0L;
    partnerJobInsSuccessCntIsSet_ = false;
}

LeaguePartnerStatisticsVo::~LeaguePartnerStatisticsVo() = default;

void LeaguePartnerStatisticsVo::validate()
{
}

web::json::value LeaguePartnerStatisticsVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(partnerAccessCntIsSet_) {
        val[utility::conversions::to_string_t("partner_access_cnt")] = ModelBase::toJson(partnerAccessCnt_);
    }
    if(partnerDomainAliasIsSet_) {
        val[utility::conversions::to_string_t("partner_domain_alias")] = ModelBase::toJson(partnerDomainAlias_);
    }
    if(partnerDomainNameIsSet_) {
        val[utility::conversions::to_string_t("partner_domain_name")] = ModelBase::toJson(partnerDomainName_);
    }
    if(partnerJobCntIsSet_) {
        val[utility::conversions::to_string_t("partner_job_cnt")] = ModelBase::toJson(partnerJobCnt_);
    }
    if(partnerJobInsCntIsSet_) {
        val[utility::conversions::to_string_t("partner_job_ins_cnt")] = ModelBase::toJson(partnerJobInsCnt_);
    }
    if(partnerJobInsFailCntIsSet_) {
        val[utility::conversions::to_string_t("partner_job_ins_fail_cnt")] = ModelBase::toJson(partnerJobInsFailCnt_);
    }
    if(partnerJobInsInterceptCntIsSet_) {
        val[utility::conversions::to_string_t("partner_job_ins_intercept_cnt")] = ModelBase::toJson(partnerJobInsInterceptCnt_);
    }
    if(partnerJobInsSuccessCntIsSet_) {
        val[utility::conversions::to_string_t("partner_job_ins_success_cnt")] = ModelBase::toJson(partnerJobInsSuccessCnt_);
    }

    return val;
}
bool LeaguePartnerStatisticsVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("partner_access_cnt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partner_access_cnt"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartnerAccessCnt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("partner_job_cnt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partner_job_cnt"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartnerJobCnt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("partner_job_ins_cnt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partner_job_ins_cnt"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartnerJobInsCnt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("partner_job_ins_fail_cnt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partner_job_ins_fail_cnt"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartnerJobInsFailCnt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("partner_job_ins_intercept_cnt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partner_job_ins_intercept_cnt"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartnerJobInsInterceptCnt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("partner_job_ins_success_cnt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partner_job_ins_success_cnt"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartnerJobInsSuccessCnt(refVal);
        }
    }
    return ok;
}


int64_t LeaguePartnerStatisticsVo::getPartnerAccessCnt() const
{
    return partnerAccessCnt_;
}

void LeaguePartnerStatisticsVo::setPartnerAccessCnt(int64_t value)
{
    partnerAccessCnt_ = value;
    partnerAccessCntIsSet_ = true;
}

bool LeaguePartnerStatisticsVo::partnerAccessCntIsSet() const
{
    return partnerAccessCntIsSet_;
}

void LeaguePartnerStatisticsVo::unsetpartnerAccessCnt()
{
    partnerAccessCntIsSet_ = false;
}

std::string LeaguePartnerStatisticsVo::getPartnerDomainAlias() const
{
    return partnerDomainAlias_;
}

void LeaguePartnerStatisticsVo::setPartnerDomainAlias(const std::string& value)
{
    partnerDomainAlias_ = value;
    partnerDomainAliasIsSet_ = true;
}

bool LeaguePartnerStatisticsVo::partnerDomainAliasIsSet() const
{
    return partnerDomainAliasIsSet_;
}

void LeaguePartnerStatisticsVo::unsetpartnerDomainAlias()
{
    partnerDomainAliasIsSet_ = false;
}

std::string LeaguePartnerStatisticsVo::getPartnerDomainName() const
{
    return partnerDomainName_;
}

void LeaguePartnerStatisticsVo::setPartnerDomainName(const std::string& value)
{
    partnerDomainName_ = value;
    partnerDomainNameIsSet_ = true;
}

bool LeaguePartnerStatisticsVo::partnerDomainNameIsSet() const
{
    return partnerDomainNameIsSet_;
}

void LeaguePartnerStatisticsVo::unsetpartnerDomainName()
{
    partnerDomainNameIsSet_ = false;
}

int64_t LeaguePartnerStatisticsVo::getPartnerJobCnt() const
{
    return partnerJobCnt_;
}

void LeaguePartnerStatisticsVo::setPartnerJobCnt(int64_t value)
{
    partnerJobCnt_ = value;
    partnerJobCntIsSet_ = true;
}

bool LeaguePartnerStatisticsVo::partnerJobCntIsSet() const
{
    return partnerJobCntIsSet_;
}

void LeaguePartnerStatisticsVo::unsetpartnerJobCnt()
{
    partnerJobCntIsSet_ = false;
}

int64_t LeaguePartnerStatisticsVo::getPartnerJobInsCnt() const
{
    return partnerJobInsCnt_;
}

void LeaguePartnerStatisticsVo::setPartnerJobInsCnt(int64_t value)
{
    partnerJobInsCnt_ = value;
    partnerJobInsCntIsSet_ = true;
}

bool LeaguePartnerStatisticsVo::partnerJobInsCntIsSet() const
{
    return partnerJobInsCntIsSet_;
}

void LeaguePartnerStatisticsVo::unsetpartnerJobInsCnt()
{
    partnerJobInsCntIsSet_ = false;
}

int64_t LeaguePartnerStatisticsVo::getPartnerJobInsFailCnt() const
{
    return partnerJobInsFailCnt_;
}

void LeaguePartnerStatisticsVo::setPartnerJobInsFailCnt(int64_t value)
{
    partnerJobInsFailCnt_ = value;
    partnerJobInsFailCntIsSet_ = true;
}

bool LeaguePartnerStatisticsVo::partnerJobInsFailCntIsSet() const
{
    return partnerJobInsFailCntIsSet_;
}

void LeaguePartnerStatisticsVo::unsetpartnerJobInsFailCnt()
{
    partnerJobInsFailCntIsSet_ = false;
}

int64_t LeaguePartnerStatisticsVo::getPartnerJobInsInterceptCnt() const
{
    return partnerJobInsInterceptCnt_;
}

void LeaguePartnerStatisticsVo::setPartnerJobInsInterceptCnt(int64_t value)
{
    partnerJobInsInterceptCnt_ = value;
    partnerJobInsInterceptCntIsSet_ = true;
}

bool LeaguePartnerStatisticsVo::partnerJobInsInterceptCntIsSet() const
{
    return partnerJobInsInterceptCntIsSet_;
}

void LeaguePartnerStatisticsVo::unsetpartnerJobInsInterceptCnt()
{
    partnerJobInsInterceptCntIsSet_ = false;
}

int64_t LeaguePartnerStatisticsVo::getPartnerJobInsSuccessCnt() const
{
    return partnerJobInsSuccessCnt_;
}

void LeaguePartnerStatisticsVo::setPartnerJobInsSuccessCnt(int64_t value)
{
    partnerJobInsSuccessCnt_ = value;
    partnerJobInsSuccessCntIsSet_ = true;
}

bool LeaguePartnerStatisticsVo::partnerJobInsSuccessCntIsSet() const
{
    return partnerJobInsSuccessCntIsSet_;
}

void LeaguePartnerStatisticsVo::unsetpartnerJobInsSuccessCnt()
{
    partnerJobInsSuccessCntIsSet_ = false;
}

}
}
}
}
}


