

#include "huaweicloud/gaussdb/v3/model/UpdateServerlessPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateServerlessPolicy::UpdateServerlessPolicy()
{
    minVcpus_ = 0;
    minVcpusIsSet_ = false;
    maxVcpus_ = 0;
    maxVcpusIsSet_ = false;
}

UpdateServerlessPolicy::~UpdateServerlessPolicy() = default;

void UpdateServerlessPolicy::validate()
{
}

web::json::value UpdateServerlessPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(minVcpusIsSet_) {
        val[utility::conversions::to_string_t("min_vcpus")] = ModelBase::toJson(minVcpus_);
    }
    if(maxVcpusIsSet_) {
        val[utility::conversions::to_string_t("max_vcpus")] = ModelBase::toJson(maxVcpus_);
    }

    return val;
}
bool UpdateServerlessPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("min_vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_vcpus"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinVcpus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_vcpus"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxVcpus(refVal);
        }
    }
    return ok;
}


int32_t UpdateServerlessPolicy::getMinVcpus() const
{
    return minVcpus_;
}

void UpdateServerlessPolicy::setMinVcpus(int32_t value)
{
    minVcpus_ = value;
    minVcpusIsSet_ = true;
}

bool UpdateServerlessPolicy::minVcpusIsSet() const
{
    return minVcpusIsSet_;
}

void UpdateServerlessPolicy::unsetminVcpus()
{
    minVcpusIsSet_ = false;
}

int32_t UpdateServerlessPolicy::getMaxVcpus() const
{
    return maxVcpus_;
}

void UpdateServerlessPolicy::setMaxVcpus(int32_t value)
{
    maxVcpus_ = value;
    maxVcpusIsSet_ = true;
}

bool UpdateServerlessPolicy::maxVcpusIsSet() const
{
    return maxVcpusIsSet_;
}

void UpdateServerlessPolicy::unsetmaxVcpus()
{
    maxVcpusIsSet_ = false;
}

}
}
}
}
}


