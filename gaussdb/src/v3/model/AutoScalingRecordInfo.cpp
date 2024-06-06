

#include "huaweicloud/gaussdb/v3/model/AutoScalingRecordInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




AutoScalingRecordInfo::AutoScalingRecordInfo()
{
    id_ = "";
    idIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    scalingType_ = "";
    scalingTypeIsSet_ = false;
    originalValue_ = "";
    originalValueIsSet_ = false;
    targetValue_ = "";
    targetValueIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
    createAt_ = "";
    createAtIsSet_ = false;
}

AutoScalingRecordInfo::~AutoScalingRecordInfo() = default;

void AutoScalingRecordInfo::validate()
{
}

web::json::value AutoScalingRecordInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
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
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }

    return val;
}
bool AutoScalingRecordInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    return ok;
}


std::string AutoScalingRecordInfo::getId() const
{
    return id_;
}

void AutoScalingRecordInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AutoScalingRecordInfo::idIsSet() const
{
    return idIsSet_;
}

void AutoScalingRecordInfo::unsetid()
{
    idIsSet_ = false;
}

std::string AutoScalingRecordInfo::getInstanceId() const
{
    return instanceId_;
}

void AutoScalingRecordInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AutoScalingRecordInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AutoScalingRecordInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string AutoScalingRecordInfo::getInstanceName() const
{
    return instanceName_;
}

void AutoScalingRecordInfo::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool AutoScalingRecordInfo::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void AutoScalingRecordInfo::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string AutoScalingRecordInfo::getScalingType() const
{
    return scalingType_;
}

void AutoScalingRecordInfo::setScalingType(const std::string& value)
{
    scalingType_ = value;
    scalingTypeIsSet_ = true;
}

bool AutoScalingRecordInfo::scalingTypeIsSet() const
{
    return scalingTypeIsSet_;
}

void AutoScalingRecordInfo::unsetscalingType()
{
    scalingTypeIsSet_ = false;
}

std::string AutoScalingRecordInfo::getOriginalValue() const
{
    return originalValue_;
}

void AutoScalingRecordInfo::setOriginalValue(const std::string& value)
{
    originalValue_ = value;
    originalValueIsSet_ = true;
}

bool AutoScalingRecordInfo::originalValueIsSet() const
{
    return originalValueIsSet_;
}

void AutoScalingRecordInfo::unsetoriginalValue()
{
    originalValueIsSet_ = false;
}

std::string AutoScalingRecordInfo::getTargetValue() const
{
    return targetValue_;
}

void AutoScalingRecordInfo::setTargetValue(const std::string& value)
{
    targetValue_ = value;
    targetValueIsSet_ = true;
}

bool AutoScalingRecordInfo::targetValueIsSet() const
{
    return targetValueIsSet_;
}

void AutoScalingRecordInfo::unsettargetValue()
{
    targetValueIsSet_ = false;
}

std::string AutoScalingRecordInfo::getResult() const
{
    return result_;
}

void AutoScalingRecordInfo::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool AutoScalingRecordInfo::resultIsSet() const
{
    return resultIsSet_;
}

void AutoScalingRecordInfo::unsetresult()
{
    resultIsSet_ = false;
}

std::string AutoScalingRecordInfo::getCreateAt() const
{
    return createAt_;
}

void AutoScalingRecordInfo::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool AutoScalingRecordInfo::createAtIsSet() const
{
    return createAtIsSet_;
}

void AutoScalingRecordInfo::unsetcreateAt()
{
    createAtIsSet_ = false;
}

}
}
}
}
}


