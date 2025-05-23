

#include "huaweicloud/gaussdbfornosql/v3/model/ListFlavorInfosRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListFlavorInfosRequest::ListFlavorInfosRequest()
{
    engineName_ = "";
    engineNameIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    productType_ = "";
    productTypeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListFlavorInfosRequest::~ListFlavorInfosRequest() = default;

void ListFlavorInfosRequest::validate()
{
}

web::json::value ListFlavorInfosRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(productTypeIsSet_) {
        val[utility::conversions::to_string_t("product_type")] = ModelBase::toJson(productType_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListFlavorInfosRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListFlavorInfosRequest::getEngineName() const
{
    return engineName_;
}

void ListFlavorInfosRequest::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool ListFlavorInfosRequest::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void ListFlavorInfosRequest::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string ListFlavorInfosRequest::getMode() const
{
    return mode_;
}

void ListFlavorInfosRequest::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ListFlavorInfosRequest::modeIsSet() const
{
    return modeIsSet_;
}

void ListFlavorInfosRequest::unsetmode()
{
    modeIsSet_ = false;
}

std::string ListFlavorInfosRequest::getProductType() const
{
    return productType_;
}

void ListFlavorInfosRequest::setProductType(const std::string& value)
{
    productType_ = value;
    productTypeIsSet_ = true;
}

bool ListFlavorInfosRequest::productTypeIsSet() const
{
    return productTypeIsSet_;
}

void ListFlavorInfosRequest::unsetproductType()
{
    productTypeIsSet_ = false;
}

int32_t ListFlavorInfosRequest::getOffset() const
{
    return offset_;
}

void ListFlavorInfosRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListFlavorInfosRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListFlavorInfosRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListFlavorInfosRequest::getLimit() const
{
    return limit_;
}

void ListFlavorInfosRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListFlavorInfosRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListFlavorInfosRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


