

#include "huaweicloud/codeartsbuild/v3/model/DeleteTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DeleteTemplatesResponse::DeleteTemplatesResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

DeleteTemplatesResponse::~DeleteTemplatesResponse() = default;

void DeleteTemplatesResponse::validate()
{
}

web::json::value DeleteTemplatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool DeleteTemplatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateTemplatesItems> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
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


std::vector<CreateTemplatesItems>& DeleteTemplatesResponse::getResult()
{
    return result_;
}

void DeleteTemplatesResponse::setResult(const std::vector<CreateTemplatesItems>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteTemplatesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteTemplatesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string DeleteTemplatesResponse::getError() const
{
    return error_;
}

void DeleteTemplatesResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool DeleteTemplatesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void DeleteTemplatesResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string DeleteTemplatesResponse::getStatus() const
{
    return status_;
}

void DeleteTemplatesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteTemplatesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteTemplatesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


