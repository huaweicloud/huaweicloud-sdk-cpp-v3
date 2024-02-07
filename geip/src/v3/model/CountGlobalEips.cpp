

#include "huaweicloud/geip/v3/model/CountGlobalEips.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CountGlobalEips::CountGlobalEips()
{
    count_ = 0;
    countIsSet_ = false;
}

CountGlobalEips::~CountGlobalEips() = default;

void CountGlobalEips::validate()
{
}

web::json::value CountGlobalEips::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool CountGlobalEips::fromJson(const web::json::value& val)
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


int32_t CountGlobalEips::getCount() const
{
    return count_;
}

void CountGlobalEips::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool CountGlobalEips::countIsSet() const
{
    return countIsSet_;
}

void CountGlobalEips::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


