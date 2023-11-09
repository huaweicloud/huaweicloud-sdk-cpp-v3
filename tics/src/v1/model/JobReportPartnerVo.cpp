

#include "huaweicloud/tics/v1/model/JobReportPartnerVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




JobReportPartnerVo::JobReportPartnerVo()
{
    agentName_ = "";
    agentNameIsSet_ = false;
    dataOutputCnt_ = 0L;
    dataOutputCntIsSet_ = false;
    datasetName_ = "";
    datasetNameIsSet_ = false;
    partnerDomainAlias_ = "";
    partnerDomainAliasIsSet_ = false;
    partnerDomainName_ = "";
    partnerDomainNameIsSet_ = false;
}

JobReportPartnerVo::~JobReportPartnerVo() = default;

void JobReportPartnerVo::validate()
{
}

web::json::value JobReportPartnerVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agentNameIsSet_) {
        val[utility::conversions::to_string_t("agent_name")] = ModelBase::toJson(agentName_);
    }
    if(dataOutputCntIsSet_) {
        val[utility::conversions::to_string_t("data_output_cnt")] = ModelBase::toJson(dataOutputCnt_);
    }
    if(datasetNameIsSet_) {
        val[utility::conversions::to_string_t("dataset_name")] = ModelBase::toJson(datasetName_);
    }
    if(partnerDomainAliasIsSet_) {
        val[utility::conversions::to_string_t("partner_domain_alias")] = ModelBase::toJson(partnerDomainAlias_);
    }
    if(partnerDomainNameIsSet_) {
        val[utility::conversions::to_string_t("partner_domain_name")] = ModelBase::toJson(partnerDomainName_);
    }

    return val;
}
bool JobReportPartnerVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agent_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_output_cnt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_output_cnt"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataOutputCnt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dataset_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataset_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatasetName(refVal);
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
    return ok;
}


std::string JobReportPartnerVo::getAgentName() const
{
    return agentName_;
}

void JobReportPartnerVo::setAgentName(const std::string& value)
{
    agentName_ = value;
    agentNameIsSet_ = true;
}

bool JobReportPartnerVo::agentNameIsSet() const
{
    return agentNameIsSet_;
}

void JobReportPartnerVo::unsetagentName()
{
    agentNameIsSet_ = false;
}

int64_t JobReportPartnerVo::getDataOutputCnt() const
{
    return dataOutputCnt_;
}

void JobReportPartnerVo::setDataOutputCnt(int64_t value)
{
    dataOutputCnt_ = value;
    dataOutputCntIsSet_ = true;
}

bool JobReportPartnerVo::dataOutputCntIsSet() const
{
    return dataOutputCntIsSet_;
}

void JobReportPartnerVo::unsetdataOutputCnt()
{
    dataOutputCntIsSet_ = false;
}

std::string JobReportPartnerVo::getDatasetName() const
{
    return datasetName_;
}

void JobReportPartnerVo::setDatasetName(const std::string& value)
{
    datasetName_ = value;
    datasetNameIsSet_ = true;
}

bool JobReportPartnerVo::datasetNameIsSet() const
{
    return datasetNameIsSet_;
}

void JobReportPartnerVo::unsetdatasetName()
{
    datasetNameIsSet_ = false;
}

std::string JobReportPartnerVo::getPartnerDomainAlias() const
{
    return partnerDomainAlias_;
}

void JobReportPartnerVo::setPartnerDomainAlias(const std::string& value)
{
    partnerDomainAlias_ = value;
    partnerDomainAliasIsSet_ = true;
}

bool JobReportPartnerVo::partnerDomainAliasIsSet() const
{
    return partnerDomainAliasIsSet_;
}

void JobReportPartnerVo::unsetpartnerDomainAlias()
{
    partnerDomainAliasIsSet_ = false;
}

std::string JobReportPartnerVo::getPartnerDomainName() const
{
    return partnerDomainName_;
}

void JobReportPartnerVo::setPartnerDomainName(const std::string& value)
{
    partnerDomainName_ = value;
    partnerDomainNameIsSet_ = true;
}

bool JobReportPartnerVo::partnerDomainNameIsSet() const
{
    return partnerDomainNameIsSet_;
}

void JobReportPartnerVo::unsetpartnerDomainName()
{
    partnerDomainNameIsSet_ = false;
}

}
}
}
}
}


