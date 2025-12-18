

#include "huaweicloud/meeting/v1/model/QosCpuInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




QosCpuInfo::QosCpuInfo()
{
    clientCpuMaxIsSet_ = false;
    systemCpuMaxIsSet_ = false;
}

QosCpuInfo::~QosCpuInfo() = default;

void QosCpuInfo::validate()
{
}

web::json::value QosCpuInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clientCpuMaxIsSet_) {
        val[utility::conversions::to_string_t("client_cpu_max")] = ModelBase::toJson(clientCpuMax_);
    }
    if(systemCpuMaxIsSet_) {
        val[utility::conversions::to_string_t("system_cpu_max")] = ModelBase::toJson(systemCpuMax_);
    }

    return val;
}
bool QosCpuInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("client_cpu_max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_cpu_max"));
        if(!fieldValue.is_null())
        {
            std::vector<QosDataElement> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientCpuMax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("system_cpu_max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("system_cpu_max"));
        if(!fieldValue.is_null())
        {
            std::vector<QosDataElement> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemCpuMax(refVal);
        }
    }
    return ok;
}


std::vector<QosDataElement>& QosCpuInfo::getClientCpuMax()
{
    return clientCpuMax_;
}

void QosCpuInfo::setClientCpuMax(const std::vector<QosDataElement>& value)
{
    clientCpuMax_ = value;
    clientCpuMaxIsSet_ = true;
}

bool QosCpuInfo::clientCpuMaxIsSet() const
{
    return clientCpuMaxIsSet_;
}

void QosCpuInfo::unsetclientCpuMax()
{
    clientCpuMaxIsSet_ = false;
}

std::vector<QosDataElement>& QosCpuInfo::getSystemCpuMax()
{
    return systemCpuMax_;
}

void QosCpuInfo::setSystemCpuMax(const std::vector<QosDataElement>& value)
{
    systemCpuMax_ = value;
    systemCpuMaxIsSet_ = true;
}

bool QosCpuInfo::systemCpuMaxIsSet() const
{
    return systemCpuMaxIsSet_;
}

void QosCpuInfo::unsetsystemCpuMax()
{
    systemCpuMaxIsSet_ = false;
}

}
}
}
}
}


