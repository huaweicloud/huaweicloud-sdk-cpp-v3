

#include "huaweicloud/lts/v2/model/CustomDate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CustomDate::CustomDate()
{
    start_ = 0;
    startIsSet_ = false;
    startUnit_ = "";
    startUnitIsSet_ = false;
    end_ = 0;
    endIsSet_ = false;
    endUnit_ = "";
    endUnitIsSet_ = false;
}

CustomDate::~CustomDate() = default;

void CustomDate::validate()
{
}

web::json::value CustomDate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startIsSet_) {
        val[utility::conversions::to_string_t("start")] = ModelBase::toJson(start_);
    }
    if(startUnitIsSet_) {
        val[utility::conversions::to_string_t("start_unit")] = ModelBase::toJson(startUnit_);
    }
    if(endIsSet_) {
        val[utility::conversions::to_string_t("end")] = ModelBase::toJson(end_);
    }
    if(endUnitIsSet_) {
        val[utility::conversions::to_string_t("end_unit")] = ModelBase::toJson(endUnit_);
    }

    return val;
}
bool CustomDate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartUnit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndUnit(refVal);
        }
    }
    return ok;
}


int32_t CustomDate::getStart() const
{
    return start_;
}

void CustomDate::setStart(int32_t value)
{
    start_ = value;
    startIsSet_ = true;
}

bool CustomDate::startIsSet() const
{
    return startIsSet_;
}

void CustomDate::unsetstart()
{
    startIsSet_ = false;
}

std::string CustomDate::getStartUnit() const
{
    return startUnit_;
}

void CustomDate::setStartUnit(const std::string& value)
{
    startUnit_ = value;
    startUnitIsSet_ = true;
}

bool CustomDate::startUnitIsSet() const
{
    return startUnitIsSet_;
}

void CustomDate::unsetstartUnit()
{
    startUnitIsSet_ = false;
}

int32_t CustomDate::getEnd() const
{
    return end_;
}

void CustomDate::setEnd(int32_t value)
{
    end_ = value;
    endIsSet_ = true;
}

bool CustomDate::endIsSet() const
{
    return endIsSet_;
}

void CustomDate::unsetend()
{
    endIsSet_ = false;
}

std::string CustomDate::getEndUnit() const
{
    return endUnit_;
}

void CustomDate::setEndUnit(const std::string& value)
{
    endUnit_ = value;
    endUnitIsSet_ = true;
}

bool CustomDate::endUnitIsSet() const
{
    return endUnitIsSet_;
}

void CustomDate::unsetendUnit()
{
    endUnitIsSet_ = false;
}

}
}
}
}
}


