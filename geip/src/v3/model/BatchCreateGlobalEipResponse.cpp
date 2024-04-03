

#include "huaweicloud/geip/v3/model/BatchCreateGlobalEipResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchCreateGlobalEipResponse::BatchCreateGlobalEipResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    globalEipsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

BatchCreateGlobalEipResponse::~BatchCreateGlobalEipResponse() = default;

void BatchCreateGlobalEipResponse::validate()
{
}

web::json::value BatchCreateGlobalEipResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(globalEipsIsSet_) {
        val[utility::conversions::to_string_t("global_eips")] = ModelBase::toJson(globalEips_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool BatchCreateGlobalEipResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("global_eips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eips"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchCreateGlobalEipJob> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEips(refVal);
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


std::string BatchCreateGlobalEipResponse::getRequestId() const
{
    return requestId_;
}

void BatchCreateGlobalEipResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool BatchCreateGlobalEipResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void BatchCreateGlobalEipResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::vector<BatchCreateGlobalEipJob>& BatchCreateGlobalEipResponse::getGlobalEips()
{
    return globalEips_;
}

void BatchCreateGlobalEipResponse::setGlobalEips(const std::vector<BatchCreateGlobalEipJob>& value)
{
    globalEips_ = value;
    globalEipsIsSet_ = true;
}

bool BatchCreateGlobalEipResponse::globalEipsIsSet() const
{
    return globalEipsIsSet_;
}

void BatchCreateGlobalEipResponse::unsetglobalEips()
{
    globalEipsIsSet_ = false;
}

std::string BatchCreateGlobalEipResponse::getXRequestId() const
{
    return xRequestId_;
}

void BatchCreateGlobalEipResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchCreateGlobalEipResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchCreateGlobalEipResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


