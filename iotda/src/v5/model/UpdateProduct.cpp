

#include "huaweicloud/iotda/v5/model/UpdateProduct.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateProduct::UpdateProduct()
{
    appId_ = "";
    appIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    deviceType_ = "";
    deviceTypeIsSet_ = false;
    protocolType_ = "";
    protocolTypeIsSet_ = false;
    dataFormat_ = "";
    dataFormatIsSet_ = false;
    serviceCapabilitiesIsSet_ = false;
    manufacturerName_ = "";
    manufacturerNameIsSet_ = false;
    industry_ = "";
    industryIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

UpdateProduct::~UpdateProduct() = default;

void UpdateProduct::validate()
{
}

web::json::value UpdateProduct::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(deviceTypeIsSet_) {
        val[utility::conversions::to_string_t("device_type")] = ModelBase::toJson(deviceType_);
    }
    if(protocolTypeIsSet_) {
        val[utility::conversions::to_string_t("protocol_type")] = ModelBase::toJson(protocolType_);
    }
    if(dataFormatIsSet_) {
        val[utility::conversions::to_string_t("data_format")] = ModelBase::toJson(dataFormat_);
    }
    if(serviceCapabilitiesIsSet_) {
        val[utility::conversions::to_string_t("service_capabilities")] = ModelBase::toJson(serviceCapabilities_);
    }
    if(manufacturerNameIsSet_) {
        val[utility::conversions::to_string_t("manufacturer_name")] = ModelBase::toJson(manufacturerName_);
    }
    if(industryIsSet_) {
        val[utility::conversions::to_string_t("industry")] = ModelBase::toJson(industry_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool UpdateProduct::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("device_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocolType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_capabilities"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_capabilities"));
        if(!fieldValue.is_null())
        {
            std::vector<ServiceCapability> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceCapabilities(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("manufacturer_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manufacturer_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManufacturerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("industry"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("industry"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIndustry(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string UpdateProduct::getAppId() const
{
    return appId_;
}

void UpdateProduct::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool UpdateProduct::appIdIsSet() const
{
    return appIdIsSet_;
}

void UpdateProduct::unsetappId()
{
    appIdIsSet_ = false;
}

std::string UpdateProduct::getName() const
{
    return name_;
}

void UpdateProduct::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateProduct::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateProduct::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateProduct::getDeviceType() const
{
    return deviceType_;
}

void UpdateProduct::setDeviceType(const std::string& value)
{
    deviceType_ = value;
    deviceTypeIsSet_ = true;
}

bool UpdateProduct::deviceTypeIsSet() const
{
    return deviceTypeIsSet_;
}

void UpdateProduct::unsetdeviceType()
{
    deviceTypeIsSet_ = false;
}

std::string UpdateProduct::getProtocolType() const
{
    return protocolType_;
}

void UpdateProduct::setProtocolType(const std::string& value)
{
    protocolType_ = value;
    protocolTypeIsSet_ = true;
}

bool UpdateProduct::protocolTypeIsSet() const
{
    return protocolTypeIsSet_;
}

void UpdateProduct::unsetprotocolType()
{
    protocolTypeIsSet_ = false;
}

std::string UpdateProduct::getDataFormat() const
{
    return dataFormat_;
}

void UpdateProduct::setDataFormat(const std::string& value)
{
    dataFormat_ = value;
    dataFormatIsSet_ = true;
}

bool UpdateProduct::dataFormatIsSet() const
{
    return dataFormatIsSet_;
}

void UpdateProduct::unsetdataFormat()
{
    dataFormatIsSet_ = false;
}

std::vector<ServiceCapability>& UpdateProduct::getServiceCapabilities()
{
    return serviceCapabilities_;
}

void UpdateProduct::setServiceCapabilities(const std::vector<ServiceCapability>& value)
{
    serviceCapabilities_ = value;
    serviceCapabilitiesIsSet_ = true;
}

bool UpdateProduct::serviceCapabilitiesIsSet() const
{
    return serviceCapabilitiesIsSet_;
}

void UpdateProduct::unsetserviceCapabilities()
{
    serviceCapabilitiesIsSet_ = false;
}

std::string UpdateProduct::getManufacturerName() const
{
    return manufacturerName_;
}

void UpdateProduct::setManufacturerName(const std::string& value)
{
    manufacturerName_ = value;
    manufacturerNameIsSet_ = true;
}

bool UpdateProduct::manufacturerNameIsSet() const
{
    return manufacturerNameIsSet_;
}

void UpdateProduct::unsetmanufacturerName()
{
    manufacturerNameIsSet_ = false;
}

std::string UpdateProduct::getIndustry() const
{
    return industry_;
}

void UpdateProduct::setIndustry(const std::string& value)
{
    industry_ = value;
    industryIsSet_ = true;
}

bool UpdateProduct::industryIsSet() const
{
    return industryIsSet_;
}

void UpdateProduct::unsetindustry()
{
    industryIsSet_ = false;
}

std::string UpdateProduct::getDescription() const
{
    return description_;
}

void UpdateProduct::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateProduct::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateProduct::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


