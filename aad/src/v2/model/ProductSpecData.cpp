

#include "huaweicloud/aad/v2/model/ProductSpecData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ProductSpecData::ProductSpecData()
{
    productUuid_ = "";
    productUuidIsSet_ = false;
    ispSpec_ = "";
    ispSpecIsSet_ = false;
    dataCenter_ = "";
    dataCenterIsSet_ = false;
    specType_ = 0;
    specTypeIsSet_ = false;
    basicBandwidth_ = 0;
    basicBandwidthIsSet_ = false;
    elasticBandwidth_ = 0;
    elasticBandwidthIsSet_ = false;
    serviceBandwidth_ = 0;
    serviceBandwidthIsSet_ = false;
    portNum_ = 0;
    portNumIsSet_ = false;
    bindDomainNum_ = 0;
    bindDomainNumIsSet_ = false;
    elasticServiceBandwidth_ = 0;
    elasticServiceBandwidthIsSet_ = false;
    elasticServiceBandwidthType_ = 0;
    elasticServiceBandwidthTypeIsSet_ = false;
    mainResourceType_ = "";
    mainResourceTypeIsSet_ = false;
    mainResourceSpecCode_ = "";
    mainResourceSpecCodeIsSet_ = false;
    mainResourceProductId_ = "";
    mainResourceProductIdIsSet_ = false;
}

ProductSpecData::~ProductSpecData() = default;

void ProductSpecData::validate()
{
}

web::json::value ProductSpecData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(productUuidIsSet_) {
        val[utility::conversions::to_string_t("product_uuid")] = ModelBase::toJson(productUuid_);
    }
    if(ispSpecIsSet_) {
        val[utility::conversions::to_string_t("isp_spec")] = ModelBase::toJson(ispSpec_);
    }
    if(dataCenterIsSet_) {
        val[utility::conversions::to_string_t("data_center")] = ModelBase::toJson(dataCenter_);
    }
    if(specTypeIsSet_) {
        val[utility::conversions::to_string_t("spec_type")] = ModelBase::toJson(specType_);
    }
    if(basicBandwidthIsSet_) {
        val[utility::conversions::to_string_t("basic_bandwidth")] = ModelBase::toJson(basicBandwidth_);
    }
    if(elasticBandwidthIsSet_) {
        val[utility::conversions::to_string_t("elastic_bandwidth")] = ModelBase::toJson(elasticBandwidth_);
    }
    if(serviceBandwidthIsSet_) {
        val[utility::conversions::to_string_t("service_bandwidth")] = ModelBase::toJson(serviceBandwidth_);
    }
    if(portNumIsSet_) {
        val[utility::conversions::to_string_t("port_num")] = ModelBase::toJson(portNum_);
    }
    if(bindDomainNumIsSet_) {
        val[utility::conversions::to_string_t("bind_domain_num")] = ModelBase::toJson(bindDomainNum_);
    }
    if(elasticServiceBandwidthIsSet_) {
        val[utility::conversions::to_string_t("elastic_service_bandwidth")] = ModelBase::toJson(elasticServiceBandwidth_);
    }
    if(elasticServiceBandwidthTypeIsSet_) {
        val[utility::conversions::to_string_t("elastic_service_bandwidth_type")] = ModelBase::toJson(elasticServiceBandwidthType_);
    }
    if(mainResourceTypeIsSet_) {
        val[utility::conversions::to_string_t("main_resource_type")] = ModelBase::toJson(mainResourceType_);
    }
    if(mainResourceSpecCodeIsSet_) {
        val[utility::conversions::to_string_t("main_resource_spec_code")] = ModelBase::toJson(mainResourceSpecCode_);
    }
    if(mainResourceProductIdIsSet_) {
        val[utility::conversions::to_string_t("main_resource_product_id")] = ModelBase::toJson(mainResourceProductId_);
    }

    return val;
}
bool ProductSpecData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("product_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isp_spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isp_spec"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIspSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_center"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_center"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataCenter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("basic_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("basic_bandwidth"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBasicBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("elastic_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elastic_bandwidth"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElasticBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_bandwidth"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bind_domain_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bind_domain_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBindDomainNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("elastic_service_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elastic_service_bandwidth"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElasticServiceBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("elastic_service_bandwidth_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elastic_service_bandwidth_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElasticServiceBandwidthType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("main_resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("main_resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMainResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("main_resource_spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("main_resource_spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMainResourceSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("main_resource_product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("main_resource_product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMainResourceProductId(refVal);
        }
    }
    return ok;
}


std::string ProductSpecData::getProductUuid() const
{
    return productUuid_;
}

void ProductSpecData::setProductUuid(const std::string& value)
{
    productUuid_ = value;
    productUuidIsSet_ = true;
}

bool ProductSpecData::productUuidIsSet() const
{
    return productUuidIsSet_;
}

void ProductSpecData::unsetproductUuid()
{
    productUuidIsSet_ = false;
}

std::string ProductSpecData::getIspSpec() const
{
    return ispSpec_;
}

void ProductSpecData::setIspSpec(const std::string& value)
{
    ispSpec_ = value;
    ispSpecIsSet_ = true;
}

bool ProductSpecData::ispSpecIsSet() const
{
    return ispSpecIsSet_;
}

void ProductSpecData::unsetispSpec()
{
    ispSpecIsSet_ = false;
}

std::string ProductSpecData::getDataCenter() const
{
    return dataCenter_;
}

void ProductSpecData::setDataCenter(const std::string& value)
{
    dataCenter_ = value;
    dataCenterIsSet_ = true;
}

bool ProductSpecData::dataCenterIsSet() const
{
    return dataCenterIsSet_;
}

void ProductSpecData::unsetdataCenter()
{
    dataCenterIsSet_ = false;
}

int32_t ProductSpecData::getSpecType() const
{
    return specType_;
}

void ProductSpecData::setSpecType(int32_t value)
{
    specType_ = value;
    specTypeIsSet_ = true;
}

bool ProductSpecData::specTypeIsSet() const
{
    return specTypeIsSet_;
}

void ProductSpecData::unsetspecType()
{
    specTypeIsSet_ = false;
}

int32_t ProductSpecData::getBasicBandwidth() const
{
    return basicBandwidth_;
}

void ProductSpecData::setBasicBandwidth(int32_t value)
{
    basicBandwidth_ = value;
    basicBandwidthIsSet_ = true;
}

bool ProductSpecData::basicBandwidthIsSet() const
{
    return basicBandwidthIsSet_;
}

void ProductSpecData::unsetbasicBandwidth()
{
    basicBandwidthIsSet_ = false;
}

int32_t ProductSpecData::getElasticBandwidth() const
{
    return elasticBandwidth_;
}

void ProductSpecData::setElasticBandwidth(int32_t value)
{
    elasticBandwidth_ = value;
    elasticBandwidthIsSet_ = true;
}

bool ProductSpecData::elasticBandwidthIsSet() const
{
    return elasticBandwidthIsSet_;
}

void ProductSpecData::unsetelasticBandwidth()
{
    elasticBandwidthIsSet_ = false;
}

int32_t ProductSpecData::getServiceBandwidth() const
{
    return serviceBandwidth_;
}

void ProductSpecData::setServiceBandwidth(int32_t value)
{
    serviceBandwidth_ = value;
    serviceBandwidthIsSet_ = true;
}

bool ProductSpecData::serviceBandwidthIsSet() const
{
    return serviceBandwidthIsSet_;
}

void ProductSpecData::unsetserviceBandwidth()
{
    serviceBandwidthIsSet_ = false;
}

int32_t ProductSpecData::getPortNum() const
{
    return portNum_;
}

void ProductSpecData::setPortNum(int32_t value)
{
    portNum_ = value;
    portNumIsSet_ = true;
}

bool ProductSpecData::portNumIsSet() const
{
    return portNumIsSet_;
}

void ProductSpecData::unsetportNum()
{
    portNumIsSet_ = false;
}

int32_t ProductSpecData::getBindDomainNum() const
{
    return bindDomainNum_;
}

void ProductSpecData::setBindDomainNum(int32_t value)
{
    bindDomainNum_ = value;
    bindDomainNumIsSet_ = true;
}

bool ProductSpecData::bindDomainNumIsSet() const
{
    return bindDomainNumIsSet_;
}

void ProductSpecData::unsetbindDomainNum()
{
    bindDomainNumIsSet_ = false;
}

int32_t ProductSpecData::getElasticServiceBandwidth() const
{
    return elasticServiceBandwidth_;
}

void ProductSpecData::setElasticServiceBandwidth(int32_t value)
{
    elasticServiceBandwidth_ = value;
    elasticServiceBandwidthIsSet_ = true;
}

bool ProductSpecData::elasticServiceBandwidthIsSet() const
{
    return elasticServiceBandwidthIsSet_;
}

void ProductSpecData::unsetelasticServiceBandwidth()
{
    elasticServiceBandwidthIsSet_ = false;
}

int32_t ProductSpecData::getElasticServiceBandwidthType() const
{
    return elasticServiceBandwidthType_;
}

void ProductSpecData::setElasticServiceBandwidthType(int32_t value)
{
    elasticServiceBandwidthType_ = value;
    elasticServiceBandwidthTypeIsSet_ = true;
}

bool ProductSpecData::elasticServiceBandwidthTypeIsSet() const
{
    return elasticServiceBandwidthTypeIsSet_;
}

void ProductSpecData::unsetelasticServiceBandwidthType()
{
    elasticServiceBandwidthTypeIsSet_ = false;
}

std::string ProductSpecData::getMainResourceType() const
{
    return mainResourceType_;
}

void ProductSpecData::setMainResourceType(const std::string& value)
{
    mainResourceType_ = value;
    mainResourceTypeIsSet_ = true;
}

bool ProductSpecData::mainResourceTypeIsSet() const
{
    return mainResourceTypeIsSet_;
}

void ProductSpecData::unsetmainResourceType()
{
    mainResourceTypeIsSet_ = false;
}

std::string ProductSpecData::getMainResourceSpecCode() const
{
    return mainResourceSpecCode_;
}

void ProductSpecData::setMainResourceSpecCode(const std::string& value)
{
    mainResourceSpecCode_ = value;
    mainResourceSpecCodeIsSet_ = true;
}

bool ProductSpecData::mainResourceSpecCodeIsSet() const
{
    return mainResourceSpecCodeIsSet_;
}

void ProductSpecData::unsetmainResourceSpecCode()
{
    mainResourceSpecCodeIsSet_ = false;
}

std::string ProductSpecData::getMainResourceProductId() const
{
    return mainResourceProductId_;
}

void ProductSpecData::setMainResourceProductId(const std::string& value)
{
    mainResourceProductId_ = value;
    mainResourceProductIdIsSet_ = true;
}

bool ProductSpecData::mainResourceProductIdIsSet() const
{
    return mainResourceProductIdIsSet_;
}

void ProductSpecData::unsetmainResourceProductId()
{
    mainResourceProductIdIsSet_ = false;
}

}
}
}
}
}


