

#include "huaweicloud/geip/v3/model/CountGeipSegments.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CountGeipSegments::CountGeipSegments()
{
    count_ = 0;
    countIsSet_ = false;
}

CountGeipSegments::~CountGeipSegments() = default;

void CountGeipSegments::validate()
{
}

web::json::value CountGeipSegments::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool CountGeipSegments::fromJson(const web::json::value& val)
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


int32_t CountGeipSegments::getCount() const
{
    return count_;
}

void CountGeipSegments::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool CountGeipSegments::countIsSet() const
{
    return countIsSet_;
}

void CountGeipSegments::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


