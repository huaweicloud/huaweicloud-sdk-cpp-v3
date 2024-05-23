

#include "huaweicloud/ram/v1/model/ResourceShareAssociationReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




ResourceShareAssociationReqBody::ResourceShareAssociationReqBody()
{
    principalsIsSet_ = false;
    resourceUrnsIsSet_ = false;
}

ResourceShareAssociationReqBody::~ResourceShareAssociationReqBody() = default;

void ResourceShareAssociationReqBody::validate()
{
}

web::json::value ResourceShareAssociationReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(principalsIsSet_) {
        val[utility::conversions::to_string_t("principals")] = ModelBase::toJson(principals_);
    }
    if(resourceUrnsIsSet_) {
        val[utility::conversions::to_string_t("resource_urns")] = ModelBase::toJson(resourceUrns_);
    }

    return val;
}
bool ResourceShareAssociationReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("principals"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("principals"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrincipals(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_urns"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_urns"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceUrns(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ResourceShareAssociationReqBody::getPrincipals()
{
    return principals_;
}

void ResourceShareAssociationReqBody::setPrincipals(const std::vector<std::string>& value)
{
    principals_ = value;
    principalsIsSet_ = true;
}

bool ResourceShareAssociationReqBody::principalsIsSet() const
{
    return principalsIsSet_;
}

void ResourceShareAssociationReqBody::unsetprincipals()
{
    principalsIsSet_ = false;
}

std::vector<std::string>& ResourceShareAssociationReqBody::getResourceUrns()
{
    return resourceUrns_;
}

void ResourceShareAssociationReqBody::setResourceUrns(const std::vector<std::string>& value)
{
    resourceUrns_ = value;
    resourceUrnsIsSet_ = true;
}

bool ResourceShareAssociationReqBody::resourceUrnsIsSet() const
{
    return resourceUrnsIsSet_;
}

void ResourceShareAssociationReqBody::unsetresourceUrns()
{
    resourceUrnsIsSet_ = false;
}

}
}
}
}
}


