

#include "huaweicloud/modelarts/v1/model/PoolSpecModel_resources.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolSpecModel_resources::PoolSpecModel_resources()
{
    flavor_ = "";
    flavorIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    maxCount_ = 0;
    maxCountIsSet_ = false;
    azsIsSet_ = false;
    extendParamsIsSet_ = false;
    osIsSet_ = false;
    dataVolumesIsSet_ = false;
    volumeGroupConfigsIsSet_ = false;
}

PoolSpecModel_resources::~PoolSpecModel_resources() = default;

void PoolSpecModel_resources::validate()
{
}

web::json::value PoolSpecModel_resources::toJson() const
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
    if(extendParamsIsSet_) {
        val[utility::conversions::to_string_t("extendParams")] = ModelBase::toJson(extendParams_);
    }
    if(osIsSet_) {
        val[utility::conversions::to_string_t("os")] = ModelBase::toJson(os_);
    }
    if(dataVolumesIsSet_) {
        val[utility::conversions::to_string_t("dataVolumes")] = ModelBase::toJson(dataVolumes_);
    }
    if(volumeGroupConfigsIsSet_) {
        val[utility::conversions::to_string_t("volumeGroupConfigs")] = ModelBase::toJson(volumeGroupConfigs_);
    }

    return val;
}
bool PoolSpecModel_resources::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("extendParams"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendParams"));
        if(!fieldValue.is_null())
        {
            PoolSpecModel_extendParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendParams(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("dataVolumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataVolumes"));
        if(!fieldValue.is_null())
        {
            PoolSpecModel_dataVolumes refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVolumes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumeGroupConfigs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumeGroupConfigs"));
        if(!fieldValue.is_null())
        {
            PoolSpecModel_volumeGroupConfigs refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeGroupConfigs(refVal);
        }
    }
    return ok;
}


std::string PoolSpecModel_resources::getFlavor() const
{
    return flavor_;
}

void PoolSpecModel_resources::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool PoolSpecModel_resources::flavorIsSet() const
{
    return flavorIsSet_;
}

void PoolSpecModel_resources::unsetflavor()
{
    flavorIsSet_ = false;
}

int32_t PoolSpecModel_resources::getCount() const
{
    return count_;
}

void PoolSpecModel_resources::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool PoolSpecModel_resources::countIsSet() const
{
    return countIsSet_;
}

void PoolSpecModel_resources::unsetcount()
{
    countIsSet_ = false;
}

int32_t PoolSpecModel_resources::getMaxCount() const
{
    return maxCount_;
}

void PoolSpecModel_resources::setMaxCount(int32_t value)
{
    maxCount_ = value;
    maxCountIsSet_ = true;
}

bool PoolSpecModel_resources::maxCountIsSet() const
{
    return maxCountIsSet_;
}

void PoolSpecModel_resources::unsetmaxCount()
{
    maxCountIsSet_ = false;
}

std::vector<PoolNodeAz>& PoolSpecModel_resources::getAzs()
{
    return azs_;
}

void PoolSpecModel_resources::setAzs(const std::vector<PoolNodeAz>& value)
{
    azs_ = value;
    azsIsSet_ = true;
}

bool PoolSpecModel_resources::azsIsSet() const
{
    return azsIsSet_;
}

void PoolSpecModel_resources::unsetazs()
{
    azsIsSet_ = false;
}

PoolSpecModel_extendParams PoolSpecModel_resources::getExtendParams() const
{
    return extendParams_;
}

void PoolSpecModel_resources::setExtendParams(const PoolSpecModel_extendParams& value)
{
    extendParams_ = value;
    extendParamsIsSet_ = true;
}

bool PoolSpecModel_resources::extendParamsIsSet() const
{
    return extendParamsIsSet_;
}

void PoolSpecModel_resources::unsetextendParams()
{
    extendParamsIsSet_ = false;
}

Os PoolSpecModel_resources::getOs() const
{
    return os_;
}

void PoolSpecModel_resources::setOs(const Os& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool PoolSpecModel_resources::osIsSet() const
{
    return osIsSet_;
}

void PoolSpecModel_resources::unsetos()
{
    osIsSet_ = false;
}

PoolSpecModel_dataVolumes PoolSpecModel_resources::getDataVolumes() const
{
    return dataVolumes_;
}

void PoolSpecModel_resources::setDataVolumes(const PoolSpecModel_dataVolumes& value)
{
    dataVolumes_ = value;
    dataVolumesIsSet_ = true;
}

bool PoolSpecModel_resources::dataVolumesIsSet() const
{
    return dataVolumesIsSet_;
}

void PoolSpecModel_resources::unsetdataVolumes()
{
    dataVolumesIsSet_ = false;
}

PoolSpecModel_volumeGroupConfigs PoolSpecModel_resources::getVolumeGroupConfigs() const
{
    return volumeGroupConfigs_;
}

void PoolSpecModel_resources::setVolumeGroupConfigs(const PoolSpecModel_volumeGroupConfigs& value)
{
    volumeGroupConfigs_ = value;
    volumeGroupConfigsIsSet_ = true;
}

bool PoolSpecModel_resources::volumeGroupConfigsIsSet() const
{
    return volumeGroupConfigsIsSet_;
}

void PoolSpecModel_resources::unsetvolumeGroupConfigs()
{
    volumeGroupConfigsIsSet_ = false;
}

}
}
}
}
}


