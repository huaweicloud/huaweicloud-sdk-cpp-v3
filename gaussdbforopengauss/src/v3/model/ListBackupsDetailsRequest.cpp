

#include "huaweicloud/gaussdbforopengauss/v3/model/ListBackupsDetailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListBackupsDetailsRequest::ListBackupsDetailsRequest()
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

ListBackupsDetailsRequest::~ListBackupsDetailsRequest() = default;

void ListBackupsDetailsRequest::validate()
{
}

web::json::value ListBackupsDetailsRequest::toJson() const
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
bool ListBackupsDetailsRequest::fromJson(const web::json::value& val)
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


std::string ListBackupsDetailsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListBackupsDetailsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListBackupsDetailsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListBackupsDetailsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListBackupsDetailsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListBackupsDetailsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListBackupsDetailsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListBackupsDetailsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListBackupsDetailsRequest::getBackupId() const
{
    return backupId_;
}

void ListBackupsDetailsRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool ListBackupsDetailsRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void ListBackupsDetailsRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string ListBackupsDetailsRequest::getBackupType() const
{
    return backupType_;
}

void ListBackupsDetailsRequest::setBackupType(const std::string& value)
{
    backupType_ = value;
    backupTypeIsSet_ = true;
}

bool ListBackupsDetailsRequest::backupTypeIsSet() const
{
    return backupTypeIsSet_;
}

void ListBackupsDetailsRequest::unsetbackupType()
{
    backupTypeIsSet_ = false;
}

int32_t ListBackupsDetailsRequest::getOffset() const
{
    return offset_;
}

void ListBackupsDetailsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListBackupsDetailsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListBackupsDetailsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListBackupsDetailsRequest::getLimit() const
{
    return limit_;
}

void ListBackupsDetailsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListBackupsDetailsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListBackupsDetailsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListBackupsDetailsRequest::getBeginTime() const
{
    return beginTime_;
}

void ListBackupsDetailsRequest::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ListBackupsDetailsRequest::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ListBackupsDetailsRequest::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ListBackupsDetailsRequest::getEndTime() const
{
    return endTime_;
}

void ListBackupsDetailsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListBackupsDetailsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListBackupsDetailsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


