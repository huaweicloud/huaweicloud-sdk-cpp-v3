

#include "huaweicloud/cce/v3/model/ListAddonPrecheckTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAddonPrecheckTasksResponse::ListAddonPrecheckTasksResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    pageInfoIsSet_ = false;
    itemsIsSet_ = false;
}

ListAddonPrecheckTasksResponse::~ListAddonPrecheckTasksResponse() = default;

void ListAddonPrecheckTasksResponse::validate()
{
}

web::json::value ListAddonPrecheckTasksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("pageInfo")] = ModelBase::toJson(pageInfo_);
    }
    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }

    return val;
}
bool ListAddonPrecheckTasksResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apiVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pageInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pageInfo"));
        if(!fieldValue.is_null())
        {
            PageInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<AddonCheckTask> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


std::string ListAddonPrecheckTasksResponse::getKind() const
{
    return kind_;
}

void ListAddonPrecheckTasksResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListAddonPrecheckTasksResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListAddonPrecheckTasksResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string ListAddonPrecheckTasksResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListAddonPrecheckTasksResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListAddonPrecheckTasksResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListAddonPrecheckTasksResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

PageInfo ListAddonPrecheckTasksResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListAddonPrecheckTasksResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListAddonPrecheckTasksResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListAddonPrecheckTasksResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::vector<AddonCheckTask>& ListAddonPrecheckTasksResponse::getItems()
{
    return items_;
}

void ListAddonPrecheckTasksResponse::setItems(const std::vector<AddonCheckTask>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListAddonPrecheckTasksResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListAddonPrecheckTasksResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


