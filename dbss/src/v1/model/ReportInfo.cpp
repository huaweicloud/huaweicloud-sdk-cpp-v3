

#include "huaweicloud/dbss/v1/model/ReportInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ReportInfo::ReportInfo()
{
    reportIsSet_ = false;
}

ReportInfo::~ReportInfo() = default;

void ReportInfo::validate()
{
}

web::json::value ReportInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(reportIsSet_) {
        val[utility::conversions::to_string_t("report")] = ModelBase::toJson(report_);
    }

    return val;
}
bool ReportInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("report"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("report"));
        if(!fieldValue.is_null())
        {
            ReportBean refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReport(refVal);
        }
    }
    return ok;
}


ReportBean ReportInfo::getReport() const
{
    return report_;
}

void ReportInfo::setReport(const ReportBean& value)
{
    report_ = value;
    reportIsSet_ = true;
}

bool ReportInfo::reportIsSet() const
{
    return reportIsSet_;
}

void ReportInfo::unsetreport()
{
    reportIsSet_ = false;
}

}
}
}
}
}


