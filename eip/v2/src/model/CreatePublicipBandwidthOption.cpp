

#include "huaweicloud/eip/model/CreatePublicipBandwidthOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




CreatePublicipBandwidthOption::CreatePublicipBandwidthOption()
{
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    shareType_ = "";
    shareTypeIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

CreatePublicipBandwidthOption::~CreatePublicipBandwidthOption() = default;

void CreatePublicipBandwidthOption::validate()
{
}

web::json::value CreatePublicipBandwidthOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(shareTypeIsSet_) {
        val[utility::conversions::to_string_t("share_type")] = ModelBase::toJson(shareType_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}

bool CreatePublicipBandwidthOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("share_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("share_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShareType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}


std::string CreatePublicipBandwidthOption::getChargeMode() const
{
    return chargeMode_;
}

void CreatePublicipBandwidthOption::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool CreatePublicipBandwidthOption::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void CreatePublicipBandwidthOption::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string CreatePublicipBandwidthOption::getId() const
{
    return id_;
}

void CreatePublicipBandwidthOption::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreatePublicipBandwidthOption::idIsSet() const
{
    return idIsSet_;
}

void CreatePublicipBandwidthOption::unsetid()
{
    idIsSet_ = false;
}

std::string CreatePublicipBandwidthOption::getName() const
{
    return name_;
}

void CreatePublicipBandwidthOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreatePublicipBandwidthOption::nameIsSet() const
{
    return nameIsSet_;
}

void CreatePublicipBandwidthOption::unsetname()
{
    nameIsSet_ = false;
}

std::string CreatePublicipBandwidthOption::getShareType() const
{
    return shareType_;
}

void CreatePublicipBandwidthOption::setShareType(const std::string& value)
{
    shareType_ = value;
    shareTypeIsSet_ = true;
}

bool CreatePublicipBandwidthOption::shareTypeIsSet() const
{
    return shareTypeIsSet_;
}

void CreatePublicipBandwidthOption::unsetshareType()
{
    shareTypeIsSet_ = false;
}

int32_t CreatePublicipBandwidthOption::getSize() const
{
    return size_;
}

void CreatePublicipBandwidthOption::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool CreatePublicipBandwidthOption::sizeIsSet() const
{
    return sizeIsSet_;
}

void CreatePublicipBandwidthOption::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


