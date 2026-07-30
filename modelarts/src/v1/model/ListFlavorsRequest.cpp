

#include "huaweicloud/modelarts/v1/model/ListFlavorsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListFlavorsRequest::ListFlavorsRequest()
{
    category_ = "";
    categoryIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    flavorType_ = "";
    flavorTypeIsSet_ = false;
    feature_ = "";
    featureIsSet_ = false;
}

ListFlavorsRequest::~ListFlavorsRequest() = default;

void ListFlavorsRequest::validate()
{
}

web::json::value ListFlavorsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(flavorTypeIsSet_) {
        val[utility::conversions::to_string_t("flavor_type")] = ModelBase::toJson(flavorType_);
    }
    if(featureIsSet_) {
        val[utility::conversions::to_string_t("feature")] = ModelBase::toJson(feature_);
    }

    return val;
}
bool ListFlavorsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("feature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feature"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeature(refVal);
        }
    }
    return ok;
}


std::string ListFlavorsRequest::getCategory() const
{
    return category_;
}

void ListFlavorsRequest::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ListFlavorsRequest::categoryIsSet() const
{
    return categoryIsSet_;
}

void ListFlavorsRequest::unsetcategory()
{
    categoryIsSet_ = false;
}

int32_t ListFlavorsRequest::getLimit() const
{
    return limit_;
}

void ListFlavorsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListFlavorsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListFlavorsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListFlavorsRequest::getOffset() const
{
    return offset_;
}

void ListFlavorsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListFlavorsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListFlavorsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListFlavorsRequest::getType() const
{
    return type_;
}

void ListFlavorsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListFlavorsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListFlavorsRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListFlavorsRequest::getSortDir() const
{
    return sortDir_;
}

void ListFlavorsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListFlavorsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListFlavorsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListFlavorsRequest::getSortKey() const
{
    return sortKey_;
}

void ListFlavorsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListFlavorsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListFlavorsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListFlavorsRequest::getFlavorType() const
{
    return flavorType_;
}

void ListFlavorsRequest::setFlavorType(const std::string& value)
{
    flavorType_ = value;
    flavorTypeIsSet_ = true;
}

bool ListFlavorsRequest::flavorTypeIsSet() const
{
    return flavorTypeIsSet_;
}

void ListFlavorsRequest::unsetflavorType()
{
    flavorTypeIsSet_ = false;
}

std::string ListFlavorsRequest::getFeature() const
{
    return feature_;
}

void ListFlavorsRequest::setFeature(const std::string& value)
{
    feature_ = value;
    featureIsSet_ = true;
}

bool ListFlavorsRequest::featureIsSet() const
{
    return featureIsSet_;
}

void ListFlavorsRequest::unsetfeature()
{
    featureIsSet_ = false;
}

}
}
}
}
}


