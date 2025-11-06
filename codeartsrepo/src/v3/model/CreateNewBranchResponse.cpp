

#include "huaweicloud/codeartsrepo/v3/model/CreateNewBranchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




CreateNewBranchResponse::CreateNewBranchResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CreateNewBranchResponse::~CreateNewBranchResponse() = default;

void CreateNewBranchResponse::validate()
{
}

web::json::value CreateNewBranchResponse::toJson() const
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
bool CreateNewBranchResponse::fromJson(const web::json::value& val)
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
            AddProtectResponse refVal;
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


Error CreateNewBranchResponse::getError() const
{
    return error_;
}

void CreateNewBranchResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool CreateNewBranchResponse::errorIsSet() const
{
    return errorIsSet_;
}

void CreateNewBranchResponse::unseterror()
{
    errorIsSet_ = false;
}

AddProtectResponse CreateNewBranchResponse::getResult() const
{
    return result_;
}

void CreateNewBranchResponse::setResult(const AddProtectResponse& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateNewBranchResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateNewBranchResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string CreateNewBranchResponse::getStatus() const
{
    return status_;
}

void CreateNewBranchResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateNewBranchResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateNewBranchResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


