

#include "huaweicloud/drs/v5/model/UploadDbObjectTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UploadDbObjectTemplateResponse::UploadDbObjectTemplateResponse()
{
    sendSuccess_ = false;
    sendSuccessIsSet_ = false;
    processStatus_ = "";
    processStatusIsSet_ = false;
    parsedSuccessNumber_ = "";
    parsedSuccessNumberIsSet_ = false;
}

UploadDbObjectTemplateResponse::~UploadDbObjectTemplateResponse() = default;

void UploadDbObjectTemplateResponse::validate()
{
}

web::json::value UploadDbObjectTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sendSuccessIsSet_) {
        val[utility::conversions::to_string_t("send_success")] = ModelBase::toJson(sendSuccess_);
    }
    if(processStatusIsSet_) {
        val[utility::conversions::to_string_t("process_status")] = ModelBase::toJson(processStatus_);
    }
    if(parsedSuccessNumberIsSet_) {
        val[utility::conversions::to_string_t("parsed_success_number")] = ModelBase::toJson(parsedSuccessNumber_);
    }

    return val;
}
bool UploadDbObjectTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("send_success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("send_success"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSendSuccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("process_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parsed_success_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parsed_success_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParsedSuccessNumber(refVal);
        }
    }
    return ok;
}


bool UploadDbObjectTemplateResponse::isSendSuccess() const
{
    return sendSuccess_;
}

void UploadDbObjectTemplateResponse::setSendSuccess(bool value)
{
    sendSuccess_ = value;
    sendSuccessIsSet_ = true;
}

bool UploadDbObjectTemplateResponse::sendSuccessIsSet() const
{
    return sendSuccessIsSet_;
}

void UploadDbObjectTemplateResponse::unsetsendSuccess()
{
    sendSuccessIsSet_ = false;
}

std::string UploadDbObjectTemplateResponse::getProcessStatus() const
{
    return processStatus_;
}

void UploadDbObjectTemplateResponse::setProcessStatus(const std::string& value)
{
    processStatus_ = value;
    processStatusIsSet_ = true;
}

bool UploadDbObjectTemplateResponse::processStatusIsSet() const
{
    return processStatusIsSet_;
}

void UploadDbObjectTemplateResponse::unsetprocessStatus()
{
    processStatusIsSet_ = false;
}

std::string UploadDbObjectTemplateResponse::getParsedSuccessNumber() const
{
    return parsedSuccessNumber_;
}

void UploadDbObjectTemplateResponse::setParsedSuccessNumber(const std::string& value)
{
    parsedSuccessNumber_ = value;
    parsedSuccessNumberIsSet_ = true;
}

bool UploadDbObjectTemplateResponse::parsedSuccessNumberIsSet() const
{
    return parsedSuccessNumberIsSet_;
}

void UploadDbObjectTemplateResponse::unsetparsedSuccessNumber()
{
    parsedSuccessNumberIsSet_ = false;
}

}
}
}
}
}


