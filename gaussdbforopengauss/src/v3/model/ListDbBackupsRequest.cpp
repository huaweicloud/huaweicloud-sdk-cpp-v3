

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDbBackupsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDbBackupsRequest::ListDbBackupsRequest()
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

ListDbBackupsRequest::~ListDbBackupsRequest() = default;

void ListDbBackupsRequest::validate()
{
}

web::json::value ListDbBackupsRequest::toJson() const
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

bool ListDbBackupsRequest::fromJson(const web::json::value& val)
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

std::string ListDbBackupsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDbBackupsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDbBackupsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDbBackupsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListDbBackupsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDbBackupsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDbBackupsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDbBackupsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListDbBackupsRequest::getBackupId() const
{
    return backupId_;
}

void ListDbBackupsRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool ListDbBackupsRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void ListDbBackupsRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string ListDbBackupsRequest::getBackupType() const
{
    return backupType_;
}

void ListDbBackupsRequest::setBackupType(const std::string& value)
{
    backupType_ = value;
    backupTypeIsSet_ = true;
}

bool ListDbBackupsRequest::backupTypeIsSet() const
{
    return backupTypeIsSet_;
}

void ListDbBackupsRequest::unsetbackupType()
{
    backupTypeIsSet_ = false;
}

int32_t ListDbBackupsRequest::getOffset() const
{
    return offset_;
}

void ListDbBackupsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDbBackupsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDbBackupsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListDbBackupsRequest::getLimit() const
{
    return limit_;
}

void ListDbBackupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDbBackupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDbBackupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListDbBackupsRequest::getBeginTime() const
{
    return beginTime_;
}

void ListDbBackupsRequest::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ListDbBackupsRequest::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ListDbBackupsRequest::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ListDbBackupsRequest::getEndTime() const
{
    return endTime_;
}

void ListDbBackupsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListDbBackupsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListDbBackupsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


