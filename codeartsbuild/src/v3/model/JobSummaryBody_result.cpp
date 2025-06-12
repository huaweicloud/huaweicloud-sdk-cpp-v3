

#include "huaweicloud/codeartsbuild/v3/model/JobSummaryBody_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




JobSummaryBody_result::JobSummaryBody_result()
{
    summaryIsSet_ = false;
}

JobSummaryBody_result::~JobSummaryBody_result() = default;

void JobSummaryBody_result::validate()
{
}

web::json::value JobSummaryBody_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(summaryIsSet_) {
        val[utility::conversions::to_string_t("summary")] = ModelBase::toJson(summary_);
    }

    return val;
}
bool JobSummaryBody_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("summary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("summary"));
        if(!fieldValue.is_null())
        {
            JobSummary refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSummary(refVal);
        }
    }
    return ok;
}


JobSummary JobSummaryBody_result::getSummary() const
{
    return summary_;
}

void JobSummaryBody_result::setSummary(const JobSummary& value)
{
    summary_ = value;
    summaryIsSet_ = true;
}

bool JobSummaryBody_result::summaryIsSet() const
{
    return summaryIsSet_;
}

void JobSummaryBody_result::unsetsummary()
{
    summaryIsSet_ = false;
}

}
}
}
}
}


