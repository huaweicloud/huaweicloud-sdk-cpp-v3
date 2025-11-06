

#include "huaweicloud/codeartsrepo/v3/model/ShowBranchesByTwoRepositoryIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ShowBranchesByTwoRepositoryIdResponse::ShowBranchesByTwoRepositoryIdResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowBranchesByTwoRepositoryIdResponse::~ShowBranchesByTwoRepositoryIdResponse() = default;

void ShowBranchesByTwoRepositoryIdResponse::validate()
{
}

web::json::value ShowBranchesByTwoRepositoryIdResponse::toJson() const
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
bool ShowBranchesByTwoRepositoryIdResponse::fromJson(const web::json::value& val)
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
            TagList refVal;
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


Error ShowBranchesByTwoRepositoryIdResponse::getError() const
{
    return error_;
}

void ShowBranchesByTwoRepositoryIdResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowBranchesByTwoRepositoryIdResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowBranchesByTwoRepositoryIdResponse::unseterror()
{
    errorIsSet_ = false;
}

TagList ShowBranchesByTwoRepositoryIdResponse::getResult() const
{
    return result_;
}

void ShowBranchesByTwoRepositoryIdResponse::setResult(const TagList& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowBranchesByTwoRepositoryIdResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowBranchesByTwoRepositoryIdResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowBranchesByTwoRepositoryIdResponse::getStatus() const
{
    return status_;
}

void ShowBranchesByTwoRepositoryIdResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowBranchesByTwoRepositoryIdResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowBranchesByTwoRepositoryIdResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


