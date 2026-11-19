

#include "huaweicloud/gaussdbforopengauss/v3/model/StopSessionUseOpsTunnelResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




StopSessionUseOpsTunnelResponse::StopSessionUseOpsTunnelResponse()
{
    sessionIdsIsSet_ = false;
    success_ = false;
    successIsSet_ = false;
}

StopSessionUseOpsTunnelResponse::~StopSessionUseOpsTunnelResponse() = default;

void StopSessionUseOpsTunnelResponse::validate()
{
}

web::json::value StopSessionUseOpsTunnelResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sessionIdsIsSet_) {
        val[utility::conversions::to_string_t("session_ids")] = ModelBase::toJson(sessionIds_);
    }
    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }

    return val;
}
bool StopSessionUseOpsTunnelResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("session_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& StopSessionUseOpsTunnelResponse::getSessionIds()
{
    return sessionIds_;
}

void StopSessionUseOpsTunnelResponse::setSessionIds(const std::vector<std::string>& value)
{
    sessionIds_ = value;
    sessionIdsIsSet_ = true;
}

bool StopSessionUseOpsTunnelResponse::sessionIdsIsSet() const
{
    return sessionIdsIsSet_;
}

void StopSessionUseOpsTunnelResponse::unsetsessionIds()
{
    sessionIdsIsSet_ = false;
}

bool StopSessionUseOpsTunnelResponse::isSuccess() const
{
    return success_;
}

void StopSessionUseOpsTunnelResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool StopSessionUseOpsTunnelResponse::successIsSet() const
{
    return successIsSet_;
}

void StopSessionUseOpsTunnelResponse::unsetsuccess()
{
    successIsSet_ = false;
}

}
}
}
}
}


