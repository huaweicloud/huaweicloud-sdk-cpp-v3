

#include "huaweicloud/iotda/v5/model/ShowProductResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowProductResponse::ShowProductResponse()
{
    appId_ = "";
    appIdIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
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
    manufacturerName_ = "";
    manufacturerNameIsSet_ = false;
    industry_ = "";
    industryIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    serviceCapabilitiesIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
}

ShowProductResponse::~ShowProductResponse() = default;

void ShowProductResponse::validate()
{
}

web::json::value ShowProductResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
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
    if(manufacturerNameIsSet_) {
        val[utility::conversions::to_string_t("manufacturer_name")] = ModelBase::toJson(manufacturerName_);
    }
    if(industryIsSet_) {
        val[utility::conversions::to_string_t("industry")] = ModelBase::toJson(industry_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(serviceCapabilitiesIsSet_) {
        val[utility::conversions::to_string_t("service_capabilities")] = ModelBase::toJson(serviceCapabilities_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }

    return val;
}
bool ShowProductResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("service_capabilities"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_capabilities"));
        if(!fieldValue.is_null())
        {
            std::vector<ServiceCapability> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceCapabilities(refVal);
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
    return ok;
}


std::string ShowProductResponse::getAppId() const
{
    return appId_;
}

void ShowProductResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ShowProductResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void ShowProductResponse::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ShowProductResponse::getAppName() const
{
    return appName_;
}

void ShowProductResponse::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ShowProductResponse::appNameIsSet() const
{
    return appNameIsSet_;
}

void ShowProductResponse::unsetappName()
{
    appNameIsSet_ = false;
}

std::string ShowProductResponse::getProductId() const
{
    return productId_;
}

void ShowProductResponse::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool ShowProductResponse::productIdIsSet() const
{
    return productIdIsSet_;
}

void ShowProductResponse::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string ShowProductResponse::getName() const
{
    return name_;
}

void ShowProductResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowProductResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowProductResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowProductResponse::getDeviceType() const
{
    return deviceType_;
}

void ShowProductResponse::setDeviceType(const std::string& value)
{
    deviceType_ = value;
    deviceTypeIsSet_ = true;
}

bool ShowProductResponse::deviceTypeIsSet() const
{
    return deviceTypeIsSet_;
}

void ShowProductResponse::unsetdeviceType()
{
    deviceTypeIsSet_ = false;
}

std::string ShowProductResponse::getProtocolType() const
{
    return protocolType_;
}

void ShowProductResponse::setProtocolType(const std::string& value)
{
    protocolType_ = value;
    protocolTypeIsSet_ = true;
}

bool ShowProductResponse::protocolTypeIsSet() const
{
    return protocolTypeIsSet_;
}

void ShowProductResponse::unsetprotocolType()
{
    protocolTypeIsSet_ = false;
}

std::string ShowProductResponse::getDataFormat() const
{
    return dataFormat_;
}

void ShowProductResponse::setDataFormat(const std::string& value)
{
    dataFormat_ = value;
    dataFormatIsSet_ = true;
}

bool ShowProductResponse::dataFormatIsSet() const
{
    return dataFormatIsSet_;
}

void ShowProductResponse::unsetdataFormat()
{
    dataFormatIsSet_ = false;
}

std::string ShowProductResponse::getManufacturerName() const
{
    return manufacturerName_;
}

void ShowProductResponse::setManufacturerName(const std::string& value)
{
    manufacturerName_ = value;
    manufacturerNameIsSet_ = true;
}

bool ShowProductResponse::manufacturerNameIsSet() const
{
    return manufacturerNameIsSet_;
}

void ShowProductResponse::unsetmanufacturerName()
{
    manufacturerNameIsSet_ = false;
}

std::string ShowProductResponse::getIndustry() const
{
    return industry_;
}

void ShowProductResponse::setIndustry(const std::string& value)
{
    industry_ = value;
    industryIsSet_ = true;
}

bool ShowProductResponse::industryIsSet() const
{
    return industryIsSet_;
}

void ShowProductResponse::unsetindustry()
{
    industryIsSet_ = false;
}

std::string ShowProductResponse::getDescription() const
{
    return description_;
}

void ShowProductResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowProductResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowProductResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<ServiceCapability>& ShowProductResponse::getServiceCapabilities()
{
    return serviceCapabilities_;
}

void ShowProductResponse::setServiceCapabilities(const std::vector<ServiceCapability>& value)
{
    serviceCapabilities_ = value;
    serviceCapabilitiesIsSet_ = true;
}

bool ShowProductResponse::serviceCapabilitiesIsSet() const
{
    return serviceCapabilitiesIsSet_;
}

void ShowProductResponse::unsetserviceCapabilities()
{
    serviceCapabilitiesIsSet_ = false;
}

std::string ShowProductResponse::getCreateTime() const
{
    return createTime_;
}

void ShowProductResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowProductResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowProductResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


