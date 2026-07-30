

#include "huaweicloud/modelarts/v1/model/DockerLvmConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DockerLvmConfig::DockerLvmConfig()
{
    dockerThinPool_ = 0;
    dockerThinPoolIsSet_ = false;
    kubernetesLV_ = 0;
    kubernetesLVIsSet_ = false;
    dockerDiskType_ = "";
    dockerDiskTypeIsSet_ = false;
    lvType_ = "";
    lvTypeIsSet_ = false;
}

DockerLvmConfig::~DockerLvmConfig() = default;

void DockerLvmConfig::validate()
{
}

web::json::value DockerLvmConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dockerThinPoolIsSet_) {
        val[utility::conversions::to_string_t("dockerThinPool")] = ModelBase::toJson(dockerThinPool_);
    }
    if(kubernetesLVIsSet_) {
        val[utility::conversions::to_string_t("kubernetesLV")] = ModelBase::toJson(kubernetesLV_);
    }
    if(dockerDiskTypeIsSet_) {
        val[utility::conversions::to_string_t("dockerDiskType")] = ModelBase::toJson(dockerDiskType_);
    }
    if(lvTypeIsSet_) {
        val[utility::conversions::to_string_t("lvType")] = ModelBase::toJson(lvType_);
    }

    return val;
}
bool DockerLvmConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dockerThinPool"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dockerThinPool"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDockerThinPool(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kubernetesLV"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kubernetesLV"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKubernetesLV(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dockerDiskType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dockerDiskType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDockerDiskType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lvType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lvType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLvType(refVal);
        }
    }
    return ok;
}


int32_t DockerLvmConfig::getDockerThinPool() const
{
    return dockerThinPool_;
}

void DockerLvmConfig::setDockerThinPool(int32_t value)
{
    dockerThinPool_ = value;
    dockerThinPoolIsSet_ = true;
}

bool DockerLvmConfig::dockerThinPoolIsSet() const
{
    return dockerThinPoolIsSet_;
}

void DockerLvmConfig::unsetdockerThinPool()
{
    dockerThinPoolIsSet_ = false;
}

int32_t DockerLvmConfig::getKubernetesLV() const
{
    return kubernetesLV_;
}

void DockerLvmConfig::setKubernetesLV(int32_t value)
{
    kubernetesLV_ = value;
    kubernetesLVIsSet_ = true;
}

bool DockerLvmConfig::kubernetesLVIsSet() const
{
    return kubernetesLVIsSet_;
}

void DockerLvmConfig::unsetkubernetesLV()
{
    kubernetesLVIsSet_ = false;
}

std::string DockerLvmConfig::getDockerDiskType() const
{
    return dockerDiskType_;
}

void DockerLvmConfig::setDockerDiskType(const std::string& value)
{
    dockerDiskType_ = value;
    dockerDiskTypeIsSet_ = true;
}

bool DockerLvmConfig::dockerDiskTypeIsSet() const
{
    return dockerDiskTypeIsSet_;
}

void DockerLvmConfig::unsetdockerDiskType()
{
    dockerDiskTypeIsSet_ = false;
}

std::string DockerLvmConfig::getLvType() const
{
    return lvType_;
}

void DockerLvmConfig::setLvType(const std::string& value)
{
    lvType_ = value;
    lvTypeIsSet_ = true;
}

bool DockerLvmConfig::lvTypeIsSet() const
{
    return lvTypeIsSet_;
}

void DockerLvmConfig::unsetlvType()
{
    lvTypeIsSet_ = false;
}

}
}
}
}
}


