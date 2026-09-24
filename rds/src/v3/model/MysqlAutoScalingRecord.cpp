

#include "huaweicloud/rds/v3/model/MysqlAutoScalingRecord.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




MysqlAutoScalingRecord::MysqlAutoScalingRecord()
{
    id_ = "";
    idIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    scalingType_ = "";
    scalingTypeIsSet_ = false;
    originalValue_ = "";
    originalValueIsSet_ = false;
    targetValue_ = "";
    targetValueIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
    createdAt_ = 0L;
    createdAtIsSet_ = false;
}

MysqlAutoScalingRecord::~MysqlAutoScalingRecord() = default;

void MysqlAutoScalingRecord::validate()
{
}

web::json::value MysqlAutoScalingRecord::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(scalingTypeIsSet_) {
        val[utility::conversions::to_string_t("scaling_type")] = ModelBase::toJson(scalingType_);
    }
    if(originalValueIsSet_) {
        val[utility::conversions::to_string_t("original_value")] = ModelBase::toJson(originalValue_);
    }
    if(targetValueIsSet_) {
        val[utility::conversions::to_string_t("target_value")] = ModelBase::toJson(targetValue_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }

    return val;
}
bool MysqlAutoScalingRecord::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scaling_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scaling_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScalingType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("original_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("original_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginalValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    return ok;
}


std::string MysqlAutoScalingRecord::getId() const
{
    return id_;
}

void MysqlAutoScalingRecord::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MysqlAutoScalingRecord::idIsSet() const
{
    return idIsSet_;
}

void MysqlAutoScalingRecord::unsetid()
{
    idIsSet_ = false;
}

std::string MysqlAutoScalingRecord::getInstanceId() const
{
    return instanceId_;
}

void MysqlAutoScalingRecord::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool MysqlAutoScalingRecord::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void MysqlAutoScalingRecord::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string MysqlAutoScalingRecord::getScalingType() const
{
    return scalingType_;
}

void MysqlAutoScalingRecord::setScalingType(const std::string& value)
{
    scalingType_ = value;
    scalingTypeIsSet_ = true;
}

bool MysqlAutoScalingRecord::scalingTypeIsSet() const
{
    return scalingTypeIsSet_;
}

void MysqlAutoScalingRecord::unsetscalingType()
{
    scalingTypeIsSet_ = false;
}

std::string MysqlAutoScalingRecord::getOriginalValue() const
{
    return originalValue_;
}

void MysqlAutoScalingRecord::setOriginalValue(const std::string& value)
{
    originalValue_ = value;
    originalValueIsSet_ = true;
}

bool MysqlAutoScalingRecord::originalValueIsSet() const
{
    return originalValueIsSet_;
}

void MysqlAutoScalingRecord::unsetoriginalValue()
{
    originalValueIsSet_ = false;
}

std::string MysqlAutoScalingRecord::getTargetValue() const
{
    return targetValue_;
}

void MysqlAutoScalingRecord::setTargetValue(const std::string& value)
{
    targetValue_ = value;
    targetValueIsSet_ = true;
}

bool MysqlAutoScalingRecord::targetValueIsSet() const
{
    return targetValueIsSet_;
}

void MysqlAutoScalingRecord::unsettargetValue()
{
    targetValueIsSet_ = false;
}

std::string MysqlAutoScalingRecord::getResult() const
{
    return result_;
}

void MysqlAutoScalingRecord::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool MysqlAutoScalingRecord::resultIsSet() const
{
    return resultIsSet_;
}

void MysqlAutoScalingRecord::unsetresult()
{
    resultIsSet_ = false;
}

int64_t MysqlAutoScalingRecord::getCreatedAt() const
{
    return createdAt_;
}

void MysqlAutoScalingRecord::setCreatedAt(int64_t value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool MysqlAutoScalingRecord::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void MysqlAutoScalingRecord::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

}
}
}
}
}


