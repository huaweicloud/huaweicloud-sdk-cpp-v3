

#include "huaweicloud/codehub/v3/model/CreateProjectAndforkRepositoriesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




CreateProjectAndforkRepositoriesResponse::CreateProjectAndforkRepositoriesResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CreateProjectAndforkRepositoriesResponse::~CreateProjectAndforkRepositoriesResponse() = default;

void CreateProjectAndforkRepositoriesResponse::validate()
{
}

web::json::value CreateProjectAndforkRepositoriesResponse::toJson() const
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
bool CreateProjectAndforkRepositoriesResponse::fromJson(const web::json::value& val)
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


Error CreateProjectAndforkRepositoriesResponse::getError() const
{
    return error_;
}

void CreateProjectAndforkRepositoriesResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool CreateProjectAndforkRepositoriesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void CreateProjectAndforkRepositoriesResponse::unseterror()
{
    errorIsSet_ = false;
}

ProjectRepository CreateProjectAndforkRepositoriesResponse::getResult() const
{
    return result_;
}

void CreateProjectAndforkRepositoriesResponse::setResult(const ProjectRepository& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateProjectAndforkRepositoriesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateProjectAndforkRepositoriesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string CreateProjectAndforkRepositoriesResponse::getStatus() const
{
    return status_;
}

void CreateProjectAndforkRepositoriesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateProjectAndforkRepositoriesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateProjectAndforkRepositoriesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


