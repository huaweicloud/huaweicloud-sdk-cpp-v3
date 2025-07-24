

#include "huaweicloud/cloudtest/v1/model/ListTestcasePlansResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTestcasePlansResponse::ListTestcasePlansResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
    errorIsSet_ = false;
}

ListTestcasePlansResponse::~ListTestcasePlansResponse() = default;

void ListTestcasePlansResponse::validate()
{
}

web::json::value ListTestcasePlansResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }

    return val;
}
bool ListTestcasePlansResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ResultValueListTestcasePlanVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            ApiError refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    return ok;
}


std::string ListTestcasePlansResponse::getStatus() const
{
    return status_;
}

void ListTestcasePlansResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListTestcasePlansResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListTestcasePlansResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListTestcasePlanVo ListTestcasePlansResponse::getResult() const
{
    return result_;
}

void ListTestcasePlansResponse::setResult(const ResultValueListTestcasePlanVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListTestcasePlansResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListTestcasePlansResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ListTestcasePlansResponse::getError() const
{
    return error_;
}

void ListTestcasePlansResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListTestcasePlansResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListTestcasePlansResponse::unseterror()
{
    errorIsSet_ = false;
}

}
}
}
}
}


