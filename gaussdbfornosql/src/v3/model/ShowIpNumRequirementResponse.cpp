

#include "huaweicloud/gaussdbfornosql/v3/model/ShowIpNumRequirementResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowIpNumRequirementResponse::ShowIpNumRequirementResponse()
{
    count_ = 0;
    countIsSet_ = false;
}

ShowIpNumRequirementResponse::~ShowIpNumRequirementResponse() = default;

void ShowIpNumRequirementResponse::validate()
{
}

web::json::value ShowIpNumRequirementResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}

bool ShowIpNumRequirementResponse::fromJson(const web::json::value& val)
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

int32_t ShowIpNumRequirementResponse::getCount() const
{
    return count_;
}

void ShowIpNumRequirementResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowIpNumRequirementResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowIpNumRequirementResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


