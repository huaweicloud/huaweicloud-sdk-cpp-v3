

#include "huaweicloud/drs/v5/model/ImportBatchCreateJobsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ImportBatchCreateJobsResponse::ImportBatchCreateJobsResponse()
{
    asyncJobId_ = "";
    asyncJobIdIsSet_ = false;
    importErrorMessagesIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

ImportBatchCreateJobsResponse::~ImportBatchCreateJobsResponse() = default;

void ImportBatchCreateJobsResponse::validate()
{
}

web::json::value ImportBatchCreateJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(asyncJobIdIsSet_) {
        val[utility::conversions::to_string_t("async_job_id")] = ModelBase::toJson(asyncJobId_);
    }
    if(importErrorMessagesIsSet_) {
        val[utility::conversions::to_string_t("import_error_messages")] = ModelBase::toJson(importErrorMessages_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}

bool ImportBatchCreateJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("async_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("async_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsyncJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("import_error_messages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("import_error_messages"));
        if(!fieldValue.is_null())
        {
            std::vector<ImportErrorMessageResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImportErrorMessages(refVal);
        }
    }
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

std::string ImportBatchCreateJobsResponse::getAsyncJobId() const
{
    return asyncJobId_;
}

void ImportBatchCreateJobsResponse::setAsyncJobId(const std::string& value)
{
    asyncJobId_ = value;
    asyncJobIdIsSet_ = true;
}

bool ImportBatchCreateJobsResponse::asyncJobIdIsSet() const
{
    return asyncJobIdIsSet_;
}

void ImportBatchCreateJobsResponse::unsetasyncJobId()
{
    asyncJobIdIsSet_ = false;
}

std::vector<ImportErrorMessageResp>& ImportBatchCreateJobsResponse::getImportErrorMessages()
{
    return importErrorMessages_;
}

void ImportBatchCreateJobsResponse::setImportErrorMessages(const std::vector<ImportErrorMessageResp>& value)
{
    importErrorMessages_ = value;
    importErrorMessagesIsSet_ = true;
}

bool ImportBatchCreateJobsResponse::importErrorMessagesIsSet() const
{
    return importErrorMessagesIsSet_;
}

void ImportBatchCreateJobsResponse::unsetimportErrorMessages()
{
    importErrorMessagesIsSet_ = false;
}

std::string ImportBatchCreateJobsResponse::getErrorCode() const
{
    return errorCode_;
}

void ImportBatchCreateJobsResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ImportBatchCreateJobsResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ImportBatchCreateJobsResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ImportBatchCreateJobsResponse::getErrorMsg() const
{
    return errorMsg_;
}

void ImportBatchCreateJobsResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ImportBatchCreateJobsResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ImportBatchCreateJobsResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


