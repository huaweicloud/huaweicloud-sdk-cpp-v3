

#include "huaweicloud/gaussdbforopengauss/v3/model/StopTransactionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




StopTransactionResponse::StopTransactionResponse()
{
    sessionIdsIsSet_ = false;
    success_ = false;
    successIsSet_ = false;
}

StopTransactionResponse::~StopTransactionResponse() = default;

void StopTransactionResponse::validate()
{
}

web::json::value StopTransactionResponse::toJson() const
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
bool StopTransactionResponse::fromJson(const web::json::value& val)
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


std::vector<std::string>& StopTransactionResponse::getSessionIds()
{
    return sessionIds_;
}

void StopTransactionResponse::setSessionIds(const std::vector<std::string>& value)
{
    sessionIds_ = value;
    sessionIdsIsSet_ = true;
}

bool StopTransactionResponse::sessionIdsIsSet() const
{
    return sessionIdsIsSet_;
}

void StopTransactionResponse::unsetsessionIds()
{
    sessionIdsIsSet_ = false;
}

bool StopTransactionResponse::isSuccess() const
{
    return success_;
}

void StopTransactionResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool StopTransactionResponse::successIsSet() const
{
    return successIsSet_;
}

void StopTransactionResponse::unsetsuccess()
{
    successIsSet_ = false;
}

}
}
}
}
}


