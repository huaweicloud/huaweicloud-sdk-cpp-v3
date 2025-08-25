

#include "huaweicloud/cce/v3/model/ListPartitionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListPartitionsResponse::ListPartitionsResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    itemsIsSet_ = false;
}

ListPartitionsResponse::~ListPartitionsResponse() = default;

void ListPartitionsResponse::validate()
{
}

web::json::value ListPartitionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }

    return val;
}
bool ListPartitionsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<Partition> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


std::string ListPartitionsResponse::getKind() const
{
    return kind_;
}

void ListPartitionsResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListPartitionsResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListPartitionsResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string ListPartitionsResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListPartitionsResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListPartitionsResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListPartitionsResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::vector<Partition>& ListPartitionsResponse::getItems()
{
    return items_;
}

void ListPartitionsResponse::setItems(const std::vector<Partition>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListPartitionsResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListPartitionsResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


