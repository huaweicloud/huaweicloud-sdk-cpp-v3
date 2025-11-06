

#include "huaweicloud/codeartsrepo/v3/model/ListMergeChangesTreesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ListMergeChangesTreesResponse::ListMergeChangesTreesResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListMergeChangesTreesResponse::~ListMergeChangesTreesResponse() = default;

void ListMergeChangesTreesResponse::validate()
{
}

web::json::value ListMergeChangesTreesResponse::toJson() const
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
bool ListMergeChangesTreesResponse::fromJson(const web::json::value& val)
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
            MergeChangesTreesDto refVal;
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


Error ListMergeChangesTreesResponse::getError() const
{
    return error_;
}

void ListMergeChangesTreesResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListMergeChangesTreesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListMergeChangesTreesResponse::unseterror()
{
    errorIsSet_ = false;
}

MergeChangesTreesDto ListMergeChangesTreesResponse::getResult() const
{
    return result_;
}

void ListMergeChangesTreesResponse::setResult(const MergeChangesTreesDto& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListMergeChangesTreesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListMergeChangesTreesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListMergeChangesTreesResponse::getStatus() const
{
    return status_;
}

void ListMergeChangesTreesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListMergeChangesTreesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListMergeChangesTreesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


