

#include "huaweicloud/cce/v3/model/NodeExtendParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeExtendParam::NodeExtendParam()
{
    ecsPerformancetype_ = "";
    ecsPerformancetypeIsSet_ = false;
    orderID_ = "";
    orderIDIsSet_ = false;
    productID_ = "";
    productIDIsSet_ = false;
    maxPods_ = 0;
    maxPodsIsSet_ = false;
    periodType_ = "";
    periodTypeIsSet_ = false;
    periodNum_ = 0;
    periodNumIsSet_ = false;
    isAutoRenew_ = "";
    isAutoRenewIsSet_ = false;
    isAutoPay_ = "";
    isAutoPayIsSet_ = false;
    dockerLVMConfigOverride_ = "";
    dockerLVMConfigOverrideIsSet_ = false;
    dockerBaseSize_ = 0;
    dockerBaseSizeIsSet_ = false;
    offloadNode_ = "";
    offloadNodeIsSet_ = false;
    publicKey_ = "";
    publicKeyIsSet_ = false;
    alphaCcePreInstall_ = "";
    alphaCcePreInstallIsSet_ = false;
    alphaCcePostInstall_ = "";
    alphaCcePostInstallIsSet_ = false;
    alphaCceNodeImageID_ = "";
    alphaCceNodeImageIDIsSet_ = false;
    nicMultiqueue_ = "";
    nicMultiqueueIsSet_ = false;
    nicThreshold_ = "";
    nicThresholdIsSet_ = false;
    chargingMode_ = 0;
    chargingModeIsSet_ = false;
    marketType_ = "";
    marketTypeIsSet_ = false;
    spotPrice_ = "";
    spotPriceIsSet_ = false;
    agencyName_ = "";
    agencyNameIsSet_ = false;
    kubeReservedMem_ = 0;
    kubeReservedMemIsSet_ = false;
    systemReservedMem_ = 0;
    systemReservedMemIsSet_ = false;
    initNodePassword_ = "";
    initNodePasswordIsSet_ = false;
    securityReinforcementType_ = "";
    securityReinforcementTypeIsSet_ = false;
}

NodeExtendParam::~NodeExtendParam() = default;

void NodeExtendParam::validate()
{
}

web::json::value NodeExtendParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ecsPerformancetypeIsSet_) {
        val[utility::conversions::to_string_t("ecs:performancetype")] = ModelBase::toJson(ecsPerformancetype_);
    }
    if(orderIDIsSet_) {
        val[utility::conversions::to_string_t("orderID")] = ModelBase::toJson(orderID_);
    }
    if(productIDIsSet_) {
        val[utility::conversions::to_string_t("productID")] = ModelBase::toJson(productID_);
    }
    if(maxPodsIsSet_) {
        val[utility::conversions::to_string_t("maxPods")] = ModelBase::toJson(maxPods_);
    }
    if(periodTypeIsSet_) {
        val[utility::conversions::to_string_t("periodType")] = ModelBase::toJson(periodType_);
    }
    if(periodNumIsSet_) {
        val[utility::conversions::to_string_t("periodNum")] = ModelBase::toJson(periodNum_);
    }
    if(isAutoRenewIsSet_) {
        val[utility::conversions::to_string_t("isAutoRenew")] = ModelBase::toJson(isAutoRenew_);
    }
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("isAutoPay")] = ModelBase::toJson(isAutoPay_);
    }
    if(dockerLVMConfigOverrideIsSet_) {
        val[utility::conversions::to_string_t("DockerLVMConfigOverride")] = ModelBase::toJson(dockerLVMConfigOverride_);
    }
    if(dockerBaseSizeIsSet_) {
        val[utility::conversions::to_string_t("dockerBaseSize")] = ModelBase::toJson(dockerBaseSize_);
    }
    if(offloadNodeIsSet_) {
        val[utility::conversions::to_string_t("offloadNode")] = ModelBase::toJson(offloadNode_);
    }
    if(publicKeyIsSet_) {
        val[utility::conversions::to_string_t("publicKey")] = ModelBase::toJson(publicKey_);
    }
    if(alphaCcePreInstallIsSet_) {
        val[utility::conversions::to_string_t("alpha.cce/preInstall")] = ModelBase::toJson(alphaCcePreInstall_);
    }
    if(alphaCcePostInstallIsSet_) {
        val[utility::conversions::to_string_t("alpha.cce/postInstall")] = ModelBase::toJson(alphaCcePostInstall_);
    }
    if(alphaCceNodeImageIDIsSet_) {
        val[utility::conversions::to_string_t("alpha.cce/NodeImageID")] = ModelBase::toJson(alphaCceNodeImageID_);
    }
    if(nicMultiqueueIsSet_) {
        val[utility::conversions::to_string_t("nicMultiqueue")] = ModelBase::toJson(nicMultiqueue_);
    }
    if(nicThresholdIsSet_) {
        val[utility::conversions::to_string_t("nicThreshold")] = ModelBase::toJson(nicThreshold_);
    }
    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("chargingMode")] = ModelBase::toJson(chargingMode_);
    }
    if(marketTypeIsSet_) {
        val[utility::conversions::to_string_t("marketType")] = ModelBase::toJson(marketType_);
    }
    if(spotPriceIsSet_) {
        val[utility::conversions::to_string_t("spotPrice")] = ModelBase::toJson(spotPrice_);
    }
    if(agencyNameIsSet_) {
        val[utility::conversions::to_string_t("agency_name")] = ModelBase::toJson(agencyName_);
    }
    if(kubeReservedMemIsSet_) {
        val[utility::conversions::to_string_t("kubeReservedMem")] = ModelBase::toJson(kubeReservedMem_);
    }
    if(systemReservedMemIsSet_) {
        val[utility::conversions::to_string_t("systemReservedMem")] = ModelBase::toJson(systemReservedMem_);
    }
    if(initNodePasswordIsSet_) {
        val[utility::conversions::to_string_t("init-node-password")] = ModelBase::toJson(initNodePassword_);
    }
    if(securityReinforcementTypeIsSet_) {
        val[utility::conversions::to_string_t("securityReinforcementType")] = ModelBase::toJson(securityReinforcementType_);
    }

    return val;
}
bool NodeExtendParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ecs:performancetype"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ecs:performancetype"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEcsPerformancetype(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("orderID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("orderID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("productID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("productID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxPods"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxPods"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxPods(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("periodType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("periodType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("periodNum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("periodNum"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isAutoRenew"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isAutoRenew"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoRenew(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isAutoPay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isAutoPay"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("DockerLVMConfigOverride"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("DockerLVMConfigOverride"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDockerLVMConfigOverride(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dockerBaseSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dockerBaseSize"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDockerBaseSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offloadNode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offloadNode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffloadNode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publicKey"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicKey"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alpha.cce/preInstall"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alpha.cce/preInstall"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlphaCcePreInstall(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alpha.cce/postInstall"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alpha.cce/postInstall"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlphaCcePostInstall(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alpha.cce/NodeImageID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alpha.cce/NodeImageID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlphaCceNodeImageID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nicMultiqueue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nicMultiqueue"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNicMultiqueue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nicThreshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nicThreshold"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNicThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chargingMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chargingMode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargingMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marketType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marketType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarketType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spotPrice"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spotPrice"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpotPrice(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agency_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kubeReservedMem"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kubeReservedMem"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKubeReservedMem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("systemReservedMem"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("systemReservedMem"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemReservedMem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("init-node-password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("init-node-password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInitNodePassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("securityReinforcementType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("securityReinforcementType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityReinforcementType(refVal);
        }
    }
    return ok;
}


std::string NodeExtendParam::getEcsPerformancetype() const
{
    return ecsPerformancetype_;
}

void NodeExtendParam::setEcsPerformancetype(const std::string& value)
{
    ecsPerformancetype_ = value;
    ecsPerformancetypeIsSet_ = true;
}

bool NodeExtendParam::ecsPerformancetypeIsSet() const
{
    return ecsPerformancetypeIsSet_;
}

void NodeExtendParam::unsetecsPerformancetype()
{
    ecsPerformancetypeIsSet_ = false;
}

std::string NodeExtendParam::getOrderID() const
{
    return orderID_;
}

void NodeExtendParam::setOrderID(const std::string& value)
{
    orderID_ = value;
    orderIDIsSet_ = true;
}

bool NodeExtendParam::orderIDIsSet() const
{
    return orderIDIsSet_;
}

void NodeExtendParam::unsetorderID()
{
    orderIDIsSet_ = false;
}

std::string NodeExtendParam::getProductID() const
{
    return productID_;
}

void NodeExtendParam::setProductID(const std::string& value)
{
    productID_ = value;
    productIDIsSet_ = true;
}

bool NodeExtendParam::productIDIsSet() const
{
    return productIDIsSet_;
}

void NodeExtendParam::unsetproductID()
{
    productIDIsSet_ = false;
}

int32_t NodeExtendParam::getMaxPods() const
{
    return maxPods_;
}

void NodeExtendParam::setMaxPods(int32_t value)
{
    maxPods_ = value;
    maxPodsIsSet_ = true;
}

bool NodeExtendParam::maxPodsIsSet() const
{
    return maxPodsIsSet_;
}

void NodeExtendParam::unsetmaxPods()
{
    maxPodsIsSet_ = false;
}

std::string NodeExtendParam::getPeriodType() const
{
    return periodType_;
}

void NodeExtendParam::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool NodeExtendParam::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void NodeExtendParam::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

int32_t NodeExtendParam::getPeriodNum() const
{
    return periodNum_;
}

void NodeExtendParam::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool NodeExtendParam::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void NodeExtendParam::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

std::string NodeExtendParam::getIsAutoRenew() const
{
    return isAutoRenew_;
}

void NodeExtendParam::setIsAutoRenew(const std::string& value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool NodeExtendParam::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void NodeExtendParam::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

std::string NodeExtendParam::getIsAutoPay() const
{
    return isAutoPay_;
}

void NodeExtendParam::setIsAutoPay(const std::string& value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool NodeExtendParam::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void NodeExtendParam::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

std::string NodeExtendParam::getDockerLVMConfigOverride() const
{
    return dockerLVMConfigOverride_;
}

void NodeExtendParam::setDockerLVMConfigOverride(const std::string& value)
{
    dockerLVMConfigOverride_ = value;
    dockerLVMConfigOverrideIsSet_ = true;
}

bool NodeExtendParam::dockerLVMConfigOverrideIsSet() const
{
    return dockerLVMConfigOverrideIsSet_;
}

void NodeExtendParam::unsetdockerLVMConfigOverride()
{
    dockerLVMConfigOverrideIsSet_ = false;
}

int32_t NodeExtendParam::getDockerBaseSize() const
{
    return dockerBaseSize_;
}

void NodeExtendParam::setDockerBaseSize(int32_t value)
{
    dockerBaseSize_ = value;
    dockerBaseSizeIsSet_ = true;
}

bool NodeExtendParam::dockerBaseSizeIsSet() const
{
    return dockerBaseSizeIsSet_;
}

void NodeExtendParam::unsetdockerBaseSize()
{
    dockerBaseSizeIsSet_ = false;
}

std::string NodeExtendParam::getOffloadNode() const
{
    return offloadNode_;
}

void NodeExtendParam::setOffloadNode(const std::string& value)
{
    offloadNode_ = value;
    offloadNodeIsSet_ = true;
}

bool NodeExtendParam::offloadNodeIsSet() const
{
    return offloadNodeIsSet_;
}

void NodeExtendParam::unsetoffloadNode()
{
    offloadNodeIsSet_ = false;
}

std::string NodeExtendParam::getPublicKey() const
{
    return publicKey_;
}

void NodeExtendParam::setPublicKey(const std::string& value)
{
    publicKey_ = value;
    publicKeyIsSet_ = true;
}

bool NodeExtendParam::publicKeyIsSet() const
{
    return publicKeyIsSet_;
}

void NodeExtendParam::unsetpublicKey()
{
    publicKeyIsSet_ = false;
}

std::string NodeExtendParam::getAlphaCcePreInstall() const
{
    return alphaCcePreInstall_;
}

void NodeExtendParam::setAlphaCcePreInstall(const std::string& value)
{
    alphaCcePreInstall_ = value;
    alphaCcePreInstallIsSet_ = true;
}

bool NodeExtendParam::alphaCcePreInstallIsSet() const
{
    return alphaCcePreInstallIsSet_;
}

void NodeExtendParam::unsetalphaCcePreInstall()
{
    alphaCcePreInstallIsSet_ = false;
}

std::string NodeExtendParam::getAlphaCcePostInstall() const
{
    return alphaCcePostInstall_;
}

void NodeExtendParam::setAlphaCcePostInstall(const std::string& value)
{
    alphaCcePostInstall_ = value;
    alphaCcePostInstallIsSet_ = true;
}

bool NodeExtendParam::alphaCcePostInstallIsSet() const
{
    return alphaCcePostInstallIsSet_;
}

void NodeExtendParam::unsetalphaCcePostInstall()
{
    alphaCcePostInstallIsSet_ = false;
}

std::string NodeExtendParam::getAlphaCceNodeImageID() const
{
    return alphaCceNodeImageID_;
}

void NodeExtendParam::setAlphaCceNodeImageID(const std::string& value)
{
    alphaCceNodeImageID_ = value;
    alphaCceNodeImageIDIsSet_ = true;
}

bool NodeExtendParam::alphaCceNodeImageIDIsSet() const
{
    return alphaCceNodeImageIDIsSet_;
}

void NodeExtendParam::unsetalphaCceNodeImageID()
{
    alphaCceNodeImageIDIsSet_ = false;
}

std::string NodeExtendParam::getNicMultiqueue() const
{
    return nicMultiqueue_;
}

void NodeExtendParam::setNicMultiqueue(const std::string& value)
{
    nicMultiqueue_ = value;
    nicMultiqueueIsSet_ = true;
}

bool NodeExtendParam::nicMultiqueueIsSet() const
{
    return nicMultiqueueIsSet_;
}

void NodeExtendParam::unsetnicMultiqueue()
{
    nicMultiqueueIsSet_ = false;
}

std::string NodeExtendParam::getNicThreshold() const
{
    return nicThreshold_;
}

void NodeExtendParam::setNicThreshold(const std::string& value)
{
    nicThreshold_ = value;
    nicThresholdIsSet_ = true;
}

bool NodeExtendParam::nicThresholdIsSet() const
{
    return nicThresholdIsSet_;
}

void NodeExtendParam::unsetnicThreshold()
{
    nicThresholdIsSet_ = false;
}

int32_t NodeExtendParam::getChargingMode() const
{
    return chargingMode_;
}

void NodeExtendParam::setChargingMode(int32_t value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool NodeExtendParam::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void NodeExtendParam::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

std::string NodeExtendParam::getMarketType() const
{
    return marketType_;
}

void NodeExtendParam::setMarketType(const std::string& value)
{
    marketType_ = value;
    marketTypeIsSet_ = true;
}

bool NodeExtendParam::marketTypeIsSet() const
{
    return marketTypeIsSet_;
}

void NodeExtendParam::unsetmarketType()
{
    marketTypeIsSet_ = false;
}

std::string NodeExtendParam::getSpotPrice() const
{
    return spotPrice_;
}

void NodeExtendParam::setSpotPrice(const std::string& value)
{
    spotPrice_ = value;
    spotPriceIsSet_ = true;
}

bool NodeExtendParam::spotPriceIsSet() const
{
    return spotPriceIsSet_;
}

void NodeExtendParam::unsetspotPrice()
{
    spotPriceIsSet_ = false;
}

std::string NodeExtendParam::getAgencyName() const
{
    return agencyName_;
}

void NodeExtendParam::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool NodeExtendParam::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void NodeExtendParam::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

int32_t NodeExtendParam::getKubeReservedMem() const
{
    return kubeReservedMem_;
}

void NodeExtendParam::setKubeReservedMem(int32_t value)
{
    kubeReservedMem_ = value;
    kubeReservedMemIsSet_ = true;
}

bool NodeExtendParam::kubeReservedMemIsSet() const
{
    return kubeReservedMemIsSet_;
}

void NodeExtendParam::unsetkubeReservedMem()
{
    kubeReservedMemIsSet_ = false;
}

int32_t NodeExtendParam::getSystemReservedMem() const
{
    return systemReservedMem_;
}

void NodeExtendParam::setSystemReservedMem(int32_t value)
{
    systemReservedMem_ = value;
    systemReservedMemIsSet_ = true;
}

bool NodeExtendParam::systemReservedMemIsSet() const
{
    return systemReservedMemIsSet_;
}

void NodeExtendParam::unsetsystemReservedMem()
{
    systemReservedMemIsSet_ = false;
}

std::string NodeExtendParam::getInitNodePassword() const
{
    return initNodePassword_;
}

void NodeExtendParam::setInitNodePassword(const std::string& value)
{
    initNodePassword_ = value;
    initNodePasswordIsSet_ = true;
}

bool NodeExtendParam::initNodePasswordIsSet() const
{
    return initNodePasswordIsSet_;
}

void NodeExtendParam::unsetinitNodePassword()
{
    initNodePasswordIsSet_ = false;
}

std::string NodeExtendParam::getSecurityReinforcementType() const
{
    return securityReinforcementType_;
}

void NodeExtendParam::setSecurityReinforcementType(const std::string& value)
{
    securityReinforcementType_ = value;
    securityReinforcementTypeIsSet_ = true;
}

bool NodeExtendParam::securityReinforcementTypeIsSet() const
{
    return securityReinforcementTypeIsSet_;
}

void NodeExtendParam::unsetsecurityReinforcementType()
{
    securityReinforcementTypeIsSet_ = false;
}

}
}
}
}
}


