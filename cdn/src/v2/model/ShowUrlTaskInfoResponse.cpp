

#include "huaweicloud/cdn/v2/model/ShowUrlTaskInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowUrlTaskInfoResponse::ShowUrlTaskInfoResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowUrlTaskInfoResponse::~ShowUrlTaskInfoResponse() = default;

void ShowUrlTaskInfoResponse::validate()
{
}

web::json::value ShowUrlTaskInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowUrlTaskInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<Urls> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-request-id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-request-id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


int32_t ShowUrlTaskInfoResponse::getTotal() const
{
    return total_;
}

void ShowUrlTaskInfoResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowUrlTaskInfoResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowUrlTaskInfoResponse::unsettotal()
{
    totalIsSet_ = false;
}

int32_t ShowUrlTaskInfoResponse::getCount() const
{
    return count_;
}

void ShowUrlTaskInfoResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowUrlTaskInfoResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowUrlTaskInfoResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<Urls>& ShowUrlTaskInfoResponse::getResult()
{
    return result_;
}

void ShowUrlTaskInfoResponse::setResult(const std::vector<Urls>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowUrlTaskInfoResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowUrlTaskInfoResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowUrlTaskInfoResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowUrlTaskInfoResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowUrlTaskInfoResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowUrlTaskInfoResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


