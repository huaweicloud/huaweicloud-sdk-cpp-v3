

#include "huaweicloud/modelarts/v1/model/ListInferClusterFlavorsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferClusterFlavorsRequest::ListInferClusterFlavorsRequest()
{
    flavorType_ = "";
    flavorTypeIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListInferClusterFlavorsRequest::~ListInferClusterFlavorsRequest() = default;

void ListInferClusterFlavorsRequest::validate()
{
}

web::json::value ListInferClusterFlavorsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorTypeIsSet_) {
        val[utility::conversions::to_string_t("flavor_type")] = ModelBase::toJson(flavorType_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListInferClusterFlavorsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
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
    return ok;
}


std::string ListInferClusterFlavorsRequest::getFlavorType() const
{
    return flavorType_;
}

void ListInferClusterFlavorsRequest::setFlavorType(const std::string& value)
{
    flavorType_ = value;
    flavorTypeIsSet_ = true;
}

bool ListInferClusterFlavorsRequest::flavorTypeIsSet() const
{
    return flavorTypeIsSet_;
}

void ListInferClusterFlavorsRequest::unsetflavorType()
{
    flavorTypeIsSet_ = false;
}

std::string ListInferClusterFlavorsRequest::getContentType() const
{
    return contentType_;
}

void ListInferClusterFlavorsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListInferClusterFlavorsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListInferClusterFlavorsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

int32_t ListInferClusterFlavorsRequest::getLimit() const
{
    return limit_;
}

void ListInferClusterFlavorsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInferClusterFlavorsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInferClusterFlavorsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListInferClusterFlavorsRequest::getOffset() const
{
    return offset_;
}

void ListInferClusterFlavorsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInferClusterFlavorsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInferClusterFlavorsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


