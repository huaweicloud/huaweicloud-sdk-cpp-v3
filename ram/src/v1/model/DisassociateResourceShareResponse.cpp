

#include "huaweicloud/ram/v1/model/DisassociateResourceShareResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




DisassociateResourceShareResponse::DisassociateResourceShareResponse()
{
    resourceShareAssociationsIsSet_ = false;
}

DisassociateResourceShareResponse::~DisassociateResourceShareResponse() = default;

void DisassociateResourceShareResponse::validate()
{
}

web::json::value DisassociateResourceShareResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceShareAssociationsIsSet_) {
        val[utility::conversions::to_string_t("resource_share_associations")] = ModelBase::toJson(resourceShareAssociations_);
    }

    return val;
}
bool DisassociateResourceShareResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_share_associations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_share_associations"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceShareAssociation> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceShareAssociations(refVal);
        }
    }
    return ok;
}


std::vector<ResourceShareAssociation>& DisassociateResourceShareResponse::getResourceShareAssociations()
{
    return resourceShareAssociations_;
}

void DisassociateResourceShareResponse::setResourceShareAssociations(const std::vector<ResourceShareAssociation>& value)
{
    resourceShareAssociations_ = value;
    resourceShareAssociationsIsSet_ = true;
}

bool DisassociateResourceShareResponse::resourceShareAssociationsIsSet() const
{
    return resourceShareAssociationsIsSet_;
}

void DisassociateResourceShareResponse::unsetresourceShareAssociations()
{
    resourceShareAssociationsIsSet_ = false;
}

}
}
}
}
}


