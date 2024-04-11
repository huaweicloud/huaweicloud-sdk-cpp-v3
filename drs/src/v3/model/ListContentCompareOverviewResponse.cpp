

#include "huaweicloud/drs/v3/model/ListContentCompareOverviewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ListContentCompareOverviewResponse::ListContentCompareOverviewResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    contentCompareResultInfosIsSet_ = false;
}

ListContentCompareOverviewResponse::~ListContentCompareOverviewResponse() = default;

void ListContentCompareOverviewResponse::validate()
{
}

web::json::value ListContentCompareOverviewResponse::toJson() const
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
bool ListContentCompareOverviewResponse::fromJson(const web::json::value& val)
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
            std::vector<NodeContentCompareOverviewResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentCompareResultInfos(refVal);
        }
    }
    return ok;
}


int32_t ListContentCompareOverviewResponse::getTotalCount() const
{
    return totalCount_;
}

void ListContentCompareOverviewResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListContentCompareOverviewResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListContentCompareOverviewResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<NodeContentCompareOverviewResult>& ListContentCompareOverviewResponse::getContentCompareResultInfos()
{
    return contentCompareResultInfos_;
}

void ListContentCompareOverviewResponse::setContentCompareResultInfos(const std::vector<NodeContentCompareOverviewResult>& value)
{
    contentCompareResultInfos_ = value;
    contentCompareResultInfosIsSet_ = true;
}

bool ListContentCompareOverviewResponse::contentCompareResultInfosIsSet() const
{
    return contentCompareResultInfosIsSet_;
}

void ListContentCompareOverviewResponse::unsetcontentCompareResultInfos()
{
    contentCompareResultInfosIsSet_ = false;
}

}
}
}
}
}


