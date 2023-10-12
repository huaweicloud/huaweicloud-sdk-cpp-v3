

#include "huaweicloud/eip/v2/model/UpdatePublicipResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




UpdatePublicipResponse::UpdatePublicipResponse()
{
    publicipIsSet_ = false;
}

UpdatePublicipResponse::~UpdatePublicipResponse() = default;

void UpdatePublicipResponse::validate()
{
}

web::json::value UpdatePublicipResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIsSet_) {
        val[utility::conversions::to_string_t("publicip")] = ModelBase::toJson(publicip_);
    }

    return val;
}
bool UpdatePublicipResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip"));
        if(!fieldValue.is_null())
        {
            PublicipUpdateResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicip(refVal);
        }
    }
    return ok;
}


PublicipUpdateResp UpdatePublicipResponse::getPublicip() const
{
    return publicip_;
}

void UpdatePublicipResponse::setPublicip(const PublicipUpdateResp& value)
{
    publicip_ = value;
    publicipIsSet_ = true;
}

bool UpdatePublicipResponse::publicipIsSet() const
{
    return publicipIsSet_;
}

void UpdatePublicipResponse::unsetpublicip()
{
    publicipIsSet_ = false;
}

}
}
}
}
}


