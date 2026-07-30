

#include "huaweicloud/modelarts/v1/model/PoolResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolResource::PoolResource()
{
    flavor_ = "";
    flavorIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    maxCount_ = 0;
    maxCountIsSet_ = false;
    azsIsSet_ = false;
    nodePool_ = "";
    nodePoolIsSet_ = false;
    taintsIsSet_ = false;
    labelsIsSet_ = false;
    tagsIsSet_ = false;
    networkIsSet_ = false;
    extendParamsIsSet_ = false;
    creatingStepIsSet_ = false;
    rootVolumeIsSet_ = false;
    dataVolumesIsSet_ = false;
    volumeGroupConfigsIsSet_ = false;
    osIsSet_ = false;
}

PoolResource::~PoolResource() = default;

void PoolResource::validate()
{
}

web::json::value PoolResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(maxCountIsSet_) {
        val[utility::conversions::to_string_t("maxCount")] = ModelBase::toJson(maxCount_);
    }
    if(azsIsSet_) {
        val[utility::conversions::to_string_t("azs")] = ModelBase::toJson(azs_);
    }
    if(nodePoolIsSet_) {
        val[utility::conversions::to_string_t("nodePool")] = ModelBase::toJson(nodePool_);
    }
    if(taintsIsSet_) {
        val[utility::conversions::to_string_t("taints")] = ModelBase::toJson(taints_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(networkIsSet_) {
        val[utility::conversions::to_string_t("network")] = ModelBase::toJson(network_);
    }
    if(extendParamsIsSet_) {
        val[utility::conversions::to_string_t("extendParams")] = ModelBase::toJson(extendParams_);
    }
    if(creatingStepIsSet_) {
        val[utility::conversions::to_string_t("creatingStep")] = ModelBase::toJson(creatingStep_);
    }
    if(rootVolumeIsSet_) {
        val[utility::conversions::to_string_t("rootVolume")] = ModelBase::toJson(rootVolume_);
    }
    if(dataVolumesIsSet_) {
        val[utility::conversions::to_string_t("dataVolumes")] = ModelBase::toJson(dataVolumes_);
    }
    if(volumeGroupConfigsIsSet_) {
        val[utility::conversions::to_string_t("volumeGroupConfigs")] = ModelBase::toJson(volumeGroupConfigs_);
    }
    if(osIsSet_) {
        val[utility::conversions::to_string_t("os")] = ModelBase::toJson(os_);
    }

    return val;
}
bool PoolResource::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("azs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("azs"));
        if(!fieldValue.is_null())
        {
            std::vector<PoolNodeAz> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodePool"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodePool"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodePool(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("taints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("taints"));
        if(!fieldValue.is_null())
        {
            std::vector<Taints> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<UserTags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("network"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network"));
        if(!fieldValue.is_null())
        {
            NodeNetwork refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetwork(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("creatingStep"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creatingStep"));
        if(!fieldValue.is_null())
        {
            CreatingStep refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatingStep(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rootVolume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rootVolume"));
        if(!fieldValue.is_null())
        {
            RootVolume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dataVolumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataVolumes"));
        if(!fieldValue.is_null())
        {
            std::vector<DataVolumeItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVolumes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumeGroupConfigs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumeGroupConfigs"));
        if(!fieldValue.is_null())
        {
            std::vector<VolumeGroupConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeGroupConfigs(refVal);
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
    return ok;
}


std::string PoolResource::getFlavor() const
{
    return flavor_;
}

void PoolResource::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool PoolResource::flavorIsSet() const
{
    return flavorIsSet_;
}

void PoolResource::unsetflavor()
{
    flavorIsSet_ = false;
}

int32_t PoolResource::getCount() const
{
    return count_;
}

void PoolResource::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool PoolResource::countIsSet() const
{
    return countIsSet_;
}

void PoolResource::unsetcount()
{
    countIsSet_ = false;
}

int32_t PoolResource::getMaxCount() const
{
    return maxCount_;
}

void PoolResource::setMaxCount(int32_t value)
{
    maxCount_ = value;
    maxCountIsSet_ = true;
}

bool PoolResource::maxCountIsSet() const
{
    return maxCountIsSet_;
}

void PoolResource::unsetmaxCount()
{
    maxCountIsSet_ = false;
}

std::vector<PoolNodeAz>& PoolResource::getAzs()
{
    return azs_;
}

void PoolResource::setAzs(const std::vector<PoolNodeAz>& value)
{
    azs_ = value;
    azsIsSet_ = true;
}

bool PoolResource::azsIsSet() const
{
    return azsIsSet_;
}

void PoolResource::unsetazs()
{
    azsIsSet_ = false;
}

std::string PoolResource::getNodePool() const
{
    return nodePool_;
}

void PoolResource::setNodePool(const std::string& value)
{
    nodePool_ = value;
    nodePoolIsSet_ = true;
}

bool PoolResource::nodePoolIsSet() const
{
    return nodePoolIsSet_;
}

void PoolResource::unsetnodePool()
{
    nodePoolIsSet_ = false;
}

std::vector<Taints>& PoolResource::getTaints()
{
    return taints_;
}

void PoolResource::setTaints(const std::vector<Taints>& value)
{
    taints_ = value;
    taintsIsSet_ = true;
}

bool PoolResource::taintsIsSet() const
{
    return taintsIsSet_;
}

void PoolResource::unsettaints()
{
    taintsIsSet_ = false;
}

std::map<std::string, std::string>& PoolResource::getLabels()
{
    return labels_;
}

void PoolResource::setLabels(const std::map<std::string, std::string>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool PoolResource::labelsIsSet() const
{
    return labelsIsSet_;
}

void PoolResource::unsetlabels()
{
    labelsIsSet_ = false;
}

std::vector<UserTags>& PoolResource::getTags()
{
    return tags_;
}

void PoolResource::setTags(const std::vector<UserTags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool PoolResource::tagsIsSet() const
{
    return tagsIsSet_;
}

void PoolResource::unsettags()
{
    tagsIsSet_ = false;
}

NodeNetwork PoolResource::getNetwork() const
{
    return network_;
}

void PoolResource::setNetwork(const NodeNetwork& value)
{
    network_ = value;
    networkIsSet_ = true;
}

bool PoolResource::networkIsSet() const
{
    return networkIsSet_;
}

void PoolResource::unsetnetwork()
{
    networkIsSet_ = false;
}

ResourceExtendParams PoolResource::getExtendParams() const
{
    return extendParams_;
}

void PoolResource::setExtendParams(const ResourceExtendParams& value)
{
    extendParams_ = value;
    extendParamsIsSet_ = true;
}

bool PoolResource::extendParamsIsSet() const
{
    return extendParamsIsSet_;
}

void PoolResource::unsetextendParams()
{
    extendParamsIsSet_ = false;
}

CreatingStep PoolResource::getCreatingStep() const
{
    return creatingStep_;
}

void PoolResource::setCreatingStep(const CreatingStep& value)
{
    creatingStep_ = value;
    creatingStepIsSet_ = true;
}

bool PoolResource::creatingStepIsSet() const
{
    return creatingStepIsSet_;
}

void PoolResource::unsetcreatingStep()
{
    creatingStepIsSet_ = false;
}

RootVolume PoolResource::getRootVolume() const
{
    return rootVolume_;
}

void PoolResource::setRootVolume(const RootVolume& value)
{
    rootVolume_ = value;
    rootVolumeIsSet_ = true;
}

bool PoolResource::rootVolumeIsSet() const
{
    return rootVolumeIsSet_;
}

void PoolResource::unsetrootVolume()
{
    rootVolumeIsSet_ = false;
}

std::vector<DataVolumeItem>& PoolResource::getDataVolumes()
{
    return dataVolumes_;
}

void PoolResource::setDataVolumes(const std::vector<DataVolumeItem>& value)
{
    dataVolumes_ = value;
    dataVolumesIsSet_ = true;
}

bool PoolResource::dataVolumesIsSet() const
{
    return dataVolumesIsSet_;
}

void PoolResource::unsetdataVolumes()
{
    dataVolumesIsSet_ = false;
}

std::vector<VolumeGroupConfig>& PoolResource::getVolumeGroupConfigs()
{
    return volumeGroupConfigs_;
}

void PoolResource::setVolumeGroupConfigs(const std::vector<VolumeGroupConfig>& value)
{
    volumeGroupConfigs_ = value;
    volumeGroupConfigsIsSet_ = true;
}

bool PoolResource::volumeGroupConfigsIsSet() const
{
    return volumeGroupConfigsIsSet_;
}

void PoolResource::unsetvolumeGroupConfigs()
{
    volumeGroupConfigsIsSet_ = false;
}

Os PoolResource::getOs() const
{
    return os_;
}

void PoolResource::setOs(const Os& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool PoolResource::osIsSet() const
{
    return osIsSet_;
}

void PoolResource::unsetos()
{
    osIsSet_ = false;
}

}
}
}
}
}


