

#include "huaweicloud/lts/v2/model/AomMappingLogStreamInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AomMappingLogStreamInfo::AomMappingLogStreamInfo()
{
    targetLogGroupId_ = "";
    targetLogGroupIdIsSet_ = false;
    targetLogGroupName_ = "";
    targetLogGroupNameIsSet_ = false;
    targetLogStreamId_ = "";
    targetLogStreamIdIsSet_ = false;
    targetLogStreamName_ = "";
    targetLogStreamNameIsSet_ = false;
}

AomMappingLogStreamInfo::~AomMappingLogStreamInfo() = default;

void AomMappingLogStreamInfo::validate()
{
}

web::json::value AomMappingLogStreamInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetLogGroupIdIsSet_) {
        val[utility::conversions::to_string_t("target_log_group_id")] = ModelBase::toJson(targetLogGroupId_);
    }
    if(targetLogGroupNameIsSet_) {
        val[utility::conversions::to_string_t("target_log_group_name")] = ModelBase::toJson(targetLogGroupName_);
    }
    if(targetLogStreamIdIsSet_) {
        val[utility::conversions::to_string_t("target_log_stream_id")] = ModelBase::toJson(targetLogStreamId_);
    }
    if(targetLogStreamNameIsSet_) {
        val[utility::conversions::to_string_t("target_log_stream_name")] = ModelBase::toJson(targetLogStreamName_);
    }

    return val;
}

bool AomMappingLogStreamInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target_log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_log_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_log_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetLogGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_log_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_log_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetLogStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_log_stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_log_stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetLogStreamName(refVal);
        }
    }
    return ok;
}

std::string AomMappingLogStreamInfo::getTargetLogGroupId() const
{
    return targetLogGroupId_;
}

void AomMappingLogStreamInfo::setTargetLogGroupId(const std::string& value)
{
    targetLogGroupId_ = value;
    targetLogGroupIdIsSet_ = true;
}

bool AomMappingLogStreamInfo::targetLogGroupIdIsSet() const
{
    return targetLogGroupIdIsSet_;
}

void AomMappingLogStreamInfo::unsettargetLogGroupId()
{
    targetLogGroupIdIsSet_ = false;
}

std::string AomMappingLogStreamInfo::getTargetLogGroupName() const
{
    return targetLogGroupName_;
}

void AomMappingLogStreamInfo::setTargetLogGroupName(const std::string& value)
{
    targetLogGroupName_ = value;
    targetLogGroupNameIsSet_ = true;
}

bool AomMappingLogStreamInfo::targetLogGroupNameIsSet() const
{
    return targetLogGroupNameIsSet_;
}

void AomMappingLogStreamInfo::unsettargetLogGroupName()
{
    targetLogGroupNameIsSet_ = false;
}

std::string AomMappingLogStreamInfo::getTargetLogStreamId() const
{
    return targetLogStreamId_;
}

void AomMappingLogStreamInfo::setTargetLogStreamId(const std::string& value)
{
    targetLogStreamId_ = value;
    targetLogStreamIdIsSet_ = true;
}

bool AomMappingLogStreamInfo::targetLogStreamIdIsSet() const
{
    return targetLogStreamIdIsSet_;
}

void AomMappingLogStreamInfo::unsettargetLogStreamId()
{
    targetLogStreamIdIsSet_ = false;
}

std::string AomMappingLogStreamInfo::getTargetLogStreamName() const
{
    return targetLogStreamName_;
}

void AomMappingLogStreamInfo::setTargetLogStreamName(const std::string& value)
{
    targetLogStreamName_ = value;
    targetLogStreamNameIsSet_ = true;
}

bool AomMappingLogStreamInfo::targetLogStreamNameIsSet() const
{
    return targetLogStreamNameIsSet_;
}

void AomMappingLogStreamInfo::unsettargetLogStreamName()
{
    targetLogStreamNameIsSet_ = false;
}

}
}
}
}
}


