

#include "huaweicloud/cdn/v2/model/VerifyDomainOwnerRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




VerifyDomainOwnerRequestBody::VerifyDomainOwnerRequestBody()
{
    verifyType_ = "";
    verifyTypeIsSet_ = false;
}

VerifyDomainOwnerRequestBody::~VerifyDomainOwnerRequestBody() = default;

void VerifyDomainOwnerRequestBody::validate()
{
}

web::json::value VerifyDomainOwnerRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(verifyTypeIsSet_) {
        val[utility::conversions::to_string_t("verify_type")] = ModelBase::toJson(verifyType_);
    }

    return val;
}
bool VerifyDomainOwnerRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("verify_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verify_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerifyType(refVal);
        }
    }
    return ok;
}


std::string VerifyDomainOwnerRequestBody::getVerifyType() const
{
    return verifyType_;
}

void VerifyDomainOwnerRequestBody::setVerifyType(const std::string& value)
{
    verifyType_ = value;
    verifyTypeIsSet_ = true;
}

bool VerifyDomainOwnerRequestBody::verifyTypeIsSet() const
{
    return verifyTypeIsSet_;
}

void VerifyDomainOwnerRequestBody::unsetverifyType()
{
    verifyTypeIsSet_ = false;
}

}
}
}
}
}


