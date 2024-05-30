

#include "huaweicloud/gaussdb/v3/model/ProxyUpgradeProxyVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ProxyUpgradeProxyVersionRequest::ProxyUpgradeProxyVersionRequest()
{
    sourceVersion_ = "";
    sourceVersionIsSet_ = false;
    targetVersion_ = "";
    targetVersionIsSet_ = false;
}

ProxyUpgradeProxyVersionRequest::~ProxyUpgradeProxyVersionRequest() = default;

void ProxyUpgradeProxyVersionRequest::validate()
{
}

web::json::value ProxyUpgradeProxyVersionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceVersionIsSet_) {
        val[utility::conversions::to_string_t("source_version")] = ModelBase::toJson(sourceVersion_);
    }
    if(targetVersionIsSet_) {
        val[utility::conversions::to_string_t("target_version")] = ModelBase::toJson(targetVersion_);
    }

    return val;
}
bool ProxyUpgradeProxyVersionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetVersion(refVal);
        }
    }
    return ok;
}


std::string ProxyUpgradeProxyVersionRequest::getSourceVersion() const
{
    return sourceVersion_;
}

void ProxyUpgradeProxyVersionRequest::setSourceVersion(const std::string& value)
{
    sourceVersion_ = value;
    sourceVersionIsSet_ = true;
}

bool ProxyUpgradeProxyVersionRequest::sourceVersionIsSet() const
{
    return sourceVersionIsSet_;
}

void ProxyUpgradeProxyVersionRequest::unsetsourceVersion()
{
    sourceVersionIsSet_ = false;
}

std::string ProxyUpgradeProxyVersionRequest::getTargetVersion() const
{
    return targetVersion_;
}

void ProxyUpgradeProxyVersionRequest::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool ProxyUpgradeProxyVersionRequest::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void ProxyUpgradeProxyVersionRequest::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

}
}
}
}
}


