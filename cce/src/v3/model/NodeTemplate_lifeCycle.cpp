

#include "huaweicloud/cce/v3/model/NodeTemplate_lifeCycle.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeTemplate_lifeCycle::NodeTemplate_lifeCycle()
{
    preInstall_ = "";
    preInstallIsSet_ = false;
    postInstall_ = "";
    postInstallIsSet_ = false;
}

NodeTemplate_lifeCycle::~NodeTemplate_lifeCycle() = default;

void NodeTemplate_lifeCycle::validate()
{
}

web::json::value NodeTemplate_lifeCycle::toJson() const
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
bool NodeTemplate_lifeCycle::fromJson(const web::json::value& val)
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


std::string NodeTemplate_lifeCycle::getPreInstall() const
{
    return preInstall_;
}

void NodeTemplate_lifeCycle::setPreInstall(const std::string& value)
{
    preInstall_ = value;
    preInstallIsSet_ = true;
}

bool NodeTemplate_lifeCycle::preInstallIsSet() const
{
    return preInstallIsSet_;
}

void NodeTemplate_lifeCycle::unsetpreInstall()
{
    preInstallIsSet_ = false;
}

std::string NodeTemplate_lifeCycle::getPostInstall() const
{
    return postInstall_;
}

void NodeTemplate_lifeCycle::setPostInstall(const std::string& value)
{
    postInstall_ = value;
    postInstallIsSet_ = true;
}

bool NodeTemplate_lifeCycle::postInstallIsSet() const
{
    return postInstallIsSet_;
}

void NodeTemplate_lifeCycle::unsetpostInstall()
{
    postInstallIsSet_ = false;
}

}
}
}
}
}


