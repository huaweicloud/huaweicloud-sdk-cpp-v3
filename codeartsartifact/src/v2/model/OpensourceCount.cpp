

#include "huaweicloud/codeartsartifact/v2/model/OpensourceCount.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




OpensourceCount::OpensourceCount()
{
    critical_ = 0;
    criticalIsSet_ = false;
    high_ = 0;
    highIsSet_ = false;
    medium_ = 0;
    mediumIsSet_ = false;
    low_ = 0;
    lowIsSet_ = false;
}

OpensourceCount::~OpensourceCount() = default;

void OpensourceCount::validate()
{
}

web::json::value OpensourceCount::toJson() const
{
    web::json::value val = web::json::value::object();

    if(criticalIsSet_) {
        val[utility::conversions::to_string_t("critical")] = ModelBase::toJson(critical_);
    }
    if(highIsSet_) {
        val[utility::conversions::to_string_t("high")] = ModelBase::toJson(high_);
    }
    if(mediumIsSet_) {
        val[utility::conversions::to_string_t("medium")] = ModelBase::toJson(medium_);
    }
    if(lowIsSet_) {
        val[utility::conversions::to_string_t("low")] = ModelBase::toJson(low_);
    }

    return val;
}
bool OpensourceCount::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("critical"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("critical"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCritical(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("high"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("high"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHigh(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("medium"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("medium"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMedium(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("low"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("low"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLow(refVal);
        }
    }
    return ok;
}


int32_t OpensourceCount::getCritical() const
{
    return critical_;
}

void OpensourceCount::setCritical(int32_t value)
{
    critical_ = value;
    criticalIsSet_ = true;
}

bool OpensourceCount::criticalIsSet() const
{
    return criticalIsSet_;
}

void OpensourceCount::unsetcritical()
{
    criticalIsSet_ = false;
}

int32_t OpensourceCount::getHigh() const
{
    return high_;
}

void OpensourceCount::setHigh(int32_t value)
{
    high_ = value;
    highIsSet_ = true;
}

bool OpensourceCount::highIsSet() const
{
    return highIsSet_;
}

void OpensourceCount::unsethigh()
{
    highIsSet_ = false;
}

int32_t OpensourceCount::getMedium() const
{
    return medium_;
}

void OpensourceCount::setMedium(int32_t value)
{
    medium_ = value;
    mediumIsSet_ = true;
}

bool OpensourceCount::mediumIsSet() const
{
    return mediumIsSet_;
}

void OpensourceCount::unsetmedium()
{
    mediumIsSet_ = false;
}

int32_t OpensourceCount::getLow() const
{
    return low_;
}

void OpensourceCount::setLow(int32_t value)
{
    low_ = value;
    lowIsSet_ = true;
}

bool OpensourceCount::lowIsSet() const
{
    return lowIsSet_;
}

void OpensourceCount::unsetlow()
{
    lowIsSet_ = false;
}

}
}
}
}
}


