

#include "huaweicloud/metastudio/v1/model/VoiceTrainingResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




VoiceTrainingResource::VoiceTrainingResource()
{
    operationType_ = "";
    operationTypeIsSet_ = false;
    resourceSource_ = "";
    resourceSourceIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceNums_ = 0;
    resourceNumsIsSet_ = false;
    resourceAvailableNums_ = 0;
    resourceAvailableNumsIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    chargeModeIsSet_ = false;
    expireTime_ = "";
    expireTimeIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

VoiceTrainingResource::~VoiceTrainingResource() = default;

void VoiceTrainingResource::validate()
{
}

web::json::value VoiceTrainingResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationTypeIsSet_) {
        val[utility::conversions::to_string_t("operation_type")] = ModelBase::toJson(operationType_);
    }
    if(resourceSourceIsSet_) {
        val[utility::conversions::to_string_t("resource_source")] = ModelBase::toJson(resourceSource_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceNumsIsSet_) {
        val[utility::conversions::to_string_t("resource_nums")] = ModelBase::toJson(resourceNums_);
    }
    if(resourceAvailableNumsIsSet_) {
        val[utility::conversions::to_string_t("resource_available_nums")] = ModelBase::toJson(resourceAvailableNums_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool VoiceTrainingResource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operation_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_nums"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_nums"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceNums(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_available_nums"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_available_nums"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceAvailableNums(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            ChardMode refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string VoiceTrainingResource::getOperationType() const
{
    return operationType_;
}

void VoiceTrainingResource::setOperationType(const std::string& value)
{
    operationType_ = value;
    operationTypeIsSet_ = true;
}

bool VoiceTrainingResource::operationTypeIsSet() const
{
    return operationTypeIsSet_;
}

void VoiceTrainingResource::unsetoperationType()
{
    operationTypeIsSet_ = false;
}

std::string VoiceTrainingResource::getResourceSource() const
{
    return resourceSource_;
}

void VoiceTrainingResource::setResourceSource(const std::string& value)
{
    resourceSource_ = value;
    resourceSourceIsSet_ = true;
}

bool VoiceTrainingResource::resourceSourceIsSet() const
{
    return resourceSourceIsSet_;
}

void VoiceTrainingResource::unsetresourceSource()
{
    resourceSourceIsSet_ = false;
}

std::string VoiceTrainingResource::getAssetId() const
{
    return assetId_;
}

void VoiceTrainingResource::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool VoiceTrainingResource::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void VoiceTrainingResource::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string VoiceTrainingResource::getResourceId() const
{
    return resourceId_;
}

void VoiceTrainingResource::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool VoiceTrainingResource::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void VoiceTrainingResource::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

int32_t VoiceTrainingResource::getResourceNums() const
{
    return resourceNums_;
}

void VoiceTrainingResource::setResourceNums(int32_t value)
{
    resourceNums_ = value;
    resourceNumsIsSet_ = true;
}

bool VoiceTrainingResource::resourceNumsIsSet() const
{
    return resourceNumsIsSet_;
}

void VoiceTrainingResource::unsetresourceNums()
{
    resourceNumsIsSet_ = false;
}

int32_t VoiceTrainingResource::getResourceAvailableNums() const
{
    return resourceAvailableNums_;
}

void VoiceTrainingResource::setResourceAvailableNums(int32_t value)
{
    resourceAvailableNums_ = value;
    resourceAvailableNumsIsSet_ = true;
}

bool VoiceTrainingResource::resourceAvailableNumsIsSet() const
{
    return resourceAvailableNumsIsSet_;
}

void VoiceTrainingResource::unsetresourceAvailableNums()
{
    resourceAvailableNumsIsSet_ = false;
}

std::string VoiceTrainingResource::getResourceType() const
{
    return resourceType_;
}

void VoiceTrainingResource::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool VoiceTrainingResource::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void VoiceTrainingResource::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

ChardMode VoiceTrainingResource::getChargeMode() const
{
    return chargeMode_;
}

void VoiceTrainingResource::setChargeMode(const ChardMode& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool VoiceTrainingResource::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void VoiceTrainingResource::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string VoiceTrainingResource::getExpireTime() const
{
    return expireTime_;
}

void VoiceTrainingResource::setExpireTime(const std::string& value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool VoiceTrainingResource::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void VoiceTrainingResource::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

int32_t VoiceTrainingResource::getStatus() const
{
    return status_;
}

void VoiceTrainingResource::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool VoiceTrainingResource::statusIsSet() const
{
    return statusIsSet_;
}

void VoiceTrainingResource::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


