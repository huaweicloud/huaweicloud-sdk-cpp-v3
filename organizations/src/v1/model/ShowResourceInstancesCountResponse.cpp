

#include "huaweicloud/organizations/v1/model/ShowResourceInstancesCountResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ShowResourceInstancesCountResponse::ShowResourceInstancesCountResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ShowResourceInstancesCountResponse::~ShowResourceInstancesCountResponse() = default;

void ShowResourceInstancesCountResponse::validate()
{
}

web::json::value ShowResourceInstancesCountResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ShowResourceInstancesCountResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


int32_t ShowResourceInstancesCountResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowResourceInstancesCountResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowResourceInstancesCountResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowResourceInstancesCountResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


