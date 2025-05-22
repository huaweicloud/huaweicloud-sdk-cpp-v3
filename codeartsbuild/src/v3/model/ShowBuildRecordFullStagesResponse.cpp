

#include "huaweicloud/codeartsbuild/v3/model/ShowBuildRecordFullStagesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowBuildRecordFullStagesResponse::ShowBuildRecordFullStagesResponse()
{
    status_ = "";
    statusIsSet_ = false;
    errorIsSet_ = false;
    resultIsSet_ = false;
}

ShowBuildRecordFullStagesResponse::~ShowBuildRecordFullStagesResponse() = default;

void ShowBuildRecordFullStagesResponse::validate()
{
}

web::json::value ShowBuildRecordFullStagesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ShowBuildRecordFullStagesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            FullStages_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowBuildRecordFullStagesResponse::getStatus() const
{
    return status_;
}

void ShowBuildRecordFullStagesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowBuildRecordFullStagesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowBuildRecordFullStagesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object ShowBuildRecordFullStagesResponse::getError() const
{
    return error_;
}

void ShowBuildRecordFullStagesResponse::setError(const Object& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowBuildRecordFullStagesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowBuildRecordFullStagesResponse::unseterror()
{
    errorIsSet_ = false;
}

FullStages_result ShowBuildRecordFullStagesResponse::getResult() const
{
    return result_;
}

void ShowBuildRecordFullStagesResponse::setResult(const FullStages_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowBuildRecordFullStagesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowBuildRecordFullStagesResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


