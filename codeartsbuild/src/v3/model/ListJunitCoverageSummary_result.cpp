

#include "huaweicloud/codeartsbuild/v3/model/ListJunitCoverageSummary_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListJunitCoverageSummary_result::ListJunitCoverageSummary_result()
{
    unitSummaryListIsSet_ = false;
}

ListJunitCoverageSummary_result::~ListJunitCoverageSummary_result() = default;

void ListJunitCoverageSummary_result::validate()
{
}

web::json::value ListJunitCoverageSummary_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(unitSummaryListIsSet_) {
        val[utility::conversions::to_string_t("unit_summary_list")] = ModelBase::toJson(unitSummaryList_);
    }

    return val;
}
bool ListJunitCoverageSummary_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("unit_summary_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit_summary_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ListJunitCoverageSummary_result_unit_summary_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnitSummaryList(refVal);
        }
    }
    return ok;
}


std::vector<ListJunitCoverageSummary_result_unit_summary_list>& ListJunitCoverageSummary_result::getUnitSummaryList()
{
    return unitSummaryList_;
}

void ListJunitCoverageSummary_result::setUnitSummaryList(const std::vector<ListJunitCoverageSummary_result_unit_summary_list>& value)
{
    unitSummaryList_ = value;
    unitSummaryListIsSet_ = true;
}

bool ListJunitCoverageSummary_result::unitSummaryListIsSet() const
{
    return unitSummaryListIsSet_;
}

void ListJunitCoverageSummary_result::unsetunitSummaryList()
{
    unitSummaryListIsSet_ = false;
}

}
}
}
}
}


