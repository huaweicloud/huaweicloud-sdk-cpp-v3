

#include "huaweicloud/metastudio/v1/model/AllocateSpResourceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




AllocateSpResourceInfo::AllocateSpResourceInfo()
{
    assignmentRecordId_ = "";
    assignmentRecordIdIsSet_ = false;
    resourceSpecCode_ = "";
    resourceSpecCodeIsSet_ = false;
    chargingMode_ = "";
    chargingModeIsSet_ = false;
    resourceNum_ = 0.0;
    resourceNumIsSet_ = false;
    resourceUsedNum_ = 0.0;
    resourceUsedNumIsSet_ = false;
    resourceAllocateTime_ = 0L;
    resourceAllocateTimeIsSet_ = false;
    resourceExpireTime_ = 0L;
    resourceExpireTimeIsSet_ = false;
}

AllocateSpResourceInfo::~AllocateSpResourceInfo() = default;

void AllocateSpResourceInfo::validate()
{
}

web::json::value AllocateSpResourceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assignmentRecordIdIsSet_) {
        val[utility::conversions::to_string_t("assignment_record_id")] = ModelBase::toJson(assignmentRecordId_);
    }
    if(resourceSpecCodeIsSet_) {
        val[utility::conversions::to_string_t("resource_spec_code")] = ModelBase::toJson(resourceSpecCode_);
    }
    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("charging_mode")] = ModelBase::toJson(chargingMode_);
    }
    if(resourceNumIsSet_) {
        val[utility::conversions::to_string_t("resource_num")] = ModelBase::toJson(resourceNum_);
    }
    if(resourceUsedNumIsSet_) {
        val[utility::conversions::to_string_t("resource_used_num")] = ModelBase::toJson(resourceUsedNum_);
    }
    if(resourceAllocateTimeIsSet_) {
        val[utility::conversions::to_string_t("resource_allocate_time")] = ModelBase::toJson(resourceAllocateTime_);
    }
    if(resourceExpireTimeIsSet_) {
        val[utility::conversions::to_string_t("resource_expire_time")] = ModelBase::toJson(resourceExpireTime_);
    }

    return val;
}
bool AllocateSpResourceInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("assignment_record_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assignment_record_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignmentRecordId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charging_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charging_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargingMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_num"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_used_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_used_num"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceUsedNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_allocate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_allocate_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceAllocateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_expire_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceExpireTime(refVal);
        }
    }
    return ok;
}


std::string AllocateSpResourceInfo::getAssignmentRecordId() const
{
    return assignmentRecordId_;
}

void AllocateSpResourceInfo::setAssignmentRecordId(const std::string& value)
{
    assignmentRecordId_ = value;
    assignmentRecordIdIsSet_ = true;
}

bool AllocateSpResourceInfo::assignmentRecordIdIsSet() const
{
    return assignmentRecordIdIsSet_;
}

void AllocateSpResourceInfo::unsetassignmentRecordId()
{
    assignmentRecordIdIsSet_ = false;
}

std::string AllocateSpResourceInfo::getResourceSpecCode() const
{
    return resourceSpecCode_;
}

void AllocateSpResourceInfo::setResourceSpecCode(const std::string& value)
{
    resourceSpecCode_ = value;
    resourceSpecCodeIsSet_ = true;
}

bool AllocateSpResourceInfo::resourceSpecCodeIsSet() const
{
    return resourceSpecCodeIsSet_;
}

void AllocateSpResourceInfo::unsetresourceSpecCode()
{
    resourceSpecCodeIsSet_ = false;
}

std::string AllocateSpResourceInfo::getChargingMode() const
{
    return chargingMode_;
}

void AllocateSpResourceInfo::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool AllocateSpResourceInfo::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void AllocateSpResourceInfo::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

double AllocateSpResourceInfo::getResourceNum() const
{
    return resourceNum_;
}

void AllocateSpResourceInfo::setResourceNum(double value)
{
    resourceNum_ = value;
    resourceNumIsSet_ = true;
}

bool AllocateSpResourceInfo::resourceNumIsSet() const
{
    return resourceNumIsSet_;
}

void AllocateSpResourceInfo::unsetresourceNum()
{
    resourceNumIsSet_ = false;
}

double AllocateSpResourceInfo::getResourceUsedNum() const
{
    return resourceUsedNum_;
}

void AllocateSpResourceInfo::setResourceUsedNum(double value)
{
    resourceUsedNum_ = value;
    resourceUsedNumIsSet_ = true;
}

bool AllocateSpResourceInfo::resourceUsedNumIsSet() const
{
    return resourceUsedNumIsSet_;
}

void AllocateSpResourceInfo::unsetresourceUsedNum()
{
    resourceUsedNumIsSet_ = false;
}

int64_t AllocateSpResourceInfo::getResourceAllocateTime() const
{
    return resourceAllocateTime_;
}

void AllocateSpResourceInfo::setResourceAllocateTime(int64_t value)
{
    resourceAllocateTime_ = value;
    resourceAllocateTimeIsSet_ = true;
}

bool AllocateSpResourceInfo::resourceAllocateTimeIsSet() const
{
    return resourceAllocateTimeIsSet_;
}

void AllocateSpResourceInfo::unsetresourceAllocateTime()
{
    resourceAllocateTimeIsSet_ = false;
}

int64_t AllocateSpResourceInfo::getResourceExpireTime() const
{
    return resourceExpireTime_;
}

void AllocateSpResourceInfo::setResourceExpireTime(int64_t value)
{
    resourceExpireTime_ = value;
    resourceExpireTimeIsSet_ = true;
}

bool AllocateSpResourceInfo::resourceExpireTimeIsSet() const
{
    return resourceExpireTimeIsSet_;
}

void AllocateSpResourceInfo::unsetresourceExpireTime()
{
    resourceExpireTimeIsSet_ = false;
}

}
}
}
}
}


