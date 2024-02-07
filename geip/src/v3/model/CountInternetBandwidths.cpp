

#include "huaweicloud/geip/v3/model/CountInternetBandwidths.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CountInternetBandwidths::CountInternetBandwidths()
{
    count_ = 0;
    countIsSet_ = false;
}

CountInternetBandwidths::~CountInternetBandwidths() = default;

void CountInternetBandwidths::validate()
{
}

web::json::value CountInternetBandwidths::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool CountInternetBandwidths::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


int32_t CountInternetBandwidths::getCount() const
{
    return count_;
}

void CountInternetBandwidths::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool CountInternetBandwidths::countIsSet() const
{
    return countIsSet_;
}

void CountInternetBandwidths::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


