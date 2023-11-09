

#include "huaweicloud/tics/v1/model/JobReportEnvVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




JobReportEnvVo::JobReportEnvVo()
{
    aggName_ = "";
    aggNameIsSet_ = false;
    leagueId_ = "";
    leagueIdIsSet_ = false;
    leagueName_ = "";
    leagueNameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
}

JobReportEnvVo::~JobReportEnvVo() = default;

void JobReportEnvVo::validate()
{
}

web::json::value JobReportEnvVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aggNameIsSet_) {
        val[utility::conversions::to_string_t("agg_name")] = ModelBase::toJson(aggName_);
    }
    if(leagueIdIsSet_) {
        val[utility::conversions::to_string_t("league_id")] = ModelBase::toJson(leagueId_);
    }
    if(leagueNameIsSet_) {
        val[utility::conversions::to_string_t("league_name")] = ModelBase::toJson(leagueName_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }

    return val;
}
bool JobReportEnvVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agg_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agg_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAggName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    return ok;
}


std::string JobReportEnvVo::getAggName() const
{
    return aggName_;
}

void JobReportEnvVo::setAggName(const std::string& value)
{
    aggName_ = value;
    aggNameIsSet_ = true;
}

bool JobReportEnvVo::aggNameIsSet() const
{
    return aggNameIsSet_;
}

void JobReportEnvVo::unsetaggName()
{
    aggNameIsSet_ = false;
}

std::string JobReportEnvVo::getLeagueId() const
{
    return leagueId_;
}

void JobReportEnvVo::setLeagueId(const std::string& value)
{
    leagueId_ = value;
    leagueIdIsSet_ = true;
}

bool JobReportEnvVo::leagueIdIsSet() const
{
    return leagueIdIsSet_;
}

void JobReportEnvVo::unsetleagueId()
{
    leagueIdIsSet_ = false;
}

std::string JobReportEnvVo::getLeagueName() const
{
    return leagueName_;
}

void JobReportEnvVo::setLeagueName(const std::string& value)
{
    leagueName_ = value;
    leagueNameIsSet_ = true;
}

bool JobReportEnvVo::leagueNameIsSet() const
{
    return leagueNameIsSet_;
}

void JobReportEnvVo::unsetleagueName()
{
    leagueNameIsSet_ = false;
}

std::string JobReportEnvVo::getProjectId() const
{
    return projectId_;
}

void JobReportEnvVo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool JobReportEnvVo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void JobReportEnvVo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string JobReportEnvVo::getRegionId() const
{
    return regionId_;
}

void JobReportEnvVo::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool JobReportEnvVo::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void JobReportEnvVo::unsetregionId()
{
    regionIdIsSet_ = false;
}

}
}
}
}
}


