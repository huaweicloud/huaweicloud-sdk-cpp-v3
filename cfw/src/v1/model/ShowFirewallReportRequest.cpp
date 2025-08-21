

#include "huaweicloud/cfw/v1/model/ShowFirewallReportRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowFirewallReportRequest::ShowFirewallReportRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    reportProfileId_ = "";
    reportProfileIdIsSet_ = false;
    reportId_ = "";
    reportIdIsSet_ = false;
}

ShowFirewallReportRequest::~ShowFirewallReportRequest() = default;

void ShowFirewallReportRequest::validate()
{
}

web::json::value ShowFirewallReportRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(reportProfileIdIsSet_) {
        val[utility::conversions::to_string_t("report_profile_id")] = ModelBase::toJson(reportProfileId_);
    }
    if(reportIdIsSet_) {
        val[utility::conversions::to_string_t("report_id")] = ModelBase::toJson(reportId_);
    }

    return val;
}
bool ShowFirewallReportRequest::fromJson(const web::json::value& val)
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


std::string ShowFirewallReportRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ShowFirewallReportRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ShowFirewallReportRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ShowFirewallReportRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string ShowFirewallReportRequest::getReportProfileId() const
{
    return reportProfileId_;
}

void ShowFirewallReportRequest::setReportProfileId(const std::string& value)
{
    reportProfileId_ = value;
    reportProfileIdIsSet_ = true;
}

bool ShowFirewallReportRequest::reportProfileIdIsSet() const
{
    return reportProfileIdIsSet_;
}

void ShowFirewallReportRequest::unsetreportProfileId()
{
    reportProfileIdIsSet_ = false;
}

std::string ShowFirewallReportRequest::getReportId() const
{
    return reportId_;
}

void ShowFirewallReportRequest::setReportId(const std::string& value)
{
    reportId_ = value;
    reportIdIsSet_ = true;
}

bool ShowFirewallReportRequest::reportIdIsSet() const
{
    return reportIdIsSet_;
}

void ShowFirewallReportRequest::unsetreportId()
{
    reportIdIsSet_ = false;
}

}
}
}
}
}


