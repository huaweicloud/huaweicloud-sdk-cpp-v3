

#include "huaweicloud/ram/v1/model/SearchSharedPrincipalsReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SearchSharedPrincipalsReqBody::SearchSharedPrincipalsReqBody()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    principalsIsSet_ = false;
    resourceUrn_ = "";
    resourceUrnIsSet_ = false;
    resourceOwner_ = "";
    resourceOwnerIsSet_ = false;
    resourceShareIdsIsSet_ = false;
}

SearchSharedPrincipalsReqBody::~SearchSharedPrincipalsReqBody() = default;

void SearchSharedPrincipalsReqBody::validate()
{
}

web::json::value SearchSharedPrincipalsReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(principalsIsSet_) {
        val[utility::conversions::to_string_t("principals")] = ModelBase::toJson(principals_);
    }
    if(resourceUrnIsSet_) {
        val[utility::conversions::to_string_t("resource_urn")] = ModelBase::toJson(resourceUrn_);
    }
    if(resourceOwnerIsSet_) {
        val[utility::conversions::to_string_t("resource_owner")] = ModelBase::toJson(resourceOwner_);
    }
    if(resourceShareIdsIsSet_) {
        val[utility::conversions::to_string_t("resource_share_ids")] = ModelBase::toJson(resourceShareIds_);
    }

    return val;
}
bool SearchSharedPrincipalsReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("principals"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("principals"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrincipals(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_share_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_share_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceShareIds(refVal);
        }
    }
    return ok;
}


int32_t SearchSharedPrincipalsReqBody::getLimit() const
{
    return limit_;
}

void SearchSharedPrincipalsReqBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchSharedPrincipalsReqBody::limitIsSet() const
{
    return limitIsSet_;
}

void SearchSharedPrincipalsReqBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SearchSharedPrincipalsReqBody::getMarker() const
{
    return marker_;
}

void SearchSharedPrincipalsReqBody::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool SearchSharedPrincipalsReqBody::markerIsSet() const
{
    return markerIsSet_;
}

void SearchSharedPrincipalsReqBody::unsetmarker()
{
    markerIsSet_ = false;
}

std::vector<std::string>& SearchSharedPrincipalsReqBody::getPrincipals()
{
    return principals_;
}

void SearchSharedPrincipalsReqBody::setPrincipals(const std::vector<std::string>& value)
{
    principals_ = value;
    principalsIsSet_ = true;
}

bool SearchSharedPrincipalsReqBody::principalsIsSet() const
{
    return principalsIsSet_;
}

void SearchSharedPrincipalsReqBody::unsetprincipals()
{
    principalsIsSet_ = false;
}

std::string SearchSharedPrincipalsReqBody::getResourceUrn() const
{
    return resourceUrn_;
}

void SearchSharedPrincipalsReqBody::setResourceUrn(const std::string& value)
{
    resourceUrn_ = value;
    resourceUrnIsSet_ = true;
}

bool SearchSharedPrincipalsReqBody::resourceUrnIsSet() const
{
    return resourceUrnIsSet_;
}

void SearchSharedPrincipalsReqBody::unsetresourceUrn()
{
    resourceUrnIsSet_ = false;
}

std::string SearchSharedPrincipalsReqBody::getResourceOwner() const
{
    return resourceOwner_;
}

void SearchSharedPrincipalsReqBody::setResourceOwner(const std::string& value)
{
    resourceOwner_ = value;
    resourceOwnerIsSet_ = true;
}

bool SearchSharedPrincipalsReqBody::resourceOwnerIsSet() const
{
    return resourceOwnerIsSet_;
}

void SearchSharedPrincipalsReqBody::unsetresourceOwner()
{
    resourceOwnerIsSet_ = false;
}

std::vector<std::string>& SearchSharedPrincipalsReqBody::getResourceShareIds()
{
    return resourceShareIds_;
}

void SearchSharedPrincipalsReqBody::setResourceShareIds(const std::vector<std::string>& value)
{
    resourceShareIds_ = value;
    resourceShareIdsIsSet_ = true;
}

bool SearchSharedPrincipalsReqBody::resourceShareIdsIsSet() const
{
    return resourceShareIdsIsSet_;
}

void SearchSharedPrincipalsReqBody::unsetresourceShareIds()
{
    resourceShareIdsIsSet_ = false;
}

}
}
}
}
}


