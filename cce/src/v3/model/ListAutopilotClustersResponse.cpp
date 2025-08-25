

#include "huaweicloud/cce/v3/model/ListAutopilotClustersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAutopilotClustersResponse::ListAutopilotClustersResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    itemsIsSet_ = false;
}

ListAutopilotClustersResponse::~ListAutopilotClustersResponse() = default;

void ListAutopilotClustersResponse::validate()
{
}

web::json::value ListAutopilotClustersResponse::toJson() const
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
bool ListAutopilotClustersResponse::fromJson(const web::json::value& val)
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
            std::vector<AutopilotCluster> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


std::string ListAutopilotClustersResponse::getKind() const
{
    return kind_;
}

void ListAutopilotClustersResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListAutopilotClustersResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListAutopilotClustersResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string ListAutopilotClustersResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListAutopilotClustersResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListAutopilotClustersResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListAutopilotClustersResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::vector<AutopilotCluster>& ListAutopilotClustersResponse::getItems()
{
    return items_;
}

void ListAutopilotClustersResponse::setItems(const std::vector<AutopilotCluster>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListAutopilotClustersResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListAutopilotClustersResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


