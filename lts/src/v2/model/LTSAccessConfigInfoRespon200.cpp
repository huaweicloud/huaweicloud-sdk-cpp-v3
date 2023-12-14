

#include "huaweicloud/lts/v2/model/LTSAccessConfigInfoRespon200.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




LTSAccessConfigInfoRespon200::LTSAccessConfigInfoRespon200()
{
    accessConfigId_ = "";
    accessConfigIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    accessConfigName_ = "";
    accessConfigNameIsSet_ = false;
    accessConfigTypeIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    logGroupName_ = "";
    logGroupNameIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    logStreamName_ = "";
    logStreamNameIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    agencyLogAccessIsSet_ = false;
}

LTSAccessConfigInfoRespon200::~LTSAccessConfigInfoRespon200() = default;

void LTSAccessConfigInfoRespon200::validate()
{
}

web::json::value LTSAccessConfigInfoRespon200::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessConfigIdIsSet_) {
        val[utility::conversions::to_string_t("access_config_id")] = ModelBase::toJson(accessConfigId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(accessConfigNameIsSet_) {
        val[utility::conversions::to_string_t("access_config_name")] = ModelBase::toJson(accessConfigName_);
    }
    if(accessConfigTypeIsSet_) {
        val[utility::conversions::to_string_t("access_config_type")] = ModelBase::toJson(accessConfigType_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(logGroupNameIsSet_) {
        val[utility::conversions::to_string_t("log_group_name")] = ModelBase::toJson(logGroupName_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }
    if(logStreamNameIsSet_) {
        val[utility::conversions::to_string_t("log_stream_name")] = ModelBase::toJson(logStreamName_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(agencyLogAccessIsSet_) {
        val[utility::conversions::to_string_t("agency_log_access")] = ModelBase::toJson(agencyLogAccess_);
    }

    return val;
}
bool LTSAccessConfigInfoRespon200::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("access_config_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_config_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessConfigId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("access_config_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_config_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessConfigName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_config_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_config_type"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessConfigType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agency_log_access"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_log_access"));
        if(!fieldValue.is_null())
        {
            PreviewAgencyLogAccessReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyLogAccess(refVal);
        }
    }
    return ok;
}


std::string LTSAccessConfigInfoRespon200::getAccessConfigId() const
{
    return accessConfigId_;
}

void LTSAccessConfigInfoRespon200::setAccessConfigId(const std::string& value)
{
    accessConfigId_ = value;
    accessConfigIdIsSet_ = true;
}

bool LTSAccessConfigInfoRespon200::accessConfigIdIsSet() const
{
    return accessConfigIdIsSet_;
}

void LTSAccessConfigInfoRespon200::unsetaccessConfigId()
{
    accessConfigIdIsSet_ = false;
}

std::string LTSAccessConfigInfoRespon200::getProjectId() const
{
    return projectId_;
}

void LTSAccessConfigInfoRespon200::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool LTSAccessConfigInfoRespon200::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void LTSAccessConfigInfoRespon200::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string LTSAccessConfigInfoRespon200::getAccessConfigName() const
{
    return accessConfigName_;
}

void LTSAccessConfigInfoRespon200::setAccessConfigName(const std::string& value)
{
    accessConfigName_ = value;
    accessConfigNameIsSet_ = true;
}

bool LTSAccessConfigInfoRespon200::accessConfigNameIsSet() const
{
    return accessConfigNameIsSet_;
}

void LTSAccessConfigInfoRespon200::unsetaccessConfigName()
{
    accessConfigNameIsSet_ = false;
}

Object LTSAccessConfigInfoRespon200::getAccessConfigType() const
{
    return accessConfigType_;
}

void LTSAccessConfigInfoRespon200::setAccessConfigType(const Object& value)
{
    accessConfigType_ = value;
    accessConfigTypeIsSet_ = true;
}

bool LTSAccessConfigInfoRespon200::accessConfigTypeIsSet() const
{
    return accessConfigTypeIsSet_;
}

void LTSAccessConfigInfoRespon200::unsetaccessConfigType()
{
    accessConfigTypeIsSet_ = false;
}

std::string LTSAccessConfigInfoRespon200::getGroupId() const
{
    return groupId_;
}

void LTSAccessConfigInfoRespon200::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool LTSAccessConfigInfoRespon200::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void LTSAccessConfigInfoRespon200::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string LTSAccessConfigInfoRespon200::getLogGroupName() const
{
    return logGroupName_;
}

void LTSAccessConfigInfoRespon200::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool LTSAccessConfigInfoRespon200::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void LTSAccessConfigInfoRespon200::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

std::string LTSAccessConfigInfoRespon200::getLogStreamId() const
{
    return logStreamId_;
}

void LTSAccessConfigInfoRespon200::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool LTSAccessConfigInfoRespon200::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void LTSAccessConfigInfoRespon200::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string LTSAccessConfigInfoRespon200::getLogStreamName() const
{
    return logStreamName_;
}

void LTSAccessConfigInfoRespon200::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool LTSAccessConfigInfoRespon200::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void LTSAccessConfigInfoRespon200::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

int64_t LTSAccessConfigInfoRespon200::getCreateTime() const
{
    return createTime_;
}

void LTSAccessConfigInfoRespon200::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool LTSAccessConfigInfoRespon200::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void LTSAccessConfigInfoRespon200::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

PreviewAgencyLogAccessReqBody LTSAccessConfigInfoRespon200::getAgencyLogAccess() const
{
    return agencyLogAccess_;
}

void LTSAccessConfigInfoRespon200::setAgencyLogAccess(const PreviewAgencyLogAccessReqBody& value)
{
    agencyLogAccess_ = value;
    agencyLogAccessIsSet_ = true;
}

bool LTSAccessConfigInfoRespon200::agencyLogAccessIsSet() const
{
    return agencyLogAccessIsSet_;
}

void LTSAccessConfigInfoRespon200::unsetagencyLogAccess()
{
    agencyLogAccessIsSet_ = false;
}

}
}
}
}
}


