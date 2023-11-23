

#include "huaweicloud/rds/v3/model/ListInspectionHistoriesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListInspectionHistoriesResponse::ListInspectionHistoriesResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    inspectionReportsIsSet_ = false;
}

ListInspectionHistoriesResponse::~ListInspectionHistoriesResponse() = default;

void ListInspectionHistoriesResponse::validate()
{
}

web::json::value ListInspectionHistoriesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(inspectionReportsIsSet_) {
        val[utility::conversions::to_string_t("inspection_reports")] = ModelBase::toJson(inspectionReports_);
    }

    return val;
}
bool ListInspectionHistoriesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("inspection_reports"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inspection_reports"));
        if(!fieldValue.is_null())
        {
            std::vector<InspectionReports> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInspectionReports(refVal);
        }
    }
    return ok;
}


int32_t ListInspectionHistoriesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListInspectionHistoriesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListInspectionHistoriesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListInspectionHistoriesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<InspectionReports>& ListInspectionHistoriesResponse::getInspectionReports()
{
    return inspectionReports_;
}

void ListInspectionHistoriesResponse::setInspectionReports(const std::vector<InspectionReports>& value)
{
    inspectionReports_ = value;
    inspectionReportsIsSet_ = true;
}

bool ListInspectionHistoriesResponse::inspectionReportsIsSet() const
{
    return inspectionReportsIsSet_;
}

void ListInspectionHistoriesResponse::unsetinspectionReports()
{
    inspectionReportsIsSet_ = false;
}

}
}
}
}
}


