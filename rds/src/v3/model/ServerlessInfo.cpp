

#include "huaweicloud/rds/v3/model/ServerlessInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ServerlessInfo::ServerlessInfo()
{
    minCap_ = "";
    minCapIsSet_ = false;
    maxCap_ = "";
    maxCapIsSet_ = false;
}

ServerlessInfo::~ServerlessInfo() = default;

void ServerlessInfo::validate()
{
}

web::json::value ServerlessInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(minCapIsSet_) {
        val[utility::conversions::to_string_t("min_cap")] = ModelBase::toJson(minCap_);
    }
    if(maxCapIsSet_) {
        val[utility::conversions::to_string_t("max_cap")] = ModelBase::toJson(maxCap_);
    }

    return val;
}
bool ServerlessInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("min_cap"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_cap"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinCap(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_cap"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_cap"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxCap(refVal);
        }
    }
    return ok;
}


std::string ServerlessInfo::getMinCap() const
{
    return minCap_;
}

void ServerlessInfo::setMinCap(const std::string& value)
{
    minCap_ = value;
    minCapIsSet_ = true;
}

bool ServerlessInfo::minCapIsSet() const
{
    return minCapIsSet_;
}

void ServerlessInfo::unsetminCap()
{
    minCapIsSet_ = false;
}

std::string ServerlessInfo::getMaxCap() const
{
    return maxCap_;
}

void ServerlessInfo::setMaxCap(const std::string& value)
{
    maxCap_ = value;
    maxCapIsSet_ = true;
}

bool ServerlessInfo::maxCapIsSet() const
{
    return maxCapIsSet_;
}

void ServerlessInfo::unsetmaxCap()
{
    maxCapIsSet_ = false;
}

}
}
}
}
}


