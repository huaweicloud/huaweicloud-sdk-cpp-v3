

#include "huaweicloud/codeartsbuild/v3/model/ShowReportSummaryBody_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowReportSummaryBody_result::ShowReportSummaryBody_result()
{
    summaryIsSet_ = false;
    subSummarysIsSet_ = false;
}

ShowReportSummaryBody_result::~ShowReportSummaryBody_result() = default;

void ShowReportSummaryBody_result::validate()
{
}

web::json::value ShowReportSummaryBody_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(summaryIsSet_) {
        val[utility::conversions::to_string_t("summary")] = ModelBase::toJson(summary_);
    }
    if(subSummarysIsSet_) {
        val[utility::conversions::to_string_t("sub_summarys")] = ModelBase::toJson(subSummarys_);
    }

    return val;
}
bool ShowReportSummaryBody_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("summary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("summary"));
        if(!fieldValue.is_null())
        {
            ShowReportSummary refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSummary(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_summarys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_summarys"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowReportSummary> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubSummarys(refVal);
        }
    }
    return ok;
}


ShowReportSummary ShowReportSummaryBody_result::getSummary() const
{
    return summary_;
}

void ShowReportSummaryBody_result::setSummary(const ShowReportSummary& value)
{
    summary_ = value;
    summaryIsSet_ = true;
}

bool ShowReportSummaryBody_result::summaryIsSet() const
{
    return summaryIsSet_;
}

void ShowReportSummaryBody_result::unsetsummary()
{
    summaryIsSet_ = false;
}

std::vector<ShowReportSummary>& ShowReportSummaryBody_result::getSubSummarys()
{
    return subSummarys_;
}

void ShowReportSummaryBody_result::setSubSummarys(const std::vector<ShowReportSummary>& value)
{
    subSummarys_ = value;
    subSummarysIsSet_ = true;
}

bool ShowReportSummaryBody_result::subSummarysIsSet() const
{
    return subSummarysIsSet_;
}

void ShowReportSummaryBody_result::unsetsubSummarys()
{
    subSummarysIsSet_ = false;
}

}
}
}
}
}


