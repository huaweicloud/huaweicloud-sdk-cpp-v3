

#include "huaweicloud/eip/v3/model/DisassociatePublicipsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




DisassociatePublicipsRequestBody::DisassociatePublicipsRequestBody()
{
    publicipIsSet_ = false;
}

DisassociatePublicipsRequestBody::~DisassociatePublicipsRequestBody() = default;

void DisassociatePublicipsRequestBody::validate()
{
}

web::json::value DisassociatePublicipsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIsSet_) {
        val[utility::conversions::to_string_t("publicip")] = ModelBase::toJson(publicip_);
    }

    return val;
}

bool DisassociatePublicipsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip"));
        if(!fieldValue.is_null())
        {
            DisassociatePublicipsOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicip(refVal);
        }
    }
    return ok;
}

DisassociatePublicipsOption DisassociatePublicipsRequestBody::getPublicip() const
{
    return publicip_;
}

void DisassociatePublicipsRequestBody::setPublicip(const DisassociatePublicipsOption& value)
{
    publicip_ = value;
    publicipIsSet_ = true;
}

bool DisassociatePublicipsRequestBody::publicipIsSet() const
{
    return publicipIsSet_;
}

void DisassociatePublicipsRequestBody::unsetpublicip()
{
    publicipIsSet_ = false;
}

}
}
}
}
}


