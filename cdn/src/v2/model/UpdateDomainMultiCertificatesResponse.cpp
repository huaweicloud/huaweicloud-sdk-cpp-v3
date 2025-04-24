

#include "huaweicloud/cdn/v2/model/UpdateDomainMultiCertificatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




UpdateDomainMultiCertificatesResponse::UpdateDomainMultiCertificatesResponse()
{
    httpsIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateDomainMultiCertificatesResponse::~UpdateDomainMultiCertificatesResponse() = default;

void UpdateDomainMultiCertificatesResponse::validate()
{
}

web::json::value UpdateDomainMultiCertificatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(httpsIsSet_) {
        val[utility::conversions::to_string_t("https")] = ModelBase::toJson(https_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateDomainMultiCertificatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("https"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https"));
        if(!fieldValue.is_null())
        {
            UpdateDomainMultiCertificatesResponseBodyContent refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttps(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<UpdateDomainMultiCertificatesResponseBody_result> refVal;
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


UpdateDomainMultiCertificatesResponseBodyContent UpdateDomainMultiCertificatesResponse::getHttps() const
{
    return https_;
}

void UpdateDomainMultiCertificatesResponse::setHttps(const UpdateDomainMultiCertificatesResponseBodyContent& value)
{
    https_ = value;
    httpsIsSet_ = true;
}

bool UpdateDomainMultiCertificatesResponse::httpsIsSet() const
{
    return httpsIsSet_;
}

void UpdateDomainMultiCertificatesResponse::unsethttps()
{
    httpsIsSet_ = false;
}

std::string UpdateDomainMultiCertificatesResponse::getStatus() const
{
    return status_;
}

void UpdateDomainMultiCertificatesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateDomainMultiCertificatesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateDomainMultiCertificatesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<UpdateDomainMultiCertificatesResponseBody_result>& UpdateDomainMultiCertificatesResponse::getResult()
{
    return result_;
}

void UpdateDomainMultiCertificatesResponse::setResult(const std::vector<UpdateDomainMultiCertificatesResponseBody_result>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateDomainMultiCertificatesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateDomainMultiCertificatesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string UpdateDomainMultiCertificatesResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateDomainMultiCertificatesResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateDomainMultiCertificatesResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateDomainMultiCertificatesResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


