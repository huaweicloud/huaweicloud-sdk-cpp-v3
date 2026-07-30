

#include "huaweicloud/modelarts/v1/model/RateLimit.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RateLimit::RateLimit()
{
    num_ = 0;
    numIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
}

RateLimit::~RateLimit() = default;

void RateLimit::validate()
{
}

web::json::value RateLimit::toJson() const
{
    web::json::value val = web::json::value::object();

    if(numIsSet_) {
        val[utility::conversions::to_string_t("num")] = ModelBase::toJson(num_);
    }
    if(unitIsSet_) {
        val[utility::conversions::to_string_t("unit")] = ModelBase::toJson(unit_);
    }

    return val;
}
bool RateLimit::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnit(refVal);
        }
    }
    return ok;
}


int32_t RateLimit::getNum() const
{
    return num_;
}

void RateLimit::setNum(int32_t value)
{
    num_ = value;
    numIsSet_ = true;
}

bool RateLimit::numIsSet() const
{
    return numIsSet_;
}

void RateLimit::unsetnum()
{
    numIsSet_ = false;
}

std::string RateLimit::getUnit() const
{
    return unit_;
}

void RateLimit::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool RateLimit::unitIsSet() const
{
    return unitIsSet_;
}

void RateLimit::unsetunit()
{
    unitIsSet_ = false;
}

}
}
}
}
}


