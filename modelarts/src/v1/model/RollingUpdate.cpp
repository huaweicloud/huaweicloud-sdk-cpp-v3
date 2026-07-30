

#include "huaweicloud/modelarts/v1/model/RollingUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RollingUpdate::RollingUpdate()
{
    maxSurge_ = "";
    maxSurgeIsSet_ = false;
    maxUnavailable_ = "";
    maxUnavailableIsSet_ = false;
}

RollingUpdate::~RollingUpdate() = default;

void RollingUpdate::validate()
{
}

web::json::value RollingUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(maxSurgeIsSet_) {
        val[utility::conversions::to_string_t("max_surge")] = ModelBase::toJson(maxSurge_);
    }
    if(maxUnavailableIsSet_) {
        val[utility::conversions::to_string_t("max_unavailable")] = ModelBase::toJson(maxUnavailable_);
    }

    return val;
}
bool RollingUpdate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("max_surge"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_surge"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxSurge(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_unavailable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_unavailable"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxUnavailable(refVal);
        }
    }
    return ok;
}


std::string RollingUpdate::getMaxSurge() const
{
    return maxSurge_;
}

void RollingUpdate::setMaxSurge(const std::string& value)
{
    maxSurge_ = value;
    maxSurgeIsSet_ = true;
}

bool RollingUpdate::maxSurgeIsSet() const
{
    return maxSurgeIsSet_;
}

void RollingUpdate::unsetmaxSurge()
{
    maxSurgeIsSet_ = false;
}

std::string RollingUpdate::getMaxUnavailable() const
{
    return maxUnavailable_;
}

void RollingUpdate::setMaxUnavailable(const std::string& value)
{
    maxUnavailable_ = value;
    maxUnavailableIsSet_ = true;
}

bool RollingUpdate::maxUnavailableIsSet() const
{
    return maxUnavailableIsSet_;
}

void RollingUpdate::unsetmaxUnavailable()
{
    maxUnavailableIsSet_ = false;
}

}
}
}
}
}


