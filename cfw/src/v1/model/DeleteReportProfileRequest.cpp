

#include "huaweicloud/cfw/v1/model/DeleteReportProfileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteReportProfileRequest::DeleteReportProfileRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    reportProfileId_ = "";
    reportProfileIdIsSet_ = false;
}

DeleteReportProfileRequest::~DeleteReportProfileRequest() = default;

void DeleteReportProfileRequest::validate()
{
}

web::json::value DeleteReportProfileRequest::toJson() const
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
bool DeleteReportProfileRequest::fromJson(const web::json::value& val)
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


std::string DeleteReportProfileRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void DeleteReportProfileRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool DeleteReportProfileRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void DeleteReportProfileRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string DeleteReportProfileRequest::getReportProfileId() const
{
    return reportProfileId_;
}

void DeleteReportProfileRequest::setReportProfileId(const std::string& value)
{
    reportProfileId_ = value;
    reportProfileIdIsSet_ = true;
}

bool DeleteReportProfileRequest::reportProfileIdIsSet() const
{
    return reportProfileIdIsSet_;
}

void DeleteReportProfileRequest::unsetreportProfileId()
{
    reportProfileIdIsSet_ = false;
}

}
}
}
}
}


