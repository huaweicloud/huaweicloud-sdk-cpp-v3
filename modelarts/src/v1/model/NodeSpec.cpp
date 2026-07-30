

#include "huaweicloud/modelarts/v1/model/NodeSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeSpec::NodeSpec()
{
    flavor_ = "";
    flavorIsSet_ = false;
    osIsSet_ = false;
    hostNetworkIsSet_ = false;
    rootVolumeIsSet_ = false;
    dataVolumesIsSet_ = false;
    extendParamsIsSet_ = false;
}

NodeSpec::~NodeSpec() = default;

void NodeSpec::validate()
{
}

web::json::value NodeSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(osIsSet_) {
        val[utility::conversions::to_string_t("os")] = ModelBase::toJson(os_);
    }
    if(hostNetworkIsSet_) {
        val[utility::conversions::to_string_t("hostNetwork")] = ModelBase::toJson(hostNetwork_);
    }
    if(rootVolumeIsSet_) {
        val[utility::conversions::to_string_t("rootVolume")] = ModelBase::toJson(rootVolume_);
    }
    if(dataVolumesIsSet_) {
        val[utility::conversions::to_string_t("dataVolumes")] = ModelBase::toJson(dataVolumes_);
    }
    if(extendParamsIsSet_) {
        val[utility::conversions::to_string_t("extendParams")] = ModelBase::toJson(extendParams_);
    }

    return val;
}
bool NodeSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os"));
        if(!fieldValue.is_null())
        {
            Os refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hostNetwork"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hostNetwork"));
        if(!fieldValue.is_null())
        {
            NodeNetwork refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostNetwork(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rootVolume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rootVolume"));
        if(!fieldValue.is_null())
        {
            VolumeVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dataVolumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataVolumes"));
        if(!fieldValue.is_null())
        {
            std::vector<VolumeVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVolumes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extendParams"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendParams"));
        if(!fieldValue.is_null())
        {
            ResourceExtendParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendParams(refVal);
        }
    }
    return ok;
}


std::string NodeSpec::getFlavor() const
{
    return flavor_;
}

void NodeSpec::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool NodeSpec::flavorIsSet() const
{
    return flavorIsSet_;
}

void NodeSpec::unsetflavor()
{
    flavorIsSet_ = false;
}

Os NodeSpec::getOs() const
{
    return os_;
}

void NodeSpec::setOs(const Os& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool NodeSpec::osIsSet() const
{
    return osIsSet_;
}

void NodeSpec::unsetos()
{
    osIsSet_ = false;
}

NodeNetwork NodeSpec::getHostNetwork() const
{
    return hostNetwork_;
}

void NodeSpec::setHostNetwork(const NodeNetwork& value)
{
    hostNetwork_ = value;
    hostNetworkIsSet_ = true;
}

bool NodeSpec::hostNetworkIsSet() const
{
    return hostNetworkIsSet_;
}

void NodeSpec::unsethostNetwork()
{
    hostNetworkIsSet_ = false;
}

VolumeVO NodeSpec::getRootVolume() const
{
    return rootVolume_;
}

void NodeSpec::setRootVolume(const VolumeVO& value)
{
    rootVolume_ = value;
    rootVolumeIsSet_ = true;
}

bool NodeSpec::rootVolumeIsSet() const
{
    return rootVolumeIsSet_;
}

void NodeSpec::unsetrootVolume()
{
    rootVolumeIsSet_ = false;
}

std::vector<VolumeVO>& NodeSpec::getDataVolumes()
{
    return dataVolumes_;
}

void NodeSpec::setDataVolumes(const std::vector<VolumeVO>& value)
{
    dataVolumes_ = value;
    dataVolumesIsSet_ = true;
}

bool NodeSpec::dataVolumesIsSet() const
{
    return dataVolumesIsSet_;
}

void NodeSpec::unsetdataVolumes()
{
    dataVolumesIsSet_ = false;
}

ResourceExtendParams NodeSpec::getExtendParams() const
{
    return extendParams_;
}

void NodeSpec::setExtendParams(const ResourceExtendParams& value)
{
    extendParams_ = value;
    extendParamsIsSet_ = true;
}

bool NodeSpec::extendParamsIsSet() const
{
    return extendParamsIsSet_;
}

void NodeSpec::unsetextendParams()
{
    extendParamsIsSet_ = false;
}

}
}
}
}
}


