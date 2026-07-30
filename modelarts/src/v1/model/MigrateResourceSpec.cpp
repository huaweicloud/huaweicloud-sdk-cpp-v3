

#include "huaweicloud/modelarts/v1/model/MigrateResourceSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




MigrateResourceSpec::MigrateResourceSpec()
{
    flavor_ = "";
    flavorIsSet_ = false;
    creatingStepIsSet_ = false;
    nodePool_ = "";
    nodePoolIsSet_ = false;
    rootVolumeIsSet_ = false;
    dataVolumesIsSet_ = false;
    volumeGroupConfigsIsSet_ = false;
    labelsIsSet_ = false;
    taintsIsSet_ = false;
    tagsIsSet_ = false;
    networkIsSet_ = false;
    extendParamsIsSet_ = false;
}

MigrateResourceSpec::~MigrateResourceSpec() = default;

void MigrateResourceSpec::validate()
{
}

web::json::value MigrateResourceSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(creatingStepIsSet_) {
        val[utility::conversions::to_string_t("creatingStep")] = ModelBase::toJson(creatingStep_);
    }
    if(nodePoolIsSet_) {
        val[utility::conversions::to_string_t("nodePool")] = ModelBase::toJson(nodePool_);
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
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(taintsIsSet_) {
        val[utility::conversions::to_string_t("taints")] = ModelBase::toJson(taints_);
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

    return val;
}
bool MigrateResourceSpec::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("creatingStep"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creatingStep"));
        if(!fieldValue.is_null())
        {
            CreatingStep refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatingStep(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
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
    return ok;
}


std::string MigrateResourceSpec::getFlavor() const
{
    return flavor_;
}

void MigrateResourceSpec::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool MigrateResourceSpec::flavorIsSet() const
{
    return flavorIsSet_;
}

void MigrateResourceSpec::unsetflavor()
{
    flavorIsSet_ = false;
}

CreatingStep MigrateResourceSpec::getCreatingStep() const
{
    return creatingStep_;
}

void MigrateResourceSpec::setCreatingStep(const CreatingStep& value)
{
    creatingStep_ = value;
    creatingStepIsSet_ = true;
}

bool MigrateResourceSpec::creatingStepIsSet() const
{
    return creatingStepIsSet_;
}

void MigrateResourceSpec::unsetcreatingStep()
{
    creatingStepIsSet_ = false;
}

std::string MigrateResourceSpec::getNodePool() const
{
    return nodePool_;
}

void MigrateResourceSpec::setNodePool(const std::string& value)
{
    nodePool_ = value;
    nodePoolIsSet_ = true;
}

bool MigrateResourceSpec::nodePoolIsSet() const
{
    return nodePoolIsSet_;
}

void MigrateResourceSpec::unsetnodePool()
{
    nodePoolIsSet_ = false;
}

RootVolume MigrateResourceSpec::getRootVolume() const
{
    return rootVolume_;
}

void MigrateResourceSpec::setRootVolume(const RootVolume& value)
{
    rootVolume_ = value;
    rootVolumeIsSet_ = true;
}

bool MigrateResourceSpec::rootVolumeIsSet() const
{
    return rootVolumeIsSet_;
}

void MigrateResourceSpec::unsetrootVolume()
{
    rootVolumeIsSet_ = false;
}

std::vector<DataVolumeItem>& MigrateResourceSpec::getDataVolumes()
{
    return dataVolumes_;
}

void MigrateResourceSpec::setDataVolumes(const std::vector<DataVolumeItem>& value)
{
    dataVolumes_ = value;
    dataVolumesIsSet_ = true;
}

bool MigrateResourceSpec::dataVolumesIsSet() const
{
    return dataVolumesIsSet_;
}

void MigrateResourceSpec::unsetdataVolumes()
{
    dataVolumesIsSet_ = false;
}

std::vector<VolumeGroupConfig>& MigrateResourceSpec::getVolumeGroupConfigs()
{
    return volumeGroupConfigs_;
}

void MigrateResourceSpec::setVolumeGroupConfigs(const std::vector<VolumeGroupConfig>& value)
{
    volumeGroupConfigs_ = value;
    volumeGroupConfigsIsSet_ = true;
}

bool MigrateResourceSpec::volumeGroupConfigsIsSet() const
{
    return volumeGroupConfigsIsSet_;
}

void MigrateResourceSpec::unsetvolumeGroupConfigs()
{
    volumeGroupConfigsIsSet_ = false;
}

std::map<std::string, std::string>& MigrateResourceSpec::getLabels()
{
    return labels_;
}

void MigrateResourceSpec::setLabels(const std::map<std::string, std::string>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool MigrateResourceSpec::labelsIsSet() const
{
    return labelsIsSet_;
}

void MigrateResourceSpec::unsetlabels()
{
    labelsIsSet_ = false;
}

std::vector<Taints>& MigrateResourceSpec::getTaints()
{
    return taints_;
}

void MigrateResourceSpec::setTaints(const std::vector<Taints>& value)
{
    taints_ = value;
    taintsIsSet_ = true;
}

bool MigrateResourceSpec::taintsIsSet() const
{
    return taintsIsSet_;
}

void MigrateResourceSpec::unsettaints()
{
    taintsIsSet_ = false;
}

std::vector<UserTags>& MigrateResourceSpec::getTags()
{
    return tags_;
}

void MigrateResourceSpec::setTags(const std::vector<UserTags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool MigrateResourceSpec::tagsIsSet() const
{
    return tagsIsSet_;
}

void MigrateResourceSpec::unsettags()
{
    tagsIsSet_ = false;
}

NodeNetwork MigrateResourceSpec::getNetwork() const
{
    return network_;
}

void MigrateResourceSpec::setNetwork(const NodeNetwork& value)
{
    network_ = value;
    networkIsSet_ = true;
}

bool MigrateResourceSpec::networkIsSet() const
{
    return networkIsSet_;
}

void MigrateResourceSpec::unsetnetwork()
{
    networkIsSet_ = false;
}

ResourceExtendParams MigrateResourceSpec::getExtendParams() const
{
    return extendParams_;
}

void MigrateResourceSpec::setExtendParams(const ResourceExtendParams& value)
{
    extendParams_ = value;
    extendParamsIsSet_ = true;
}

bool MigrateResourceSpec::extendParamsIsSet() const
{
    return extendParamsIsSet_;
}

void MigrateResourceSpec::unsetextendParams()
{
    extendParamsIsSet_ = false;
}

}
}
}
}
}


