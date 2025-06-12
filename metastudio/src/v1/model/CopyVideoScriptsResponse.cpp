

#include "huaweicloud/metastudio/v1/model/CopyVideoScriptsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CopyVideoScriptsResponse::CopyVideoScriptsResponse()
{
    scriptId_ = "";
    scriptIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CopyVideoScriptsResponse::~CopyVideoScriptsResponse() = default;

void CopyVideoScriptsResponse::validate()
{
}

web::json::value CopyVideoScriptsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scriptIdIsSet_) {
        val[utility::conversions::to_string_t("script_id")] = ModelBase::toJson(scriptId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CopyVideoScriptsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("script_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptId(refVal);
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


std::string CopyVideoScriptsResponse::getScriptId() const
{
    return scriptId_;
}

void CopyVideoScriptsResponse::setScriptId(const std::string& value)
{
    scriptId_ = value;
    scriptIdIsSet_ = true;
}

bool CopyVideoScriptsResponse::scriptIdIsSet() const
{
    return scriptIdIsSet_;
}

void CopyVideoScriptsResponse::unsetscriptId()
{
    scriptIdIsSet_ = false;
}

std::string CopyVideoScriptsResponse::getXRequestId() const
{
    return xRequestId_;
}

void CopyVideoScriptsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CopyVideoScriptsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CopyVideoScriptsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


