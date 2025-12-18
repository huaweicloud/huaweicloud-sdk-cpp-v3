

#include "huaweicloud/meeting/v1/model/PublicationResponseBase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




PublicationResponseBase::PublicationResponseBase()
{
    id_ = "";
    idIsSet_ = false;
    lastUpdatedBy_ = "";
    lastUpdatedByIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    publishName_ = "";
    publishNameIsSet_ = false;
    publishScope_ = "";
    publishScopeIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    publishStatus_ = "";
    publishStatusIsSet_ = false;
}

PublicationResponseBase::~PublicationResponseBase() = default;

void PublicationResponseBase::validate()
{
}

web::json::value PublicationResponseBase::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(lastUpdatedByIsSet_) {
        val[utility::conversions::to_string_t("lastUpdatedBy")] = ModelBase::toJson(lastUpdatedBy_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("createTime")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("updateTime")] = ModelBase::toJson(updateTime_);
    }
    if(publishNameIsSet_) {
        val[utility::conversions::to_string_t("publishName")] = ModelBase::toJson(publishName_);
    }
    if(publishScopeIsSet_) {
        val[utility::conversions::to_string_t("publishScope")] = ModelBase::toJson(publishScope_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("startTime")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("endTime")] = ModelBase::toJson(endTime_);
    }
    if(publishStatusIsSet_) {
        val[utility::conversions::to_string_t("publishStatus")] = ModelBase::toJson(publishStatus_);
    }

    return val;
}
bool PublicationResponseBase::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("lastUpdatedBy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastUpdatedBy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUpdatedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updateTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updateTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publishName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publishName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publishScope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publishScope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishScope(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publishStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publishStatus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishStatus(refVal);
        }
    }
    return ok;
}


std::string PublicationResponseBase::getId() const
{
    return id_;
}

void PublicationResponseBase::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PublicationResponseBase::idIsSet() const
{
    return idIsSet_;
}

void PublicationResponseBase::unsetid()
{
    idIsSet_ = false;
}

std::string PublicationResponseBase::getLastUpdatedBy() const
{
    return lastUpdatedBy_;
}

void PublicationResponseBase::setLastUpdatedBy(const std::string& value)
{
    lastUpdatedBy_ = value;
    lastUpdatedByIsSet_ = true;
}

bool PublicationResponseBase::lastUpdatedByIsSet() const
{
    return lastUpdatedByIsSet_;
}

void PublicationResponseBase::unsetlastUpdatedBy()
{
    lastUpdatedByIsSet_ = false;
}

int64_t PublicationResponseBase::getCreateTime() const
{
    return createTime_;
}

void PublicationResponseBase::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool PublicationResponseBase::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void PublicationResponseBase::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t PublicationResponseBase::getUpdateTime() const
{
    return updateTime_;
}

void PublicationResponseBase::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool PublicationResponseBase::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void PublicationResponseBase::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string PublicationResponseBase::getPublishName() const
{
    return publishName_;
}

void PublicationResponseBase::setPublishName(const std::string& value)
{
    publishName_ = value;
    publishNameIsSet_ = true;
}

bool PublicationResponseBase::publishNameIsSet() const
{
    return publishNameIsSet_;
}

void PublicationResponseBase::unsetpublishName()
{
    publishNameIsSet_ = false;
}

std::string PublicationResponseBase::getPublishScope() const
{
    return publishScope_;
}

void PublicationResponseBase::setPublishScope(const std::string& value)
{
    publishScope_ = value;
    publishScopeIsSet_ = true;
}

bool PublicationResponseBase::publishScopeIsSet() const
{
    return publishScopeIsSet_;
}

void PublicationResponseBase::unsetpublishScope()
{
    publishScopeIsSet_ = false;
}

int64_t PublicationResponseBase::getStartTime() const
{
    return startTime_;
}

void PublicationResponseBase::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool PublicationResponseBase::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void PublicationResponseBase::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t PublicationResponseBase::getEndTime() const
{
    return endTime_;
}

void PublicationResponseBase::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool PublicationResponseBase::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void PublicationResponseBase::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string PublicationResponseBase::getPublishStatus() const
{
    return publishStatus_;
}

void PublicationResponseBase::setPublishStatus(const std::string& value)
{
    publishStatus_ = value;
    publishStatusIsSet_ = true;
}

bool PublicationResponseBase::publishStatusIsSet() const
{
    return publishStatusIsSet_;
}

void PublicationResponseBase::unsetpublishStatus()
{
    publishStatusIsSet_ = false;
}

}
}
}
}
}


