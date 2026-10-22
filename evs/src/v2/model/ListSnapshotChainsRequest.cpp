

#include "huaweicloud/evs/v2/model/ListSnapshotChainsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ListSnapshotChainsRequest::ListSnapshotChainsRequest()
{
    marker_ = "";
    markerIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
}

ListSnapshotChainsRequest::~ListSnapshotChainsRequest() = default;

void ListSnapshotChainsRequest::validate()
{
}

web::json::value ListSnapshotChainsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }

    return val;
}
bool ListSnapshotChainsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    return ok;
}


std::string ListSnapshotChainsRequest::getMarker() const
{
    return marker_;
}

void ListSnapshotChainsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListSnapshotChainsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListSnapshotChainsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListSnapshotChainsRequest::getLimit() const
{
    return limit_;
}

void ListSnapshotChainsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSnapshotChainsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSnapshotChainsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListSnapshotChainsRequest::getId() const
{
    return id_;
}

void ListSnapshotChainsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListSnapshotChainsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListSnapshotChainsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListSnapshotChainsRequest::getVolumeId() const
{
    return volumeId_;
}

void ListSnapshotChainsRequest::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool ListSnapshotChainsRequest::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void ListSnapshotChainsRequest::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

std::string ListSnapshotChainsRequest::getCategory() const
{
    return category_;
}

void ListSnapshotChainsRequest::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ListSnapshotChainsRequest::categoryIsSet() const
{
    return categoryIsSet_;
}

void ListSnapshotChainsRequest::unsetcategory()
{
    categoryIsSet_ = false;
}

}
}
}
}
}


