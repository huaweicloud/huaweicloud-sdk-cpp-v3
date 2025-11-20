

#include "huaweicloud/aad/v2/model/ShowDDoSPeakResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ShowDDoSPeakResponse::ShowDDoSPeakResponse()
{
    attackKbytesTotal_ = 0;
    attackKbytesTotalIsSet_ = false;
    attackPpsPeak_ = 0;
    attackPpsPeakIsSet_ = false;
    inPpsPeak_ = 0;
    inPpsPeakIsSet_ = false;
    attackBpsPeak_ = 0;
    attackBpsPeakIsSet_ = false;
    inBpsPeak_ = 0;
    inBpsPeakIsSet_ = false;
    ddosCount_ = 0;
    ddosCountIsSet_ = false;
    utime_ = 0;
    utimeIsSet_ = false;
}

ShowDDoSPeakResponse::~ShowDDoSPeakResponse() = default;

void ShowDDoSPeakResponse::validate()
{
}

web::json::value ShowDDoSPeakResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(attackKbytesTotalIsSet_) {
        val[utility::conversions::to_string_t("attack_kbytes_total")] = ModelBase::toJson(attackKbytesTotal_);
    }
    if(attackPpsPeakIsSet_) {
        val[utility::conversions::to_string_t("attack_pps_peak")] = ModelBase::toJson(attackPpsPeak_);
    }
    if(inPpsPeakIsSet_) {
        val[utility::conversions::to_string_t("in_pps_peak")] = ModelBase::toJson(inPpsPeak_);
    }
    if(attackBpsPeakIsSet_) {
        val[utility::conversions::to_string_t("attack_bps_peak")] = ModelBase::toJson(attackBpsPeak_);
    }
    if(inBpsPeakIsSet_) {
        val[utility::conversions::to_string_t("in_bps_peak")] = ModelBase::toJson(inBpsPeak_);
    }
    if(ddosCountIsSet_) {
        val[utility::conversions::to_string_t("ddos_count")] = ModelBase::toJson(ddosCount_);
    }
    if(utimeIsSet_) {
        val[utility::conversions::to_string_t("utime")] = ModelBase::toJson(utime_);
    }

    return val;
}
bool ShowDDoSPeakResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attack_kbytes_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_kbytes_total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackKbytesTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attack_pps_peak"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_pps_peak"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackPpsPeak(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("in_pps_peak"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("in_pps_peak"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInPpsPeak(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attack_bps_peak"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_bps_peak"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackBpsPeak(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("in_bps_peak"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("in_bps_peak"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInBpsPeak(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ddos_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ddos_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDdosCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("utime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("utime"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUtime(refVal);
        }
    }
    return ok;
}


int32_t ShowDDoSPeakResponse::getAttackKbytesTotal() const
{
    return attackKbytesTotal_;
}

void ShowDDoSPeakResponse::setAttackKbytesTotal(int32_t value)
{
    attackKbytesTotal_ = value;
    attackKbytesTotalIsSet_ = true;
}

bool ShowDDoSPeakResponse::attackKbytesTotalIsSet() const
{
    return attackKbytesTotalIsSet_;
}

void ShowDDoSPeakResponse::unsetattackKbytesTotal()
{
    attackKbytesTotalIsSet_ = false;
}

int32_t ShowDDoSPeakResponse::getAttackPpsPeak() const
{
    return attackPpsPeak_;
}

void ShowDDoSPeakResponse::setAttackPpsPeak(int32_t value)
{
    attackPpsPeak_ = value;
    attackPpsPeakIsSet_ = true;
}

bool ShowDDoSPeakResponse::attackPpsPeakIsSet() const
{
    return attackPpsPeakIsSet_;
}

void ShowDDoSPeakResponse::unsetattackPpsPeak()
{
    attackPpsPeakIsSet_ = false;
}

int32_t ShowDDoSPeakResponse::getInPpsPeak() const
{
    return inPpsPeak_;
}

void ShowDDoSPeakResponse::setInPpsPeak(int32_t value)
{
    inPpsPeak_ = value;
    inPpsPeakIsSet_ = true;
}

bool ShowDDoSPeakResponse::inPpsPeakIsSet() const
{
    return inPpsPeakIsSet_;
}

void ShowDDoSPeakResponse::unsetinPpsPeak()
{
    inPpsPeakIsSet_ = false;
}

int32_t ShowDDoSPeakResponse::getAttackBpsPeak() const
{
    return attackBpsPeak_;
}

void ShowDDoSPeakResponse::setAttackBpsPeak(int32_t value)
{
    attackBpsPeak_ = value;
    attackBpsPeakIsSet_ = true;
}

bool ShowDDoSPeakResponse::attackBpsPeakIsSet() const
{
    return attackBpsPeakIsSet_;
}

void ShowDDoSPeakResponse::unsetattackBpsPeak()
{
    attackBpsPeakIsSet_ = false;
}

int32_t ShowDDoSPeakResponse::getInBpsPeak() const
{
    return inBpsPeak_;
}

void ShowDDoSPeakResponse::setInBpsPeak(int32_t value)
{
    inBpsPeak_ = value;
    inBpsPeakIsSet_ = true;
}

bool ShowDDoSPeakResponse::inBpsPeakIsSet() const
{
    return inBpsPeakIsSet_;
}

void ShowDDoSPeakResponse::unsetinBpsPeak()
{
    inBpsPeakIsSet_ = false;
}

int32_t ShowDDoSPeakResponse::getDdosCount() const
{
    return ddosCount_;
}

void ShowDDoSPeakResponse::setDdosCount(int32_t value)
{
    ddosCount_ = value;
    ddosCountIsSet_ = true;
}

bool ShowDDoSPeakResponse::ddosCountIsSet() const
{
    return ddosCountIsSet_;
}

void ShowDDoSPeakResponse::unsetddosCount()
{
    ddosCountIsSet_ = false;
}

int32_t ShowDDoSPeakResponse::getUtime() const
{
    return utime_;
}

void ShowDDoSPeakResponse::setUtime(int32_t value)
{
    utime_ = value;
    utimeIsSet_ = true;
}

bool ShowDDoSPeakResponse::utimeIsSet() const
{
    return utimeIsSet_;
}

void ShowDDoSPeakResponse::unsetutime()
{
    utimeIsSet_ = false;
}

}
}
}
}
}


