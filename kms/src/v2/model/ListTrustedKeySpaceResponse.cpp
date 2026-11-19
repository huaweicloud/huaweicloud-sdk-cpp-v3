

#include "huaweicloud/kms/v2/model/ListTrustedKeySpaceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListTrustedKeySpaceResponse::ListTrustedKeySpaceResponse()
{
    pageInfoIsSet_ = false;
    keyspacesIsSet_ = false;
}

ListTrustedKeySpaceResponse::~ListTrustedKeySpaceResponse() = default;

void ListTrustedKeySpaceResponse::validate()
{
}

web::json::value ListTrustedKeySpaceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(keyspacesIsSet_) {
        val[utility::conversions::to_string_t("keyspaces")] = ModelBase::toJson(keyspaces_);
    }

    return val;
}
bool ListTrustedKeySpaceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            ListAccessPointResponseBody_page_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keyspaces"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyspaces"));
        if(!fieldValue.is_null())
        {
            std::vector<ListTrustedKeySpaceResponseBody_keyspaces> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyspaces(refVal);
        }
    }
    return ok;
}


ListAccessPointResponseBody_page_info ListTrustedKeySpaceResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListTrustedKeySpaceResponse::setPageInfo(const ListAccessPointResponseBody_page_info& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListTrustedKeySpaceResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListTrustedKeySpaceResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::vector<ListTrustedKeySpaceResponseBody_keyspaces>& ListTrustedKeySpaceResponse::getKeyspaces()
{
    return keyspaces_;
}

void ListTrustedKeySpaceResponse::setKeyspaces(const std::vector<ListTrustedKeySpaceResponseBody_keyspaces>& value)
{
    keyspaces_ = value;
    keyspacesIsSet_ = true;
}

bool ListTrustedKeySpaceResponse::keyspacesIsSet() const
{
    return keyspacesIsSet_;
}

void ListTrustedKeySpaceResponse::unsetkeyspaces()
{
    keyspacesIsSet_ = false;
}

}
}
}
}
}


