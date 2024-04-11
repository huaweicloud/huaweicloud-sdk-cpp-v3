

#include "huaweicloud/drs/v3/model/ListDataCompareOverviewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ListDataCompareOverviewResponse::ListDataCompareOverviewResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    dataCompareOverviewInfosIsSet_ = false;
}

ListDataCompareOverviewResponse::~ListDataCompareOverviewResponse() = default;

void ListDataCompareOverviewResponse::validate()
{
}

web::json::value ListDataCompareOverviewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(dataCompareOverviewInfosIsSet_) {
        val[utility::conversions::to_string_t("data_compare_overview_infos")] = ModelBase::toJson(dataCompareOverviewInfos_);
    }

    return val;
}
bool ListDataCompareOverviewResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("data_compare_overview_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_compare_overview_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<DataCompareOverviewInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataCompareOverviewInfos(refVal);
        }
    }
    return ok;
}


int32_t ListDataCompareOverviewResponse::getTotalCount() const
{
    return totalCount_;
}

void ListDataCompareOverviewResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListDataCompareOverviewResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListDataCompareOverviewResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<DataCompareOverviewInfo>& ListDataCompareOverviewResponse::getDataCompareOverviewInfos()
{
    return dataCompareOverviewInfos_;
}

void ListDataCompareOverviewResponse::setDataCompareOverviewInfos(const std::vector<DataCompareOverviewInfo>& value)
{
    dataCompareOverviewInfos_ = value;
    dataCompareOverviewInfosIsSet_ = true;
}

bool ListDataCompareOverviewResponse::dataCompareOverviewInfosIsSet() const
{
    return dataCompareOverviewInfosIsSet_;
}

void ListDataCompareOverviewResponse::unsetdataCompareOverviewInfos()
{
    dataCompareOverviewInfosIsSet_ = false;
}

}
}
}
}
}


