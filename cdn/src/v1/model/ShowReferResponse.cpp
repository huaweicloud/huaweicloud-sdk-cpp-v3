

#include "huaweicloud/cdn/v1/model/ShowReferResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ShowReferResponse::ShowReferResponse()
{
    refererIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowReferResponse::~ShowReferResponse() = default;

void ShowReferResponse::validate()
{
}

web::json::value ShowReferResponse::toJson() const
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
bool ShowReferResponse::fromJson(const web::json::value& val)
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


RefererRsp ShowReferResponse::getReferer() const
{
    return referer_;
}

void ShowReferResponse::setReferer(const RefererRsp& value)
{
    referer_ = value;
    refererIsSet_ = true;
}

bool ShowReferResponse::refererIsSet() const
{
    return refererIsSet_;
}

void ShowReferResponse::unsetreferer()
{
    refererIsSet_ = false;
}

std::string ShowReferResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowReferResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowReferResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowReferResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


