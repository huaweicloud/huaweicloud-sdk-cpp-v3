

#include "huaweicloud/rds/v3/model/UpgradeDbMajorVersionPreCheckResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpgradeDbMajorVersionPreCheckResponse::UpgradeDbMajorVersionPreCheckResponse()
{
    reportId_ = "";
    reportIdIsSet_ = false;
}

UpgradeDbMajorVersionPreCheckResponse::~UpgradeDbMajorVersionPreCheckResponse() = default;

void UpgradeDbMajorVersionPreCheckResponse::validate()
{
}

web::json::value UpgradeDbMajorVersionPreCheckResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(reportIdIsSet_) {
        val[utility::conversions::to_string_t("report_id")] = ModelBase::toJson(reportId_);
    }

    return val;
}
bool UpgradeDbMajorVersionPreCheckResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("report_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("report_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReportId(refVal);
        }
    }
    return ok;
}


std::string UpgradeDbMajorVersionPreCheckResponse::getReportId() const
{
    return reportId_;
}

void UpgradeDbMajorVersionPreCheckResponse::setReportId(const std::string& value)
{
    reportId_ = value;
    reportIdIsSet_ = true;
}

bool UpgradeDbMajorVersionPreCheckResponse::reportIdIsSet() const
{
    return reportIdIsSet_;
}

void UpgradeDbMajorVersionPreCheckResponse::unsetreportId()
{
    reportIdIsSet_ = false;
}

}
}
}
}
}


