

#include "huaweicloud/codeartsrepo/v3/model/ListProductTwoTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ListProductTwoTemplatesResponse::ListProductTwoTemplatesResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListProductTwoTemplatesResponse::~ListProductTwoTemplatesResponse() = default;

void ListProductTwoTemplatesResponse::validate()
{
}

web::json::value ListProductTwoTemplatesResponse::toJson() const
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
bool ListProductTwoTemplatesResponse::fromJson(const web::json::value& val)
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
            TemplateListInfo refVal;
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


Error ListProductTwoTemplatesResponse::getError() const
{
    return error_;
}

void ListProductTwoTemplatesResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListProductTwoTemplatesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListProductTwoTemplatesResponse::unseterror()
{
    errorIsSet_ = false;
}

TemplateListInfo ListProductTwoTemplatesResponse::getResult() const
{
    return result_;
}

void ListProductTwoTemplatesResponse::setResult(const TemplateListInfo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListProductTwoTemplatesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListProductTwoTemplatesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListProductTwoTemplatesResponse::getStatus() const
{
    return status_;
}

void ListProductTwoTemplatesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListProductTwoTemplatesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListProductTwoTemplatesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


