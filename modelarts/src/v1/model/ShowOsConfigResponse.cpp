

#include "huaweicloud/modelarts/v1/model/ShowOsConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowOsConfigResponse::ShowOsConfigResponse()
{
    networkCidrsIsSet_ = false;
    networkQuota_ = 0;
    networkQuotaIsSet_ = false;
    poolQuota_ = 0;
    poolQuotaIsSet_ = false;
    poolHighAvailable_ = false;
    poolHighAvailableIsSet_ = false;
}

ShowOsConfigResponse::~ShowOsConfigResponse() = default;

void ShowOsConfigResponse::validate()
{
}

web::json::value ShowOsConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(networkCidrsIsSet_) {
        val[utility::conversions::to_string_t("networkCidrs")] = ModelBase::toJson(networkCidrs_);
    }
    if(networkQuotaIsSet_) {
        val[utility::conversions::to_string_t("networkQuota")] = ModelBase::toJson(networkQuota_);
    }
    if(poolQuotaIsSet_) {
        val[utility::conversions::to_string_t("poolQuota")] = ModelBase::toJson(poolQuota_);
    }
    if(poolHighAvailableIsSet_) {
        val[utility::conversions::to_string_t("poolHighAvailable")] = ModelBase::toJson(poolHighAvailable_);
    }

    return val;
}
bool ShowOsConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("networkCidrs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("networkCidrs"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkCidrs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("networkQuota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("networkQuota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("poolQuota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("poolQuota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("poolHighAvailable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("poolHighAvailable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolHighAvailable(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ShowOsConfigResponse::getNetworkCidrs()
{
    return networkCidrs_;
}

void ShowOsConfigResponse::setNetworkCidrs(const std::vector<std::string>& value)
{
    networkCidrs_ = value;
    networkCidrsIsSet_ = true;
}

bool ShowOsConfigResponse::networkCidrsIsSet() const
{
    return networkCidrsIsSet_;
}

void ShowOsConfigResponse::unsetnetworkCidrs()
{
    networkCidrsIsSet_ = false;
}

int32_t ShowOsConfigResponse::getNetworkQuota() const
{
    return networkQuota_;
}

void ShowOsConfigResponse::setNetworkQuota(int32_t value)
{
    networkQuota_ = value;
    networkQuotaIsSet_ = true;
}

bool ShowOsConfigResponse::networkQuotaIsSet() const
{
    return networkQuotaIsSet_;
}

void ShowOsConfigResponse::unsetnetworkQuota()
{
    networkQuotaIsSet_ = false;
}

int32_t ShowOsConfigResponse::getPoolQuota() const
{
    return poolQuota_;
}

void ShowOsConfigResponse::setPoolQuota(int32_t value)
{
    poolQuota_ = value;
    poolQuotaIsSet_ = true;
}

bool ShowOsConfigResponse::poolQuotaIsSet() const
{
    return poolQuotaIsSet_;
}

void ShowOsConfigResponse::unsetpoolQuota()
{
    poolQuotaIsSet_ = false;
}

bool ShowOsConfigResponse::isPoolHighAvailable() const
{
    return poolHighAvailable_;
}

void ShowOsConfigResponse::setPoolHighAvailable(bool value)
{
    poolHighAvailable_ = value;
    poolHighAvailableIsSet_ = true;
}

bool ShowOsConfigResponse::poolHighAvailableIsSet() const
{
    return poolHighAvailableIsSet_;
}

void ShowOsConfigResponse::unsetpoolHighAvailable()
{
    poolHighAvailableIsSet_ = false;
}

}
}
}
}
}


