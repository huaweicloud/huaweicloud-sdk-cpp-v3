

#include "huaweicloud/dbss/v1/model/ShowDomainAllResourceCountResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowDomainAllResourceCountResponse::ShowDomainAllResourceCountResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ShowDomainAllResourceCountResponse::~ShowDomainAllResourceCountResponse() = default;

void ShowDomainAllResourceCountResponse::validate()
{
}

web::json::value ShowDomainAllResourceCountResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ShowDomainAllResourceCountResponse::fromJson(const web::json::value& val)
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


int32_t ShowDomainAllResourceCountResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowDomainAllResourceCountResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowDomainAllResourceCountResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowDomainAllResourceCountResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


