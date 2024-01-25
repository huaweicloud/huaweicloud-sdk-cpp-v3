

#include "huaweicloud/rds/v3/model/ServerlessInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ServerlessInfoResponse::ServerlessInfoResponse()
{
    minComputeUnit_ = "";
    minComputeUnitIsSet_ = false;
    maxComputeUnit_ = "";
    maxComputeUnitIsSet_ = false;
}

ServerlessInfoResponse::~ServerlessInfoResponse() = default;

void ServerlessInfoResponse::validate()
{
}

web::json::value ServerlessInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(minComputeUnitIsSet_) {
        val[utility::conversions::to_string_t("min_compute_unit")] = ModelBase::toJson(minComputeUnit_);
    }
    if(maxComputeUnitIsSet_) {
        val[utility::conversions::to_string_t("max_compute_unit")] = ModelBase::toJson(maxComputeUnit_);
    }

    return val;
}
bool ServerlessInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("min_compute_unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_compute_unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinComputeUnit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_compute_unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_compute_unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxComputeUnit(refVal);
        }
    }
    return ok;
}


std::string ServerlessInfoResponse::getMinComputeUnit() const
{
    return minComputeUnit_;
}

void ServerlessInfoResponse::setMinComputeUnit(const std::string& value)
{
    minComputeUnit_ = value;
    minComputeUnitIsSet_ = true;
}

bool ServerlessInfoResponse::minComputeUnitIsSet() const
{
    return minComputeUnitIsSet_;
}

void ServerlessInfoResponse::unsetminComputeUnit()
{
    minComputeUnitIsSet_ = false;
}

std::string ServerlessInfoResponse::getMaxComputeUnit() const
{
    return maxComputeUnit_;
}

void ServerlessInfoResponse::setMaxComputeUnit(const std::string& value)
{
    maxComputeUnit_ = value;
    maxComputeUnitIsSet_ = true;
}

bool ServerlessInfoResponse::maxComputeUnitIsSet() const
{
    return maxComputeUnitIsSet_;
}

void ServerlessInfoResponse::unsetmaxComputeUnit()
{
    maxComputeUnitIsSet_ = false;
}

}
}
}
}
}


