

#include "huaweicloud/metastudio/v1/model/ResetActiveCodeReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ResetActiveCodeReq::ResetActiveCodeReq()
{
    cleanAuthCredential_ = false;
    cleanAuthCredentialIsSet_ = false;
}

ResetActiveCodeReq::~ResetActiveCodeReq() = default;

void ResetActiveCodeReq::validate()
{
}

web::json::value ResetActiveCodeReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cleanAuthCredentialIsSet_) {
        val[utility::conversions::to_string_t("clean_auth_credential")] = ModelBase::toJson(cleanAuthCredential_);
    }

    return val;
}
bool ResetActiveCodeReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("clean_auth_credential"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clean_auth_credential"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCleanAuthCredential(refVal);
        }
    }
    return ok;
}


bool ResetActiveCodeReq::isCleanAuthCredential() const
{
    return cleanAuthCredential_;
}

void ResetActiveCodeReq::setCleanAuthCredential(bool value)
{
    cleanAuthCredential_ = value;
    cleanAuthCredentialIsSet_ = true;
}

bool ResetActiveCodeReq::cleanAuthCredentialIsSet() const
{
    return cleanAuthCredentialIsSet_;
}

void ResetActiveCodeReq::unsetcleanAuthCredential()
{
    cleanAuthCredentialIsSet_ = false;
}

}
}
}
}
}


