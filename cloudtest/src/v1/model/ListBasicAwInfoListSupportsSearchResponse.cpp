

#include "huaweicloud/cloudtest/v1/model/ListBasicAwInfoListSupportsSearchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListBasicAwInfoListSupportsSearchResponse::ListBasicAwInfoListSupportsSearchResponse()
{
    code_ = "";
    codeIsSet_ = false;
    errorIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListBasicAwInfoListSupportsSearchResponse::~ListBasicAwInfoListSupportsSearchResponse() = default;

void ListBasicAwInfoListSupportsSearchResponse::validate()
{
}

web::json::value ListBasicAwInfoListSupportsSearchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ListBasicAwInfoListSupportsSearchResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            CommonResponseErrorPageResultBasicAWInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            PageResultBasicAWInfo refVal;
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


std::string ListBasicAwInfoListSupportsSearchResponse::getCode() const
{
    return code_;
}

void ListBasicAwInfoListSupportsSearchResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ListBasicAwInfoListSupportsSearchResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ListBasicAwInfoListSupportsSearchResponse::unsetcode()
{
    codeIsSet_ = false;
}

CommonResponseErrorPageResultBasicAWInfo ListBasicAwInfoListSupportsSearchResponse::getError() const
{
    return error_;
}

void ListBasicAwInfoListSupportsSearchResponse::setError(const CommonResponseErrorPageResultBasicAWInfo& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListBasicAwInfoListSupportsSearchResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListBasicAwInfoListSupportsSearchResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListBasicAwInfoListSupportsSearchResponse::getReason() const
{
    return reason_;
}

void ListBasicAwInfoListSupportsSearchResponse::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ListBasicAwInfoListSupportsSearchResponse::reasonIsSet() const
{
    return reasonIsSet_;
}

void ListBasicAwInfoListSupportsSearchResponse::unsetreason()
{
    reasonIsSet_ = false;
}

PageResultBasicAWInfo ListBasicAwInfoListSupportsSearchResponse::getResult() const
{
    return result_;
}

void ListBasicAwInfoListSupportsSearchResponse::setResult(const PageResultBasicAWInfo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListBasicAwInfoListSupportsSearchResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListBasicAwInfoListSupportsSearchResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListBasicAwInfoListSupportsSearchResponse::getStatus() const
{
    return status_;
}

void ListBasicAwInfoListSupportsSearchResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListBasicAwInfoListSupportsSearchResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListBasicAwInfoListSupportsSearchResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


