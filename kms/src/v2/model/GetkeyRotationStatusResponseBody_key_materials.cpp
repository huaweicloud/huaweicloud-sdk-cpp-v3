

#include "huaweicloud/kms/v2/model/GetkeyRotationStatusResponseBody_key_materials.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




GetkeyRotationStatusResponseBody_key_materials::GetkeyRotationStatusResponseBody_key_materials()
{
    materialId_ = "";
    materialIdIsSet_ = false;
    chargeId_ = "";
    chargeIdIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    expirationTime_ = "";
    expirationTimeIsSet_ = false;
    state_ = 0;
    stateIsSet_ = false;
}

GetkeyRotationStatusResponseBody_key_materials::~GetkeyRotationStatusResponseBody_key_materials() = default;

void GetkeyRotationStatusResponseBody_key_materials::validate()
{
}

web::json::value GetkeyRotationStatusResponseBody_key_materials::toJson() const
{
    web::json::value val = web::json::value::object();

    if(materialIdIsSet_) {
        val[utility::conversions::to_string_t("material_id")] = ModelBase::toJson(materialId_);
    }
    if(chargeIdIsSet_) {
        val[utility::conversions::to_string_t("charge_id")] = ModelBase::toJson(chargeId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(expirationTimeIsSet_) {
        val[utility::conversions::to_string_t("expiration_time")] = ModelBase::toJson(expirationTime_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }

    return val;
}
bool GetkeyRotationStatusResponseBody_key_materials::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("material_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("material_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaterialId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiration_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiration_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpirationTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    return ok;
}


std::string GetkeyRotationStatusResponseBody_key_materials::getMaterialId() const
{
    return materialId_;
}

void GetkeyRotationStatusResponseBody_key_materials::setMaterialId(const std::string& value)
{
    materialId_ = value;
    materialIdIsSet_ = true;
}

bool GetkeyRotationStatusResponseBody_key_materials::materialIdIsSet() const
{
    return materialIdIsSet_;
}

void GetkeyRotationStatusResponseBody_key_materials::unsetmaterialId()
{
    materialIdIsSet_ = false;
}

std::string GetkeyRotationStatusResponseBody_key_materials::getChargeId() const
{
    return chargeId_;
}

void GetkeyRotationStatusResponseBody_key_materials::setChargeId(const std::string& value)
{
    chargeId_ = value;
    chargeIdIsSet_ = true;
}

bool GetkeyRotationStatusResponseBody_key_materials::chargeIdIsSet() const
{
    return chargeIdIsSet_;
}

void GetkeyRotationStatusResponseBody_key_materials::unsetchargeId()
{
    chargeIdIsSet_ = false;
}

std::string GetkeyRotationStatusResponseBody_key_materials::getCreateTime() const
{
    return createTime_;
}

void GetkeyRotationStatusResponseBody_key_materials::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool GetkeyRotationStatusResponseBody_key_materials::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void GetkeyRotationStatusResponseBody_key_materials::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string GetkeyRotationStatusResponseBody_key_materials::getExpirationTime() const
{
    return expirationTime_;
}

void GetkeyRotationStatusResponseBody_key_materials::setExpirationTime(const std::string& value)
{
    expirationTime_ = value;
    expirationTimeIsSet_ = true;
}

bool GetkeyRotationStatusResponseBody_key_materials::expirationTimeIsSet() const
{
    return expirationTimeIsSet_;
}

void GetkeyRotationStatusResponseBody_key_materials::unsetexpirationTime()
{
    expirationTimeIsSet_ = false;
}

int32_t GetkeyRotationStatusResponseBody_key_materials::getState() const
{
    return state_;
}

void GetkeyRotationStatusResponseBody_key_materials::setState(int32_t value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool GetkeyRotationStatusResponseBody_key_materials::stateIsSet() const
{
    return stateIsSet_;
}

void GetkeyRotationStatusResponseBody_key_materials::unsetstate()
{
    stateIsSet_ = false;
}

}
}
}
}
}


