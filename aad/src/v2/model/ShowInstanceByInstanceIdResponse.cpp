

#include "huaweicloud/aad/v2/model/ShowInstanceByInstanceIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ShowInstanceByInstanceIdResponse::ShowInstanceByInstanceIdResponse()
{
    instanceName_ = "";
    instanceNameIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    expireTime_ = 0;
    expireTimeIsSet_ = false;
    createTime_ = 0;
    createTimeIsSet_ = false;
    currentTime_ = 0;
    currentTimeIsSet_ = false;
    productSpecDataIsSet_ = false;
    instanceConfigIsSet_ = false;
    elasticServiceBwUpdateEnable_ = false;
    elasticServiceBwUpdateEnableIsSet_ = false;
}

ShowInstanceByInstanceIdResponse::~ShowInstanceByInstanceIdResponse() = default;

void ShowInstanceByInstanceIdResponse::validate()
{
}

web::json::value ShowInstanceByInstanceIdResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(currentTimeIsSet_) {
        val[utility::conversions::to_string_t("current_time")] = ModelBase::toJson(currentTime_);
    }
    if(productSpecDataIsSet_) {
        val[utility::conversions::to_string_t("product_spec_data")] = ModelBase::toJson(productSpecData_);
    }
    if(instanceConfigIsSet_) {
        val[utility::conversions::to_string_t("instance_config")] = ModelBase::toJson(instanceConfig_);
    }
    if(elasticServiceBwUpdateEnableIsSet_) {
        val[utility::conversions::to_string_t("elastic_service_bw_update_enable")] = ModelBase::toJson(elasticServiceBwUpdateEnable_);
    }

    return val;
}
bool ShowInstanceByInstanceIdResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_spec_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_spec_data"));
        if(!fieldValue.is_null())
        {
            ProductSpecData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductSpecData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_config"));
        if(!fieldValue.is_null())
        {
            InstanceConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("elastic_service_bw_update_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elastic_service_bw_update_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElasticServiceBwUpdateEnable(refVal);
        }
    }
    return ok;
}


std::string ShowInstanceByInstanceIdResponse::getInstanceName() const
{
    return instanceName_;
}

void ShowInstanceByInstanceIdResponse::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ShowInstanceByInstanceIdResponse::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ShowInstanceByInstanceIdResponse::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string ShowInstanceByInstanceIdResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowInstanceByInstanceIdResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowInstanceByInstanceIdResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowInstanceByInstanceIdResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ShowInstanceByInstanceIdResponse::getVersion() const
{
    return version_;
}

void ShowInstanceByInstanceIdResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowInstanceByInstanceIdResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ShowInstanceByInstanceIdResponse::unsetversion()
{
    versionIsSet_ = false;
}

int32_t ShowInstanceByInstanceIdResponse::getExpireTime() const
{
    return expireTime_;
}

void ShowInstanceByInstanceIdResponse::setExpireTime(int32_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool ShowInstanceByInstanceIdResponse::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void ShowInstanceByInstanceIdResponse::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

int32_t ShowInstanceByInstanceIdResponse::getCreateTime() const
{
    return createTime_;
}

void ShowInstanceByInstanceIdResponse::setCreateTime(int32_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowInstanceByInstanceIdResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowInstanceByInstanceIdResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int32_t ShowInstanceByInstanceIdResponse::getCurrentTime() const
{
    return currentTime_;
}

void ShowInstanceByInstanceIdResponse::setCurrentTime(int32_t value)
{
    currentTime_ = value;
    currentTimeIsSet_ = true;
}

bool ShowInstanceByInstanceIdResponse::currentTimeIsSet() const
{
    return currentTimeIsSet_;
}

void ShowInstanceByInstanceIdResponse::unsetcurrentTime()
{
    currentTimeIsSet_ = false;
}

ProductSpecData ShowInstanceByInstanceIdResponse::getProductSpecData() const
{
    return productSpecData_;
}

void ShowInstanceByInstanceIdResponse::setProductSpecData(const ProductSpecData& value)
{
    productSpecData_ = value;
    productSpecDataIsSet_ = true;
}

bool ShowInstanceByInstanceIdResponse::productSpecDataIsSet() const
{
    return productSpecDataIsSet_;
}

void ShowInstanceByInstanceIdResponse::unsetproductSpecData()
{
    productSpecDataIsSet_ = false;
}

InstanceConfig ShowInstanceByInstanceIdResponse::getInstanceConfig() const
{
    return instanceConfig_;
}

void ShowInstanceByInstanceIdResponse::setInstanceConfig(const InstanceConfig& value)
{
    instanceConfig_ = value;
    instanceConfigIsSet_ = true;
}

bool ShowInstanceByInstanceIdResponse::instanceConfigIsSet() const
{
    return instanceConfigIsSet_;
}

void ShowInstanceByInstanceIdResponse::unsetinstanceConfig()
{
    instanceConfigIsSet_ = false;
}

bool ShowInstanceByInstanceIdResponse::isElasticServiceBwUpdateEnable() const
{
    return elasticServiceBwUpdateEnable_;
}

void ShowInstanceByInstanceIdResponse::setElasticServiceBwUpdateEnable(bool value)
{
    elasticServiceBwUpdateEnable_ = value;
    elasticServiceBwUpdateEnableIsSet_ = true;
}

bool ShowInstanceByInstanceIdResponse::elasticServiceBwUpdateEnableIsSet() const
{
    return elasticServiceBwUpdateEnableIsSet_;
}

void ShowInstanceByInstanceIdResponse::unsetelasticServiceBwUpdateEnable()
{
    elasticServiceBwUpdateEnableIsSet_ = false;
}

}
}
}
}
}


