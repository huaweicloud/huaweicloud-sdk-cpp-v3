

#include "huaweicloud/ram/v1/model/SearchResourceShareAssociationsReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SearchResourceShareAssociationsReqBody::SearchResourceShareAssociationsReqBody()
{
    associationStatus_ = "";
    associationStatusIsSet_ = false;
    associationType_ = "";
    associationTypeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    principal_ = "";
    principalIsSet_ = false;
    resourceUrn_ = "";
    resourceUrnIsSet_ = false;
    resourceShareIdsIsSet_ = false;
    resourceIdsIsSet_ = false;
}

SearchResourceShareAssociationsReqBody::~SearchResourceShareAssociationsReqBody() = default;

void SearchResourceShareAssociationsReqBody::validate()
{
}

web::json::value SearchResourceShareAssociationsReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(associationStatusIsSet_) {
        val[utility::conversions::to_string_t("association_status")] = ModelBase::toJson(associationStatus_);
    }
    if(associationTypeIsSet_) {
        val[utility::conversions::to_string_t("association_type")] = ModelBase::toJson(associationType_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(principalIsSet_) {
        val[utility::conversions::to_string_t("principal")] = ModelBase::toJson(principal_);
    }
    if(resourceUrnIsSet_) {
        val[utility::conversions::to_string_t("resource_urn")] = ModelBase::toJson(resourceUrn_);
    }
    if(resourceShareIdsIsSet_) {
        val[utility::conversions::to_string_t("resource_share_ids")] = ModelBase::toJson(resourceShareIds_);
    }
    if(resourceIdsIsSet_) {
        val[utility::conversions::to_string_t("resource_ids")] = ModelBase::toJson(resourceIds_);
    }

    return val;
}
bool SearchResourceShareAssociationsReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("association_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("association_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociationStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("association_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("association_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociationType(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("principal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("principal"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrincipal(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resource_share_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_share_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceShareIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceIds(refVal);
        }
    }
    return ok;
}


std::string SearchResourceShareAssociationsReqBody::getAssociationStatus() const
{
    return associationStatus_;
}

void SearchResourceShareAssociationsReqBody::setAssociationStatus(const std::string& value)
{
    associationStatus_ = value;
    associationStatusIsSet_ = true;
}

bool SearchResourceShareAssociationsReqBody::associationStatusIsSet() const
{
    return associationStatusIsSet_;
}

void SearchResourceShareAssociationsReqBody::unsetassociationStatus()
{
    associationStatusIsSet_ = false;
}

std::string SearchResourceShareAssociationsReqBody::getAssociationType() const
{
    return associationType_;
}

void SearchResourceShareAssociationsReqBody::setAssociationType(const std::string& value)
{
    associationType_ = value;
    associationTypeIsSet_ = true;
}

bool SearchResourceShareAssociationsReqBody::associationTypeIsSet() const
{
    return associationTypeIsSet_;
}

void SearchResourceShareAssociationsReqBody::unsetassociationType()
{
    associationTypeIsSet_ = false;
}

int32_t SearchResourceShareAssociationsReqBody::getLimit() const
{
    return limit_;
}

void SearchResourceShareAssociationsReqBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchResourceShareAssociationsReqBody::limitIsSet() const
{
    return limitIsSet_;
}

void SearchResourceShareAssociationsReqBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SearchResourceShareAssociationsReqBody::getMarker() const
{
    return marker_;
}

void SearchResourceShareAssociationsReqBody::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool SearchResourceShareAssociationsReqBody::markerIsSet() const
{
    return markerIsSet_;
}

void SearchResourceShareAssociationsReqBody::unsetmarker()
{
    markerIsSet_ = false;
}

std::string SearchResourceShareAssociationsReqBody::getPrincipal() const
{
    return principal_;
}

void SearchResourceShareAssociationsReqBody::setPrincipal(const std::string& value)
{
    principal_ = value;
    principalIsSet_ = true;
}

bool SearchResourceShareAssociationsReqBody::principalIsSet() const
{
    return principalIsSet_;
}

void SearchResourceShareAssociationsReqBody::unsetprincipal()
{
    principalIsSet_ = false;
}

std::string SearchResourceShareAssociationsReqBody::getResourceUrn() const
{
    return resourceUrn_;
}

void SearchResourceShareAssociationsReqBody::setResourceUrn(const std::string& value)
{
    resourceUrn_ = value;
    resourceUrnIsSet_ = true;
}

bool SearchResourceShareAssociationsReqBody::resourceUrnIsSet() const
{
    return resourceUrnIsSet_;
}

void SearchResourceShareAssociationsReqBody::unsetresourceUrn()
{
    resourceUrnIsSet_ = false;
}

std::vector<std::string>& SearchResourceShareAssociationsReqBody::getResourceShareIds()
{
    return resourceShareIds_;
}

void SearchResourceShareAssociationsReqBody::setResourceShareIds(const std::vector<std::string>& value)
{
    resourceShareIds_ = value;
    resourceShareIdsIsSet_ = true;
}

bool SearchResourceShareAssociationsReqBody::resourceShareIdsIsSet() const
{
    return resourceShareIdsIsSet_;
}

void SearchResourceShareAssociationsReqBody::unsetresourceShareIds()
{
    resourceShareIdsIsSet_ = false;
}

std::vector<std::string>& SearchResourceShareAssociationsReqBody::getResourceIds()
{
    return resourceIds_;
}

void SearchResourceShareAssociationsReqBody::setResourceIds(const std::vector<std::string>& value)
{
    resourceIds_ = value;
    resourceIdsIsSet_ = true;
}

bool SearchResourceShareAssociationsReqBody::resourceIdsIsSet() const
{
    return resourceIdsIsSet_;
}

void SearchResourceShareAssociationsReqBody::unsetresourceIds()
{
    resourceIdsIsSet_ = false;
}

}
}
}
}
}


