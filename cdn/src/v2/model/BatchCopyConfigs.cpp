

#include "huaweicloud/cdn/v2/model/BatchCopyConfigs.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




BatchCopyConfigs::BatchCopyConfigs()
{
    targetDomain_ = "";
    targetDomainIsSet_ = false;
    sourceDomain_ = "";
    sourceDomainIsSet_ = false;
    configListIsSet_ = false;
}

BatchCopyConfigs::~BatchCopyConfigs() = default;

void BatchCopyConfigs::validate()
{
}

web::json::value BatchCopyConfigs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetDomainIsSet_) {
        val[utility::conversions::to_string_t("target_domain")] = ModelBase::toJson(targetDomain_);
    }
    if(sourceDomainIsSet_) {
        val[utility::conversions::to_string_t("source_domain")] = ModelBase::toJson(sourceDomain_);
    }
    if(configListIsSet_) {
        val[utility::conversions::to_string_t("config_list")] = ModelBase::toJson(configList_);
    }

    return val;
}

bool BatchCopyConfigs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigList(refVal);
        }
    }
    return ok;
}

std::string BatchCopyConfigs::getTargetDomain() const
{
    return targetDomain_;
}

void BatchCopyConfigs::setTargetDomain(const std::string& value)
{
    targetDomain_ = value;
    targetDomainIsSet_ = true;
}

bool BatchCopyConfigs::targetDomainIsSet() const
{
    return targetDomainIsSet_;
}

void BatchCopyConfigs::unsettargetDomain()
{
    targetDomainIsSet_ = false;
}

std::string BatchCopyConfigs::getSourceDomain() const
{
    return sourceDomain_;
}

void BatchCopyConfigs::setSourceDomain(const std::string& value)
{
    sourceDomain_ = value;
    sourceDomainIsSet_ = true;
}

bool BatchCopyConfigs::sourceDomainIsSet() const
{
    return sourceDomainIsSet_;
}

void BatchCopyConfigs::unsetsourceDomain()
{
    sourceDomainIsSet_ = false;
}

std::vector<std::string>& BatchCopyConfigs::getConfigList()
{
    return configList_;
}

void BatchCopyConfigs::setConfigList(const std::vector<std::string>& value)
{
    configList_ = value;
    configListIsSet_ = true;
}

bool BatchCopyConfigs::configListIsSet() const
{
    return configListIsSet_;
}

void BatchCopyConfigs::unsetconfigList()
{
    configListIsSet_ = false;
}

}
}
}
}
}


