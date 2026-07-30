

#include "huaweicloud/modelarts/v1/model/ListWorkloadsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListWorkloadsResponse::ListWorkloadsResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    itemsIsSet_ = false;
}

ListWorkloadsResponse::~ListWorkloadsResponse() = default;

void ListWorkloadsResponse::validate()
{
}

web::json::value ListWorkloadsResponse::toJson() const
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
bool ListWorkloadsResponse::fromJson(const web::json::value& val)
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
            std::vector<Workload> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


std::string ListWorkloadsResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListWorkloadsResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListWorkloadsResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListWorkloadsResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ListWorkloadsResponse::getKind() const
{
    return kind_;
}

void ListWorkloadsResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListWorkloadsResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListWorkloadsResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::vector<Workload>& ListWorkloadsResponse::getItems()
{
    return items_;
}

void ListWorkloadsResponse::setItems(const std::vector<Workload>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListWorkloadsResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListWorkloadsResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


