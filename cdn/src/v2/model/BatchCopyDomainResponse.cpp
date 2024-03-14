

#include "huaweicloud/cdn/v2/model/BatchCopyDomainResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




BatchCopyDomainResponse::BatchCopyDomainResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

BatchCopyDomainResponse::~BatchCopyDomainResponse() = default;

void BatchCopyDomainResponse::validate()
{
}

web::json::value BatchCopyDomainResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool BatchCopyDomainResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchCopyResultVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::vector<BatchCopyResultVo>& BatchCopyDomainResponse::getResult()
{
    return result_;
}

void BatchCopyDomainResponse::setResult(const std::vector<BatchCopyResultVo>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchCopyDomainResponse::resultIsSet() const
{
    return resultIsSet_;
}

void BatchCopyDomainResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string BatchCopyDomainResponse::getXRequestId() const
{
    return xRequestId_;
}

void BatchCopyDomainResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchCopyDomainResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchCopyDomainResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


