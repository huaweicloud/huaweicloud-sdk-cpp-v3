

#include "huaweicloud/eip/v3/model/DisassociatePublicipsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




DisassociatePublicipsRequest::DisassociatePublicipsRequest()
{
    publicipId_ = "";
    publicipIdIsSet_ = false;
}

DisassociatePublicipsRequest::~DisassociatePublicipsRequest() = default;

void DisassociatePublicipsRequest::validate()
{
}

web::json::value DisassociatePublicipsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIdIsSet_) {
        val[utility::conversions::to_string_t("publicip_id")] = ModelBase::toJson(publicipId_);
    }

    return val;
}
bool DisassociatePublicipsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipId(refVal);
        }
    }
    return ok;
}


std::string DisassociatePublicipsRequest::getPublicipId() const
{
    return publicipId_;
}

void DisassociatePublicipsRequest::setPublicipId(const std::string& value)
{
    publicipId_ = value;
    publicipIdIsSet_ = true;
}

bool DisassociatePublicipsRequest::publicipIdIsSet() const
{
    return publicipIdIsSet_;
}

void DisassociatePublicipsRequest::unsetpublicipId()
{
    publicipIdIsSet_ = false;
}

}
}
}
}
}


