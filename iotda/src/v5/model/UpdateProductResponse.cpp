

#include "huaweicloud/iotda/v5/model/UpdateProductResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateProductResponse::UpdateProductResponse()
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

UpdateProductResponse::~UpdateProductResponse() = default;

void UpdateProductResponse::validate()
{
}

web::json::value UpdateProductResponse::toJson() const
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
bool UpdateProductResponse::fromJson(const web::json::value& val)
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


std::string UpdateProductResponse::getAppId() const
{
    return appId_;
}

void UpdateProductResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool UpdateProductResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void UpdateProductResponse::unsetappId()
{
    appIdIsSet_ = false;
}

std::string UpdateProductResponse::getAppName() const
{
    return appName_;
}

void UpdateProductResponse::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool UpdateProductResponse::appNameIsSet() const
{
    return appNameIsSet_;
}

void UpdateProductResponse::unsetappName()
{
    appNameIsSet_ = false;
}

std::string UpdateProductResponse::getProductId() const
{
    return productId_;
}

void UpdateProductResponse::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool UpdateProductResponse::productIdIsSet() const
{
    return productIdIsSet_;
}

void UpdateProductResponse::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string UpdateProductResponse::getName() const
{
    return name_;
}

void UpdateProductResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateProductResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateProductResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateProductResponse::getDeviceType() const
{
    return deviceType_;
}

void UpdateProductResponse::setDeviceType(const std::string& value)
{
    deviceType_ = value;
    deviceTypeIsSet_ = true;
}

bool UpdateProductResponse::deviceTypeIsSet() const
{
    return deviceTypeIsSet_;
}

void UpdateProductResponse::unsetdeviceType()
{
    deviceTypeIsSet_ = false;
}

std::string UpdateProductResponse::getProtocolType() const
{
    return protocolType_;
}

void UpdateProductResponse::setProtocolType(const std::string& value)
{
    protocolType_ = value;
    protocolTypeIsSet_ = true;
}

bool UpdateProductResponse::protocolTypeIsSet() const
{
    return protocolTypeIsSet_;
}

void UpdateProductResponse::unsetprotocolType()
{
    protocolTypeIsSet_ = false;
}

std::string UpdateProductResponse::getDataFormat() const
{
    return dataFormat_;
}

void UpdateProductResponse::setDataFormat(const std::string& value)
{
    dataFormat_ = value;
    dataFormatIsSet_ = true;
}

bool UpdateProductResponse::dataFormatIsSet() const
{
    return dataFormatIsSet_;
}

void UpdateProductResponse::unsetdataFormat()
{
    dataFormatIsSet_ = false;
}

std::string UpdateProductResponse::getManufacturerName() const
{
    return manufacturerName_;
}

void UpdateProductResponse::setManufacturerName(const std::string& value)
{
    manufacturerName_ = value;
    manufacturerNameIsSet_ = true;
}

bool UpdateProductResponse::manufacturerNameIsSet() const
{
    return manufacturerNameIsSet_;
}

void UpdateProductResponse::unsetmanufacturerName()
{
    manufacturerNameIsSet_ = false;
}

std::string UpdateProductResponse::getIndustry() const
{
    return industry_;
}

void UpdateProductResponse::setIndustry(const std::string& value)
{
    industry_ = value;
    industryIsSet_ = true;
}

bool UpdateProductResponse::industryIsSet() const
{
    return industryIsSet_;
}

void UpdateProductResponse::unsetindustry()
{
    industryIsSet_ = false;
}

std::string UpdateProductResponse::getDescription() const
{
    return description_;
}

void UpdateProductResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateProductResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateProductResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<ServiceCapability>& UpdateProductResponse::getServiceCapabilities()
{
    return serviceCapabilities_;
}

void UpdateProductResponse::setServiceCapabilities(const std::vector<ServiceCapability>& value)
{
    serviceCapabilities_ = value;
    serviceCapabilitiesIsSet_ = true;
}

bool UpdateProductResponse::serviceCapabilitiesIsSet() const
{
    return serviceCapabilitiesIsSet_;
}

void UpdateProductResponse::unsetserviceCapabilities()
{
    serviceCapabilitiesIsSet_ = false;
}

std::string UpdateProductResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateProductResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateProductResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateProductResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


