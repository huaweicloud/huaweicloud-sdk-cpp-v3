

#include "huaweicloud/codeartspipeline/v2/model/ListModulesDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListModulesDetailResponse::ListModulesDetailResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListModulesDetailResponse::~ListModulesDetailResponse() = default;

void ListModulesDetailResponse::validate()
{
}

web::json::value ListModulesDetailResponse::toJson() const
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
bool ListModulesDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            ErrorInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, ExtensionModuleList> refVal;
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


ErrorInfo ListModulesDetailResponse::getError() const
{
    return error_;
}

void ListModulesDetailResponse::setError(const ErrorInfo& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListModulesDetailResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListModulesDetailResponse::unseterror()
{
    errorIsSet_ = false;
}

std::map<std::string, ExtensionModuleList>& ListModulesDetailResponse::getResult()
{
    return result_;
}

void ListModulesDetailResponse::setResult(const std::map<std::string, ExtensionModuleList>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListModulesDetailResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListModulesDetailResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListModulesDetailResponse::getStatus() const
{
    return status_;
}

void ListModulesDetailResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListModulesDetailResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListModulesDetailResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


