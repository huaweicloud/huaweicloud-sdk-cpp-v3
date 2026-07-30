

#include "huaweicloud/modelarts/v1/model/PoolNodeAz.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolNodeAz::PoolNodeAz()
{
    az_ = "";
    azIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

PoolNodeAz::~PoolNodeAz() = default;

void PoolNodeAz::validate()
{
}

web::json::value PoolNodeAz::toJson() const
{
    web::json::value val = web::json::value::object();

    if(azIsSet_) {
        val[utility::conversions::to_string_t("az")] = ModelBase::toJson(az_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool PoolNodeAz::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAz(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::string PoolNodeAz::getAz() const
{
    return az_;
}

void PoolNodeAz::setAz(const std::string& value)
{
    az_ = value;
    azIsSet_ = true;
}

bool PoolNodeAz::azIsSet() const
{
    return azIsSet_;
}

void PoolNodeAz::unsetaz()
{
    azIsSet_ = false;
}

int32_t PoolNodeAz::getCount() const
{
    return count_;
}

void PoolNodeAz::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool PoolNodeAz::countIsSet() const
{
    return countIsSet_;
}

void PoolNodeAz::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


