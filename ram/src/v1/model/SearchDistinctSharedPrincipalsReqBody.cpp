

#include "huaweicloud/ram/v1/model/SearchDistinctSharedPrincipalsReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SearchDistinctSharedPrincipalsReqBody::SearchDistinctSharedPrincipalsReqBody()
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
}

SearchDistinctSharedPrincipalsReqBody::~SearchDistinctSharedPrincipalsReqBody() = default;

void SearchDistinctSharedPrincipalsReqBody::validate()
{
}

web::json::value SearchDistinctSharedPrincipalsReqBody::toJson() const
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

    return val;
}
bool SearchDistinctSharedPrincipalsReqBody::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t SearchDistinctSharedPrincipalsReqBody::getLimit() const
{
    return limit_;
}

void SearchDistinctSharedPrincipalsReqBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchDistinctSharedPrincipalsReqBody::limitIsSet() const
{
    return limitIsSet_;
}

void SearchDistinctSharedPrincipalsReqBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SearchDistinctSharedPrincipalsReqBody::getMarker() const
{
    return marker_;
}

void SearchDistinctSharedPrincipalsReqBody::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool SearchDistinctSharedPrincipalsReqBody::markerIsSet() const
{
    return markerIsSet_;
}

void SearchDistinctSharedPrincipalsReqBody::unsetmarker()
{
    markerIsSet_ = false;
}

std::vector<std::string>& SearchDistinctSharedPrincipalsReqBody::getPrincipals()
{
    return principals_;
}

void SearchDistinctSharedPrincipalsReqBody::setPrincipals(const std::vector<std::string>& value)
{
    principals_ = value;
    principalsIsSet_ = true;
}

bool SearchDistinctSharedPrincipalsReqBody::principalsIsSet() const
{
    return principalsIsSet_;
}

void SearchDistinctSharedPrincipalsReqBody::unsetprincipals()
{
    principalsIsSet_ = false;
}

std::string SearchDistinctSharedPrincipalsReqBody::getResourceUrn() const
{
    return resourceUrn_;
}

void SearchDistinctSharedPrincipalsReqBody::setResourceUrn(const std::string& value)
{
    resourceUrn_ = value;
    resourceUrnIsSet_ = true;
}

bool SearchDistinctSharedPrincipalsReqBody::resourceUrnIsSet() const
{
    return resourceUrnIsSet_;
}

void SearchDistinctSharedPrincipalsReqBody::unsetresourceUrn()
{
    resourceUrnIsSet_ = false;
}

std::string SearchDistinctSharedPrincipalsReqBody::getResourceOwner() const
{
    return resourceOwner_;
}

void SearchDistinctSharedPrincipalsReqBody::setResourceOwner(const std::string& value)
{
    resourceOwner_ = value;
    resourceOwnerIsSet_ = true;
}

bool SearchDistinctSharedPrincipalsReqBody::resourceOwnerIsSet() const
{
    return resourceOwnerIsSet_;
}

void SearchDistinctSharedPrincipalsReqBody::unsetresourceOwner()
{
    resourceOwnerIsSet_ = false;
}

}
}
}
}
}


