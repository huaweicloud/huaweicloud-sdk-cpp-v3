

#include "huaweicloud/codeartsrepo/v3/model/CreateProjectAndRepositoriesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




CreateProjectAndRepositoriesResponse::CreateProjectAndRepositoriesResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CreateProjectAndRepositoriesResponse::~CreateProjectAndRepositoriesResponse() = default;

void CreateProjectAndRepositoriesResponse::validate()
{
}

web::json::value CreateProjectAndRepositoriesResponse::toJson() const
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
bool CreateProjectAndRepositoriesResponse::fromJson(const web::json::value& val)
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
            ProjectRepository refVal;
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


Error CreateProjectAndRepositoriesResponse::getError() const
{
    return error_;
}

void CreateProjectAndRepositoriesResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool CreateProjectAndRepositoriesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void CreateProjectAndRepositoriesResponse::unseterror()
{
    errorIsSet_ = false;
}

ProjectRepository CreateProjectAndRepositoriesResponse::getResult() const
{
    return result_;
}

void CreateProjectAndRepositoriesResponse::setResult(const ProjectRepository& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateProjectAndRepositoriesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateProjectAndRepositoriesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string CreateProjectAndRepositoriesResponse::getStatus() const
{
    return status_;
}

void CreateProjectAndRepositoriesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateProjectAndRepositoriesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateProjectAndRepositoriesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


