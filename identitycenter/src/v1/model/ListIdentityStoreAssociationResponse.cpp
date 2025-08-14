

#include "huaweicloud/identitycenter/v1/model/ListIdentityStoreAssociationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListIdentityStoreAssociationResponse::ListIdentityStoreAssociationResponse()
{
    identityStoreAssociationsIsSet_ = false;
}

ListIdentityStoreAssociationResponse::~ListIdentityStoreAssociationResponse() = default;

void ListIdentityStoreAssociationResponse::validate()
{
}

web::json::value ListIdentityStoreAssociationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identityStoreAssociationsIsSet_) {
        val[utility::conversions::to_string_t("identity_store_associations")] = ModelBase::toJson(identityStoreAssociations_);
    }

    return val;
}
bool ListIdentityStoreAssociationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("identity_store_associations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_store_associations"));
        if(!fieldValue.is_null())
        {
            std::vector<IdentityStoreDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityStoreAssociations(refVal);
        }
    }
    return ok;
}


std::vector<IdentityStoreDto>& ListIdentityStoreAssociationResponse::getIdentityStoreAssociations()
{
    return identityStoreAssociations_;
}

void ListIdentityStoreAssociationResponse::setIdentityStoreAssociations(const std::vector<IdentityStoreDto>& value)
{
    identityStoreAssociations_ = value;
    identityStoreAssociationsIsSet_ = true;
}

bool ListIdentityStoreAssociationResponse::identityStoreAssociationsIsSet() const
{
    return identityStoreAssociationsIsSet_;
}

void ListIdentityStoreAssociationResponse::unsetidentityStoreAssociations()
{
    identityStoreAssociationsIsSet_ = false;
}

}
}
}
}
}


