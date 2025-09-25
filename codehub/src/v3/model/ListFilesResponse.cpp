

#include "huaweicloud/codehub/v3/model/ListFilesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ListFilesResponse::ListFilesResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListFilesResponse::~ListFilesResponse() = default;

void ListFilesResponse::validate()
{
}

web::json::value ListFilesResponse::toJson() const
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
bool ListFilesResponse::fromJson(const web::json::value& val)
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
            FilesResponseInfo refVal;
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


Error ListFilesResponse::getError() const
{
    return error_;
}

void ListFilesResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListFilesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListFilesResponse::unseterror()
{
    errorIsSet_ = false;
}

FilesResponseInfo ListFilesResponse::getResult() const
{
    return result_;
}

void ListFilesResponse::setResult(const FilesResponseInfo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListFilesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListFilesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListFilesResponse::getStatus() const
{
    return status_;
}

void ListFilesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListFilesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListFilesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


