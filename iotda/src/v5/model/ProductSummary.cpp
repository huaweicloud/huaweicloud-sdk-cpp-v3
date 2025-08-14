

#include "huaweicloud/iotda/v5/model/ProductSummary.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ProductSummary::ProductSummary()
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
    createTime_ = "";
    createTimeIsSet_ = false;
}

ProductSummary::~ProductSummary() = default;

void ProductSummary::validate()
{
}

web::json::value ProductSummary::toJson() const
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
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }

    return val;
}
bool ProductSummary::fromJson(const web::json::value& val)
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


std::string ProductSummary::getAppId() const
{
    return appId_;
}

void ProductSummary::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ProductSummary::appIdIsSet() const
{
    return appIdIsSet_;
}

void ProductSummary::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ProductSummary::getAppName() const
{
    return appName_;
}

void ProductSummary::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ProductSummary::appNameIsSet() const
{
    return appNameIsSet_;
}

void ProductSummary::unsetappName()
{
    appNameIsSet_ = false;
}

std::string ProductSummary::getProductId() const
{
    return productId_;
}

void ProductSummary::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool ProductSummary::productIdIsSet() const
{
    return productIdIsSet_;
}

void ProductSummary::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string ProductSummary::getName() const
{
    return name_;
}

void ProductSummary::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProductSummary::nameIsSet() const
{
    return nameIsSet_;
}

void ProductSummary::unsetname()
{
    nameIsSet_ = false;
}

std::string ProductSummary::getDeviceType() const
{
    return deviceType_;
}

void ProductSummary::setDeviceType(const std::string& value)
{
    deviceType_ = value;
    deviceTypeIsSet_ = true;
}

bool ProductSummary::deviceTypeIsSet() const
{
    return deviceTypeIsSet_;
}

void ProductSummary::unsetdeviceType()
{
    deviceTypeIsSet_ = false;
}

std::string ProductSummary::getProtocolType() const
{
    return protocolType_;
}

void ProductSummary::setProtocolType(const std::string& value)
{
    protocolType_ = value;
    protocolTypeIsSet_ = true;
}

bool ProductSummary::protocolTypeIsSet() const
{
    return protocolTypeIsSet_;
}

void ProductSummary::unsetprotocolType()
{
    protocolTypeIsSet_ = false;
}

std::string ProductSummary::getDataFormat() const
{
    return dataFormat_;
}

void ProductSummary::setDataFormat(const std::string& value)
{
    dataFormat_ = value;
    dataFormatIsSet_ = true;
}

bool ProductSummary::dataFormatIsSet() const
{
    return dataFormatIsSet_;
}

void ProductSummary::unsetdataFormat()
{
    dataFormatIsSet_ = false;
}

std::string ProductSummary::getManufacturerName() const
{
    return manufacturerName_;
}

void ProductSummary::setManufacturerName(const std::string& value)
{
    manufacturerName_ = value;
    manufacturerNameIsSet_ = true;
}

bool ProductSummary::manufacturerNameIsSet() const
{
    return manufacturerNameIsSet_;
}

void ProductSummary::unsetmanufacturerName()
{
    manufacturerNameIsSet_ = false;
}

std::string ProductSummary::getIndustry() const
{
    return industry_;
}

void ProductSummary::setIndustry(const std::string& value)
{
    industry_ = value;
    industryIsSet_ = true;
}

bool ProductSummary::industryIsSet() const
{
    return industryIsSet_;
}

void ProductSummary::unsetindustry()
{
    industryIsSet_ = false;
}

std::string ProductSummary::getDescription() const
{
    return description_;
}

void ProductSummary::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ProductSummary::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ProductSummary::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ProductSummary::getCreateTime() const
{
    return createTime_;
}

void ProductSummary::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ProductSummary::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ProductSummary::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


