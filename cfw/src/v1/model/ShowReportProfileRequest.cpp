

#include "huaweicloud/cfw/v1/model/ShowReportProfileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowReportProfileRequest::ShowReportProfileRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    reportProfileId_ = "";
    reportProfileIdIsSet_ = false;
}

ShowReportProfileRequest::~ShowReportProfileRequest() = default;

void ShowReportProfileRequest::validate()
{
}

web::json::value ShowReportProfileRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(reportProfileIdIsSet_) {
        val[utility::conversions::to_string_t("report_profile_id")] = ModelBase::toJson(reportProfileId_);
    }

    return val;
}
bool ShowReportProfileRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("report_profile_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("report_profile_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReportProfileId(refVal);
        }
    }
    return ok;
}


std::string ShowReportProfileRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ShowReportProfileRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ShowReportProfileRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ShowReportProfileRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string ShowReportProfileRequest::getReportProfileId() const
{
    return reportProfileId_;
}

void ShowReportProfileRequest::setReportProfileId(const std::string& value)
{
    reportProfileId_ = value;
    reportProfileIdIsSet_ = true;
}

bool ShowReportProfileRequest::reportProfileIdIsSet() const
{
    return reportProfileIdIsSet_;
}

void ShowReportProfileRequest::unsetreportProfileId()
{
    reportProfileIdIsSet_ = false;
}

}
}
}
}
}


