

#include "huaweicloud/tms/v1/model/ListTagKeysResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ListTagKeysResponse::ListTagKeysResponse()
{
    keysIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListTagKeysResponse::~ListTagKeysResponse() = default;

void ListTagKeysResponse::validate()
{
}

web::json::value ListTagKeysResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keysIsSet_) {
        val[utility::conversions::to_string_t("keys")] = ModelBase::toJson(keys_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}

bool ListTagKeysResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keys"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeys(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfoTagKeys refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}

std::vector<std::string>& ListTagKeysResponse::getKeys()
{
    return keys_;
}

void ListTagKeysResponse::setKeys(const std::vector<std::string>& value)
{
    keys_ = value;
    keysIsSet_ = true;
}

bool ListTagKeysResponse::keysIsSet() const
{
    return keysIsSet_;
}

void ListTagKeysResponse::unsetkeys()
{
    keysIsSet_ = false;
}

PageInfoTagKeys ListTagKeysResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListTagKeysResponse::setPageInfo(const PageInfoTagKeys& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListTagKeysResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListTagKeysResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


