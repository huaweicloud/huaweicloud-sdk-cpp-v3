

#include "huaweicloud/codeartscheck/v2/model/ListCriterionSetsByLanguageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ListCriterionSetsByLanguageResponse::ListCriterionSetsByLanguageResponse()
{
    httpStatus_ = "";
    httpStatusIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListCriterionSetsByLanguageResponse::~ListCriterionSetsByLanguageResponse() = default;

void ListCriterionSetsByLanguageResponse::validate()
{
}

web::json::value ListCriterionSetsByLanguageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(httpStatusIsSet_) {
        val[utility::conversions::to_string_t("httpStatus")] = ModelBase::toJson(httpStatus_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ListCriterionSetsByLanguageResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("httpStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("httpStatus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            CriterionSetsInfo refVal;
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


std::string ListCriterionSetsByLanguageResponse::getHttpStatus() const
{
    return httpStatus_;
}

void ListCriterionSetsByLanguageResponse::setHttpStatus(const std::string& value)
{
    httpStatus_ = value;
    httpStatusIsSet_ = true;
}

bool ListCriterionSetsByLanguageResponse::httpStatusIsSet() const
{
    return httpStatusIsSet_;
}

void ListCriterionSetsByLanguageResponse::unsethttpStatus()
{
    httpStatusIsSet_ = false;
}

CriterionSetsInfo ListCriterionSetsByLanguageResponse::getResult() const
{
    return result_;
}

void ListCriterionSetsByLanguageResponse::setResult(const CriterionSetsInfo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListCriterionSetsByLanguageResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListCriterionSetsByLanguageResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListCriterionSetsByLanguageResponse::getStatus() const
{
    return status_;
}

void ListCriterionSetsByLanguageResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListCriterionSetsByLanguageResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListCriterionSetsByLanguageResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


