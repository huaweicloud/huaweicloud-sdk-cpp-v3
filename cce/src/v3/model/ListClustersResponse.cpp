

#include "huaweicloud/cce/v3/model/ListClustersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListClustersResponse::ListClustersResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    itemsIsSet_ = false;
}

ListClustersResponse::~ListClustersResponse() = default;

void ListClustersResponse::validate()
{
}

web::json::value ListClustersResponse::toJson() const
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
bool ListClustersResponse::fromJson(const web::json::value& val)
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
            std::vector<Cluster> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


std::string ListClustersResponse::getKind() const
{
    return kind_;
}

void ListClustersResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListClustersResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListClustersResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string ListClustersResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListClustersResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListClustersResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListClustersResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::vector<Cluster>& ListClustersResponse::getItems()
{
    return items_;
}

void ListClustersResponse::setItems(const std::vector<Cluster>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListClustersResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListClustersResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


