

#include "huaweicloud/evs/v2/model/CountAutoSnapshotPoliciesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CountAutoSnapshotPoliciesResponse::CountAutoSnapshotPoliciesResponse()
{
    count_ = 0;
    countIsSet_ = false;
}

CountAutoSnapshotPoliciesResponse::~CountAutoSnapshotPoliciesResponse() = default;

void CountAutoSnapshotPoliciesResponse::validate()
{
}

web::json::value CountAutoSnapshotPoliciesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool CountAutoSnapshotPoliciesResponse::fromJson(const web::json::value& val)
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


int32_t CountAutoSnapshotPoliciesResponse::getCount() const
{
    return count_;
}

void CountAutoSnapshotPoliciesResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool CountAutoSnapshotPoliciesResponse::countIsSet() const
{
    return countIsSet_;
}

void CountAutoSnapshotPoliciesResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


