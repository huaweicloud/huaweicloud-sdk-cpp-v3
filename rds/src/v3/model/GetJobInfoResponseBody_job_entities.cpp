

#include "huaweicloud/rds/v3/model/GetJobInfoResponseBody_job_entities.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




GetJobInfoResponseBody_job_entities::GetJobInfoResponseBody_job_entities()
{
    instanceIsSet_ = false;
    resourceIdsIsSet_ = false;
    volumeIsSet_ = false;
    publicIp_ = "";
    publicIpIsSet_ = false;
    switchStrategy_ = "";
    switchStrategyIsSet_ = false;
}

GetJobInfoResponseBody_job_entities::~GetJobInfoResponseBody_job_entities() = default;

void GetJobInfoResponseBody_job_entities::validate()
{
}

web::json::value GetJobInfoResponseBody_job_entities::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIsSet_) {
        val[utility::conversions::to_string_t("instance")] = ModelBase::toJson(instance_);
    }
    if(resourceIdsIsSet_) {
        val[utility::conversions::to_string_t("resource_ids")] = ModelBase::toJson(resourceIds_);
    }
    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }
    if(publicIpIsSet_) {
        val[utility::conversions::to_string_t("public_ip")] = ModelBase::toJson(publicIp_);
    }
    if(switchStrategyIsSet_) {
        val[utility::conversions::to_string_t("switch_strategy")] = ModelBase::toJson(switchStrategy_);
    }

    return val;
}
bool GetJobInfoResponseBody_job_entities::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance"));
        if(!fieldValue.is_null())
        {
            GetJobInfoResponseBody_job_entities_instance refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            GetJobInfoResponseBody_job_entities_volume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("switch_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switch_strategy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitchStrategy(refVal);
        }
    }
    return ok;
}


GetJobInfoResponseBody_job_entities_instance GetJobInfoResponseBody_job_entities::getInstance() const
{
    return instance_;
}

void GetJobInfoResponseBody_job_entities::setInstance(const GetJobInfoResponseBody_job_entities_instance& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool GetJobInfoResponseBody_job_entities::instanceIsSet() const
{
    return instanceIsSet_;
}

void GetJobInfoResponseBody_job_entities::unsetinstance()
{
    instanceIsSet_ = false;
}

std::vector<std::string>& GetJobInfoResponseBody_job_entities::getResourceIds()
{
    return resourceIds_;
}

void GetJobInfoResponseBody_job_entities::setResourceIds(const std::vector<std::string>& value)
{
    resourceIds_ = value;
    resourceIdsIsSet_ = true;
}

bool GetJobInfoResponseBody_job_entities::resourceIdsIsSet() const
{
    return resourceIdsIsSet_;
}

void GetJobInfoResponseBody_job_entities::unsetresourceIds()
{
    resourceIdsIsSet_ = false;
}

GetJobInfoResponseBody_job_entities_volume GetJobInfoResponseBody_job_entities::getVolume() const
{
    return volume_;
}

void GetJobInfoResponseBody_job_entities::setVolume(const GetJobInfoResponseBody_job_entities_volume& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool GetJobInfoResponseBody_job_entities::volumeIsSet() const
{
    return volumeIsSet_;
}

void GetJobInfoResponseBody_job_entities::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string GetJobInfoResponseBody_job_entities::getPublicIp() const
{
    return publicIp_;
}

void GetJobInfoResponseBody_job_entities::setPublicIp(const std::string& value)
{
    publicIp_ = value;
    publicIpIsSet_ = true;
}

bool GetJobInfoResponseBody_job_entities::publicIpIsSet() const
{
    return publicIpIsSet_;
}

void GetJobInfoResponseBody_job_entities::unsetpublicIp()
{
    publicIpIsSet_ = false;
}

std::string GetJobInfoResponseBody_job_entities::getSwitchStrategy() const
{
    return switchStrategy_;
}

void GetJobInfoResponseBody_job_entities::setSwitchStrategy(const std::string& value)
{
    switchStrategy_ = value;
    switchStrategyIsSet_ = true;
}

bool GetJobInfoResponseBody_job_entities::switchStrategyIsSet() const
{
    return switchStrategyIsSet_;
}

void GetJobInfoResponseBody_job_entities::unsetswitchStrategy()
{
    switchStrategyIsSet_ = false;
}

}
}
}
}
}


