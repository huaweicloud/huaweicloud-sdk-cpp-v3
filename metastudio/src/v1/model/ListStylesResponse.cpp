

#include "huaweicloud/metastudio/v1/model/ListStylesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListStylesResponse::ListStylesResponse()
{
    count_ = 0;
    countIsSet_ = false;
    stylesIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListStylesResponse::~ListStylesResponse() = default;

void ListStylesResponse::validate()
{
}

web::json::value ListStylesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(stylesIsSet_) {
        val[utility::conversions::to_string_t("styles")] = ModelBase::toJson(styles_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListStylesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("styles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("styles"));
        if(!fieldValue.is_null())
        {
            std::vector<StyleInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStyles(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


int32_t ListStylesResponse::getCount() const
{
    return count_;
}

void ListStylesResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListStylesResponse::countIsSet() const
{
    return countIsSet_;
}

void ListStylesResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<StyleInfo>& ListStylesResponse::getStyles()
{
    return styles_;
}

void ListStylesResponse::setStyles(const std::vector<StyleInfo>& value)
{
    styles_ = value;
    stylesIsSet_ = true;
}

bool ListStylesResponse::stylesIsSet() const
{
    return stylesIsSet_;
}

void ListStylesResponse::unsetstyles()
{
    stylesIsSet_ = false;
}

std::string ListStylesResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListStylesResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListStylesResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListStylesResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


