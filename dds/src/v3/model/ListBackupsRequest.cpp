

#include "huaweicloud/dds/v3/model/ListBackupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListBackupsRequest::ListBackupsRequest()
{
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
    mode_ = "";
    modeIsSet_ = false;
    orderField_ = "";
    orderFieldIsSet_ = false;
    orderRule_ = "";
    orderRuleIsSet_ = false;
    backupStatus_ = "";
    backupStatusIsSet_ = false;
    backupName_ = "";
    backupNameIsSet_ = false;
    backupDescription_ = "";
    backupDescriptionIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
}

ListBackupsRequest::~ListBackupsRequest() = default;

void ListBackupsRequest::validate()
{
}

web::json::value ListBackupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(orderFieldIsSet_) {
        val[utility::conversions::to_string_t("order_field")] = ModelBase::toJson(orderField_);
    }
    if(orderRuleIsSet_) {
        val[utility::conversions::to_string_t("order_rule")] = ModelBase::toJson(orderRule_);
    }
    if(backupStatusIsSet_) {
        val[utility::conversions::to_string_t("backup_status")] = ModelBase::toJson(backupStatus_);
    }
    if(backupNameIsSet_) {
        val[utility::conversions::to_string_t("backup_name")] = ModelBase::toJson(backupName_);
    }
    if(backupDescriptionIsSet_) {
        val[utility::conversions::to_string_t("backup_description")] = ModelBase::toJson(backupDescription_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }

    return val;
}
bool ListBackupsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_rule"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderRule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupDescription(refVal);
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


std::string ListBackupsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListBackupsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListBackupsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListBackupsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListBackupsRequest::getBackupId() const
{
    return backupId_;
}

void ListBackupsRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool ListBackupsRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void ListBackupsRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string ListBackupsRequest::getBackupType() const
{
    return backupType_;
}

void ListBackupsRequest::setBackupType(const std::string& value)
{
    backupType_ = value;
    backupTypeIsSet_ = true;
}

bool ListBackupsRequest::backupTypeIsSet() const
{
    return backupTypeIsSet_;
}

void ListBackupsRequest::unsetbackupType()
{
    backupTypeIsSet_ = false;
}

int32_t ListBackupsRequest::getOffset() const
{
    return offset_;
}

void ListBackupsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListBackupsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListBackupsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListBackupsRequest::getLimit() const
{
    return limit_;
}

void ListBackupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListBackupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListBackupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListBackupsRequest::getBeginTime() const
{
    return beginTime_;
}

void ListBackupsRequest::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ListBackupsRequest::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ListBackupsRequest::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ListBackupsRequest::getEndTime() const
{
    return endTime_;
}

void ListBackupsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListBackupsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListBackupsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListBackupsRequest::getMode() const
{
    return mode_;
}

void ListBackupsRequest::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ListBackupsRequest::modeIsSet() const
{
    return modeIsSet_;
}

void ListBackupsRequest::unsetmode()
{
    modeIsSet_ = false;
}

std::string ListBackupsRequest::getOrderField() const
{
    return orderField_;
}

void ListBackupsRequest::setOrderField(const std::string& value)
{
    orderField_ = value;
    orderFieldIsSet_ = true;
}

bool ListBackupsRequest::orderFieldIsSet() const
{
    return orderFieldIsSet_;
}

void ListBackupsRequest::unsetorderField()
{
    orderFieldIsSet_ = false;
}

std::string ListBackupsRequest::getOrderRule() const
{
    return orderRule_;
}

void ListBackupsRequest::setOrderRule(const std::string& value)
{
    orderRule_ = value;
    orderRuleIsSet_ = true;
}

bool ListBackupsRequest::orderRuleIsSet() const
{
    return orderRuleIsSet_;
}

void ListBackupsRequest::unsetorderRule()
{
    orderRuleIsSet_ = false;
}

std::string ListBackupsRequest::getBackupStatus() const
{
    return backupStatus_;
}

void ListBackupsRequest::setBackupStatus(const std::string& value)
{
    backupStatus_ = value;
    backupStatusIsSet_ = true;
}

bool ListBackupsRequest::backupStatusIsSet() const
{
    return backupStatusIsSet_;
}

void ListBackupsRequest::unsetbackupStatus()
{
    backupStatusIsSet_ = false;
}

std::string ListBackupsRequest::getBackupName() const
{
    return backupName_;
}

void ListBackupsRequest::setBackupName(const std::string& value)
{
    backupName_ = value;
    backupNameIsSet_ = true;
}

bool ListBackupsRequest::backupNameIsSet() const
{
    return backupNameIsSet_;
}

void ListBackupsRequest::unsetbackupName()
{
    backupNameIsSet_ = false;
}

std::string ListBackupsRequest::getBackupDescription() const
{
    return backupDescription_;
}

void ListBackupsRequest::setBackupDescription(const std::string& value)
{
    backupDescription_ = value;
    backupDescriptionIsSet_ = true;
}

bool ListBackupsRequest::backupDescriptionIsSet() const
{
    return backupDescriptionIsSet_;
}

void ListBackupsRequest::unsetbackupDescription()
{
    backupDescriptionIsSet_ = false;
}

std::string ListBackupsRequest::getInstanceName() const
{
    return instanceName_;
}

void ListBackupsRequest::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ListBackupsRequest::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ListBackupsRequest::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

}
}
}
}
}


