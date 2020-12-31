

#include "huaweicloud/eip/model/UpdatePublicipsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




UpdatePublicipsRequestBody::UpdatePublicipsRequestBody()
{
    publicipIsSet_ = false;
}

UpdatePublicipsRequestBody::~UpdatePublicipsRequestBody() = default;

void UpdatePublicipsRequestBody::validate()
{
}

web::json::value UpdatePublicipsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIsSet_) {
        val[utility::conversions::to_string_t("publicip")] = ModelBase::toJson(publicip_);
    }

    return val;
}

bool UpdatePublicipsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip"));
        if(!fieldValue.is_null())
        {
            UpdatePublicipOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicip(refVal);
        }
    }
    return ok;
}


UpdatePublicipOption UpdatePublicipsRequestBody::getPublicip() const
{
    return publicip_;
}

void UpdatePublicipsRequestBody::setPublicip(const UpdatePublicipOption& value)
{
    publicip_ = value;
    publicipIsSet_ = true;
}

bool UpdatePublicipsRequestBody::publicipIsSet() const
{
    return publicipIsSet_;
}

void UpdatePublicipsRequestBody::unsetpublicip()
{
    publicipIsSet_ = false;
}

}
}
}
}
}


