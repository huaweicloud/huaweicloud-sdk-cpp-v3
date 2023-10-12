

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceDiskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowInstanceDiskResponse::ShowInstanceDiskResponse()
{
    used_ = "";
    usedIsSet_ = false;
    total_ = "";
    totalIsSet_ = false;
}

ShowInstanceDiskResponse::~ShowInstanceDiskResponse() = default;

void ShowInstanceDiskResponse::validate()
{
}

web::json::value ShowInstanceDiskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ShowInstanceDiskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::string ShowInstanceDiskResponse::getUsed() const
{
    return used_;
}

void ShowInstanceDiskResponse::setUsed(const std::string& value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool ShowInstanceDiskResponse::usedIsSet() const
{
    return usedIsSet_;
}

void ShowInstanceDiskResponse::unsetused()
{
    usedIsSet_ = false;
}

std::string ShowInstanceDiskResponse::getTotal() const
{
    return total_;
}

void ShowInstanceDiskResponse::setTotal(const std::string& value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowInstanceDiskResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowInstanceDiskResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


