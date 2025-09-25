

#include "huaweicloud/codeartsbuild/v3/model/RemoverFavouriteTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




RemoverFavouriteTaskResponse::RemoverFavouriteTaskResponse()
{
    status_ = "";
    statusIsSet_ = false;
    errorIsSet_ = false;
    resultIsSet_ = false;
}

RemoverFavouriteTaskResponse::~RemoverFavouriteTaskResponse() = default;

void RemoverFavouriteTaskResponse::validate()
{
}

web::json::value RemoverFavouriteTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RemoverFavouriteTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            FavouriteResponse_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string RemoverFavouriteTaskResponse::getStatus() const
{
    return status_;
}

void RemoverFavouriteTaskResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RemoverFavouriteTaskResponse::statusIsSet() const
{
    return statusIsSet_;
}

void RemoverFavouriteTaskResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object RemoverFavouriteTaskResponse::getError() const
{
    return error_;
}

void RemoverFavouriteTaskResponse::setError(const Object& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool RemoverFavouriteTaskResponse::errorIsSet() const
{
    return errorIsSet_;
}

void RemoverFavouriteTaskResponse::unseterror()
{
    errorIsSet_ = false;
}

FavouriteResponse_result RemoverFavouriteTaskResponse::getResult() const
{
    return result_;
}

void RemoverFavouriteTaskResponse::setResult(const FavouriteResponse_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RemoverFavouriteTaskResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RemoverFavouriteTaskResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


