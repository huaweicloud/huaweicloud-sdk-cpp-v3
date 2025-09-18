

#include "huaweicloud/codeartscheck/v2/model/ShowTaskDefectsStatisticResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowTaskDefectsStatisticResponse::ShowTaskDefectsStatisticResponse()
{
    severityIsSet_ = false;
    statusIsSet_ = false;
}

ShowTaskDefectsStatisticResponse::~ShowTaskDefectsStatisticResponse() = default;

void ShowTaskDefectsStatisticResponse::validate()
{
}

web::json::value ShowTaskDefectsStatisticResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(severityIsSet_) {
        val[utility::conversions::to_string_t("severity")] = ModelBase::toJson(severity_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ShowTaskDefectsStatisticResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity"));
        if(!fieldValue.is_null())
        {
            StatisticSeverityV2 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            StatisticStatusV2 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


StatisticSeverityV2 ShowTaskDefectsStatisticResponse::getSeverity() const
{
    return severity_;
}

void ShowTaskDefectsStatisticResponse::setSeverity(const StatisticSeverityV2& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool ShowTaskDefectsStatisticResponse::severityIsSet() const
{
    return severityIsSet_;
}

void ShowTaskDefectsStatisticResponse::unsetseverity()
{
    severityIsSet_ = false;
}

StatisticStatusV2 ShowTaskDefectsStatisticResponse::getStatus() const
{
    return status_;
}

void ShowTaskDefectsStatisticResponse::setStatus(const StatisticStatusV2& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowTaskDefectsStatisticResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowTaskDefectsStatisticResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


