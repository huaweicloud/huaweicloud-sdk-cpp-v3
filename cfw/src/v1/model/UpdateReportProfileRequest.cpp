

#include "huaweicloud/cfw/v1/model/UpdateReportProfileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateReportProfileRequest::UpdateReportProfileRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    reportProfileId_ = "";
    reportProfileIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateReportProfileRequest::~UpdateReportProfileRequest() = default;

void UpdateReportProfileRequest::validate()
{
}

web::json::value UpdateReportProfileRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(reportProfileIdIsSet_) {
        val[utility::conversions::to_string_t("report_profile_id")] = ModelBase::toJson(reportProfileId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateReportProfileRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateReportProfileDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateReportProfileRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void UpdateReportProfileRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool UpdateReportProfileRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void UpdateReportProfileRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string UpdateReportProfileRequest::getReportProfileId() const
{
    return reportProfileId_;
}

void UpdateReportProfileRequest::setReportProfileId(const std::string& value)
{
    reportProfileId_ = value;
    reportProfileIdIsSet_ = true;
}

bool UpdateReportProfileRequest::reportProfileIdIsSet() const
{
    return reportProfileIdIsSet_;
}

void UpdateReportProfileRequest::unsetreportProfileId()
{
    reportProfileIdIsSet_ = false;
}

UpdateReportProfileDto UpdateReportProfileRequest::getBody() const
{
    return body_;
}

void UpdateReportProfileRequest::setBody(const UpdateReportProfileDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateReportProfileRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateReportProfileRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


