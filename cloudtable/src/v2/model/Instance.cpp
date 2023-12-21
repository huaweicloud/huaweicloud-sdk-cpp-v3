

#include "huaweicloud/cloudtable/v2/model/Instance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




Instance::Instance()
{
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    cuNum_ = 0;
    cuNumIsSet_ = false;
    lemonNum_ = 0;
    lemonNumIsSet_ = false;
    nicsIsSet_ = false;
    tsdNum_ = 0;
    tsdNumIsSet_ = false;
}

Instance::~Instance() = default;

void Instance::validate()
{
}

web::json::value Instance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(cuNumIsSet_) {
        val[utility::conversions::to_string_t("cu_num")] = ModelBase::toJson(cuNum_);
    }
    if(lemonNumIsSet_) {
        val[utility::conversions::to_string_t("lemon_num")] = ModelBase::toJson(lemonNum_);
    }
    if(nicsIsSet_) {
        val[utility::conversions::to_string_t("nics")] = ModelBase::toJson(nics_);
    }
    if(tsdNumIsSet_) {
        val[utility::conversions::to_string_t("tsd_num")] = ModelBase::toJson(tsdNum_);
    }

    return val;
}
bool Instance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cu_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cu_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCuNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lemon_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lemon_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLemonNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nics"));
        if(!fieldValue.is_null())
        {
            std::vector<Nic> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tsd_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tsd_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTsdNum(refVal);
        }
    }
    return ok;
}


std::string Instance::getAvailabilityZone() const
{
    return availabilityZone_;
}

void Instance::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool Instance::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void Instance::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

int32_t Instance::getCuNum() const
{
    return cuNum_;
}

void Instance::setCuNum(int32_t value)
{
    cuNum_ = value;
    cuNumIsSet_ = true;
}

bool Instance::cuNumIsSet() const
{
    return cuNumIsSet_;
}

void Instance::unsetcuNum()
{
    cuNumIsSet_ = false;
}

int32_t Instance::getLemonNum() const
{
    return lemonNum_;
}

void Instance::setLemonNum(int32_t value)
{
    lemonNum_ = value;
    lemonNumIsSet_ = true;
}

bool Instance::lemonNumIsSet() const
{
    return lemonNumIsSet_;
}

void Instance::unsetlemonNum()
{
    lemonNumIsSet_ = false;
}

std::vector<Nic>& Instance::getNics()
{
    return nics_;
}

void Instance::setNics(const std::vector<Nic>& value)
{
    nics_ = value;
    nicsIsSet_ = true;
}

bool Instance::nicsIsSet() const
{
    return nicsIsSet_;
}

void Instance::unsetnics()
{
    nicsIsSet_ = false;
}

int32_t Instance::getTsdNum() const
{
    return tsdNum_;
}

void Instance::setTsdNum(int32_t value)
{
    tsdNum_ = value;
    tsdNumIsSet_ = true;
}

bool Instance::tsdNumIsSet() const
{
    return tsdNumIsSet_;
}

void Instance::unsettsdNum()
{
    tsdNumIsSet_ = false;
}

}
}
}
}
}


