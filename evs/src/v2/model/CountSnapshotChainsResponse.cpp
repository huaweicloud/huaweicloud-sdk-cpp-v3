

#include "huaweicloud/evs/v2/model/CountSnapshotChainsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CountSnapshotChainsResponse::CountSnapshotChainsResponse()
{
    count_ = 0;
    countIsSet_ = false;
}

CountSnapshotChainsResponse::~CountSnapshotChainsResponse() = default;

void CountSnapshotChainsResponse::validate()
{
}

web::json::value CountSnapshotChainsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool CountSnapshotChainsResponse::fromJson(const web::json::value& val)
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


int32_t CountSnapshotChainsResponse::getCount() const
{
    return count_;
}

void CountSnapshotChainsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool CountSnapshotChainsResponse::countIsSet() const
{
    return countIsSet_;
}

void CountSnapshotChainsResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


