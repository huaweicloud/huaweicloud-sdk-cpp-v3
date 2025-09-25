

#include "huaweicloud/codehub/v3/model/AddTagV2Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




AddTagV2Response::AddTagV2Response()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

AddTagV2Response::~AddTagV2Response() = default;

void AddTagV2Response::validate()
{
}

web::json::value AddTagV2Response::toJson() const
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
bool AddTagV2Response::fromJson(const web::json::value& val)
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
            AddTagsResponse refVal;
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


Error AddTagV2Response::getError() const
{
    return error_;
}

void AddTagV2Response::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool AddTagV2Response::errorIsSet() const
{
    return errorIsSet_;
}

void AddTagV2Response::unseterror()
{
    errorIsSet_ = false;
}

AddTagsResponse AddTagV2Response::getResult() const
{
    return result_;
}

void AddTagV2Response::setResult(const AddTagsResponse& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool AddTagV2Response::resultIsSet() const
{
    return resultIsSet_;
}

void AddTagV2Response::unsetresult()
{
    resultIsSet_ = false;
}

std::string AddTagV2Response::getStatus() const
{
    return status_;
}

void AddTagV2Response::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddTagV2Response::statusIsSet() const
{
    return statusIsSet_;
}

void AddTagV2Response::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


