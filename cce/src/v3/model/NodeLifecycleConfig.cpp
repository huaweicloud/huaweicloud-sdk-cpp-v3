

#include "huaweicloud/cce/v3/model/NodeLifecycleConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeLifecycleConfig::NodeLifecycleConfig()
{
    preInstall_ = "";
    preInstallIsSet_ = false;
    postInstall_ = "";
    postInstallIsSet_ = false;
}

NodeLifecycleConfig::~NodeLifecycleConfig() = default;

void NodeLifecycleConfig::validate()
{
}

web::json::value NodeLifecycleConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(preInstallIsSet_) {
        val[utility::conversions::to_string_t("preInstall")] = ModelBase::toJson(preInstall_);
    }
    if(postInstallIsSet_) {
        val[utility::conversions::to_string_t("postInstall")] = ModelBase::toJson(postInstall_);
    }

    return val;
}
bool NodeLifecycleConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("preInstall"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("preInstall"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreInstall(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("postInstall"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("postInstall"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPostInstall(refVal);
        }
    }
    return ok;
}


std::string NodeLifecycleConfig::getPreInstall() const
{
    return preInstall_;
}

void NodeLifecycleConfig::setPreInstall(const std::string& value)
{
    preInstall_ = value;
    preInstallIsSet_ = true;
}

bool NodeLifecycleConfig::preInstallIsSet() const
{
    return preInstallIsSet_;
}

void NodeLifecycleConfig::unsetpreInstall()
{
    preInstallIsSet_ = false;
}

std::string NodeLifecycleConfig::getPostInstall() const
{
    return postInstall_;
}

void NodeLifecycleConfig::setPostInstall(const std::string& value)
{
    postInstall_ = value;
    postInstallIsSet_ = true;
}

bool NodeLifecycleConfig::postInstallIsSet() const
{
    return postInstallIsSet_;
}

void NodeLifecycleConfig::unsetpostInstall()
{
    postInstallIsSet_ = false;
}

}
}
}
}
}


