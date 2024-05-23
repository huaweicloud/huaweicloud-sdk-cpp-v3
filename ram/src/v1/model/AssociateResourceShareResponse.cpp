

#include "huaweicloud/ram/v1/model/AssociateResourceShareResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




AssociateResourceShareResponse::AssociateResourceShareResponse()
{
    resourceShareAssociationsIsSet_ = false;
}

AssociateResourceShareResponse::~AssociateResourceShareResponse() = default;

void AssociateResourceShareResponse::validate()
{
}

web::json::value AssociateResourceShareResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceShareAssociationsIsSet_) {
        val[utility::conversions::to_string_t("resource_share_associations")] = ModelBase::toJson(resourceShareAssociations_);
    }

    return val;
}
bool AssociateResourceShareResponse::fromJson(const web::json::value& val)
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


std::vector<ResourceShareAssociation>& AssociateResourceShareResponse::getResourceShareAssociations()
{
    return resourceShareAssociations_;
}

void AssociateResourceShareResponse::setResourceShareAssociations(const std::vector<ResourceShareAssociation>& value)
{
    resourceShareAssociations_ = value;
    resourceShareAssociationsIsSet_ = true;
}

bool AssociateResourceShareResponse::resourceShareAssociationsIsSet() const
{
    return resourceShareAssociationsIsSet_;
}

void AssociateResourceShareResponse::unsetresourceShareAssociations()
{
    resourceShareAssociationsIsSet_ = false;
}

}
}
}
}
}


