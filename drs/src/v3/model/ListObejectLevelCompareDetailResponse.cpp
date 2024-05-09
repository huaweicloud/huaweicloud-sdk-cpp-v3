

#include "huaweicloud/drs/v3/model/ListObejectLevelCompareDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ListObejectLevelCompareDetailResponse::ListObejectLevelCompareDetailResponse()
{
    count_ = 0;
    countIsSet_ = false;
    compareDetailIsSet_ = false;
}

ListObejectLevelCompareDetailResponse::~ListObejectLevelCompareDetailResponse() = default;

void ListObejectLevelCompareDetailResponse::validate()
{
}

web::json::value ListObejectLevelCompareDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(compareDetailIsSet_) {
        val[utility::conversions::to_string_t("compare_detail")] = ModelBase::toJson(compareDetail_);
    }

    return val;
}
bool ListObejectLevelCompareDetailResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("compare_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_detail"));
        if(!fieldValue.is_null())
        {
            std::vector<ObjectsCompareDetailInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareDetail(refVal);
        }
    }
    return ok;
}


int32_t ListObejectLevelCompareDetailResponse::getCount() const
{
    return count_;
}

void ListObejectLevelCompareDetailResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListObejectLevelCompareDetailResponse::countIsSet() const
{
    return countIsSet_;
}

void ListObejectLevelCompareDetailResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<ObjectsCompareDetailInfo>& ListObejectLevelCompareDetailResponse::getCompareDetail()
{
    return compareDetail_;
}

void ListObejectLevelCompareDetailResponse::setCompareDetail(const std::vector<ObjectsCompareDetailInfo>& value)
{
    compareDetail_ = value;
    compareDetailIsSet_ = true;
}

bool ListObejectLevelCompareDetailResponse::compareDetailIsSet() const
{
    return compareDetailIsSet_;
}

void ListObejectLevelCompareDetailResponse::unsetcompareDetail()
{
    compareDetailIsSet_ = false;
}

}
}
}
}
}


