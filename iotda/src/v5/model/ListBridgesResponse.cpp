

#include "huaweicloud/iotda/v5/model/ListBridgesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListBridgesResponse::ListBridgesResponse()
{
    bridgesIsSet_ = false;
    pageIsSet_ = false;
}

ListBridgesResponse::~ListBridgesResponse() = default;

void ListBridgesResponse::validate()
{
}

web::json::value ListBridgesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bridgesIsSet_) {
        val[utility::conversions::to_string_t("bridges")] = ModelBase::toJson(bridges_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ListBridgesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bridges"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bridges"));
        if(!fieldValue.is_null())
        {
            std::vector<BridgeResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBridges(refVal);
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


std::vector<BridgeResponse>& ListBridgesResponse::getBridges()
{
    return bridges_;
}

void ListBridgesResponse::setBridges(const std::vector<BridgeResponse>& value)
{
    bridges_ = value;
    bridgesIsSet_ = true;
}

bool ListBridgesResponse::bridgesIsSet() const
{
    return bridgesIsSet_;
}

void ListBridgesResponse::unsetbridges()
{
    bridgesIsSet_ = false;
}

Page ListBridgesResponse::getPage() const
{
    return page_;
}

void ListBridgesResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListBridgesResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListBridgesResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


