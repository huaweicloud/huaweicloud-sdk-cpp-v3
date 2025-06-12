

#include "huaweicloud/codeartsbuild/v3/model/ShowJobBuildRecordDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobBuildRecordDetailResponse::ShowJobBuildRecordDetailResponse()
{
    status_ = "";
    statusIsSet_ = false;
    errorIsSet_ = false;
    resultIsSet_ = false;
}

ShowJobBuildRecordDetailResponse::~ShowJobBuildRecordDetailResponse() = default;

void ShowJobBuildRecordDetailResponse::validate()
{
}

web::json::value ShowJobBuildRecordDetailResponse::toJson() const
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
bool ShowJobBuildRecordDetailResponse::fromJson(const web::json::value& val)
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
            RecordInfo2_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowJobBuildRecordDetailResponse::getStatus() const
{
    return status_;
}

void ShowJobBuildRecordDetailResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowJobBuildRecordDetailResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowJobBuildRecordDetailResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object ShowJobBuildRecordDetailResponse::getError() const
{
    return error_;
}

void ShowJobBuildRecordDetailResponse::setError(const Object& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowJobBuildRecordDetailResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowJobBuildRecordDetailResponse::unseterror()
{
    errorIsSet_ = false;
}

RecordInfo2_result ShowJobBuildRecordDetailResponse::getResult() const
{
    return result_;
}

void ShowJobBuildRecordDetailResponse::setResult(const RecordInfo2_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowJobBuildRecordDetailResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowJobBuildRecordDetailResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


