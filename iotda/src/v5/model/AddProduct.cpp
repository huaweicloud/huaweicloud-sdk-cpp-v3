

#include "huaweicloud/iotda/v5/model/AddProduct.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddProduct::AddProduct()
{
    productId_ = "";
    productIdIsSet_ = false;
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
    appId_ = "";
    appIdIsSet_ = false;
}

AddProduct::~AddProduct() = default;

void AddProduct::validate()
{
}

web::json::value AddProduct::toJson() const
{
    web::json::value val = web::json::value::object();

    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
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
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }

    return val;
}
bool AddProduct::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    return ok;
}


std::string AddProduct::getProductId() const
{
    return productId_;
}

void AddProduct::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool AddProduct::productIdIsSet() const
{
    return productIdIsSet_;
}

void AddProduct::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string AddProduct::getName() const
{
    return name_;
}

void AddProduct::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddProduct::nameIsSet() const
{
    return nameIsSet_;
}

void AddProduct::unsetname()
{
    nameIsSet_ = false;
}

std::string AddProduct::getDeviceType() const
{
    return deviceType_;
}

void AddProduct::setDeviceType(const std::string& value)
{
    deviceType_ = value;
    deviceTypeIsSet_ = true;
}

bool AddProduct::deviceTypeIsSet() const
{
    return deviceTypeIsSet_;
}

void AddProduct::unsetdeviceType()
{
    deviceTypeIsSet_ = false;
}

std::string AddProduct::getProtocolType() const
{
    return protocolType_;
}

void AddProduct::setProtocolType(const std::string& value)
{
    protocolType_ = value;
    protocolTypeIsSet_ = true;
}

bool AddProduct::protocolTypeIsSet() const
{
    return protocolTypeIsSet_;
}

void AddProduct::unsetprotocolType()
{
    protocolTypeIsSet_ = false;
}

std::string AddProduct::getDataFormat() const
{
    return dataFormat_;
}

void AddProduct::setDataFormat(const std::string& value)
{
    dataFormat_ = value;
    dataFormatIsSet_ = true;
}

bool AddProduct::dataFormatIsSet() const
{
    return dataFormatIsSet_;
}

void AddProduct::unsetdataFormat()
{
    dataFormatIsSet_ = false;
}

std::vector<ServiceCapability>& AddProduct::getServiceCapabilities()
{
    return serviceCapabilities_;
}

void AddProduct::setServiceCapabilities(const std::vector<ServiceCapability>& value)
{
    serviceCapabilities_ = value;
    serviceCapabilitiesIsSet_ = true;
}

bool AddProduct::serviceCapabilitiesIsSet() const
{
    return serviceCapabilitiesIsSet_;
}

void AddProduct::unsetserviceCapabilities()
{
    serviceCapabilitiesIsSet_ = false;
}

std::string AddProduct::getManufacturerName() const
{
    return manufacturerName_;
}

void AddProduct::setManufacturerName(const std::string& value)
{
    manufacturerName_ = value;
    manufacturerNameIsSet_ = true;
}

bool AddProduct::manufacturerNameIsSet() const
{
    return manufacturerNameIsSet_;
}

void AddProduct::unsetmanufacturerName()
{
    manufacturerNameIsSet_ = false;
}

std::string AddProduct::getIndustry() const
{
    return industry_;
}

void AddProduct::setIndustry(const std::string& value)
{
    industry_ = value;
    industryIsSet_ = true;
}

bool AddProduct::industryIsSet() const
{
    return industryIsSet_;
}

void AddProduct::unsetindustry()
{
    industryIsSet_ = false;
}

std::string AddProduct::getDescription() const
{
    return description_;
}

void AddProduct::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AddProduct::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AddProduct::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string AddProduct::getAppId() const
{
    return appId_;
}

void AddProduct::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool AddProduct::appIdIsSet() const
{
    return appIdIsSet_;
}

void AddProduct::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


