

#include "huaweicloud/drs/v5/model/CountInstanceByTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CountInstanceByTagsResponse::CountInstanceByTagsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

CountInstanceByTagsResponse::~CountInstanceByTagsResponse() = default;

void CountInstanceByTagsResponse::validate()
{
}

web::json::value CountInstanceByTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool CountInstanceByTagsResponse::fromJson(const web::json::value& val)
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


int32_t CountInstanceByTagsResponse::getTotalCount() const
{
    return totalCount_;
}

void CountInstanceByTagsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool CountInstanceByTagsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void CountInstanceByTagsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


