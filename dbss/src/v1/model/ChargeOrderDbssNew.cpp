

#include "huaweicloud/dbss/v1/model/ChargeOrderDbssNew.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ChargeOrderDbssNew::ChargeOrderDbssNew()
{
    tagsIsSet_ = false;
    assetNums_ = 0;
    assetNumsIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    chargingMode_ = 0;
    chargingModeIsSet_ = false;
    cloudServiceType_ = "";
    cloudServiceTypeIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
    compositeProductId_ = "";
    compositeProductIdIsSet_ = false;
    deployMode_ = "";
    deployModeIsSet_ = false;
    discountId_ = "";
    discountIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    hxPassword_ = "";
    hxPasswordIsSet_ = false;
    imageBusinessType_ = 0;
    imageBusinessTypeIsSet_ = false;
    isAutoRenew_ = 0;
    isAutoRenewIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nicsIsSet_ = false;
    outsideInsConfigIsSet_ = false;
    periodNum_ = 0;
    periodNumIsSet_ = false;
    periodType_ = 0;
    periodTypeIsSet_ = false;
    productInfosIsSet_ = false;
    promotionActivityId_ = "";
    promotionActivityIdIsSet_ = false;
    promotionInfo_ = "";
    promotionInfoIsSet_ = false;
    publicIpIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
    securityGroupsIsSet_ = false;
    subscriptionNum_ = 0;
    subscriptionNumIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
}

ChargeOrderDbssNew::~ChargeOrderDbssNew() = default;

void ChargeOrderDbssNew::validate()
{
}

web::json::value ChargeOrderDbssNew::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(assetNumsIsSet_) {
        val[utility::conversions::to_string_t("asset_nums")] = ModelBase::toJson(assetNums_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("charging_mode")] = ModelBase::toJson(chargingMode_);
    }
    if(cloudServiceTypeIsSet_) {
        val[utility::conversions::to_string_t("cloud_service_type")] = ModelBase::toJson(cloudServiceType_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }
    if(compositeProductIdIsSet_) {
        val[utility::conversions::to_string_t("composite_product_id")] = ModelBase::toJson(compositeProductId_);
    }
    if(deployModeIsSet_) {
        val[utility::conversions::to_string_t("deploy_mode")] = ModelBase::toJson(deployMode_);
    }
    if(discountIdIsSet_) {
        val[utility::conversions::to_string_t("discount_id")] = ModelBase::toJson(discountId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavor_ref")] = ModelBase::toJson(flavorRef_);
    }
    if(hxPasswordIsSet_) {
        val[utility::conversions::to_string_t("hx_password")] = ModelBase::toJson(hxPassword_);
    }
    if(imageBusinessTypeIsSet_) {
        val[utility::conversions::to_string_t("image_business_type")] = ModelBase::toJson(imageBusinessType_);
    }
    if(isAutoRenewIsSet_) {
        val[utility::conversions::to_string_t("is_auto_renew")] = ModelBase::toJson(isAutoRenew_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nicsIsSet_) {
        val[utility::conversions::to_string_t("nics")] = ModelBase::toJson(nics_);
    }
    if(outsideInsConfigIsSet_) {
        val[utility::conversions::to_string_t("outside_ins_config")] = ModelBase::toJson(outsideInsConfig_);
    }
    if(periodNumIsSet_) {
        val[utility::conversions::to_string_t("period_num")] = ModelBase::toJson(periodNum_);
    }
    if(periodTypeIsSet_) {
        val[utility::conversions::to_string_t("period_type")] = ModelBase::toJson(periodType_);
    }
    if(productInfosIsSet_) {
        val[utility::conversions::to_string_t("product_infos")] = ModelBase::toJson(productInfos_);
    }
    if(promotionActivityIdIsSet_) {
        val[utility::conversions::to_string_t("promotion_activity_id")] = ModelBase::toJson(promotionActivityId_);
    }
    if(promotionInfoIsSet_) {
        val[utility::conversions::to_string_t("promotion_info")] = ModelBase::toJson(promotionInfo_);
    }
    if(publicIpIsSet_) {
        val[utility::conversions::to_string_t("public_ip")] = ModelBase::toJson(publicIp_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(securityGroupsIsSet_) {
        val[utility::conversions::to_string_t("security_groups")] = ModelBase::toJson(securityGroups_);
    }
    if(subscriptionNumIsSet_) {
        val[utility::conversions::to_string_t("subscription_num")] = ModelBase::toJson(subscriptionNum_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }

    return val;
}
bool ChargeOrderDbssNew::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTagInfoBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_nums"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_nums"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetNums(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("charging_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charging_mode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargingMode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("comment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComment(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("composite_product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("composite_product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompositeProductId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deploy_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deploy_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeployMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("discount_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("discount_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiscountId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("flavor_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hx_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hx_password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHxPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_business_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_business_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageBusinessType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nics"));
        if(!fieldValue.is_null())
        {
            std::vector<Nic> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("outside_ins_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("outside_ins_config"));
        if(!fieldValue.is_null())
        {
            OutsideInsConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutsideInsConfig(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("period_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<ProductInfoBeanNew> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("promotion_activity_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("promotion_activity_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPromotionActivityId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("public_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip"));
        if(!fieldValue.is_null())
        {
            PublicIp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("security_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<SecurityGroup> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroups(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    return ok;
}


std::vector<ResourceTagInfoBean>& ChargeOrderDbssNew::getTags()
{
    return tags_;
}

void ChargeOrderDbssNew::setTags(const std::vector<ResourceTagInfoBean>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ChargeOrderDbssNew::tagsIsSet() const
{
    return tagsIsSet_;
}

void ChargeOrderDbssNew::unsettags()
{
    tagsIsSet_ = false;
}

int32_t ChargeOrderDbssNew::getAssetNums() const
{
    return assetNums_;
}

void ChargeOrderDbssNew::setAssetNums(int32_t value)
{
    assetNums_ = value;
    assetNumsIsSet_ = true;
}

bool ChargeOrderDbssNew::assetNumsIsSet() const
{
    return assetNumsIsSet_;
}

void ChargeOrderDbssNew::unsetassetNums()
{
    assetNumsIsSet_ = false;
}

std::string ChargeOrderDbssNew::getAvailabilityZone() const
{
    return availabilityZone_;
}

void ChargeOrderDbssNew::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ChargeOrderDbssNew::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ChargeOrderDbssNew::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

int32_t ChargeOrderDbssNew::getChargingMode() const
{
    return chargingMode_;
}

void ChargeOrderDbssNew::setChargingMode(int32_t value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool ChargeOrderDbssNew::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void ChargeOrderDbssNew::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

std::string ChargeOrderDbssNew::getCloudServiceType() const
{
    return cloudServiceType_;
}

void ChargeOrderDbssNew::setCloudServiceType(const std::string& value)
{
    cloudServiceType_ = value;
    cloudServiceTypeIsSet_ = true;
}

bool ChargeOrderDbssNew::cloudServiceTypeIsSet() const
{
    return cloudServiceTypeIsSet_;
}

void ChargeOrderDbssNew::unsetcloudServiceType()
{
    cloudServiceTypeIsSet_ = false;
}

std::string ChargeOrderDbssNew::getComment() const
{
    return comment_;
}

void ChargeOrderDbssNew::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool ChargeOrderDbssNew::commentIsSet() const
{
    return commentIsSet_;
}

void ChargeOrderDbssNew::unsetcomment()
{
    commentIsSet_ = false;
}

std::string ChargeOrderDbssNew::getCompositeProductId() const
{
    return compositeProductId_;
}

void ChargeOrderDbssNew::setCompositeProductId(const std::string& value)
{
    compositeProductId_ = value;
    compositeProductIdIsSet_ = true;
}

bool ChargeOrderDbssNew::compositeProductIdIsSet() const
{
    return compositeProductIdIsSet_;
}

void ChargeOrderDbssNew::unsetcompositeProductId()
{
    compositeProductIdIsSet_ = false;
}

std::string ChargeOrderDbssNew::getDeployMode() const
{
    return deployMode_;
}

void ChargeOrderDbssNew::setDeployMode(const std::string& value)
{
    deployMode_ = value;
    deployModeIsSet_ = true;
}

bool ChargeOrderDbssNew::deployModeIsSet() const
{
    return deployModeIsSet_;
}

void ChargeOrderDbssNew::unsetdeployMode()
{
    deployModeIsSet_ = false;
}

std::string ChargeOrderDbssNew::getDiscountId() const
{
    return discountId_;
}

void ChargeOrderDbssNew::setDiscountId(const std::string& value)
{
    discountId_ = value;
    discountIdIsSet_ = true;
}

bool ChargeOrderDbssNew::discountIdIsSet() const
{
    return discountIdIsSet_;
}

void ChargeOrderDbssNew::unsetdiscountId()
{
    discountIdIsSet_ = false;
}

std::string ChargeOrderDbssNew::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ChargeOrderDbssNew::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ChargeOrderDbssNew::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ChargeOrderDbssNew::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ChargeOrderDbssNew::getFlavorRef() const
{
    return flavorRef_;
}

void ChargeOrderDbssNew::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool ChargeOrderDbssNew::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void ChargeOrderDbssNew::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

std::string ChargeOrderDbssNew::getHxPassword() const
{
    return hxPassword_;
}

void ChargeOrderDbssNew::setHxPassword(const std::string& value)
{
    hxPassword_ = value;
    hxPasswordIsSet_ = true;
}

bool ChargeOrderDbssNew::hxPasswordIsSet() const
{
    return hxPasswordIsSet_;
}

void ChargeOrderDbssNew::unsethxPassword()
{
    hxPasswordIsSet_ = false;
}

int32_t ChargeOrderDbssNew::getImageBusinessType() const
{
    return imageBusinessType_;
}

void ChargeOrderDbssNew::setImageBusinessType(int32_t value)
{
    imageBusinessType_ = value;
    imageBusinessTypeIsSet_ = true;
}

bool ChargeOrderDbssNew::imageBusinessTypeIsSet() const
{
    return imageBusinessTypeIsSet_;
}

void ChargeOrderDbssNew::unsetimageBusinessType()
{
    imageBusinessTypeIsSet_ = false;
}

int32_t ChargeOrderDbssNew::getIsAutoRenew() const
{
    return isAutoRenew_;
}

void ChargeOrderDbssNew::setIsAutoRenew(int32_t value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool ChargeOrderDbssNew::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void ChargeOrderDbssNew::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

std::string ChargeOrderDbssNew::getName() const
{
    return name_;
}

void ChargeOrderDbssNew::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ChargeOrderDbssNew::nameIsSet() const
{
    return nameIsSet_;
}

void ChargeOrderDbssNew::unsetname()
{
    nameIsSet_ = false;
}

std::vector<Nic>& ChargeOrderDbssNew::getNics()
{
    return nics_;
}

void ChargeOrderDbssNew::setNics(const std::vector<Nic>& value)
{
    nics_ = value;
    nicsIsSet_ = true;
}

bool ChargeOrderDbssNew::nicsIsSet() const
{
    return nicsIsSet_;
}

void ChargeOrderDbssNew::unsetnics()
{
    nicsIsSet_ = false;
}

OutsideInsConfig ChargeOrderDbssNew::getOutsideInsConfig() const
{
    return outsideInsConfig_;
}

void ChargeOrderDbssNew::setOutsideInsConfig(const OutsideInsConfig& value)
{
    outsideInsConfig_ = value;
    outsideInsConfigIsSet_ = true;
}

bool ChargeOrderDbssNew::outsideInsConfigIsSet() const
{
    return outsideInsConfigIsSet_;
}

void ChargeOrderDbssNew::unsetoutsideInsConfig()
{
    outsideInsConfigIsSet_ = false;
}

int32_t ChargeOrderDbssNew::getPeriodNum() const
{
    return periodNum_;
}

void ChargeOrderDbssNew::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool ChargeOrderDbssNew::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void ChargeOrderDbssNew::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

int32_t ChargeOrderDbssNew::getPeriodType() const
{
    return periodType_;
}

void ChargeOrderDbssNew::setPeriodType(int32_t value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool ChargeOrderDbssNew::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void ChargeOrderDbssNew::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

std::vector<ProductInfoBeanNew>& ChargeOrderDbssNew::getProductInfos()
{
    return productInfos_;
}

void ChargeOrderDbssNew::setProductInfos(const std::vector<ProductInfoBeanNew>& value)
{
    productInfos_ = value;
    productInfosIsSet_ = true;
}

bool ChargeOrderDbssNew::productInfosIsSet() const
{
    return productInfosIsSet_;
}

void ChargeOrderDbssNew::unsetproductInfos()
{
    productInfosIsSet_ = false;
}

std::string ChargeOrderDbssNew::getPromotionActivityId() const
{
    return promotionActivityId_;
}

void ChargeOrderDbssNew::setPromotionActivityId(const std::string& value)
{
    promotionActivityId_ = value;
    promotionActivityIdIsSet_ = true;
}

bool ChargeOrderDbssNew::promotionActivityIdIsSet() const
{
    return promotionActivityIdIsSet_;
}

void ChargeOrderDbssNew::unsetpromotionActivityId()
{
    promotionActivityIdIsSet_ = false;
}

std::string ChargeOrderDbssNew::getPromotionInfo() const
{
    return promotionInfo_;
}

void ChargeOrderDbssNew::setPromotionInfo(const std::string& value)
{
    promotionInfo_ = value;
    promotionInfoIsSet_ = true;
}

bool ChargeOrderDbssNew::promotionInfoIsSet() const
{
    return promotionInfoIsSet_;
}

void ChargeOrderDbssNew::unsetpromotionInfo()
{
    promotionInfoIsSet_ = false;
}

PublicIp ChargeOrderDbssNew::getPublicIp() const
{
    return publicIp_;
}

void ChargeOrderDbssNew::setPublicIp(const PublicIp& value)
{
    publicIp_ = value;
    publicIpIsSet_ = true;
}

bool ChargeOrderDbssNew::publicIpIsSet() const
{
    return publicIpIsSet_;
}

void ChargeOrderDbssNew::unsetpublicIp()
{
    publicIpIsSet_ = false;
}

std::string ChargeOrderDbssNew::getRegionId() const
{
    return regionId_;
}

void ChargeOrderDbssNew::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool ChargeOrderDbssNew::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void ChargeOrderDbssNew::unsetregionId()
{
    regionIdIsSet_ = false;
}

std::vector<SecurityGroup>& ChargeOrderDbssNew::getSecurityGroups()
{
    return securityGroups_;
}

void ChargeOrderDbssNew::setSecurityGroups(const std::vector<SecurityGroup>& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool ChargeOrderDbssNew::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void ChargeOrderDbssNew::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

int32_t ChargeOrderDbssNew::getSubscriptionNum() const
{
    return subscriptionNum_;
}

void ChargeOrderDbssNew::setSubscriptionNum(int32_t value)
{
    subscriptionNum_ = value;
    subscriptionNumIsSet_ = true;
}

bool ChargeOrderDbssNew::subscriptionNumIsSet() const
{
    return subscriptionNumIsSet_;
}

void ChargeOrderDbssNew::unsetsubscriptionNum()
{
    subscriptionNumIsSet_ = false;
}

std::string ChargeOrderDbssNew::getVpcId() const
{
    return vpcId_;
}

void ChargeOrderDbssNew::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ChargeOrderDbssNew::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ChargeOrderDbssNew::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

}
}
}
}
}


