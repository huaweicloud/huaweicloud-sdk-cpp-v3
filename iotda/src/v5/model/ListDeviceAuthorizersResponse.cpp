

#include "huaweicloud/iotda/v5/model/ListDeviceAuthorizersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDeviceAuthorizersResponse::ListDeviceAuthorizersResponse()
{
    authorizersIsSet_ = false;
    pageIsSet_ = false;
}

ListDeviceAuthorizersResponse::~ListDeviceAuthorizersResponse() = default;

void ListDeviceAuthorizersResponse::validate()
{
}

web::json::value ListDeviceAuthorizersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizersIsSet_) {
        val[utility::conversions::to_string_t("authorizers")] = ModelBase::toJson(authorizers_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ListDeviceAuthorizersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("authorizers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authorizers"));
        if(!fieldValue.is_null())
        {
            std::vector<DeviceAuthorizerSimple> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorizers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            Page refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    return ok;
}


std::vector<DeviceAuthorizerSimple>& ListDeviceAuthorizersResponse::getAuthorizers()
{
    return authorizers_;
}

void ListDeviceAuthorizersResponse::setAuthorizers(const std::vector<DeviceAuthorizerSimple>& value)
{
    authorizers_ = value;
    authorizersIsSet_ = true;
}

bool ListDeviceAuthorizersResponse::authorizersIsSet() const
{
    return authorizersIsSet_;
}

void ListDeviceAuthorizersResponse::unsetauthorizers()
{
    authorizersIsSet_ = false;
}

Page ListDeviceAuthorizersResponse::getPage() const
{
    return page_;
}

void ListDeviceAuthorizersResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListDeviceAuthorizersResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListDeviceAuthorizersResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


