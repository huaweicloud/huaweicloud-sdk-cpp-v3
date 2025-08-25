

#include "huaweicloud/cce/v3/model/ReinstallK8sOptionsConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ReinstallK8sOptionsConfig::ReinstallK8sOptionsConfig()
{
    labelsIsSet_ = false;
    taintsIsSet_ = false;
    maxPods_ = 0;
    maxPodsIsSet_ = false;
    nicMultiqueue_ = "";
    nicMultiqueueIsSet_ = false;
    nicThreshold_ = "";
    nicThresholdIsSet_ = false;
}

ReinstallK8sOptionsConfig::~ReinstallK8sOptionsConfig() = default;

void ReinstallK8sOptionsConfig::validate()
{
}

web::json::value ReinstallK8sOptionsConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(taintsIsSet_) {
        val[utility::conversions::to_string_t("taints")] = ModelBase::toJson(taints_);
    }
    if(maxPodsIsSet_) {
        val[utility::conversions::to_string_t("maxPods")] = ModelBase::toJson(maxPods_);
    }
    if(nicMultiqueueIsSet_) {
        val[utility::conversions::to_string_t("nicMultiqueue")] = ModelBase::toJson(nicMultiqueue_);
    }
    if(nicThresholdIsSet_) {
        val[utility::conversions::to_string_t("nicThreshold")] = ModelBase::toJson(nicThreshold_);
    }

    return val;
}
bool ReinstallK8sOptionsConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            std::vector<Taint> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaints(refVal);
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
    return ok;
}


std::map<std::string, std::string>& ReinstallK8sOptionsConfig::getLabels()
{
    return labels_;
}

void ReinstallK8sOptionsConfig::setLabels(const std::map<std::string, std::string>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool ReinstallK8sOptionsConfig::labelsIsSet() const
{
    return labelsIsSet_;
}

void ReinstallK8sOptionsConfig::unsetlabels()
{
    labelsIsSet_ = false;
}

std::vector<Taint>& ReinstallK8sOptionsConfig::getTaints()
{
    return taints_;
}

void ReinstallK8sOptionsConfig::setTaints(const std::vector<Taint>& value)
{
    taints_ = value;
    taintsIsSet_ = true;
}

bool ReinstallK8sOptionsConfig::taintsIsSet() const
{
    return taintsIsSet_;
}

void ReinstallK8sOptionsConfig::unsettaints()
{
    taintsIsSet_ = false;
}

int32_t ReinstallK8sOptionsConfig::getMaxPods() const
{
    return maxPods_;
}

void ReinstallK8sOptionsConfig::setMaxPods(int32_t value)
{
    maxPods_ = value;
    maxPodsIsSet_ = true;
}

bool ReinstallK8sOptionsConfig::maxPodsIsSet() const
{
    return maxPodsIsSet_;
}

void ReinstallK8sOptionsConfig::unsetmaxPods()
{
    maxPodsIsSet_ = false;
}

std::string ReinstallK8sOptionsConfig::getNicMultiqueue() const
{
    return nicMultiqueue_;
}

void ReinstallK8sOptionsConfig::setNicMultiqueue(const std::string& value)
{
    nicMultiqueue_ = value;
    nicMultiqueueIsSet_ = true;
}

bool ReinstallK8sOptionsConfig::nicMultiqueueIsSet() const
{
    return nicMultiqueueIsSet_;
}

void ReinstallK8sOptionsConfig::unsetnicMultiqueue()
{
    nicMultiqueueIsSet_ = false;
}

std::string ReinstallK8sOptionsConfig::getNicThreshold() const
{
    return nicThreshold_;
}

void ReinstallK8sOptionsConfig::setNicThreshold(const std::string& value)
{
    nicThreshold_ = value;
    nicThresholdIsSet_ = true;
}

bool ReinstallK8sOptionsConfig::nicThresholdIsSet() const
{
    return nicThresholdIsSet_;
}

void ReinstallK8sOptionsConfig::unsetnicThreshold()
{
    nicThresholdIsSet_ = false;
}

}
}
}
}
}


