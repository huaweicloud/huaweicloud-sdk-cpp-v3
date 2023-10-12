

#include "huaweicloud/tms/v1/model/ListPredefineTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ListPredefineTagsRequest::ListPredefineTagsRequest()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    orderField_ = "";
    orderFieldIsSet_ = false;
    orderMethod_ = "";
    orderMethodIsSet_ = false;
}

ListPredefineTagsRequest::~ListPredefineTagsRequest() = default;

void ListPredefineTagsRequest::validate()
{
}

web::json::value ListPredefineTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(orderFieldIsSet_) {
        val[utility::conversions::to_string_t("order_field")] = ModelBase::toJson(orderField_);
    }
    if(orderMethodIsSet_) {
        val[utility::conversions::to_string_t("order_method")] = ModelBase::toJson(orderMethod_);
    }

    return val;
}
bool ListPredefineTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("order_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderMethod(refVal);
        }
    }
    return ok;
}


std::string ListPredefineTagsRequest::getKey() const
{
    return key_;
}

void ListPredefineTagsRequest::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ListPredefineTagsRequest::keyIsSet() const
{
    return keyIsSet_;
}

void ListPredefineTagsRequest::unsetkey()
{
    keyIsSet_ = false;
}

std::string ListPredefineTagsRequest::getValue() const
{
    return value_;
}

void ListPredefineTagsRequest::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ListPredefineTagsRequest::valueIsSet() const
{
    return valueIsSet_;
}

void ListPredefineTagsRequest::unsetvalue()
{
    valueIsSet_ = false;
}

int32_t ListPredefineTagsRequest::getLimit() const
{
    return limit_;
}

void ListPredefineTagsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPredefineTagsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPredefineTagsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListPredefineTagsRequest::getMarker() const
{
    return marker_;
}

void ListPredefineTagsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListPredefineTagsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListPredefineTagsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListPredefineTagsRequest::getOrderField() const
{
    return orderField_;
}

void ListPredefineTagsRequest::setOrderField(const std::string& value)
{
    orderField_ = value;
    orderFieldIsSet_ = true;
}

bool ListPredefineTagsRequest::orderFieldIsSet() const
{
    return orderFieldIsSet_;
}

void ListPredefineTagsRequest::unsetorderField()
{
    orderFieldIsSet_ = false;
}

std::string ListPredefineTagsRequest::getOrderMethod() const
{
    return orderMethod_;
}

void ListPredefineTagsRequest::setOrderMethod(const std::string& value)
{
    orderMethod_ = value;
    orderMethodIsSet_ = true;
}

bool ListPredefineTagsRequest::orderMethodIsSet() const
{
    return orderMethodIsSet_;
}

void ListPredefineTagsRequest::unsetorderMethod()
{
    orderMethodIsSet_ = false;
}

}
}
}
}
}


