

#include "huaweicloud/modelarts/v1/model/CountInferServicesByTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CountInferServicesByTagsResponse::CountInferServicesByTagsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

CountInferServicesByTagsResponse::~CountInferServicesByTagsResponse() = default;

void CountInferServicesByTagsResponse::validate()
{
}

web::json::value CountInferServicesByTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool CountInferServicesByTagsResponse::fromJson(const web::json::value& val)
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


int32_t CountInferServicesByTagsResponse::getTotalCount() const
{
    return totalCount_;
}

void CountInferServicesByTagsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool CountInferServicesByTagsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void CountInferServicesByTagsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


