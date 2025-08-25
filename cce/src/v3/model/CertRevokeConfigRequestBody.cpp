

#include "huaweicloud/cce/v3/model/CertRevokeConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CertRevokeConfigRequestBody::CertRevokeConfigRequestBody()
{
    userId_ = "";
    userIdIsSet_ = false;
    agencyId_ = "";
    agencyIdIsSet_ = false;
}

CertRevokeConfigRequestBody::~CertRevokeConfigRequestBody() = default;

void CertRevokeConfigRequestBody::validate()
{
}

web::json::value CertRevokeConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("userId")] = ModelBase::toJson(userId_);
    }
    if(agencyIdIsSet_) {
        val[utility::conversions::to_string_t("agencyId")] = ModelBase::toJson(agencyId_);
    }

    return val;
}
bool CertRevokeConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("userId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agencyId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agencyId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyId(refVal);
        }
    }
    return ok;
}


std::string CertRevokeConfigRequestBody::getUserId() const
{
    return userId_;
}

void CertRevokeConfigRequestBody::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool CertRevokeConfigRequestBody::userIdIsSet() const
{
    return userIdIsSet_;
}

void CertRevokeConfigRequestBody::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string CertRevokeConfigRequestBody::getAgencyId() const
{
    return agencyId_;
}

void CertRevokeConfigRequestBody::setAgencyId(const std::string& value)
{
    agencyId_ = value;
    agencyIdIsSet_ = true;
}

bool CertRevokeConfigRequestBody::agencyIdIsSet() const
{
    return agencyIdIsSet_;
}

void CertRevokeConfigRequestBody::unsetagencyId()
{
    agencyIdIsSet_ = false;
}

}
}
}
}
}


