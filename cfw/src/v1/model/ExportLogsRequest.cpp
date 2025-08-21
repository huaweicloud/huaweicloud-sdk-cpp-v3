

#include "huaweicloud/cfw/v1/model/ExportLogsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ExportLogsRequest::ExportLogsRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExportLogsRequest::~ExportLogsRequest() = default;

void ExportLogsRequest::validate()
{
}

web::json::value ExportLogsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ExportLogsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ExportLogsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExportLogsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ExportLogsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ExportLogsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ExportLogsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

ExportLogsRequestBody ExportLogsRequest::getBody() const
{
    return body_;
}

void ExportLogsRequest::setBody(const ExportLogsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExportLogsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExportLogsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


