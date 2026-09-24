

#include "huaweicloud/cbr/v1/model/UpdateExpirationTimeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




UpdateExpirationTimeRequest::UpdateExpirationTimeRequest()
{
    vaultId_ = "";
    vaultIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateExpirationTimeRequest::~UpdateExpirationTimeRequest() = default;

void UpdateExpirationTimeRequest::validate()
{
}

web::json::value UpdateExpirationTimeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateExpirationTimeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vault_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVaultId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateExpirationTimeReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateExpirationTimeRequest::getVaultId() const
{
    return vaultId_;
}

void UpdateExpirationTimeRequest::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool UpdateExpirationTimeRequest::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void UpdateExpirationTimeRequest::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

UpdateExpirationTimeReq UpdateExpirationTimeRequest::getBody() const
{
    return body_;
}

void UpdateExpirationTimeRequest::setBody(const UpdateExpirationTimeReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateExpirationTimeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateExpirationTimeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


