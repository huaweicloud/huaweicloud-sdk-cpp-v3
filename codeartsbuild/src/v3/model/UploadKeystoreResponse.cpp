

#include "huaweicloud/codeartsbuild/v3/model/UploadKeystoreResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




UploadKeystoreResponse::UploadKeystoreResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

UploadKeystoreResponse::~UploadKeystoreResponse() = default;

void UploadKeystoreResponse::validate()
{
}

web::json::value UploadKeystoreResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UploadKeystoreResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            UploadKeystore_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


UploadKeystore_result UploadKeystoreResponse::getResult() const
{
    return result_;
}

void UploadKeystoreResponse::setResult(const UploadKeystore_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UploadKeystoreResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UploadKeystoreResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string UploadKeystoreResponse::getError() const
{
    return error_;
}

void UploadKeystoreResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool UploadKeystoreResponse::errorIsSet() const
{
    return errorIsSet_;
}

void UploadKeystoreResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string UploadKeystoreResponse::getStatus() const
{
    return status_;
}

void UploadKeystoreResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UploadKeystoreResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UploadKeystoreResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


