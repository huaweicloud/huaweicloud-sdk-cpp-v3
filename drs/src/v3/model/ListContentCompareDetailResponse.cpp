

#include "huaweicloud/drs/v3/model/ListContentCompareDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ListContentCompareDetailResponse::ListContentCompareDetailResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    contentCompareResultInfosIsSet_ = false;
}

ListContentCompareDetailResponse::~ListContentCompareDetailResponse() = default;

void ListContentCompareDetailResponse::validate()
{
}

web::json::value ListContentCompareDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(contentCompareResultInfosIsSet_) {
        val[utility::conversions::to_string_t("content_compare_result_infos")] = ModelBase::toJson(contentCompareResultInfos_);
    }

    return val;
}
bool ListContentCompareDetailResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("content_compare_result_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_compare_result_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<NodeContentCompareDetailResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentCompareResultInfos(refVal);
        }
    }
    return ok;
}


int32_t ListContentCompareDetailResponse::getTotalCount() const
{
    return totalCount_;
}

void ListContentCompareDetailResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListContentCompareDetailResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListContentCompareDetailResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<NodeContentCompareDetailResult>& ListContentCompareDetailResponse::getContentCompareResultInfos()
{
    return contentCompareResultInfos_;
}

void ListContentCompareDetailResponse::setContentCompareResultInfos(const std::vector<NodeContentCompareDetailResult>& value)
{
    contentCompareResultInfos_ = value;
    contentCompareResultInfosIsSet_ = true;
}

bool ListContentCompareDetailResponse::contentCompareResultInfosIsSet() const
{
    return contentCompareResultInfosIsSet_;
}

void ListContentCompareDetailResponse::unsetcontentCompareResultInfos()
{
    contentCompareResultInfosIsSet_ = false;
}

}
}
}
}
}


