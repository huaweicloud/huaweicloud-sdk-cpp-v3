

#include "huaweicloud/codehub/v3/model/CreateMergeRequestDiscussionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




CreateMergeRequestDiscussionResponse::CreateMergeRequestDiscussionResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CreateMergeRequestDiscussionResponse::~CreateMergeRequestDiscussionResponse() = default;

void CreateMergeRequestDiscussionResponse::validate()
{
}

web::json::value CreateMergeRequestDiscussionResponse::toJson() const
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
bool CreateMergeRequestDiscussionResponse::fromJson(const web::json::value& val)
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
            MergeRequestDiscussionDto refVal;
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


Error CreateMergeRequestDiscussionResponse::getError() const
{
    return error_;
}

void CreateMergeRequestDiscussionResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::errorIsSet() const
{
    return errorIsSet_;
}

void CreateMergeRequestDiscussionResponse::unseterror()
{
    errorIsSet_ = false;
}

MergeRequestDiscussionDto CreateMergeRequestDiscussionResponse::getResult() const
{
    return result_;
}

void CreateMergeRequestDiscussionResponse::setResult(const MergeRequestDiscussionDto& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponse::getStatus() const
{
    return status_;
}

void CreateMergeRequestDiscussionResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateMergeRequestDiscussionResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


