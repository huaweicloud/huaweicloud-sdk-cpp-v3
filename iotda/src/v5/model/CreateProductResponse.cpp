

#include "huaweicloud/iotda/v5/model/CreateProductResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateProductResponse::CreateProductResponse()
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

CreateProductResponse::~CreateProductResponse() = default;

void CreateProductResponse::validate()
{
}

web::json::value CreateProductResponse::toJson() const
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
bool CreateProductResponse::fromJson(const web::json::value& val)
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


std::string CreateProductResponse::getAppId() const
{
    return appId_;
}

void CreateProductResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool CreateProductResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void CreateProductResponse::unsetappId()
{
    appIdIsSet_ = false;
}

std::string CreateProductResponse::getAppName() const
{
    return appName_;
}

void CreateProductResponse::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool CreateProductResponse::appNameIsSet() const
{
    return appNameIsSet_;
}

void CreateProductResponse::unsetappName()
{
    appNameIsSet_ = false;
}

std::string CreateProductResponse::getProductId() const
{
    return productId_;
}

void CreateProductResponse::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool CreateProductResponse::productIdIsSet() const
{
    return productIdIsSet_;
}

void CreateProductResponse::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string CreateProductResponse::getName() const
{
    return name_;
}

void CreateProductResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateProductResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateProductResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateProductResponse::getDeviceType() const
{
    return deviceType_;
}

void CreateProductResponse::setDeviceType(const std::string& value)
{
    deviceType_ = value;
    deviceTypeIsSet_ = true;
}

bool CreateProductResponse::deviceTypeIsSet() const
{
    return deviceTypeIsSet_;
}

void CreateProductResponse::unsetdeviceType()
{
    deviceTypeIsSet_ = false;
}

std::string CreateProductResponse::getProtocolType() const
{
    return protocolType_;
}

void CreateProductResponse::setProtocolType(const std::string& value)
{
    protocolType_ = value;
    protocolTypeIsSet_ = true;
}

bool CreateProductResponse::protocolTypeIsSet() const
{
    return protocolTypeIsSet_;
}

void CreateProductResponse::unsetprotocolType()
{
    protocolTypeIsSet_ = false;
}

std::string CreateProductResponse::getDataFormat() const
{
    return dataFormat_;
}

void CreateProductResponse::setDataFormat(const std::string& value)
{
    dataFormat_ = value;
    dataFormatIsSet_ = true;
}

bool CreateProductResponse::dataFormatIsSet() const
{
    return dataFormatIsSet_;
}

void CreateProductResponse::unsetdataFormat()
{
    dataFormatIsSet_ = false;
}

std::string CreateProductResponse::getManufacturerName() const
{
    return manufacturerName_;
}

void CreateProductResponse::setManufacturerName(const std::string& value)
{
    manufacturerName_ = value;
    manufacturerNameIsSet_ = true;
}

bool CreateProductResponse::manufacturerNameIsSet() const
{
    return manufacturerNameIsSet_;
}

void CreateProductResponse::unsetmanufacturerName()
{
    manufacturerNameIsSet_ = false;
}

std::string CreateProductResponse::getIndustry() const
{
    return industry_;
}

void CreateProductResponse::setIndustry(const std::string& value)
{
    industry_ = value;
    industryIsSet_ = true;
}

bool CreateProductResponse::industryIsSet() const
{
    return industryIsSet_;
}

void CreateProductResponse::unsetindustry()
{
    industryIsSet_ = false;
}

std::string CreateProductResponse::getDescription() const
{
    return description_;
}

void CreateProductResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateProductResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateProductResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<ServiceCapability>& CreateProductResponse::getServiceCapabilities()
{
    return serviceCapabilities_;
}

void CreateProductResponse::setServiceCapabilities(const std::vector<ServiceCapability>& value)
{
    serviceCapabilities_ = value;
    serviceCapabilitiesIsSet_ = true;
}

bool CreateProductResponse::serviceCapabilitiesIsSet() const
{
    return serviceCapabilitiesIsSet_;
}

void CreateProductResponse::unsetserviceCapabilities()
{
    serviceCapabilitiesIsSet_ = false;
}

std::string CreateProductResponse::getCreateTime() const
{
    return createTime_;
}

void CreateProductResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateProductResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateProductResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


