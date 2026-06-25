

#include "huaweicloud/rds/v3/model/UpdateSparseBackupPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateSparseBackupPolicyResponse::UpdateSparseBackupPolicyResponse()
{
    bodyIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateSparseBackupPolicyResponse::~UpdateSparseBackupPolicyResponse() = default;

void UpdateSparseBackupPolicyResponse::validate()
{
}

web::json::value UpdateSparseBackupPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateSparseBackupPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-request-id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-request-id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


Object UpdateSparseBackupPolicyResponse::getBody() const
{
    return body_;
}

void UpdateSparseBackupPolicyResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSparseBackupPolicyResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSparseBackupPolicyResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string UpdateSparseBackupPolicyResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateSparseBackupPolicyResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateSparseBackupPolicyResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateSparseBackupPolicyResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


