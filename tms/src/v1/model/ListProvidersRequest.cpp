

#include "huaweicloud/tms/v1/model/ListProvidersRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ListProvidersRequest::ListProvidersRequest()
{
    locale_ = "";
    localeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    provider_ = "";
    providerIsSet_ = false;
}

ListProvidersRequest::~ListProvidersRequest() = default;

void ListProvidersRequest::validate()
{
}

web::json::value ListProvidersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(localeIsSet_) {
        val[utility::conversions::to_string_t("locale")] = ModelBase::toJson(locale_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(providerIsSet_) {
        val[utility::conversions::to_string_t("provider")] = ModelBase::toJson(provider_);
    }

    return val;
}

bool ListProvidersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("locale"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("locale"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocale(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("provider"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("provider"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProvider(refVal);
        }
    }
    return ok;
}


std::string ListProvidersRequest::getLocale() const
{
    return locale_;
}

void ListProvidersRequest::setLocale(const std::string& value)
{
    locale_ = value;
    localeIsSet_ = true;
}

bool ListProvidersRequest::localeIsSet() const
{
    return localeIsSet_;
}

void ListProvidersRequest::unsetlocale()
{
    localeIsSet_ = false;
}

int32_t ListProvidersRequest::getLimit() const
{
    return limit_;
}

void ListProvidersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProvidersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProvidersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListProvidersRequest::getOffset() const
{
    return offset_;
}

void ListProvidersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProvidersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProvidersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListProvidersRequest::getProvider() const
{
    return provider_;
}

void ListProvidersRequest::setProvider(const std::string& value)
{
    provider_ = value;
    providerIsSet_ = true;
}

bool ListProvidersRequest::providerIsSet() const
{
    return providerIsSet_;
}

void ListProvidersRequest::unsetprovider()
{
    providerIsSet_ = false;
}

}
}
}
}
}


