

#include "huaweicloud/codeartsbuild/v3/model/ShowBuildRecordBuildScriptResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowBuildRecordBuildScriptResponse::ShowBuildRecordBuildScriptResponse()
{
    result_ = "";
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowBuildRecordBuildScriptResponse::~ShowBuildRecordBuildScriptResponse() = default;

void ShowBuildRecordBuildScriptResponse::validate()
{
}

web::json::value ShowBuildRecordBuildScriptResponse::toJson() const
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
bool ShowBuildRecordBuildScriptResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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


std::string ShowBuildRecordBuildScriptResponse::getResult() const
{
    return result_;
}

void ShowBuildRecordBuildScriptResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowBuildRecordBuildScriptResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowBuildRecordBuildScriptResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowBuildRecordBuildScriptResponse::getError() const
{
    return error_;
}

void ShowBuildRecordBuildScriptResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowBuildRecordBuildScriptResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowBuildRecordBuildScriptResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowBuildRecordBuildScriptResponse::getStatus() const
{
    return status_;
}

void ShowBuildRecordBuildScriptResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowBuildRecordBuildScriptResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowBuildRecordBuildScriptResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


