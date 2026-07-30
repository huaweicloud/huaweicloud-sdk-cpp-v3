

#include "huaweicloud/modelarts/v1/model/ListPoolsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListPoolsResponse::ListPoolsResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    itemsIsSet_ = false;
}

ListPoolsResponse::~ListPoolsResponse() = default;

void ListPoolsResponse::validate()
{
}

web::json::value ListPoolsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }

    return val;
}
bool ListPoolsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("apiVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<PoolModel> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


std::string ListPoolsResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListPoolsResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListPoolsResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListPoolsResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ListPoolsResponse::getKind() const
{
    return kind_;
}

void ListPoolsResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListPoolsResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListPoolsResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::vector<PoolModel>& ListPoolsResponse::getItems()
{
    return items_;
}

void ListPoolsResponse::setItems(const std::vector<PoolModel>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListPoolsResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListPoolsResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


