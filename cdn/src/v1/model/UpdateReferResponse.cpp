

#include "huaweicloud/cdn/v1/model/UpdateReferResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateReferResponse::UpdateReferResponse()
{
    refererIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateReferResponse::~UpdateReferResponse() = default;

void UpdateReferResponse::validate()
{
}

web::json::value UpdateReferResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(refererIsSet_) {
        val[utility::conversions::to_string_t("referer")] = ModelBase::toJson(referer_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateReferResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("referer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("referer"));
        if(!fieldValue.is_null())
        {
            RefererRsp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReferer(refVal);
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


RefererRsp UpdateReferResponse::getReferer() const
{
    return referer_;
}

void UpdateReferResponse::setReferer(const RefererRsp& value)
{
    referer_ = value;
    refererIsSet_ = true;
}

bool UpdateReferResponse::refererIsSet() const
{
    return refererIsSet_;
}

void UpdateReferResponse::unsetreferer()
{
    refererIsSet_ = false;
}

std::string UpdateReferResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateReferResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateReferResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateReferResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


