

#include "huaweicloud/modelarts/v1/model/NodeConfigTemplateSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeConfigTemplateSpec::NodeConfigTemplateSpec()
{
    dockerBaseSize_ = 0;
    dockerBaseSizeIsSet_ = false;
    dockerLvmConfigIsSet_ = false;
    osListIsSet_ = false;
}

NodeConfigTemplateSpec::~NodeConfigTemplateSpec() = default;

void NodeConfigTemplateSpec::validate()
{
}

web::json::value NodeConfigTemplateSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dockerBaseSizeIsSet_) {
        val[utility::conversions::to_string_t("dockerBaseSize")] = ModelBase::toJson(dockerBaseSize_);
    }
    if(dockerLvmConfigIsSet_) {
        val[utility::conversions::to_string_t("dockerLvmConfig")] = ModelBase::toJson(dockerLvmConfig_);
    }
    if(osListIsSet_) {
        val[utility::conversions::to_string_t("osList")] = ModelBase::toJson(osList_);
    }

    return val;
}
bool NodeConfigTemplateSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dockerBaseSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dockerBaseSize"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDockerBaseSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dockerLvmConfig"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dockerLvmConfig"));
        if(!fieldValue.is_null())
        {
            DockerLvmConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDockerLvmConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("osList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("osList"));
        if(!fieldValue.is_null())
        {
            std::vector<AffinityOS> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsList(refVal);
        }
    }
    return ok;
}


int32_t NodeConfigTemplateSpec::getDockerBaseSize() const
{
    return dockerBaseSize_;
}

void NodeConfigTemplateSpec::setDockerBaseSize(int32_t value)
{
    dockerBaseSize_ = value;
    dockerBaseSizeIsSet_ = true;
}

bool NodeConfigTemplateSpec::dockerBaseSizeIsSet() const
{
    return dockerBaseSizeIsSet_;
}

void NodeConfigTemplateSpec::unsetdockerBaseSize()
{
    dockerBaseSizeIsSet_ = false;
}

DockerLvmConfig NodeConfigTemplateSpec::getDockerLvmConfig() const
{
    return dockerLvmConfig_;
}

void NodeConfigTemplateSpec::setDockerLvmConfig(const DockerLvmConfig& value)
{
    dockerLvmConfig_ = value;
    dockerLvmConfigIsSet_ = true;
}

bool NodeConfigTemplateSpec::dockerLvmConfigIsSet() const
{
    return dockerLvmConfigIsSet_;
}

void NodeConfigTemplateSpec::unsetdockerLvmConfig()
{
    dockerLvmConfigIsSet_ = false;
}

std::vector<AffinityOS>& NodeConfigTemplateSpec::getOsList()
{
    return osList_;
}

void NodeConfigTemplateSpec::setOsList(const std::vector<AffinityOS>& value)
{
    osList_ = value;
    osListIsSet_ = true;
}

bool NodeConfigTemplateSpec::osListIsSet() const
{
    return osListIsSet_;
}

void NodeConfigTemplateSpec::unsetosList()
{
    osListIsSet_ = false;
}

}
}
}
}
}


