

#include "huaweicloud/aad/v1/model/ListPeakResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ListPeakResponse::ListPeakResponse()
{
    attackKbpsPeak_ = 0.0;
    attackKbpsPeakIsSet_ = false;
    inKbpsPeak_ = 0.0;
    inKbpsPeakIsSet_ = false;
    ddosCount_ = 0.0;
    ddosCountIsSet_ = false;
    timestamp_ = 0.0;
    timestampIsSet_ = false;
    vip_ = "";
    vipIsSet_ = false;
}

ListPeakResponse::~ListPeakResponse() = default;

void ListPeakResponse::validate()
{
}

web::json::value ListPeakResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(attackKbpsPeakIsSet_) {
        val[utility::conversions::to_string_t("attack_kbps_peak")] = ModelBase::toJson(attackKbpsPeak_);
    }
    if(inKbpsPeakIsSet_) {
        val[utility::conversions::to_string_t("in_kbps_peak")] = ModelBase::toJson(inKbpsPeak_);
    }
    if(ddosCountIsSet_) {
        val[utility::conversions::to_string_t("ddos_count")] = ModelBase::toJson(ddosCount_);
    }
    if(timestampIsSet_) {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(timestamp_);
    }
    if(vipIsSet_) {
        val[utility::conversions::to_string_t("vip")] = ModelBase::toJson(vip_);
    }

    return val;
}
bool ListPeakResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attack_kbps_peak"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_kbps_peak"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackKbpsPeak(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("in_kbps_peak"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("in_kbps_peak"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInKbpsPeak(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ddos_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ddos_count"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDdosCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamp"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVip(refVal);
        }
    }
    return ok;
}


double ListPeakResponse::getAttackKbpsPeak() const
{
    return attackKbpsPeak_;
}

void ListPeakResponse::setAttackKbpsPeak(double value)
{
    attackKbpsPeak_ = value;
    attackKbpsPeakIsSet_ = true;
}

bool ListPeakResponse::attackKbpsPeakIsSet() const
{
    return attackKbpsPeakIsSet_;
}

void ListPeakResponse::unsetattackKbpsPeak()
{
    attackKbpsPeakIsSet_ = false;
}

double ListPeakResponse::getInKbpsPeak() const
{
    return inKbpsPeak_;
}

void ListPeakResponse::setInKbpsPeak(double value)
{
    inKbpsPeak_ = value;
    inKbpsPeakIsSet_ = true;
}

bool ListPeakResponse::inKbpsPeakIsSet() const
{
    return inKbpsPeakIsSet_;
}

void ListPeakResponse::unsetinKbpsPeak()
{
    inKbpsPeakIsSet_ = false;
}

double ListPeakResponse::getDdosCount() const
{
    return ddosCount_;
}

void ListPeakResponse::setDdosCount(double value)
{
    ddosCount_ = value;
    ddosCountIsSet_ = true;
}

bool ListPeakResponse::ddosCountIsSet() const
{
    return ddosCountIsSet_;
}

void ListPeakResponse::unsetddosCount()
{
    ddosCountIsSet_ = false;
}

double ListPeakResponse::getTimestamp() const
{
    return timestamp_;
}

void ListPeakResponse::setTimestamp(double value)
{
    timestamp_ = value;
    timestampIsSet_ = true;
}

bool ListPeakResponse::timestampIsSet() const
{
    return timestampIsSet_;
}

void ListPeakResponse::unsettimestamp()
{
    timestampIsSet_ = false;
}

std::string ListPeakResponse::getVip() const
{
    return vip_;
}

void ListPeakResponse::setVip(const std::string& value)
{
    vip_ = value;
    vipIsSet_ = true;
}

bool ListPeakResponse::vipIsSet() const
{
    return vipIsSet_;
}

void ListPeakResponse::unsetvip()
{
    vipIsSet_ = false;
}

}
}
}
}
}


