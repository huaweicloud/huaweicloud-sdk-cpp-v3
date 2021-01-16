

#include "huaweicloud/eip/v2/model/CreatePublicipResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




CreatePublicipResponse::CreatePublicipResponse()
{
    publicipIsSet_ = false;
}

CreatePublicipResponse::~CreatePublicipResponse() = default;

void CreatePublicipResponse::validate()
{
}

web::json::value CreatePublicipResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIsSet_) {
        val[utility::conversions::to_string_t("publicip")] = ModelBase::toJson(publicip_);
    }

    return val;
}

bool CreatePublicipResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip"));
        if(!fieldValue.is_null())
        {
            PublicipCreateResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicip(refVal);
        }
    }
    return ok;
}


PublicipCreateResp CreatePublicipResponse::getPublicip() const
{
    return publicip_;
}

void CreatePublicipResponse::setPublicip(const PublicipCreateResp& value)
{
    publicip_ = value;
    publicipIsSet_ = true;
}

bool CreatePublicipResponse::publicipIsSet() const
{
    return publicipIsSet_;
}

void CreatePublicipResponse::unsetpublicip()
{
    publicipIsSet_ = false;
}

}
}
}
}
}


