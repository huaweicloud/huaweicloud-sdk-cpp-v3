

#include "huaweicloud/metastudio/v1/model/UpdateDialogReportConfigReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateDialogReportConfigReq::UpdateDialogReportConfigReq()
{
    obsBucketName_ = "";
    obsBucketNameIsSet_ = false;
    obsEndpoint_ = "";
    obsEndpointIsSet_ = false;
    enableDialogReport_ = false;
    enableDialogReportIsSet_ = false;
}

UpdateDialogReportConfigReq::~UpdateDialogReportConfigReq() = default;

void UpdateDialogReportConfigReq::validate()
{
}

web::json::value UpdateDialogReportConfigReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsBucketNameIsSet_) {
        val[utility::conversions::to_string_t("obs_bucket_name")] = ModelBase::toJson(obsBucketName_);
    }
    if(obsEndpointIsSet_) {
        val[utility::conversions::to_string_t("obs_endpoint")] = ModelBase::toJson(obsEndpoint_);
    }
    if(enableDialogReportIsSet_) {
        val[utility::conversions::to_string_t("enable_dialog_report")] = ModelBase::toJson(enableDialogReport_);
    }

    return val;
}
bool UpdateDialogReportConfigReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("obs_bucket_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_bucket_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsBucketName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_endpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_dialog_report"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_dialog_report"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableDialogReport(refVal);
        }
    }
    return ok;
}


std::string UpdateDialogReportConfigReq::getObsBucketName() const
{
    return obsBucketName_;
}

void UpdateDialogReportConfigReq::setObsBucketName(const std::string& value)
{
    obsBucketName_ = value;
    obsBucketNameIsSet_ = true;
}

bool UpdateDialogReportConfigReq::obsBucketNameIsSet() const
{
    return obsBucketNameIsSet_;
}

void UpdateDialogReportConfigReq::unsetobsBucketName()
{
    obsBucketNameIsSet_ = false;
}

std::string UpdateDialogReportConfigReq::getObsEndpoint() const
{
    return obsEndpoint_;
}

void UpdateDialogReportConfigReq::setObsEndpoint(const std::string& value)
{
    obsEndpoint_ = value;
    obsEndpointIsSet_ = true;
}

bool UpdateDialogReportConfigReq::obsEndpointIsSet() const
{
    return obsEndpointIsSet_;
}

void UpdateDialogReportConfigReq::unsetobsEndpoint()
{
    obsEndpointIsSet_ = false;
}

bool UpdateDialogReportConfigReq::isEnableDialogReport() const
{
    return enableDialogReport_;
}

void UpdateDialogReportConfigReq::setEnableDialogReport(bool value)
{
    enableDialogReport_ = value;
    enableDialogReportIsSet_ = true;
}

bool UpdateDialogReportConfigReq::enableDialogReportIsSet() const
{
    return enableDialogReportIsSet_;
}

void UpdateDialogReportConfigReq::unsetenableDialogReport()
{
    enableDialogReportIsSet_ = false;
}

}
}
}
}
}


