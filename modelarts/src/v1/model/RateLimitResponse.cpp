

#include "huaweicloud/modelarts/v1/model/RateLimitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RateLimitResponse::RateLimitResponse()
{
    num_ = 0;
    numIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
}

RateLimitResponse::~RateLimitResponse() = default;

void RateLimitResponse::validate()
{
}

web::json::value RateLimitResponse::toJson() const
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
bool RateLimitResponse::fromJson(const web::json::value& val)
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


int32_t RateLimitResponse::getNum() const
{
    return num_;
}

void RateLimitResponse::setNum(int32_t value)
{
    num_ = value;
    numIsSet_ = true;
}

bool RateLimitResponse::numIsSet() const
{
    return numIsSet_;
}

void RateLimitResponse::unsetnum()
{
    numIsSet_ = false;
}

std::string RateLimitResponse::getUnit() const
{
    return unit_;
}

void RateLimitResponse::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool RateLimitResponse::unitIsSet() const
{
    return unitIsSet_;
}

void RateLimitResponse::unsetunit()
{
    unitIsSet_ = false;
}

}
}
}
}
}


