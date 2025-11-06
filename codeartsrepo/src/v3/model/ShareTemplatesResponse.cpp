

#include "huaweicloud/codeartsrepo/v3/model/ShareTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ShareTemplatesResponse::ShareTemplatesResponse()
{
    errorIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShareTemplatesResponse::~ShareTemplatesResponse() = default;

void ShareTemplatesResponse::validate()
{
}

web::json::value ShareTemplatesResponse::toJson() const
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
bool ShareTemplatesResponse::fromJson(const web::json::value& val)
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
            std::string refVal;
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


Error ShareTemplatesResponse::getError() const
{
    return error_;
}

void ShareTemplatesResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShareTemplatesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShareTemplatesResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShareTemplatesResponse::getResult() const
{
    return result_;
}

void ShareTemplatesResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShareTemplatesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShareTemplatesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShareTemplatesResponse::getStatus() const
{
    return status_;
}

void ShareTemplatesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShareTemplatesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShareTemplatesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


