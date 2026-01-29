

#include "huaweicloud/codeartsartifact/v2/model/ResultCount.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ResultCount::ResultCount()
{
    count_ = 0;
    countIsSet_ = false;
}

ResultCount::~ResultCount() = default;

void ResultCount::validate()
{
}

web::json::value ResultCount::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ResultCount::fromJson(const web::json::value& val)
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


int32_t ResultCount::getCount() const
{
    return count_;
}

void ResultCount::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ResultCount::countIsSet() const
{
    return countIsSet_;
}

void ResultCount::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


