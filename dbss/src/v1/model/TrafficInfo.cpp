

#include "huaweicloud/dbss/v1/model/TrafficInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




TrafficInfo::TrafficInfo()
{
    id_ = "";
    idIsSet_ = false;
    rxmegabytes_ = 0.0;
    rxmegabytesIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
    txmegabytes_ = 0.0;
    txmegabytesIsSet_ = false;
}

TrafficInfo::~TrafficInfo() = default;

void TrafficInfo::validate()
{
}

web::json::value TrafficInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(rxmegabytesIsSet_) {
        val[utility::conversions::to_string_t("rxmegabytes")] = ModelBase::toJson(rxmegabytes_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(txmegabytesIsSet_) {
        val[utility::conversions::to_string_t("txmegabytes")] = ModelBase::toJson(txmegabytes_);
    }

    return val;
}
bool TrafficInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rxmegabytes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rxmegabytes"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRxmegabytes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("txmegabytes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("txmegabytes"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTxmegabytes(refVal);
        }
    }
    return ok;
}


std::string TrafficInfo::getId() const
{
    return id_;
}

void TrafficInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TrafficInfo::idIsSet() const
{
    return idIsSet_;
}

void TrafficInfo::unsetid()
{
    idIsSet_ = false;
}

double TrafficInfo::getRxmegabytes() const
{
    return rxmegabytes_;
}

void TrafficInfo::setRxmegabytes(double value)
{
    rxmegabytes_ = value;
    rxmegabytesIsSet_ = true;
}

bool TrafficInfo::rxmegabytesIsSet() const
{
    return rxmegabytesIsSet_;
}

void TrafficInfo::unsetrxmegabytes()
{
    rxmegabytesIsSet_ = false;
}

std::string TrafficInfo::getTime() const
{
    return time_;
}

void TrafficInfo::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool TrafficInfo::timeIsSet() const
{
    return timeIsSet_;
}

void TrafficInfo::unsettime()
{
    timeIsSet_ = false;
}

double TrafficInfo::getTxmegabytes() const
{
    return txmegabytes_;
}

void TrafficInfo::setTxmegabytes(double value)
{
    txmegabytes_ = value;
    txmegabytesIsSet_ = true;
}

bool TrafficInfo::txmegabytesIsSet() const
{
    return txmegabytesIsSet_;
}

void TrafficInfo::unsettxmegabytes()
{
    txmegabytesIsSet_ = false;
}

}
}
}
}
}


