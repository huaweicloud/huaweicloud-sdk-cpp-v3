

#include "huaweicloud/codeartsbuild/v3/model/ShowBuildRecordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowBuildRecordResponse::ShowBuildRecordResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowBuildRecordResponse::~ShowBuildRecordResponse() = default;

void ShowBuildRecordResponse::validate()
{
}

web::json::value ShowBuildRecordResponse::toJson() const
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
bool ShowBuildRecordResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            BuildRecord refVal;
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


BuildRecord ShowBuildRecordResponse::getResult() const
{
    return result_;
}

void ShowBuildRecordResponse::setResult(const BuildRecord& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowBuildRecordResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowBuildRecordResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowBuildRecordResponse::getError() const
{
    return error_;
}

void ShowBuildRecordResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowBuildRecordResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowBuildRecordResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowBuildRecordResponse::getStatus() const
{
    return status_;
}

void ShowBuildRecordResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowBuildRecordResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowBuildRecordResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


