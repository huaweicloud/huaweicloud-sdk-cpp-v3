

#include "huaweicloud/cdn/v2/model/IpFrequencyLimit.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




IpFrequencyLimit::IpFrequencyLimit()
{
    status_ = "";
    statusIsSet_ = false;
    qps_ = 0;
    qpsIsSet_ = false;
}

IpFrequencyLimit::~IpFrequencyLimit() = default;

void IpFrequencyLimit::validate()
{
}

web::json::value IpFrequencyLimit::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(qpsIsSet_) {
        val[utility::conversions::to_string_t("qps")] = ModelBase::toJson(qps_);
    }

    return val;
}
bool IpFrequencyLimit::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qps"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQps(refVal);
        }
    }
    return ok;
}


std::string IpFrequencyLimit::getStatus() const
{
    return status_;
}

void IpFrequencyLimit::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool IpFrequencyLimit::statusIsSet() const
{
    return statusIsSet_;
}

void IpFrequencyLimit::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t IpFrequencyLimit::getQps() const
{
    return qps_;
}

void IpFrequencyLimit::setQps(int32_t value)
{
    qps_ = value;
    qpsIsSet_ = true;
}

bool IpFrequencyLimit::qpsIsSet() const
{
    return qpsIsSet_;
}

void IpFrequencyLimit::unsetqps()
{
    qpsIsSet_ = false;
}

}
}
}
}
}


