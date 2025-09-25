

#include "huaweicloud/codehub/v3/model/DeleteRepoMemberResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




DeleteRepoMemberResponse::DeleteRepoMemberResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

DeleteRepoMemberResponse::~DeleteRepoMemberResponse() = default;

void DeleteRepoMemberResponse::validate()
{
}

web::json::value DeleteRepoMemberResponse::toJson() const
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
bool DeleteRepoMemberResponse::fromJson(const web::json::value& val)
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
            Empty refVal;
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


Error DeleteRepoMemberResponse::getError() const
{
    return error_;
}

void DeleteRepoMemberResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool DeleteRepoMemberResponse::errorIsSet() const
{
    return errorIsSet_;
}

void DeleteRepoMemberResponse::unseterror()
{
    errorIsSet_ = false;
}

Empty DeleteRepoMemberResponse::getResult() const
{
    return result_;
}

void DeleteRepoMemberResponse::setResult(const Empty& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteRepoMemberResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteRepoMemberResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string DeleteRepoMemberResponse::getStatus() const
{
    return status_;
}

void DeleteRepoMemberResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteRepoMemberResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteRepoMemberResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


