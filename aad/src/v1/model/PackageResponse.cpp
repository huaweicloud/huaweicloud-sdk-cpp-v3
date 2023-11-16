

#include "huaweicloud/aad/v1/model/PackageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




PackageResponse::PackageResponse()
{
    packageId_ = "";
    packageIdIsSet_ = false;
    packageName_ = "";
    packageNameIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
    protectionType_ = 0;
    protectionTypeIsSet_ = false;
    instanceType_ = "";
    instanceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    countDownCode_ = "";
    countDownCodeIsSet_ = false;
    countDownInfos_ = "";
    countDownInfosIsSet_ = false;
    countDownTips_ = "";
    countDownTipsIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    subscriptionId_ = "";
    subscriptionIdIsSet_ = false;
    ipNum_ = 0;
    ipNumIsSet_ = false;
    ipNumNow_ = 0;
    ipNumNowIsSet_ = false;
    protectionNumNow_ = 0;
    protectionNumNowIsSet_ = false;
    protectionNum_ = 0;
    protectionNumIsSet_ = false;
    basicBandwidth_ = 0;
    basicBandwidthIsSet_ = false;
    elasticBandwidth_ = 0;
    elasticBandwidthIsSet_ = false;
    serviceBandwidth_ = 0;
    serviceBandwidthIsSet_ = false;
    cleanBandwidth_ = 0;
    cleanBandwidthIsSet_ = false;
    policyNum_ = 0;
    policyNumIsSet_ = false;
    isOld_ = false;
    isOldIsSet_ = false;
    newFlag_ = false;
    newFlagIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
}

PackageResponse::~PackageResponse() = default;

void PackageResponse::validate()
{
}

web::json::value PackageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(packageIdIsSet_) {
        val[utility::conversions::to_string_t("package_id")] = ModelBase::toJson(packageId_);
    }
    if(packageNameIsSet_) {
        val[utility::conversions::to_string_t("package_name")] = ModelBase::toJson(packageName_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(protectionTypeIsSet_) {
        val[utility::conversions::to_string_t("protection_type")] = ModelBase::toJson(protectionType_);
    }
    if(instanceTypeIsSet_) {
        val[utility::conversions::to_string_t("instance_type")] = ModelBase::toJson(instanceType_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(countDownCodeIsSet_) {
        val[utility::conversions::to_string_t("count_down_code")] = ModelBase::toJson(countDownCode_);
    }
    if(countDownInfosIsSet_) {
        val[utility::conversions::to_string_t("count_down_infos")] = ModelBase::toJson(countDownInfos_);
    }
    if(countDownTipsIsSet_) {
        val[utility::conversions::to_string_t("count_down_tips")] = ModelBase::toJson(countDownTips_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(subscriptionIdIsSet_) {
        val[utility::conversions::to_string_t("subscription_id")] = ModelBase::toJson(subscriptionId_);
    }
    if(ipNumIsSet_) {
        val[utility::conversions::to_string_t("ip_num")] = ModelBase::toJson(ipNum_);
    }
    if(ipNumNowIsSet_) {
        val[utility::conversions::to_string_t("ip_num_now")] = ModelBase::toJson(ipNumNow_);
    }
    if(protectionNumNowIsSet_) {
        val[utility::conversions::to_string_t("protection_num_now")] = ModelBase::toJson(protectionNumNow_);
    }
    if(protectionNumIsSet_) {
        val[utility::conversions::to_string_t("protection_num")] = ModelBase::toJson(protectionNum_);
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
    if(cleanBandwidthIsSet_) {
        val[utility::conversions::to_string_t("clean_bandwidth")] = ModelBase::toJson(cleanBandwidth_);
    }
    if(policyNumIsSet_) {
        val[utility::conversions::to_string_t("policy_num")] = ModelBase::toJson(policyNum_);
    }
    if(isOldIsSet_) {
        val[utility::conversions::to_string_t("is_old")] = ModelBase::toJson(isOld_);
    }
    if(newFlagIsSet_) {
        val[utility::conversions::to_string_t("new_flag")] = ModelBase::toJson(newFlag_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }

    return val;
}
bool PackageResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("package_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("package_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("protection_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protection_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count_down_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count_down_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCountDownCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count_down_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count_down_infos"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCountDownInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count_down_tips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count_down_tips"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCountDownTips(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscription_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_num_now"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_num_now"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpNumNow(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protection_num_now"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protection_num_now"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectionNumNow(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protection_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protection_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectionNum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("clean_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clean_bandwidth"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCleanBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_old"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_old"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsOld(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_flag"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    return ok;
}


std::string PackageResponse::getPackageId() const
{
    return packageId_;
}

void PackageResponse::setPackageId(const std::string& value)
{
    packageId_ = value;
    packageIdIsSet_ = true;
}

bool PackageResponse::packageIdIsSet() const
{
    return packageIdIsSet_;
}

void PackageResponse::unsetpackageId()
{
    packageIdIsSet_ = false;
}

std::string PackageResponse::getPackageName() const
{
    return packageName_;
}

void PackageResponse::setPackageName(const std::string& value)
{
    packageName_ = value;
    packageNameIsSet_ = true;
}

bool PackageResponse::packageNameIsSet() const
{
    return packageNameIsSet_;
}

void PackageResponse::unsetpackageName()
{
    packageNameIsSet_ = false;
}

std::string PackageResponse::getRegionId() const
{
    return regionId_;
}

void PackageResponse::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool PackageResponse::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void PackageResponse::unsetregionId()
{
    regionIdIsSet_ = false;
}

int32_t PackageResponse::getProtectionType() const
{
    return protectionType_;
}

void PackageResponse::setProtectionType(int32_t value)
{
    protectionType_ = value;
    protectionTypeIsSet_ = true;
}

bool PackageResponse::protectionTypeIsSet() const
{
    return protectionTypeIsSet_;
}

void PackageResponse::unsetprotectionType()
{
    protectionTypeIsSet_ = false;
}

std::string PackageResponse::getInstanceType() const
{
    return instanceType_;
}

void PackageResponse::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool PackageResponse::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void PackageResponse::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

std::string PackageResponse::getResourceId() const
{
    return resourceId_;
}

void PackageResponse::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool PackageResponse::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void PackageResponse::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string PackageResponse::getCountDownCode() const
{
    return countDownCode_;
}

void PackageResponse::setCountDownCode(const std::string& value)
{
    countDownCode_ = value;
    countDownCodeIsSet_ = true;
}

bool PackageResponse::countDownCodeIsSet() const
{
    return countDownCodeIsSet_;
}

void PackageResponse::unsetcountDownCode()
{
    countDownCodeIsSet_ = false;
}

std::string PackageResponse::getCountDownInfos() const
{
    return countDownInfos_;
}

void PackageResponse::setCountDownInfos(const std::string& value)
{
    countDownInfos_ = value;
    countDownInfosIsSet_ = true;
}

bool PackageResponse::countDownInfosIsSet() const
{
    return countDownInfosIsSet_;
}

void PackageResponse::unsetcountDownInfos()
{
    countDownInfosIsSet_ = false;
}

std::string PackageResponse::getCountDownTips() const
{
    return countDownTips_;
}

void PackageResponse::setCountDownTips(const std::string& value)
{
    countDownTips_ = value;
    countDownTipsIsSet_ = true;
}

bool PackageResponse::countDownTipsIsSet() const
{
    return countDownTipsIsSet_;
}

void PackageResponse::unsetcountDownTips()
{
    countDownTipsIsSet_ = false;
}

std::string PackageResponse::getOrderId() const
{
    return orderId_;
}

void PackageResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool PackageResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void PackageResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string PackageResponse::getSubscriptionId() const
{
    return subscriptionId_;
}

void PackageResponse::setSubscriptionId(const std::string& value)
{
    subscriptionId_ = value;
    subscriptionIdIsSet_ = true;
}

bool PackageResponse::subscriptionIdIsSet() const
{
    return subscriptionIdIsSet_;
}

void PackageResponse::unsetsubscriptionId()
{
    subscriptionIdIsSet_ = false;
}

int32_t PackageResponse::getIpNum() const
{
    return ipNum_;
}

void PackageResponse::setIpNum(int32_t value)
{
    ipNum_ = value;
    ipNumIsSet_ = true;
}

bool PackageResponse::ipNumIsSet() const
{
    return ipNumIsSet_;
}

void PackageResponse::unsetipNum()
{
    ipNumIsSet_ = false;
}

int32_t PackageResponse::getIpNumNow() const
{
    return ipNumNow_;
}

void PackageResponse::setIpNumNow(int32_t value)
{
    ipNumNow_ = value;
    ipNumNowIsSet_ = true;
}

bool PackageResponse::ipNumNowIsSet() const
{
    return ipNumNowIsSet_;
}

void PackageResponse::unsetipNumNow()
{
    ipNumNowIsSet_ = false;
}

int32_t PackageResponse::getProtectionNumNow() const
{
    return protectionNumNow_;
}

void PackageResponse::setProtectionNumNow(int32_t value)
{
    protectionNumNow_ = value;
    protectionNumNowIsSet_ = true;
}

bool PackageResponse::protectionNumNowIsSet() const
{
    return protectionNumNowIsSet_;
}

void PackageResponse::unsetprotectionNumNow()
{
    protectionNumNowIsSet_ = false;
}

int32_t PackageResponse::getProtectionNum() const
{
    return protectionNum_;
}

void PackageResponse::setProtectionNum(int32_t value)
{
    protectionNum_ = value;
    protectionNumIsSet_ = true;
}

bool PackageResponse::protectionNumIsSet() const
{
    return protectionNumIsSet_;
}

void PackageResponse::unsetprotectionNum()
{
    protectionNumIsSet_ = false;
}

int32_t PackageResponse::getBasicBandwidth() const
{
    return basicBandwidth_;
}

void PackageResponse::setBasicBandwidth(int32_t value)
{
    basicBandwidth_ = value;
    basicBandwidthIsSet_ = true;
}

bool PackageResponse::basicBandwidthIsSet() const
{
    return basicBandwidthIsSet_;
}

void PackageResponse::unsetbasicBandwidth()
{
    basicBandwidthIsSet_ = false;
}

int32_t PackageResponse::getElasticBandwidth() const
{
    return elasticBandwidth_;
}

void PackageResponse::setElasticBandwidth(int32_t value)
{
    elasticBandwidth_ = value;
    elasticBandwidthIsSet_ = true;
}

bool PackageResponse::elasticBandwidthIsSet() const
{
    return elasticBandwidthIsSet_;
}

void PackageResponse::unsetelasticBandwidth()
{
    elasticBandwidthIsSet_ = false;
}

int32_t PackageResponse::getServiceBandwidth() const
{
    return serviceBandwidth_;
}

void PackageResponse::setServiceBandwidth(int32_t value)
{
    serviceBandwidth_ = value;
    serviceBandwidthIsSet_ = true;
}

bool PackageResponse::serviceBandwidthIsSet() const
{
    return serviceBandwidthIsSet_;
}

void PackageResponse::unsetserviceBandwidth()
{
    serviceBandwidthIsSet_ = false;
}

int32_t PackageResponse::getCleanBandwidth() const
{
    return cleanBandwidth_;
}

void PackageResponse::setCleanBandwidth(int32_t value)
{
    cleanBandwidth_ = value;
    cleanBandwidthIsSet_ = true;
}

bool PackageResponse::cleanBandwidthIsSet() const
{
    return cleanBandwidthIsSet_;
}

void PackageResponse::unsetcleanBandwidth()
{
    cleanBandwidthIsSet_ = false;
}

int32_t PackageResponse::getPolicyNum() const
{
    return policyNum_;
}

void PackageResponse::setPolicyNum(int32_t value)
{
    policyNum_ = value;
    policyNumIsSet_ = true;
}

bool PackageResponse::policyNumIsSet() const
{
    return policyNumIsSet_;
}

void PackageResponse::unsetpolicyNum()
{
    policyNumIsSet_ = false;
}

bool PackageResponse::isIsOld() const
{
    return isOld_;
}

void PackageResponse::setIsOld(bool value)
{
    isOld_ = value;
    isOldIsSet_ = true;
}

bool PackageResponse::isOldIsSet() const
{
    return isOldIsSet_;
}

void PackageResponse::unsetisOld()
{
    isOldIsSet_ = false;
}

bool PackageResponse::isNewFlag() const
{
    return newFlag_;
}

void PackageResponse::setNewFlag(bool value)
{
    newFlag_ = value;
    newFlagIsSet_ = true;
}

bool PackageResponse::newFlagIsSet() const
{
    return newFlagIsSet_;
}

void PackageResponse::unsetnewFlag()
{
    newFlagIsSet_ = false;
}

int64_t PackageResponse::getCreateTime() const
{
    return createTime_;
}

void PackageResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool PackageResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void PackageResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


