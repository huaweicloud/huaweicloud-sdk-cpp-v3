

#include "huaweicloud/ga/v1/model/PortRange.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




PortRange::PortRange()
{
    fromPort_ = 0;
    fromPortIsSet_ = false;
    toPort_ = 0;
    toPortIsSet_ = false;
}

PortRange::~PortRange() = default;

void PortRange::validate()
{
}

web::json::value PortRange::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fromPortIsSet_) {
        val[utility::conversions::to_string_t("from_port")] = ModelBase::toJson(fromPort_);
    }
    if(toPortIsSet_) {
        val[utility::conversions::to_string_t("to_port")] = ModelBase::toJson(toPort_);
    }

    return val;
}
bool PortRange::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("from_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("from_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFromPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("to_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("to_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToPort(refVal);
        }
    }
    return ok;
}


int32_t PortRange::getFromPort() const
{
    return fromPort_;
}

void PortRange::setFromPort(int32_t value)
{
    fromPort_ = value;
    fromPortIsSet_ = true;
}

bool PortRange::fromPortIsSet() const
{
    return fromPortIsSet_;
}

void PortRange::unsetfromPort()
{
    fromPortIsSet_ = false;
}

int32_t PortRange::getToPort() const
{
    return toPort_;
}

void PortRange::setToPort(int32_t value)
{
    toPort_ = value;
    toPortIsSet_ = true;
}

bool PortRange::toPortIsSet() const
{
    return toPortIsSet_;
}

void PortRange::unsettoPort()
{
    toPortIsSet_ = false;
}

}
}
}
}
}


