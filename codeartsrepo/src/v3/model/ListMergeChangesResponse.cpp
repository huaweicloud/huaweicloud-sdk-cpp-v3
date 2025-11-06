

#include "huaweicloud/codeartsrepo/v3/model/ListMergeChangesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ListMergeChangesResponse::ListMergeChangesResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListMergeChangesResponse::~ListMergeChangesResponse() = default;

void ListMergeChangesResponse::validate()
{
}

web::json::value ListMergeChangesResponse::toJson() const
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
bool ListMergeChangesResponse::fromJson(const web::json::value& val)
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
            ResponseMergeRequestChanges refVal;
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


Error ListMergeChangesResponse::getError() const
{
    return error_;
}

void ListMergeChangesResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListMergeChangesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListMergeChangesResponse::unseterror()
{
    errorIsSet_ = false;
}

ResponseMergeRequestChanges ListMergeChangesResponse::getResult() const
{
    return result_;
}

void ListMergeChangesResponse::setResult(const ResponseMergeRequestChanges& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListMergeChangesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListMergeChangesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListMergeChangesResponse::getStatus() const
{
    return status_;
}

void ListMergeChangesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListMergeChangesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListMergeChangesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


