

#include "huaweicloud/drs/v5/model/DownloadBatchCreateTemplateResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DownloadBatchCreateTemplateResponse::DownloadBatchCreateTemplateResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

DownloadBatchCreateTemplateResponse::~DownloadBatchCreateTemplateResponse() = default;

void DownloadBatchCreateTemplateResponse::validate()
{
}

web::json::value DownloadBatchCreateTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}

bool DownloadBatchCreateTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    return ok;
}

std::string DownloadBatchCreateTemplateResponse::getErrorCode() const
{
    return errorCode_;
}

void DownloadBatchCreateTemplateResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool DownloadBatchCreateTemplateResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void DownloadBatchCreateTemplateResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string DownloadBatchCreateTemplateResponse::getErrorMsg() const
{
    return errorMsg_;
}

void DownloadBatchCreateTemplateResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool DownloadBatchCreateTemplateResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void DownloadBatchCreateTemplateResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


