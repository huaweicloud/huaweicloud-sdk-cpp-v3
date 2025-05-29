

#include "huaweicloud/codeartsbuild/v3/model/ListOfficialTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListOfficialTemplateResponse::ListOfficialTemplateResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListOfficialTemplateResponse::~ListOfficialTemplateResponse() = default;

void ListOfficialTemplateResponse::validate()
{
}

web::json::value ListOfficialTemplateResponse::toJson() const
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
bool ListOfficialTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ListOfficialTemplate_result refVal;
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


ListOfficialTemplate_result ListOfficialTemplateResponse::getResult() const
{
    return result_;
}

void ListOfficialTemplateResponse::setResult(const ListOfficialTemplate_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListOfficialTemplateResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListOfficialTemplateResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListOfficialTemplateResponse::getError() const
{
    return error_;
}

void ListOfficialTemplateResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListOfficialTemplateResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListOfficialTemplateResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListOfficialTemplateResponse::getStatus() const
{
    return status_;
}

void ListOfficialTemplateResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListOfficialTemplateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListOfficialTemplateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


