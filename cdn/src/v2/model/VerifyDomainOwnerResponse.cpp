

#include "huaweicloud/cdn/v2/model/VerifyDomainOwnerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




VerifyDomainOwnerResponse::VerifyDomainOwnerResponse()
{
    result_ = false;
    resultIsSet_ = false;
}

VerifyDomainOwnerResponse::~VerifyDomainOwnerResponse() = default;

void VerifyDomainOwnerResponse::validate()
{
}

web::json::value VerifyDomainOwnerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool VerifyDomainOwnerResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


bool VerifyDomainOwnerResponse::isResult() const
{
    return result_;
}

void VerifyDomainOwnerResponse::setResult(bool value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool VerifyDomainOwnerResponse::resultIsSet() const
{
    return resultIsSet_;
}

void VerifyDomainOwnerResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


