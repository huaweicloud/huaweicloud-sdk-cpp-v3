

#include "huaweicloud/codeartsbuild/v3/model/CreateTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CreateTemplatesResponse::CreateTemplatesResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CreateTemplatesResponse::~CreateTemplatesResponse() = default;

void CreateTemplatesResponse::validate()
{
}

web::json::value CreateTemplatesResponse::toJson() const
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
bool CreateTemplatesResponse::fromJson(const web::json::value& val)
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


std::vector<CreateTemplatesItems>& CreateTemplatesResponse::getResult()
{
    return result_;
}

void CreateTemplatesResponse::setResult(const std::vector<CreateTemplatesItems>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateTemplatesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateTemplatesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string CreateTemplatesResponse::getError() const
{
    return error_;
}

void CreateTemplatesResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool CreateTemplatesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void CreateTemplatesResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string CreateTemplatesResponse::getStatus() const
{
    return status_;
}

void CreateTemplatesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateTemplatesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateTemplatesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


