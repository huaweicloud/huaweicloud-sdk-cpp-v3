

#include "huaweicloud/codeartsbuild/v3/model/ShowRecordDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowRecordDetailResponse::ShowRecordDetailResponse()
{
    status_ = "";
    statusIsSet_ = false;
    errorIsSet_ = false;
    resultIsSet_ = false;
}

ShowRecordDetailResponse::~ShowRecordDetailResponse() = default;

void ShowRecordDetailResponse::validate()
{
}

web::json::value ShowRecordDetailResponse::toJson() const
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
bool ShowRecordDetailResponse::fromJson(const web::json::value& val)
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


std::string ShowRecordDetailResponse::getStatus() const
{
    return status_;
}

void ShowRecordDetailResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowRecordDetailResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowRecordDetailResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object ShowRecordDetailResponse::getError() const
{
    return error_;
}

void ShowRecordDetailResponse::setError(const Object& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowRecordDetailResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowRecordDetailResponse::unseterror()
{
    errorIsSet_ = false;
}

RecordInfo2_result ShowRecordDetailResponse::getResult() const
{
    return result_;
}

void ShowRecordDetailResponse::setResult(const RecordInfo2_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowRecordDetailResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowRecordDetailResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


