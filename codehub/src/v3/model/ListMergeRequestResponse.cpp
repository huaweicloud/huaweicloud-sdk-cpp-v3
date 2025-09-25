

#include "huaweicloud/codehub/v3/model/ListMergeRequestResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ListMergeRequestResponse::ListMergeRequestResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListMergeRequestResponse::~ListMergeRequestResponse() = default;

void ListMergeRequestResponse::validate()
{
}

web::json::value ListMergeRequestResponse::toJson() const
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
bool ListMergeRequestResponse::fromJson(const web::json::value& val)
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
            MergeResult refVal;
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


Error ListMergeRequestResponse::getError() const
{
    return error_;
}

void ListMergeRequestResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListMergeRequestResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListMergeRequestResponse::unseterror()
{
    errorIsSet_ = false;
}

MergeResult ListMergeRequestResponse::getResult() const
{
    return result_;
}

void ListMergeRequestResponse::setResult(const MergeResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListMergeRequestResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListMergeRequestResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListMergeRequestResponse::getStatus() const
{
    return status_;
}

void ListMergeRequestResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListMergeRequestResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListMergeRequestResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


