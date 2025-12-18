

#include "huaweicloud/meeting/v1/model/CreatePortalRefNonceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CreatePortalRefNonceResponse::CreatePortalRefNonceResponse()
{
    nonce_ = "";
    nonceIsSet_ = false;
}

CreatePortalRefNonceResponse::~CreatePortalRefNonceResponse() = default;

void CreatePortalRefNonceResponse::validate()
{
}

web::json::value CreatePortalRefNonceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nonceIsSet_) {
        val[utility::conversions::to_string_t("nonce")] = ModelBase::toJson(nonce_);
    }

    return val;
}
bool CreatePortalRefNonceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nonce"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nonce"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNonce(refVal);
        }
    }
    return ok;
}


std::string CreatePortalRefNonceResponse::getNonce() const
{
    return nonce_;
}

void CreatePortalRefNonceResponse::setNonce(const std::string& value)
{
    nonce_ = value;
    nonceIsSet_ = true;
}

bool CreatePortalRefNonceResponse::nonceIsSet() const
{
    return nonceIsSet_;
}

void CreatePortalRefNonceResponse::unsetnonce()
{
    nonceIsSet_ = false;
}

}
}
}
}
}


