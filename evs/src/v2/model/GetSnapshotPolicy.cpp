

#include "huaweicloud/evs/v2/model/GetSnapshotPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




GetSnapshotPolicy::GetSnapshotPolicy()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    repeatWeekdaysIsSet_ = false;
    repeatIntervalDays_ = 0;
    repeatIntervalDaysIsSet_ = false;
    timePointsIsSet_ = false;
    retentionDays_ = 0;
    retentionDaysIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    tagsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

GetSnapshotPolicy::~GetSnapshotPolicy() = default;

void GetSnapshotPolicy::validate()
{
}

web::json::value GetSnapshotPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
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
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool GetSnapshotPolicy::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
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


std::string GetSnapshotPolicy::getId() const
{
    return id_;
}

void GetSnapshotPolicy::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GetSnapshotPolicy::idIsSet() const
{
    return idIsSet_;
}

void GetSnapshotPolicy::unsetid()
{
    idIsSet_ = false;
}

std::string GetSnapshotPolicy::getName() const
{
    return name_;
}

void GetSnapshotPolicy::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GetSnapshotPolicy::nameIsSet() const
{
    return nameIsSet_;
}

void GetSnapshotPolicy::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& GetSnapshotPolicy::getRepeatWeekdays()
{
    return repeatWeekdays_;
}

void GetSnapshotPolicy::setRepeatWeekdays(const std::vector<std::string>& value)
{
    repeatWeekdays_ = value;
    repeatWeekdaysIsSet_ = true;
}

bool GetSnapshotPolicy::repeatWeekdaysIsSet() const
{
    return repeatWeekdaysIsSet_;
}

void GetSnapshotPolicy::unsetrepeatWeekdays()
{
    repeatWeekdaysIsSet_ = false;
}

int32_t GetSnapshotPolicy::getRepeatIntervalDays() const
{
    return repeatIntervalDays_;
}

void GetSnapshotPolicy::setRepeatIntervalDays(int32_t value)
{
    repeatIntervalDays_ = value;
    repeatIntervalDaysIsSet_ = true;
}

bool GetSnapshotPolicy::repeatIntervalDaysIsSet() const
{
    return repeatIntervalDaysIsSet_;
}

void GetSnapshotPolicy::unsetrepeatIntervalDays()
{
    repeatIntervalDaysIsSet_ = false;
}

std::vector<std::string>& GetSnapshotPolicy::getTimePoints()
{
    return timePoints_;
}

void GetSnapshotPolicy::setTimePoints(const std::vector<std::string>& value)
{
    timePoints_ = value;
    timePointsIsSet_ = true;
}

bool GetSnapshotPolicy::timePointsIsSet() const
{
    return timePointsIsSet_;
}

void GetSnapshotPolicy::unsettimePoints()
{
    timePointsIsSet_ = false;
}

int32_t GetSnapshotPolicy::getRetentionDays() const
{
    return retentionDays_;
}

void GetSnapshotPolicy::setRetentionDays(int32_t value)
{
    retentionDays_ = value;
    retentionDaysIsSet_ = true;
}

bool GetSnapshotPolicy::retentionDaysIsSet() const
{
    return retentionDaysIsSet_;
}

void GetSnapshotPolicy::unsetretentionDays()
{
    retentionDaysIsSet_ = false;
}

std::string GetSnapshotPolicy::getCreatedAt() const
{
    return createdAt_;
}

void GetSnapshotPolicy::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool GetSnapshotPolicy::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void GetSnapshotPolicy::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string GetSnapshotPolicy::getUpdatedAt() const
{
    return updatedAt_;
}

void GetSnapshotPolicy::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool GetSnapshotPolicy::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void GetSnapshotPolicy::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::map<std::string, std::string>& GetSnapshotPolicy::getTags()
{
    return tags_;
}

void GetSnapshotPolicy::setTags(const std::map<std::string, std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool GetSnapshotPolicy::tagsIsSet() const
{
    return tagsIsSet_;
}

void GetSnapshotPolicy::unsettags()
{
    tagsIsSet_ = false;
}

std::string GetSnapshotPolicy::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void GetSnapshotPolicy::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool GetSnapshotPolicy::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void GetSnapshotPolicy::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


