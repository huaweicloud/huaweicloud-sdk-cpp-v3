

#include "huaweicloud/metastudio/v1/model/Execute2dModelTrainingCommandByUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




Execute2dModelTrainingCommandByUserResponse::Execute2dModelTrainingCommandByUserResponse()
{
    commondResult_ = "";
    commondResultIsSet_ = false;
    attachmentUploadUrlIsSet_ = false;
    multipartDataIsSet_ = false;
    excuteFailedMsg_ = "";
    excuteFailedMsgIsSet_ = false;
    errorInfoIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

Execute2dModelTrainingCommandByUserResponse::~Execute2dModelTrainingCommandByUserResponse() = default;

void Execute2dModelTrainingCommandByUserResponse::validate()
{
}

web::json::value Execute2dModelTrainingCommandByUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commondResultIsSet_) {
        val[utility::conversions::to_string_t("commond_result")] = ModelBase::toJson(commondResult_);
    }
    if(attachmentUploadUrlIsSet_) {
        val[utility::conversions::to_string_t("attachment_upload_url")] = ModelBase::toJson(attachmentUploadUrl_);
    }
    if(multipartDataIsSet_) {
        val[utility::conversions::to_string_t("multipart_data")] = ModelBase::toJson(multipartData_);
    }
    if(excuteFailedMsgIsSet_) {
        val[utility::conversions::to_string_t("excute_failed_msg")] = ModelBase::toJson(excuteFailedMsg_);
    }
    if(errorInfoIsSet_) {
        val[utility::conversions::to_string_t("error_info")] = ModelBase::toJson(errorInfo_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool Execute2dModelTrainingCommandByUserResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("commond_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commond_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommondResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attachment_upload_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachment_upload_url"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachmentUploadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("multipart_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multipart_data"));
        if(!fieldValue.is_null())
        {
            std::vector<MultipartUploadInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMultipartData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("excute_failed_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("excute_failed_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcuteFailedMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_info"));
        if(!fieldValue.is_null())
        {
            ErrorResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string Execute2dModelTrainingCommandByUserResponse::getCommondResult() const
{
    return commondResult_;
}

void Execute2dModelTrainingCommandByUserResponse::setCommondResult(const std::string& value)
{
    commondResult_ = value;
    commondResultIsSet_ = true;
}

bool Execute2dModelTrainingCommandByUserResponse::commondResultIsSet() const
{
    return commondResultIsSet_;
}

void Execute2dModelTrainingCommandByUserResponse::unsetcommondResult()
{
    commondResultIsSet_ = false;
}

std::vector<std::string>& Execute2dModelTrainingCommandByUserResponse::getAttachmentUploadUrl()
{
    return attachmentUploadUrl_;
}

void Execute2dModelTrainingCommandByUserResponse::setAttachmentUploadUrl(const std::vector<std::string>& value)
{
    attachmentUploadUrl_ = value;
    attachmentUploadUrlIsSet_ = true;
}

bool Execute2dModelTrainingCommandByUserResponse::attachmentUploadUrlIsSet() const
{
    return attachmentUploadUrlIsSet_;
}

void Execute2dModelTrainingCommandByUserResponse::unsetattachmentUploadUrl()
{
    attachmentUploadUrlIsSet_ = false;
}

std::vector<MultipartUploadInfo>& Execute2dModelTrainingCommandByUserResponse::getMultipartData()
{
    return multipartData_;
}

void Execute2dModelTrainingCommandByUserResponse::setMultipartData(const std::vector<MultipartUploadInfo>& value)
{
    multipartData_ = value;
    multipartDataIsSet_ = true;
}

bool Execute2dModelTrainingCommandByUserResponse::multipartDataIsSet() const
{
    return multipartDataIsSet_;
}

void Execute2dModelTrainingCommandByUserResponse::unsetmultipartData()
{
    multipartDataIsSet_ = false;
}

std::string Execute2dModelTrainingCommandByUserResponse::getExcuteFailedMsg() const
{
    return excuteFailedMsg_;
}

void Execute2dModelTrainingCommandByUserResponse::setExcuteFailedMsg(const std::string& value)
{
    excuteFailedMsg_ = value;
    excuteFailedMsgIsSet_ = true;
}

bool Execute2dModelTrainingCommandByUserResponse::excuteFailedMsgIsSet() const
{
    return excuteFailedMsgIsSet_;
}

void Execute2dModelTrainingCommandByUserResponse::unsetexcuteFailedMsg()
{
    excuteFailedMsgIsSet_ = false;
}

ErrorResponse Execute2dModelTrainingCommandByUserResponse::getErrorInfo() const
{
    return errorInfo_;
}

void Execute2dModelTrainingCommandByUserResponse::setErrorInfo(const ErrorResponse& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool Execute2dModelTrainingCommandByUserResponse::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void Execute2dModelTrainingCommandByUserResponse::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

std::string Execute2dModelTrainingCommandByUserResponse::getXRequestId() const
{
    return xRequestId_;
}

void Execute2dModelTrainingCommandByUserResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool Execute2dModelTrainingCommandByUserResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void Execute2dModelTrainingCommandByUserResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


