

#include "huaweicloud/eip/v3/model/ListShareBandwidthTypesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ListShareBandwidthTypesRequest::ListShareBandwidthTypesRequest()
{
    fields_ = "";
    fieldsIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    bandwidthType_ = "";
    bandwidthTypeIsSet_ = false;
    nameEn_ = "";
    nameEnIsSet_ = false;
    nameZh_ = "";
    nameZhIsSet_ = false;
    publicBorderGroup_ = "";
    publicBorderGroupIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListShareBandwidthTypesRequest::~ListShareBandwidthTypesRequest() = default;

void ListShareBandwidthTypesRequest::validate()
{
}

web::json::value ListShareBandwidthTypesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(bandwidthTypeIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_type")] = ModelBase::toJson(bandwidthType_);
    }
    if(nameEnIsSet_) {
        val[utility::conversions::to_string_t("name_en")] = ModelBase::toJson(nameEn_);
    }
    if(nameZhIsSet_) {
        val[utility::conversions::to_string_t("name_zh")] = ModelBase::toJson(nameZh_);
    }
    if(publicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("public_border_group")] = ModelBase::toJson(publicBorderGroup_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}

bool ListShareBandwidthTypesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("bandwidth_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name_zh"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_zh"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameZh(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_border_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_border_group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicBorderGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ListShareBandwidthTypesRequest::getFields() const
{
    return fields_;
}

void ListShareBandwidthTypesRequest::setFields(const std::string& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ListShareBandwidthTypesRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ListShareBandwidthTypesRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

std::string ListShareBandwidthTypesRequest::getId() const
{
    return id_;
}

void ListShareBandwidthTypesRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListShareBandwidthTypesRequest::idIsSet() const
{
    return idIsSet_;
}

void ListShareBandwidthTypesRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListShareBandwidthTypesRequest::getBandwidthType() const
{
    return bandwidthType_;
}

void ListShareBandwidthTypesRequest::setBandwidthType(const std::string& value)
{
    bandwidthType_ = value;
    bandwidthTypeIsSet_ = true;
}

bool ListShareBandwidthTypesRequest::bandwidthTypeIsSet() const
{
    return bandwidthTypeIsSet_;
}

void ListShareBandwidthTypesRequest::unsetbandwidthType()
{
    bandwidthTypeIsSet_ = false;
}

std::string ListShareBandwidthTypesRequest::getNameEn() const
{
    return nameEn_;
}

void ListShareBandwidthTypesRequest::setNameEn(const std::string& value)
{
    nameEn_ = value;
    nameEnIsSet_ = true;
}

bool ListShareBandwidthTypesRequest::nameEnIsSet() const
{
    return nameEnIsSet_;
}

void ListShareBandwidthTypesRequest::unsetnameEn()
{
    nameEnIsSet_ = false;
}

std::string ListShareBandwidthTypesRequest::getNameZh() const
{
    return nameZh_;
}

void ListShareBandwidthTypesRequest::setNameZh(const std::string& value)
{
    nameZh_ = value;
    nameZhIsSet_ = true;
}

bool ListShareBandwidthTypesRequest::nameZhIsSet() const
{
    return nameZhIsSet_;
}

void ListShareBandwidthTypesRequest::unsetnameZh()
{
    nameZhIsSet_ = false;
}

std::string ListShareBandwidthTypesRequest::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void ListShareBandwidthTypesRequest::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool ListShareBandwidthTypesRequest::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void ListShareBandwidthTypesRequest::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

std::string ListShareBandwidthTypesRequest::getSortKey() const
{
    return sortKey_;
}

void ListShareBandwidthTypesRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListShareBandwidthTypesRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListShareBandwidthTypesRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListShareBandwidthTypesRequest::getSortDir() const
{
    return sortDir_;
}

void ListShareBandwidthTypesRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListShareBandwidthTypesRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListShareBandwidthTypesRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

int32_t ListShareBandwidthTypesRequest::getLimit() const
{
    return limit_;
}

void ListShareBandwidthTypesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListShareBandwidthTypesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListShareBandwidthTypesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListShareBandwidthTypesRequest::getMarker() const
{
    return marker_;
}

void ListShareBandwidthTypesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListShareBandwidthTypesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListShareBandwidthTypesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListShareBandwidthTypesRequest::getOffset() const
{
    return offset_;
}

void ListShareBandwidthTypesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListShareBandwidthTypesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListShareBandwidthTypesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


