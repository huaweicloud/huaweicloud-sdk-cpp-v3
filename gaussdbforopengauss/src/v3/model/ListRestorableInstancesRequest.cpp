

#include "huaweicloud/gaussdbforopengauss/v3/model/ListRestorableInstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListRestorableInstancesRequest::ListRestorableInstancesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    sourceInstanceId_ = "";
    sourceInstanceIdIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
    restoreTime_ = "";
    restoreTimeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListRestorableInstancesRequest::~ListRestorableInstancesRequest() = default;

void ListRestorableInstancesRequest::validate()
{
}

web::json::value ListRestorableInstancesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(sourceInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("source_instance_id")] = ModelBase::toJson(sourceInstanceId_);
    }
    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(restoreTimeIsSet_) {
        val[utility::conversions::to_string_t("restore_time")] = ModelBase::toJson(restoreTime_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListRestorableInstancesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("source_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("restore_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTime(refVal);
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
    return ok;
}


std::string ListRestorableInstancesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListRestorableInstancesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListRestorableInstancesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListRestorableInstancesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListRestorableInstancesRequest::getSourceInstanceId() const
{
    return sourceInstanceId_;
}

void ListRestorableInstancesRequest::setSourceInstanceId(const std::string& value)
{
    sourceInstanceId_ = value;
    sourceInstanceIdIsSet_ = true;
}

bool ListRestorableInstancesRequest::sourceInstanceIdIsSet() const
{
    return sourceInstanceIdIsSet_;
}

void ListRestorableInstancesRequest::unsetsourceInstanceId()
{
    sourceInstanceIdIsSet_ = false;
}

std::string ListRestorableInstancesRequest::getBackupId() const
{
    return backupId_;
}

void ListRestorableInstancesRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool ListRestorableInstancesRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void ListRestorableInstancesRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string ListRestorableInstancesRequest::getRestoreTime() const
{
    return restoreTime_;
}

void ListRestorableInstancesRequest::setRestoreTime(const std::string& value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool ListRestorableInstancesRequest::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void ListRestorableInstancesRequest::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

int32_t ListRestorableInstancesRequest::getOffset() const
{
    return offset_;
}

void ListRestorableInstancesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRestorableInstancesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRestorableInstancesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRestorableInstancesRequest::getLimit() const
{
    return limit_;
}

void ListRestorableInstancesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRestorableInstancesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRestorableInstancesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


