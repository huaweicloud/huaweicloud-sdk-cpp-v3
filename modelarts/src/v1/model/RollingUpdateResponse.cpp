

#include "huaweicloud/modelarts/v1/model/RollingUpdateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RollingUpdateResponse::RollingUpdateResponse()
{
    maxSurge_ = "";
    maxSurgeIsSet_ = false;
    maxUnavailable_ = "";
    maxUnavailableIsSet_ = false;
}

RollingUpdateResponse::~RollingUpdateResponse() = default;

void RollingUpdateResponse::validate()
{
}

web::json::value RollingUpdateResponse::toJson() const
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
bool RollingUpdateResponse::fromJson(const web::json::value& val)
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


std::string RollingUpdateResponse::getMaxSurge() const
{
    return maxSurge_;
}

void RollingUpdateResponse::setMaxSurge(const std::string& value)
{
    maxSurge_ = value;
    maxSurgeIsSet_ = true;
}

bool RollingUpdateResponse::maxSurgeIsSet() const
{
    return maxSurgeIsSet_;
}

void RollingUpdateResponse::unsetmaxSurge()
{
    maxSurgeIsSet_ = false;
}

std::string RollingUpdateResponse::getMaxUnavailable() const
{
    return maxUnavailable_;
}

void RollingUpdateResponse::setMaxUnavailable(const std::string& value)
{
    maxUnavailable_ = value;
    maxUnavailableIsSet_ = true;
}

bool RollingUpdateResponse::maxUnavailableIsSet() const
{
    return maxUnavailableIsSet_;
}

void RollingUpdateResponse::unsetmaxUnavailable()
{
    maxUnavailableIsSet_ = false;
}

}
}
}
}
}


