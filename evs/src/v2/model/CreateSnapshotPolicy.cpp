

#include "huaweicloud/evs/v2/model/CreateSnapshotPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CreateSnapshotPolicy::CreateSnapshotPolicy()
{
    name_ = "";
    nameIsSet_ = false;
    repeatWeekdaysIsSet_ = false;
    repeatIntervalDays_ = 0;
    repeatIntervalDaysIsSet_ = false;
    timePointsIsSet_ = false;
    retentionDays_ = 0;
    retentionDaysIsSet_ = false;
    tagsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

CreateSnapshotPolicy::~CreateSnapshotPolicy() = default;

void CreateSnapshotPolicy::validate()
{
}

web::json::value CreateSnapshotPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(repeatWeekdaysIsSet_) {
        val[utility::conversions::to_string_t("repeat_weekdays")] = ModelBase::toJson(repeatWeekdays_);
    }
    if(repeatIntervalDaysIsSet_) {
        val[utility::conversions::to_string_t("repeat_interval_days")] = ModelBase::toJson(repeatIntervalDays_);
    }
    if(timePointsIsSet_) {
        val[utility::conversions::to_string_t("time_points")] = ModelBase::toJson(timePoints_);
    }
    if(retentionDaysIsSet_) {
        val[utility::conversions::to_string_t("retention_days")] = ModelBase::toJson(retentionDays_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool CreateSnapshotPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repeat_weekdays"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repeat_weekdays"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepeatWeekdays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repeat_interval_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repeat_interval_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepeatIntervalDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_points"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_points"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimePoints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retention_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retention_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}


std::string CreateSnapshotPolicy::getName() const
{
    return name_;
}

void CreateSnapshotPolicy::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateSnapshotPolicy::nameIsSet() const
{
    return nameIsSet_;
}

void CreateSnapshotPolicy::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& CreateSnapshotPolicy::getRepeatWeekdays()
{
    return repeatWeekdays_;
}

void CreateSnapshotPolicy::setRepeatWeekdays(const std::vector<std::string>& value)
{
    repeatWeekdays_ = value;
    repeatWeekdaysIsSet_ = true;
}

bool CreateSnapshotPolicy::repeatWeekdaysIsSet() const
{
    return repeatWeekdaysIsSet_;
}

void CreateSnapshotPolicy::unsetrepeatWeekdays()
{
    repeatWeekdaysIsSet_ = false;
}

int32_t CreateSnapshotPolicy::getRepeatIntervalDays() const
{
    return repeatIntervalDays_;
}

void CreateSnapshotPolicy::setRepeatIntervalDays(int32_t value)
{
    repeatIntervalDays_ = value;
    repeatIntervalDaysIsSet_ = true;
}

bool CreateSnapshotPolicy::repeatIntervalDaysIsSet() const
{
    return repeatIntervalDaysIsSet_;
}

void CreateSnapshotPolicy::unsetrepeatIntervalDays()
{
    repeatIntervalDaysIsSet_ = false;
}

std::vector<std::string>& CreateSnapshotPolicy::getTimePoints()
{
    return timePoints_;
}

void CreateSnapshotPolicy::setTimePoints(const std::vector<std::string>& value)
{
    timePoints_ = value;
    timePointsIsSet_ = true;
}

bool CreateSnapshotPolicy::timePointsIsSet() const
{
    return timePointsIsSet_;
}

void CreateSnapshotPolicy::unsettimePoints()
{
    timePointsIsSet_ = false;
}

int32_t CreateSnapshotPolicy::getRetentionDays() const
{
    return retentionDays_;
}

void CreateSnapshotPolicy::setRetentionDays(int32_t value)
{
    retentionDays_ = value;
    retentionDaysIsSet_ = true;
}

bool CreateSnapshotPolicy::retentionDaysIsSet() const
{
    return retentionDaysIsSet_;
}

void CreateSnapshotPolicy::unsetretentionDays()
{
    retentionDaysIsSet_ = false;
}

std::map<std::string, std::string>& CreateSnapshotPolicy::getTags()
{
    return tags_;
}

void CreateSnapshotPolicy::setTags(const std::map<std::string, std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateSnapshotPolicy::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateSnapshotPolicy::unsettags()
{
    tagsIsSet_ = false;
}

std::string CreateSnapshotPolicy::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateSnapshotPolicy::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateSnapshotPolicy::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateSnapshotPolicy::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


