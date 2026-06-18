

#include "huaweicloud/codeartsrepo/v4/model/TenantCMKDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




TenantCMKDto::TenantCMKDto()
{
    cmkKeyName_ = "";
    cmkKeyNameIsSet_ = false;
    cmkKeyId_ = "";
    cmkKeyIdIsSet_ = false;
    keyState_ = "";
    keyStateIsSet_ = false;
}

TenantCMKDto::~TenantCMKDto() = default;

void TenantCMKDto::validate()
{
}

web::json::value TenantCMKDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cmkKeyNameIsSet_) {
        val[utility::conversions::to_string_t("cmk_key_name")] = ModelBase::toJson(cmkKeyName_);
    }
    if(cmkKeyIdIsSet_) {
        val[utility::conversions::to_string_t("cmk_key_id")] = ModelBase::toJson(cmkKeyId_);
    }
    if(keyStateIsSet_) {
        val[utility::conversions::to_string_t("key_state")] = ModelBase::toJson(keyState_);
    }

    return val;
}
bool TenantCMKDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cmk_key_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cmk_key_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCmkKeyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cmk_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cmk_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCmkKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyState(refVal);
        }
    }
    return ok;
}


std::string TenantCMKDto::getCmkKeyName() const
{
    return cmkKeyName_;
}

void TenantCMKDto::setCmkKeyName(const std::string& value)
{
    cmkKeyName_ = value;
    cmkKeyNameIsSet_ = true;
}

bool TenantCMKDto::cmkKeyNameIsSet() const
{
    return cmkKeyNameIsSet_;
}

void TenantCMKDto::unsetcmkKeyName()
{
    cmkKeyNameIsSet_ = false;
}

std::string TenantCMKDto::getCmkKeyId() const
{
    return cmkKeyId_;
}

void TenantCMKDto::setCmkKeyId(const std::string& value)
{
    cmkKeyId_ = value;
    cmkKeyIdIsSet_ = true;
}

bool TenantCMKDto::cmkKeyIdIsSet() const
{
    return cmkKeyIdIsSet_;
}

void TenantCMKDto::unsetcmkKeyId()
{
    cmkKeyIdIsSet_ = false;
}

std::string TenantCMKDto::getKeyState() const
{
    return keyState_;
}

void TenantCMKDto::setKeyState(const std::string& value)
{
    keyState_ = value;
    keyStateIsSet_ = true;
}

bool TenantCMKDto::keyStateIsSet() const
{
    return keyStateIsSet_;
}

void TenantCMKDto::unsetkeyState()
{
    keyStateIsSet_ = false;
}

}
}
}
}
}


