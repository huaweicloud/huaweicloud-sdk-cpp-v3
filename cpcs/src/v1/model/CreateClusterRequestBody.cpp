

#include "huaweicloud/cpcs/v1/model/CreateClusterRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




CreateClusterRequestBody::CreateClusterRequestBody()
{
    chargingMode_ = 0;
    chargingModeIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
    periodType_ = 0;
    periodTypeIsSet_ = false;
    periodNum_ = 0;
    periodNumIsSet_ = false;
    subscriptionNum_ = 0;
    subscriptionNumIsSet_ = false;
    periodProductId_ = "";
    periodProductIdIsSet_ = false;
    periodResourceSpecCode_ = "";
    periodResourceSpecCodeIsSet_ = false;
    clusterName_ = "";
    clusterNameIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    shareType_ = "";
    shareTypeIsSet_ = false;
    imageId_ = "";
    imageIdIsSet_ = false;
    isAutoRenew_ = 0;
    isAutoRenewIsSet_ = false;
    promotionInfo_ = "";
    promotionInfoIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    az_ = "";
    azIsSet_ = false;
}

CreateClusterRequestBody::~CreateClusterRequestBody() = default;

void CreateClusterRequestBody::validate()
{
}

web::json::value CreateClusterRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("charging_mode")] = ModelBase::toJson(chargingMode_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(periodTypeIsSet_) {
        val[utility::conversions::to_string_t("period_type")] = ModelBase::toJson(periodType_);
    }
    if(periodNumIsSet_) {
        val[utility::conversions::to_string_t("period_num")] = ModelBase::toJson(periodNum_);
    }
    if(subscriptionNumIsSet_) {
        val[utility::conversions::to_string_t("subscription_num")] = ModelBase::toJson(subscriptionNum_);
    }
    if(periodProductIdIsSet_) {
        val[utility::conversions::to_string_t("period_product_id")] = ModelBase::toJson(periodProductId_);
    }
    if(periodResourceSpecCodeIsSet_) {
        val[utility::conversions::to_string_t("period_resource_spec_code")] = ModelBase::toJson(periodResourceSpecCode_);
    }
    if(clusterNameIsSet_) {
        val[utility::conversions::to_string_t("cluster_name")] = ModelBase::toJson(clusterName_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(shareTypeIsSet_) {
        val[utility::conversions::to_string_t("share_type")] = ModelBase::toJson(shareType_);
    }
    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(isAutoRenewIsSet_) {
        val[utility::conversions::to_string_t("is_auto_renew")] = ModelBase::toJson(isAutoRenew_);
    }
    if(promotionInfoIsSet_) {
        val[utility::conversions::to_string_t("promotion_info")] = ModelBase::toJson(promotionInfo_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(azIsSet_) {
        val[utility::conversions::to_string_t("az")] = ModelBase::toJson(az_);
    }

    return val;
}
bool CreateClusterRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("charging_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charging_mode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargingMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscription_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period_product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period_product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodProductId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period_resource_spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period_resource_spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodResourceSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("share_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("share_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShareType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_renew"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_renew"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoRenew(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("promotion_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("promotion_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPromotionInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAz(refVal);
        }
    }
    return ok;
}


int32_t CreateClusterRequestBody::getChargingMode() const
{
    return chargingMode_;
}

void CreateClusterRequestBody::setChargingMode(int32_t value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool CreateClusterRequestBody::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void CreateClusterRequestBody::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

std::string CreateClusterRequestBody::getRegionId() const
{
    return regionId_;
}

void CreateClusterRequestBody::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool CreateClusterRequestBody::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void CreateClusterRequestBody::unsetregionId()
{
    regionIdIsSet_ = false;
}

int32_t CreateClusterRequestBody::getPeriodType() const
{
    return periodType_;
}

void CreateClusterRequestBody::setPeriodType(int32_t value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool CreateClusterRequestBody::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void CreateClusterRequestBody::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

int32_t CreateClusterRequestBody::getPeriodNum() const
{
    return periodNum_;
}

void CreateClusterRequestBody::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool CreateClusterRequestBody::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void CreateClusterRequestBody::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

int32_t CreateClusterRequestBody::getSubscriptionNum() const
{
    return subscriptionNum_;
}

void CreateClusterRequestBody::setSubscriptionNum(int32_t value)
{
    subscriptionNum_ = value;
    subscriptionNumIsSet_ = true;
}

bool CreateClusterRequestBody::subscriptionNumIsSet() const
{
    return subscriptionNumIsSet_;
}

void CreateClusterRequestBody::unsetsubscriptionNum()
{
    subscriptionNumIsSet_ = false;
}

std::string CreateClusterRequestBody::getPeriodProductId() const
{
    return periodProductId_;
}

void CreateClusterRequestBody::setPeriodProductId(const std::string& value)
{
    periodProductId_ = value;
    periodProductIdIsSet_ = true;
}

bool CreateClusterRequestBody::periodProductIdIsSet() const
{
    return periodProductIdIsSet_;
}

void CreateClusterRequestBody::unsetperiodProductId()
{
    periodProductIdIsSet_ = false;
}

std::string CreateClusterRequestBody::getPeriodResourceSpecCode() const
{
    return periodResourceSpecCode_;
}

void CreateClusterRequestBody::setPeriodResourceSpecCode(const std::string& value)
{
    periodResourceSpecCode_ = value;
    periodResourceSpecCodeIsSet_ = true;
}

bool CreateClusterRequestBody::periodResourceSpecCodeIsSet() const
{
    return periodResourceSpecCodeIsSet_;
}

void CreateClusterRequestBody::unsetperiodResourceSpecCode()
{
    periodResourceSpecCodeIsSet_ = false;
}

std::string CreateClusterRequestBody::getClusterName() const
{
    return clusterName_;
}

void CreateClusterRequestBody::setClusterName(const std::string& value)
{
    clusterName_ = value;
    clusterNameIsSet_ = true;
}

bool CreateClusterRequestBody::clusterNameIsSet() const
{
    return clusterNameIsSet_;
}

void CreateClusterRequestBody::unsetclusterName()
{
    clusterNameIsSet_ = false;
}

std::string CreateClusterRequestBody::getServiceType() const
{
    return serviceType_;
}

void CreateClusterRequestBody::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool CreateClusterRequestBody::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void CreateClusterRequestBody::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string CreateClusterRequestBody::getShareType() const
{
    return shareType_;
}

void CreateClusterRequestBody::setShareType(const std::string& value)
{
    shareType_ = value;
    shareTypeIsSet_ = true;
}

bool CreateClusterRequestBody::shareTypeIsSet() const
{
    return shareTypeIsSet_;
}

void CreateClusterRequestBody::unsetshareType()
{
    shareTypeIsSet_ = false;
}

std::string CreateClusterRequestBody::getImageId() const
{
    return imageId_;
}

void CreateClusterRequestBody::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool CreateClusterRequestBody::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void CreateClusterRequestBody::unsetimageId()
{
    imageIdIsSet_ = false;
}

int32_t CreateClusterRequestBody::getIsAutoRenew() const
{
    return isAutoRenew_;
}

void CreateClusterRequestBody::setIsAutoRenew(int32_t value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool CreateClusterRequestBody::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void CreateClusterRequestBody::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

std::string CreateClusterRequestBody::getPromotionInfo() const
{
    return promotionInfo_;
}

void CreateClusterRequestBody::setPromotionInfo(const std::string& value)
{
    promotionInfo_ = value;
    promotionInfoIsSet_ = true;
}

bool CreateClusterRequestBody::promotionInfoIsSet() const
{
    return promotionInfoIsSet_;
}

void CreateClusterRequestBody::unsetpromotionInfo()
{
    promotionInfoIsSet_ = false;
}

std::string CreateClusterRequestBody::getAppId() const
{
    return appId_;
}

void CreateClusterRequestBody::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool CreateClusterRequestBody::appIdIsSet() const
{
    return appIdIsSet_;
}

void CreateClusterRequestBody::unsetappId()
{
    appIdIsSet_ = false;
}

std::string CreateClusterRequestBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateClusterRequestBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateClusterRequestBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateClusterRequestBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string CreateClusterRequestBody::getType() const
{
    return type_;
}

void CreateClusterRequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateClusterRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void CreateClusterRequestBody::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateClusterRequestBody::getAz() const
{
    return az_;
}

void CreateClusterRequestBody::setAz(const std::string& value)
{
    az_ = value;
    azIsSet_ = true;
}

bool CreateClusterRequestBody::azIsSet() const
{
    return azIsSet_;
}

void CreateClusterRequestBody::unsetaz()
{
    azIsSet_ = false;
}

}
}
}
}
}


