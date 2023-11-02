

#include "huaweicloud/gaussdb/v3/model/ShowGaussMySqlBackupListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowGaussMySqlBackupListRequest::ShowGaussMySqlBackupListRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
    backupType_ = "";
    backupTypeIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
}

ShowGaussMySqlBackupListRequest::~ShowGaussMySqlBackupListRequest() = default;

void ShowGaussMySqlBackupListRequest::validate()
{
}

web::json::value ShowGaussMySqlBackupListRequest::toJson() const
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
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }

    return val;
}
bool ShowGaussMySqlBackupListRequest::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    return ok;
}


std::string ShowGaussMySqlBackupListRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowGaussMySqlBackupListRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowGaussMySqlBackupListRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowGaussMySqlBackupListRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowGaussMySqlBackupListRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowGaussMySqlBackupListRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowGaussMySqlBackupListRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowGaussMySqlBackupListRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowGaussMySqlBackupListRequest::getBackupId() const
{
    return backupId_;
}

void ShowGaussMySqlBackupListRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool ShowGaussMySqlBackupListRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void ShowGaussMySqlBackupListRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string ShowGaussMySqlBackupListRequest::getBackupType() const
{
    return backupType_;
}

void ShowGaussMySqlBackupListRequest::setBackupType(const std::string& value)
{
    backupType_ = value;
    backupTypeIsSet_ = true;
}

bool ShowGaussMySqlBackupListRequest::backupTypeIsSet() const
{
    return backupTypeIsSet_;
}

void ShowGaussMySqlBackupListRequest::unsetbackupType()
{
    backupTypeIsSet_ = false;
}

std::string ShowGaussMySqlBackupListRequest::getOffset() const
{
    return offset_;
}

void ShowGaussMySqlBackupListRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowGaussMySqlBackupListRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowGaussMySqlBackupListRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ShowGaussMySqlBackupListRequest::getLimit() const
{
    return limit_;
}

void ShowGaussMySqlBackupListRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowGaussMySqlBackupListRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowGaussMySqlBackupListRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowGaussMySqlBackupListRequest::getBeginTime() const
{
    return beginTime_;
}

void ShowGaussMySqlBackupListRequest::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ShowGaussMySqlBackupListRequest::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ShowGaussMySqlBackupListRequest::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ShowGaussMySqlBackupListRequest::getEndTime() const
{
    return endTime_;
}

void ShowGaussMySqlBackupListRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowGaussMySqlBackupListRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowGaussMySqlBackupListRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShowGaussMySqlBackupListRequest::getName() const
{
    return name_;
}

void ShowGaussMySqlBackupListRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowGaussMySqlBackupListRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ShowGaussMySqlBackupListRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowGaussMySqlBackupListRequest::getInstanceName() const
{
    return instanceName_;
}

void ShowGaussMySqlBackupListRequest::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ShowGaussMySqlBackupListRequest::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ShowGaussMySqlBackupListRequest::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

}
}
}
}
}


