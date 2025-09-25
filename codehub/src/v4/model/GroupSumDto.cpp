

#include "huaweicloud/codehub/v4/model/GroupSumDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




GroupSumDto::GroupSumDto()
{
    openMergeRequestsCount_ = 0;
    openMergeRequestsCountIsSet_ = false;
}

GroupSumDto::~GroupSumDto() = default;

void GroupSumDto::validate()
{
}

web::json::value GroupSumDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(openMergeRequestsCountIsSet_) {
        val[utility::conversions::to_string_t("open_merge_requests_count")] = ModelBase::toJson(openMergeRequestsCount_);
    }

    return val;
}
bool GroupSumDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("open_merge_requests_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("open_merge_requests_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpenMergeRequestsCount(refVal);
        }
    }
    return ok;
}


int32_t GroupSumDto::getOpenMergeRequestsCount() const
{
    return openMergeRequestsCount_;
}

void GroupSumDto::setOpenMergeRequestsCount(int32_t value)
{
    openMergeRequestsCount_ = value;
    openMergeRequestsCountIsSet_ = true;
}

bool GroupSumDto::openMergeRequestsCountIsSet() const
{
    return openMergeRequestsCountIsSet_;
}

void GroupSumDto::unsetopenMergeRequestsCount()
{
    openMergeRequestsCountIsSet_ = false;
}

}
}
}
}
}


