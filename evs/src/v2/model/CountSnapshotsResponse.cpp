

#include "huaweicloud/evs/v2/model/CountSnapshotsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CountSnapshotsResponse::CountSnapshotsResponse()
{
    count_ = 0;
    countIsSet_ = false;
}

CountSnapshotsResponse::~CountSnapshotsResponse() = default;

void CountSnapshotsResponse::validate()
{
}

web::json::value CountSnapshotsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool CountSnapshotsResponse::fromJson(const web::json::value& val)
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


int32_t CountSnapshotsResponse::getCount() const
{
    return count_;
}

void CountSnapshotsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool CountSnapshotsResponse::countIsSet() const
{
    return countIsSet_;
}

void CountSnapshotsResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


