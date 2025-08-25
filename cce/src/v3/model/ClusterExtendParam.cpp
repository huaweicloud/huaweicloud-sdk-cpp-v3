

#include "huaweicloud/cce/v3/model/ClusterExtendParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ClusterExtendParam::ClusterExtendParam()
{
    clusterAZ_ = "";
    clusterAZIsSet_ = false;
    dssMasterVolumes_ = "";
    dssMasterVolumesIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    kubeProxyMode_ = "";
    kubeProxyModeIsSet_ = false;
    clusterExternalIP_ = "";
    clusterExternalIPIsSet_ = false;
    alphaCceFixPoolMask_ = "";
    alphaCceFixPoolMaskIsSet_ = false;
    decMasterFlavor_ = "";
    decMasterFlavorIsSet_ = false;
    dockerUmaskMode_ = "";
    dockerUmaskModeIsSet_ = false;
    kubernetesIoCpuManagerPolicy_ = "";
    kubernetesIoCpuManagerPolicyIsSet_ = false;
    orderID_ = "";
    orderIDIsSet_ = false;
    periodType_ = "";
    periodTypeIsSet_ = false;
    periodNum_ = 0;
    periodNumIsSet_ = false;
    isAutoRenew_ = "";
    isAutoRenewIsSet_ = false;
    isAutoPay_ = "";
    isAutoPayIsSet_ = false;
    upgradefrom_ = "";
    upgradefromIsSet_ = false;
}

ClusterExtendParam::~ClusterExtendParam() = default;

void ClusterExtendParam::validate()
{
}

web::json::value ClusterExtendParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterAZIsSet_) {
        val[utility::conversions::to_string_t("clusterAZ")] = ModelBase::toJson(clusterAZ_);
    }
    if(dssMasterVolumesIsSet_) {
        val[utility::conversions::to_string_t("dssMasterVolumes")] = ModelBase::toJson(dssMasterVolumes_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterpriseProjectId")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(kubeProxyModeIsSet_) {
        val[utility::conversions::to_string_t("kubeProxyMode")] = ModelBase::toJson(kubeProxyMode_);
    }
    if(clusterExternalIPIsSet_) {
        val[utility::conversions::to_string_t("clusterExternalIP")] = ModelBase::toJson(clusterExternalIP_);
    }
    if(alphaCceFixPoolMaskIsSet_) {
        val[utility::conversions::to_string_t("alpha.cce/fixPoolMask")] = ModelBase::toJson(alphaCceFixPoolMask_);
    }
    if(decMasterFlavorIsSet_) {
        val[utility::conversions::to_string_t("decMasterFlavor")] = ModelBase::toJson(decMasterFlavor_);
    }
    if(dockerUmaskModeIsSet_) {
        val[utility::conversions::to_string_t("dockerUmaskMode")] = ModelBase::toJson(dockerUmaskMode_);
    }
    if(kubernetesIoCpuManagerPolicyIsSet_) {
        val[utility::conversions::to_string_t("kubernetes.io/cpuManagerPolicy")] = ModelBase::toJson(kubernetesIoCpuManagerPolicy_);
    }
    if(orderIDIsSet_) {
        val[utility::conversions::to_string_t("orderID")] = ModelBase::toJson(orderID_);
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
    if(upgradefromIsSet_) {
        val[utility::conversions::to_string_t("upgradefrom")] = ModelBase::toJson(upgradefrom_);
    }

    return val;
}
bool ClusterExtendParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("clusterAZ"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterAZ"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterAZ(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dssMasterVolumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dssMasterVolumes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDssMasterVolumes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterpriseProjectId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterpriseProjectId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kubeProxyMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kubeProxyMode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKubeProxyMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clusterExternalIP"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterExternalIP"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterExternalIP(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alpha.cce/fixPoolMask"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alpha.cce/fixPoolMask"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlphaCceFixPoolMask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("decMasterFlavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("decMasterFlavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDecMasterFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dockerUmaskMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dockerUmaskMode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDockerUmaskMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kubernetes.io/cpuManagerPolicy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kubernetes.io/cpuManagerPolicy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKubernetesIoCpuManagerPolicy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("upgradefrom"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgradefrom"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradefrom(refVal);
        }
    }
    return ok;
}


std::string ClusterExtendParam::getClusterAZ() const
{
    return clusterAZ_;
}

void ClusterExtendParam::setClusterAZ(const std::string& value)
{
    clusterAZ_ = value;
    clusterAZIsSet_ = true;
}

bool ClusterExtendParam::clusterAZIsSet() const
{
    return clusterAZIsSet_;
}

void ClusterExtendParam::unsetclusterAZ()
{
    clusterAZIsSet_ = false;
}

std::string ClusterExtendParam::getDssMasterVolumes() const
{
    return dssMasterVolumes_;
}

void ClusterExtendParam::setDssMasterVolumes(const std::string& value)
{
    dssMasterVolumes_ = value;
    dssMasterVolumesIsSet_ = true;
}

bool ClusterExtendParam::dssMasterVolumesIsSet() const
{
    return dssMasterVolumesIsSet_;
}

void ClusterExtendParam::unsetdssMasterVolumes()
{
    dssMasterVolumesIsSet_ = false;
}

std::string ClusterExtendParam::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ClusterExtendParam::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ClusterExtendParam::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ClusterExtendParam::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ClusterExtendParam::getKubeProxyMode() const
{
    return kubeProxyMode_;
}

void ClusterExtendParam::setKubeProxyMode(const std::string& value)
{
    kubeProxyMode_ = value;
    kubeProxyModeIsSet_ = true;
}

bool ClusterExtendParam::kubeProxyModeIsSet() const
{
    return kubeProxyModeIsSet_;
}

void ClusterExtendParam::unsetkubeProxyMode()
{
    kubeProxyModeIsSet_ = false;
}

std::string ClusterExtendParam::getClusterExternalIP() const
{
    return clusterExternalIP_;
}

void ClusterExtendParam::setClusterExternalIP(const std::string& value)
{
    clusterExternalIP_ = value;
    clusterExternalIPIsSet_ = true;
}

bool ClusterExtendParam::clusterExternalIPIsSet() const
{
    return clusterExternalIPIsSet_;
}

void ClusterExtendParam::unsetclusterExternalIP()
{
    clusterExternalIPIsSet_ = false;
}

std::string ClusterExtendParam::getAlphaCceFixPoolMask() const
{
    return alphaCceFixPoolMask_;
}

void ClusterExtendParam::setAlphaCceFixPoolMask(const std::string& value)
{
    alphaCceFixPoolMask_ = value;
    alphaCceFixPoolMaskIsSet_ = true;
}

bool ClusterExtendParam::alphaCceFixPoolMaskIsSet() const
{
    return alphaCceFixPoolMaskIsSet_;
}

void ClusterExtendParam::unsetalphaCceFixPoolMask()
{
    alphaCceFixPoolMaskIsSet_ = false;
}

std::string ClusterExtendParam::getDecMasterFlavor() const
{
    return decMasterFlavor_;
}

void ClusterExtendParam::setDecMasterFlavor(const std::string& value)
{
    decMasterFlavor_ = value;
    decMasterFlavorIsSet_ = true;
}

bool ClusterExtendParam::decMasterFlavorIsSet() const
{
    return decMasterFlavorIsSet_;
}

void ClusterExtendParam::unsetdecMasterFlavor()
{
    decMasterFlavorIsSet_ = false;
}

std::string ClusterExtendParam::getDockerUmaskMode() const
{
    return dockerUmaskMode_;
}

void ClusterExtendParam::setDockerUmaskMode(const std::string& value)
{
    dockerUmaskMode_ = value;
    dockerUmaskModeIsSet_ = true;
}

bool ClusterExtendParam::dockerUmaskModeIsSet() const
{
    return dockerUmaskModeIsSet_;
}

void ClusterExtendParam::unsetdockerUmaskMode()
{
    dockerUmaskModeIsSet_ = false;
}

std::string ClusterExtendParam::getKubernetesIoCpuManagerPolicy() const
{
    return kubernetesIoCpuManagerPolicy_;
}

void ClusterExtendParam::setKubernetesIoCpuManagerPolicy(const std::string& value)
{
    kubernetesIoCpuManagerPolicy_ = value;
    kubernetesIoCpuManagerPolicyIsSet_ = true;
}

bool ClusterExtendParam::kubernetesIoCpuManagerPolicyIsSet() const
{
    return kubernetesIoCpuManagerPolicyIsSet_;
}

void ClusterExtendParam::unsetkubernetesIoCpuManagerPolicy()
{
    kubernetesIoCpuManagerPolicyIsSet_ = false;
}

std::string ClusterExtendParam::getOrderID() const
{
    return orderID_;
}

void ClusterExtendParam::setOrderID(const std::string& value)
{
    orderID_ = value;
    orderIDIsSet_ = true;
}

bool ClusterExtendParam::orderIDIsSet() const
{
    return orderIDIsSet_;
}

void ClusterExtendParam::unsetorderID()
{
    orderIDIsSet_ = false;
}

std::string ClusterExtendParam::getPeriodType() const
{
    return periodType_;
}

void ClusterExtendParam::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool ClusterExtendParam::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void ClusterExtendParam::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

int32_t ClusterExtendParam::getPeriodNum() const
{
    return periodNum_;
}

void ClusterExtendParam::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool ClusterExtendParam::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void ClusterExtendParam::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

std::string ClusterExtendParam::getIsAutoRenew() const
{
    return isAutoRenew_;
}

void ClusterExtendParam::setIsAutoRenew(const std::string& value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool ClusterExtendParam::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void ClusterExtendParam::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

std::string ClusterExtendParam::getIsAutoPay() const
{
    return isAutoPay_;
}

void ClusterExtendParam::setIsAutoPay(const std::string& value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool ClusterExtendParam::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void ClusterExtendParam::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

std::string ClusterExtendParam::getUpgradefrom() const
{
    return upgradefrom_;
}

void ClusterExtendParam::setUpgradefrom(const std::string& value)
{
    upgradefrom_ = value;
    upgradefromIsSet_ = true;
}

bool ClusterExtendParam::upgradefromIsSet() const
{
    return upgradefromIsSet_;
}

void ClusterExtendParam::unsetupgradefrom()
{
    upgradefromIsSet_ = false;
}

}
}
}
}
}


