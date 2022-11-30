

#include "huaweicloud/eip/v3/model/AssociatePublicipsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




AssociatePublicipsRequestBody::AssociatePublicipsRequestBody()
{
    publicipIsSet_ = false;
}

AssociatePublicipsRequestBody::~AssociatePublicipsRequestBody() = default;

void AssociatePublicipsRequestBody::validate()
{
}

web::json::value AssociatePublicipsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIsSet_) {
        val[utility::conversions::to_string_t("publicip")] = ModelBase::toJson(publicip_);
    }

    return val;
}

bool AssociatePublicipsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip"));
        if(!fieldValue.is_null())
        {
            AssociatePublicipsOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicip(refVal);
        }
    }
    return ok;
}


AssociatePublicipsOption AssociatePublicipsRequestBody::getPublicip() const
{
    return publicip_;
}

void AssociatePublicipsRequestBody::setPublicip(const AssociatePublicipsOption& value)
{
    publicip_ = value;
    publicipIsSet_ = true;
}

bool AssociatePublicipsRequestBody::publicipIsSet() const
{
    return publicipIsSet_;
}

void AssociatePublicipsRequestBody::unsetpublicip()
{
    publicipIsSet_ = false;
}

}
}
}
}
}


