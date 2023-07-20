

#include "huaweicloud/dds/v3/model/EnlargeInstanceRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




EnlargeInstanceRequestBody::EnlargeInstanceRequestBody()
{
    type_ = "";
    typeIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    num_ = "";
    numIsSet_ = false;
    volumeIsSet_ = false;
    isAutoPay_ = false;
    isAutoPayIsSet_ = false;
}

EnlargeInstanceRequestBody::~EnlargeInstanceRequestBody() = default;

void EnlargeInstanceRequestBody::validate()
{
}

web::json::value EnlargeInstanceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(numIsSet_) {
        val[utility::conversions::to_string_t("num")] = ModelBase::toJson(num_);
    }
    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }

    return val;
}

bool EnlargeInstanceRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            AddShardingNodeVolumeOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_pay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    return ok;
}

std::string EnlargeInstanceRequestBody::getType() const
{
    return type_;
}

void EnlargeInstanceRequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool EnlargeInstanceRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void EnlargeInstanceRequestBody::unsettype()
{
    typeIsSet_ = false;
}

std::string EnlargeInstanceRequestBody::getSpecCode() const
{
    return specCode_;
}

void EnlargeInstanceRequestBody::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool EnlargeInstanceRequestBody::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void EnlargeInstanceRequestBody::unsetspecCode()
{
    specCodeIsSet_ = false;
}

std::string EnlargeInstanceRequestBody::getNum() const
{
    return num_;
}

void EnlargeInstanceRequestBody::setNum(const std::string& value)
{
    num_ = value;
    numIsSet_ = true;
}

bool EnlargeInstanceRequestBody::numIsSet() const
{
    return numIsSet_;
}

void EnlargeInstanceRequestBody::unsetnum()
{
    numIsSet_ = false;
}

AddShardingNodeVolumeOption EnlargeInstanceRequestBody::getVolume() const
{
    return volume_;
}

void EnlargeInstanceRequestBody::setVolume(const AddShardingNodeVolumeOption& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool EnlargeInstanceRequestBody::volumeIsSet() const
{
    return volumeIsSet_;
}

void EnlargeInstanceRequestBody::unsetvolume()
{
    volumeIsSet_ = false;
}

bool EnlargeInstanceRequestBody::isIsAutoPay() const
{
    return isAutoPay_;
}

void EnlargeInstanceRequestBody::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool EnlargeInstanceRequestBody::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void EnlargeInstanceRequestBody::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


