

#include "huaweicloud/codeartsrepo/v3/model/CreateCommitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




CreateCommitResponse::CreateCommitResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CreateCommitResponse::~CreateCommitResponse() = default;

void CreateCommitResponse::validate()
{
}

web::json::value CreateCommitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool CreateCommitResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            Error refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            CreateCommitResponseBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
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


Error CreateCommitResponse::getError() const
{
    return error_;
}

void CreateCommitResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool CreateCommitResponse::errorIsSet() const
{
    return errorIsSet_;
}

void CreateCommitResponse::unseterror()
{
    errorIsSet_ = false;
}

CreateCommitResponseBody CreateCommitResponse::getResult() const
{
    return result_;
}

void CreateCommitResponse::setResult(const CreateCommitResponseBody& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateCommitResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateCommitResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string CreateCommitResponse::getStatus() const
{
    return status_;
}

void CreateCommitResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateCommitResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateCommitResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


