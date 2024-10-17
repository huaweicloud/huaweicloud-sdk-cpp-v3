

#include "huaweicloud/dbss/v1/model/CreateInstancePeriodRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateInstancePeriodRequest::CreateInstancePeriodRequest()
{
    name_ = "";
    nameIsSet_ = false;
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    nicsIsSet_ = false;
    securityGroupsIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    cloudServiceType_ = "";
    cloudServiceTypeIsSet_ = false;
    chargingMode_ = 0;
    chargingModeIsSet_ = false;
    periodType_ = 0;
    periodTypeIsSet_ = false;
    periodNum_ = 0;
    periodNumIsSet_ = false;
    subscriptionNum_ = 0;
    subscriptionNumIsSet_ = false;
    productInfosIsSet_ = false;
    tagsIsSet_ = false;
    promotionInfo_ = "";
    promotionInfoIsSet_ = false;
    isAutoRenew_ = 0;
    isAutoRenewIsSet_ = false;
}

CreateInstancePeriodRequest::~CreateInstancePeriodRequest() = default;

void CreateInstancePeriodRequest::validate()
{
}

web::json::value CreateInstancePeriodRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavor_ref")] = ModelBase::toJson(flavorRef_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(nicsIsSet_) {
        val[utility::conversions::to_string_t("nics")] = ModelBase::toJson(nics_);
    }
    if(securityGroupsIsSet_) {
        val[utility::conversions::to_string_t("security_groups")] = ModelBase::toJson(securityGroups_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(cloudServiceTypeIsSet_) {
        val[utility::conversions::to_string_t("cloud_service_type")] = ModelBase::toJson(cloudServiceType_);
    }
    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("charging_mode")] = ModelBase::toJson(chargingMode_);
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
    if(productInfosIsSet_) {
        val[utility::conversions::to_string_t("product_infos")] = ModelBase::toJson(productInfos_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(promotionInfoIsSet_) {
        val[utility::conversions::to_string_t("promotion_info")] = ModelBase::toJson(promotionInfo_);
    }
    if(isAutoRenewIsSet_) {
        val[utility::conversions::to_string_t("is_auto_renew")] = ModelBase::toJson(isAutoRenew_);
    }

    return val;
}
bool CreateInstancePeriodRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("nics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nics"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateInstancePeriodRequest_nics> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateInstancePeriodRequest_security_groups> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComment(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("charging_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charging_mode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargingMode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("product_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateInstancePeriodRequest_product_infos> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<KeyValueBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_auto_renew"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_renew"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoRenew(refVal);
        }
    }
    return ok;
}


std::string CreateInstancePeriodRequest::getName() const
{
    return name_;
}

void CreateInstancePeriodRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateInstancePeriodRequest::nameIsSet() const
{
    return nameIsSet_;
}

void CreateInstancePeriodRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateInstancePeriodRequest::getFlavorRef() const
{
    return flavorRef_;
}

void CreateInstancePeriodRequest::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool CreateInstancePeriodRequest::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void CreateInstancePeriodRequest::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

std::string CreateInstancePeriodRequest::getVpcId() const
{
    return vpcId_;
}

void CreateInstancePeriodRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool CreateInstancePeriodRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void CreateInstancePeriodRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string CreateInstancePeriodRequest::getAvailabilityZone() const
{
    return availabilityZone_;
}

void CreateInstancePeriodRequest::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool CreateInstancePeriodRequest::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void CreateInstancePeriodRequest::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string CreateInstancePeriodRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateInstancePeriodRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateInstancePeriodRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateInstancePeriodRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<CreateInstancePeriodRequest_nics>& CreateInstancePeriodRequest::getNics()
{
    return nics_;
}

void CreateInstancePeriodRequest::setNics(const std::vector<CreateInstancePeriodRequest_nics>& value)
{
    nics_ = value;
    nicsIsSet_ = true;
}

bool CreateInstancePeriodRequest::nicsIsSet() const
{
    return nicsIsSet_;
}

void CreateInstancePeriodRequest::unsetnics()
{
    nicsIsSet_ = false;
}

std::vector<CreateInstancePeriodRequest_security_groups>& CreateInstancePeriodRequest::getSecurityGroups()
{
    return securityGroups_;
}

void CreateInstancePeriodRequest::setSecurityGroups(const std::vector<CreateInstancePeriodRequest_security_groups>& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool CreateInstancePeriodRequest::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void CreateInstancePeriodRequest::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

std::string CreateInstancePeriodRequest::getComment() const
{
    return comment_;
}

void CreateInstancePeriodRequest::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool CreateInstancePeriodRequest::commentIsSet() const
{
    return commentIsSet_;
}

void CreateInstancePeriodRequest::unsetcomment()
{
    commentIsSet_ = false;
}

std::string CreateInstancePeriodRequest::getRegion() const
{
    return region_;
}

void CreateInstancePeriodRequest::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool CreateInstancePeriodRequest::regionIsSet() const
{
    return regionIsSet_;
}

void CreateInstancePeriodRequest::unsetregion()
{
    regionIsSet_ = false;
}

std::string CreateInstancePeriodRequest::getCloudServiceType() const
{
    return cloudServiceType_;
}

void CreateInstancePeriodRequest::setCloudServiceType(const std::string& value)
{
    cloudServiceType_ = value;
    cloudServiceTypeIsSet_ = true;
}

bool CreateInstancePeriodRequest::cloudServiceTypeIsSet() const
{
    return cloudServiceTypeIsSet_;
}

void CreateInstancePeriodRequest::unsetcloudServiceType()
{
    cloudServiceTypeIsSet_ = false;
}

int32_t CreateInstancePeriodRequest::getChargingMode() const
{
    return chargingMode_;
}

void CreateInstancePeriodRequest::setChargingMode(int32_t value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool CreateInstancePeriodRequest::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void CreateInstancePeriodRequest::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

int32_t CreateInstancePeriodRequest::getPeriodType() const
{
    return periodType_;
}

void CreateInstancePeriodRequest::setPeriodType(int32_t value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool CreateInstancePeriodRequest::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void CreateInstancePeriodRequest::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

int32_t CreateInstancePeriodRequest::getPeriodNum() const
{
    return periodNum_;
}

void CreateInstancePeriodRequest::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool CreateInstancePeriodRequest::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void CreateInstancePeriodRequest::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

int32_t CreateInstancePeriodRequest::getSubscriptionNum() const
{
    return subscriptionNum_;
}

void CreateInstancePeriodRequest::setSubscriptionNum(int32_t value)
{
    subscriptionNum_ = value;
    subscriptionNumIsSet_ = true;
}

bool CreateInstancePeriodRequest::subscriptionNumIsSet() const
{
    return subscriptionNumIsSet_;
}

void CreateInstancePeriodRequest::unsetsubscriptionNum()
{
    subscriptionNumIsSet_ = false;
}

std::vector<CreateInstancePeriodRequest_product_infos>& CreateInstancePeriodRequest::getProductInfos()
{
    return productInfos_;
}

void CreateInstancePeriodRequest::setProductInfos(const std::vector<CreateInstancePeriodRequest_product_infos>& value)
{
    productInfos_ = value;
    productInfosIsSet_ = true;
}

bool CreateInstancePeriodRequest::productInfosIsSet() const
{
    return productInfosIsSet_;
}

void CreateInstancePeriodRequest::unsetproductInfos()
{
    productInfosIsSet_ = false;
}

std::vector<KeyValueBean>& CreateInstancePeriodRequest::getTags()
{
    return tags_;
}

void CreateInstancePeriodRequest::setTags(const std::vector<KeyValueBean>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateInstancePeriodRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateInstancePeriodRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::string CreateInstancePeriodRequest::getPromotionInfo() const
{
    return promotionInfo_;
}

void CreateInstancePeriodRequest::setPromotionInfo(const std::string& value)
{
    promotionInfo_ = value;
    promotionInfoIsSet_ = true;
}

bool CreateInstancePeriodRequest::promotionInfoIsSet() const
{
    return promotionInfoIsSet_;
}

void CreateInstancePeriodRequest::unsetpromotionInfo()
{
    promotionInfoIsSet_ = false;
}

int32_t CreateInstancePeriodRequest::getIsAutoRenew() const
{
    return isAutoRenew_;
}

void CreateInstancePeriodRequest::setIsAutoRenew(int32_t value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool CreateInstancePeriodRequest::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void CreateInstancePeriodRequest::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

}
}
}
}
}


