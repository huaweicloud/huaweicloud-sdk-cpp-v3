

#include "huaweicloud/tics/v1/model/LeagueDatasetStatisticsVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




LeagueDatasetStatisticsVo::LeagueDatasetStatisticsVo()
{
    datasetDomainAlias_ = "";
    datasetDomainAliasIsSet_ = false;
    datasetDomainName_ = "";
    datasetDomainNameIsSet_ = false;
    datasetId_ = "";
    datasetIdIsSet_ = false;
    datasetInterceptCnt_ = 0L;
    datasetInterceptCntIsSet_ = false;
    datasetName_ = "";
    datasetNameIsSet_ = false;
    datasetUseCnt_ = 0L;
    datasetUseCntIsSet_ = false;
}

LeagueDatasetStatisticsVo::~LeagueDatasetStatisticsVo() = default;

void LeagueDatasetStatisticsVo::validate()
{
}

web::json::value LeagueDatasetStatisticsVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(datasetDomainAliasIsSet_) {
        val[utility::conversions::to_string_t("dataset_domain_alias")] = ModelBase::toJson(datasetDomainAlias_);
    }
    if(datasetDomainNameIsSet_) {
        val[utility::conversions::to_string_t("dataset_domain_name")] = ModelBase::toJson(datasetDomainName_);
    }
    if(datasetIdIsSet_) {
        val[utility::conversions::to_string_t("dataset_id")] = ModelBase::toJson(datasetId_);
    }
    if(datasetInterceptCntIsSet_) {
        val[utility::conversions::to_string_t("dataset_intercept_cnt")] = ModelBase::toJson(datasetInterceptCnt_);
    }
    if(datasetNameIsSet_) {
        val[utility::conversions::to_string_t("dataset_name")] = ModelBase::toJson(datasetName_);
    }
    if(datasetUseCntIsSet_) {
        val[utility::conversions::to_string_t("dataset_use_cnt")] = ModelBase::toJson(datasetUseCnt_);
    }

    return val;
}
bool LeagueDatasetStatisticsVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dataset_domain_alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataset_domain_alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatasetDomainAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dataset_domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataset_domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatasetDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dataset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatasetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dataset_intercept_cnt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataset_intercept_cnt"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatasetInterceptCnt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("dataset_use_cnt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataset_use_cnt"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatasetUseCnt(refVal);
        }
    }
    return ok;
}


std::string LeagueDatasetStatisticsVo::getDatasetDomainAlias() const
{
    return datasetDomainAlias_;
}

void LeagueDatasetStatisticsVo::setDatasetDomainAlias(const std::string& value)
{
    datasetDomainAlias_ = value;
    datasetDomainAliasIsSet_ = true;
}

bool LeagueDatasetStatisticsVo::datasetDomainAliasIsSet() const
{
    return datasetDomainAliasIsSet_;
}

void LeagueDatasetStatisticsVo::unsetdatasetDomainAlias()
{
    datasetDomainAliasIsSet_ = false;
}

std::string LeagueDatasetStatisticsVo::getDatasetDomainName() const
{
    return datasetDomainName_;
}

void LeagueDatasetStatisticsVo::setDatasetDomainName(const std::string& value)
{
    datasetDomainName_ = value;
    datasetDomainNameIsSet_ = true;
}

bool LeagueDatasetStatisticsVo::datasetDomainNameIsSet() const
{
    return datasetDomainNameIsSet_;
}

void LeagueDatasetStatisticsVo::unsetdatasetDomainName()
{
    datasetDomainNameIsSet_ = false;
}

std::string LeagueDatasetStatisticsVo::getDatasetId() const
{
    return datasetId_;
}

void LeagueDatasetStatisticsVo::setDatasetId(const std::string& value)
{
    datasetId_ = value;
    datasetIdIsSet_ = true;
}

bool LeagueDatasetStatisticsVo::datasetIdIsSet() const
{
    return datasetIdIsSet_;
}

void LeagueDatasetStatisticsVo::unsetdatasetId()
{
    datasetIdIsSet_ = false;
}

int64_t LeagueDatasetStatisticsVo::getDatasetInterceptCnt() const
{
    return datasetInterceptCnt_;
}

void LeagueDatasetStatisticsVo::setDatasetInterceptCnt(int64_t value)
{
    datasetInterceptCnt_ = value;
    datasetInterceptCntIsSet_ = true;
}

bool LeagueDatasetStatisticsVo::datasetInterceptCntIsSet() const
{
    return datasetInterceptCntIsSet_;
}

void LeagueDatasetStatisticsVo::unsetdatasetInterceptCnt()
{
    datasetInterceptCntIsSet_ = false;
}

std::string LeagueDatasetStatisticsVo::getDatasetName() const
{
    return datasetName_;
}

void LeagueDatasetStatisticsVo::setDatasetName(const std::string& value)
{
    datasetName_ = value;
    datasetNameIsSet_ = true;
}

bool LeagueDatasetStatisticsVo::datasetNameIsSet() const
{
    return datasetNameIsSet_;
}

void LeagueDatasetStatisticsVo::unsetdatasetName()
{
    datasetNameIsSet_ = false;
}

int64_t LeagueDatasetStatisticsVo::getDatasetUseCnt() const
{
    return datasetUseCnt_;
}

void LeagueDatasetStatisticsVo::setDatasetUseCnt(int64_t value)
{
    datasetUseCnt_ = value;
    datasetUseCntIsSet_ = true;
}

bool LeagueDatasetStatisticsVo::datasetUseCntIsSet() const
{
    return datasetUseCntIsSet_;
}

void LeagueDatasetStatisticsVo::unsetdatasetUseCnt()
{
    datasetUseCntIsSet_ = false;
}

}
}
}
}
}


