

#include "huaweicloud/gaussdbforopengauss/v3/model/StopSessionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




StopSessionResponse::StopSessionResponse()
{
    sessionIdsIsSet_ = false;
    success_ = false;
    successIsSet_ = false;
}

StopSessionResponse::~StopSessionResponse() = default;

void StopSessionResponse::validate()
{
}

web::json::value StopSessionResponse::toJson() const
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
bool StopSessionResponse::fromJson(const web::json::value& val)
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


std::vector<std::string>& StopSessionResponse::getSessionIds()
{
    return sessionIds_;
}

void StopSessionResponse::setSessionIds(const std::vector<std::string>& value)
{
    sessionIds_ = value;
    sessionIdsIsSet_ = true;
}

bool StopSessionResponse::sessionIdsIsSet() const
{
    return sessionIdsIsSet_;
}

void StopSessionResponse::unsetsessionIds()
{
    sessionIdsIsSet_ = false;
}

bool StopSessionResponse::isSuccess() const
{
    return success_;
}

void StopSessionResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool StopSessionResponse::successIsSet() const
{
    return successIsSet_;
}

void StopSessionResponse::unsetsuccess()
{
    successIsSet_ = false;
}

}
}
}
}
}


