

#include "huaweicloud/csms/v1/model/BatchImportSecretsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




BatchImportSecretsResponse::BatchImportSecretsResponse()
{
    errorListIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    success_ = 0;
    successIsSet_ = false;
    failed_ = 0;
    failedIsSet_ = false;
}

BatchImportSecretsResponse::~BatchImportSecretsResponse() = default;

void BatchImportSecretsResponse::validate()
{
}

web::json::value BatchImportSecretsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorListIsSet_) {
        val[utility::conversions::to_string_t("error_list")] = ModelBase::toJson(errorList_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }
    if(failedIsSet_) {
        val[utility::conversions::to_string_t("failed")] = ModelBase::toJson(failed_);
    }

    return val;
}
bool BatchImportSecretsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ErrorInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailed(refVal);
        }
    }
    return ok;
}


std::vector<ErrorInfo>& BatchImportSecretsResponse::getErrorList()
{
    return errorList_;
}

void BatchImportSecretsResponse::setErrorList(const std::vector<ErrorInfo>& value)
{
    errorList_ = value;
    errorListIsSet_ = true;
}

bool BatchImportSecretsResponse::errorListIsSet() const
{
    return errorListIsSet_;
}

void BatchImportSecretsResponse::unseterrorList()
{
    errorListIsSet_ = false;
}

int32_t BatchImportSecretsResponse::getTotal() const
{
    return total_;
}

void BatchImportSecretsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool BatchImportSecretsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void BatchImportSecretsResponse::unsettotal()
{
    totalIsSet_ = false;
}

int32_t BatchImportSecretsResponse::getSuccess() const
{
    return success_;
}

void BatchImportSecretsResponse::setSuccess(int32_t value)
{
    success_ = value;
    successIsSet_ = true;
}

bool BatchImportSecretsResponse::successIsSet() const
{
    return successIsSet_;
}

void BatchImportSecretsResponse::unsetsuccess()
{
    successIsSet_ = false;
}

int32_t BatchImportSecretsResponse::getFailed() const
{
    return failed_;
}

void BatchImportSecretsResponse::setFailed(int32_t value)
{
    failed_ = value;
    failedIsSet_ = true;
}

bool BatchImportSecretsResponse::failedIsSet() const
{
    return failedIsSet_;
}

void BatchImportSecretsResponse::unsetfailed()
{
    failedIsSet_ = false;
}

}
}
}
}
}


