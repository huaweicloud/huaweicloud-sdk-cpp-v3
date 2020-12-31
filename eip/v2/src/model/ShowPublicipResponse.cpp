

#include "huaweicloud/eip/model/ShowPublicipResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ShowPublicipResponse::ShowPublicipResponse()
{
    publicipIsSet_ = false;
}

ShowPublicipResponse::~ShowPublicipResponse() = default;

void ShowPublicipResponse::validate()
{
}

web::json::value ShowPublicipResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIsSet_) {
        val[utility::conversions::to_string_t("publicip")] = ModelBase::toJson(publicip_);
    }

    return val;
}

bool ShowPublicipResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip"));
        if(!fieldValue.is_null())
        {
            PublicipShowResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicip(refVal);
        }
    }
    return ok;
}


PublicipShowResp ShowPublicipResponse::getPublicip() const
{
    return publicip_;
}

void ShowPublicipResponse::setPublicip(const PublicipShowResp& value)
{
    publicip_ = value;
    publicipIsSet_ = true;
}

bool ShowPublicipResponse::publicipIsSet() const
{
    return publicipIsSet_;
}

void ShowPublicipResponse::unsetpublicip()
{
    publicipIsSet_ = false;
}

}
}
}
}
}


