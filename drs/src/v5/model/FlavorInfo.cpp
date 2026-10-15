

#include "huaweicloud/drs/v5/model/FlavorInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




FlavorInfo::FlavorInfo()
{
    id_ = "";
    idIsSet_ = false;
    cloudServiceType_ = "";
    cloudServiceTypeIsSet_ = false;
    specTypeCode_ = "";
    specTypeCodeIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
}

FlavorInfo::~FlavorInfo() = default;

void FlavorInfo::validate()
{
}

web::json::value FlavorInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(cloudServiceTypeIsSet_) {
        val[utility::conversions::to_string_t("cloud_service_type")] = ModelBase::toJson(cloudServiceType_);
    }
    if(specTypeCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_type_code")] = ModelBase::toJson(specTypeCode_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }

    return val;
}
bool FlavorInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("cloud_service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloud_service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec_type_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_type_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecTypeCode(refVal);
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
    return ok;
}


std::string FlavorInfo::getId() const
{
    return id_;
}

void FlavorInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool FlavorInfo::idIsSet() const
{
    return idIsSet_;
}

void FlavorInfo::unsetid()
{
    idIsSet_ = false;
}

std::string FlavorInfo::getCloudServiceType() const
{
    return cloudServiceType_;
}

void FlavorInfo::setCloudServiceType(const std::string& value)
{
    cloudServiceType_ = value;
    cloudServiceTypeIsSet_ = true;
}

bool FlavorInfo::cloudServiceTypeIsSet() const
{
    return cloudServiceTypeIsSet_;
}

void FlavorInfo::unsetcloudServiceType()
{
    cloudServiceTypeIsSet_ = false;
}

std::string FlavorInfo::getSpecTypeCode() const
{
    return specTypeCode_;
}

void FlavorInfo::setSpecTypeCode(const std::string& value)
{
    specTypeCode_ = value;
    specTypeCodeIsSet_ = true;
}

bool FlavorInfo::specTypeCodeIsSet() const
{
    return specTypeCodeIsSet_;
}

void FlavorInfo::unsetspecTypeCode()
{
    specTypeCodeIsSet_ = false;
}

std::string FlavorInfo::getSpecCode() const
{
    return specCode_;
}

void FlavorInfo::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool FlavorInfo::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void FlavorInfo::unsetspecCode()
{
    specCodeIsSet_ = false;
}

}
}
}
}
}


