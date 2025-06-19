

#include "huaweicloud/codeartsbuild/v3/model/ListRecommendOfficialTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListRecommendOfficialTemplateResponse::ListRecommendOfficialTemplateResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListRecommendOfficialTemplateResponse::~ListRecommendOfficialTemplateResponse() = default;

void ListRecommendOfficialTemplateResponse::validate()
{
}

web::json::value ListRecommendOfficialTemplateResponse::toJson() const
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
bool ListRecommendOfficialTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            QueryTemplatesResult refVal;
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


QueryTemplatesResult ListRecommendOfficialTemplateResponse::getResult() const
{
    return result_;
}

void ListRecommendOfficialTemplateResponse::setResult(const QueryTemplatesResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListRecommendOfficialTemplateResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListRecommendOfficialTemplateResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListRecommendOfficialTemplateResponse::getError() const
{
    return error_;
}

void ListRecommendOfficialTemplateResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListRecommendOfficialTemplateResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListRecommendOfficialTemplateResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListRecommendOfficialTemplateResponse::getStatus() const
{
    return status_;
}

void ListRecommendOfficialTemplateResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListRecommendOfficialTemplateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListRecommendOfficialTemplateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


