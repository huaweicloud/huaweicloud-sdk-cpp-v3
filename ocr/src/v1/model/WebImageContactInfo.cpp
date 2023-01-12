

#include "huaweicloud/ocr/v1/model/WebImageContactInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




WebImageContactInfo::WebImageContactInfo()
{
    name_ = "";
    nameIsSet_ = false;
    phone_ = "";
    phoneIsSet_ = false;
    province_ = "";
    provinceIsSet_ = false;
    city_ = "";
    cityIsSet_ = false;
    district_ = "";
    districtIsSet_ = false;
    detailAddress_ = "";
    detailAddressIsSet_ = false;
}

WebImageContactInfo::~WebImageContactInfo() = default;

void WebImageContactInfo::validate()
{
}

web::json::value WebImageContactInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(phoneIsSet_) {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(phone_);
    }
    if(provinceIsSet_) {
        val[utility::conversions::to_string_t("province")] = ModelBase::toJson(province_);
    }
    if(cityIsSet_) {
        val[utility::conversions::to_string_t("city")] = ModelBase::toJson(city_);
    }
    if(districtIsSet_) {
        val[utility::conversions::to_string_t("district")] = ModelBase::toJson(district_);
    }
    if(detailAddressIsSet_) {
        val[utility::conversions::to_string_t("detail_address")] = ModelBase::toJson(detailAddress_);
    }

    return val;
}

bool WebImageContactInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("province"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("province"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProvince(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("city"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("city"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("district"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("district"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDistrict(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detail_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetailAddress(refVal);
        }
    }
    return ok;
}


std::string WebImageContactInfo::getName() const
{
    return name_;
}

void WebImageContactInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WebImageContactInfo::nameIsSet() const
{
    return nameIsSet_;
}

void WebImageContactInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string WebImageContactInfo::getPhone() const
{
    return phone_;
}

void WebImageContactInfo::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool WebImageContactInfo::phoneIsSet() const
{
    return phoneIsSet_;
}

void WebImageContactInfo::unsetphone()
{
    phoneIsSet_ = false;
}

std::string WebImageContactInfo::getProvince() const
{
    return province_;
}

void WebImageContactInfo::setProvince(const std::string& value)
{
    province_ = value;
    provinceIsSet_ = true;
}

bool WebImageContactInfo::provinceIsSet() const
{
    return provinceIsSet_;
}

void WebImageContactInfo::unsetprovince()
{
    provinceIsSet_ = false;
}

std::string WebImageContactInfo::getCity() const
{
    return city_;
}

void WebImageContactInfo::setCity(const std::string& value)
{
    city_ = value;
    cityIsSet_ = true;
}

bool WebImageContactInfo::cityIsSet() const
{
    return cityIsSet_;
}

void WebImageContactInfo::unsetcity()
{
    cityIsSet_ = false;
}

std::string WebImageContactInfo::getDistrict() const
{
    return district_;
}

void WebImageContactInfo::setDistrict(const std::string& value)
{
    district_ = value;
    districtIsSet_ = true;
}

bool WebImageContactInfo::districtIsSet() const
{
    return districtIsSet_;
}

void WebImageContactInfo::unsetdistrict()
{
    districtIsSet_ = false;
}

std::string WebImageContactInfo::getDetailAddress() const
{
    return detailAddress_;
}

void WebImageContactInfo::setDetailAddress(const std::string& value)
{
    detailAddress_ = value;
    detailAddressIsSet_ = true;
}

bool WebImageContactInfo::detailAddressIsSet() const
{
    return detailAddressIsSet_;
}

void WebImageContactInfo::unsetdetailAddress()
{
    detailAddressIsSet_ = false;
}

}
}
}
}
}


