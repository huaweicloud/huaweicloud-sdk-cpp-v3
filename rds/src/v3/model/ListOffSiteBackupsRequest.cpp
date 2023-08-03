

#include "huaweicloud/rds/v3/model/ListOffSiteBackupsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListOffSiteBackupsRequest::ListOffSiteBackupsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
    backupType_ = "";
    backupTypeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListOffSiteBackupsRequest::~ListOffSiteBackupsRequest() = default;

void ListOffSiteBackupsRequest::validate()
{
}

web::json::value ListOffSiteBackupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(backupTypeIsSet_) {
        val[utility::conversions::to_string_t("backup_type")] = ModelBase::toJson(backupType_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}

bool ListOffSiteBackupsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}

std::string ListOffSiteBackupsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListOffSiteBackupsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListOffSiteBackupsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListOffSiteBackupsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListOffSiteBackupsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListOffSiteBackupsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListOffSiteBackupsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListOffSiteBackupsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListOffSiteBackupsRequest::getBackupId() const
{
    return backupId_;
}

void ListOffSiteBackupsRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool ListOffSiteBackupsRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void ListOffSiteBackupsRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string ListOffSiteBackupsRequest::getBackupType() const
{
    return backupType_;
}

void ListOffSiteBackupsRequest::setBackupType(const std::string& value)
{
    backupType_ = value;
    backupTypeIsSet_ = true;
}

bool ListOffSiteBackupsRequest::backupTypeIsSet() const
{
    return backupTypeIsSet_;
}

void ListOffSiteBackupsRequest::unsetbackupType()
{
    backupTypeIsSet_ = false;
}

int32_t ListOffSiteBackupsRequest::getOffset() const
{
    return offset_;
}

void ListOffSiteBackupsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListOffSiteBackupsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListOffSiteBackupsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListOffSiteBackupsRequest::getLimit() const
{
    return limit_;
}

void ListOffSiteBackupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListOffSiteBackupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListOffSiteBackupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListOffSiteBackupsRequest::getBeginTime() const
{
    return beginTime_;
}

void ListOffSiteBackupsRequest::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ListOffSiteBackupsRequest::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ListOffSiteBackupsRequest::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ListOffSiteBackupsRequest::getEndTime() const
{
    return endTime_;
}

void ListOffSiteBackupsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListOffSiteBackupsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListOffSiteBackupsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


