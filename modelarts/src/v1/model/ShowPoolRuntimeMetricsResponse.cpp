

#include "huaweicloud/modelarts/v1/model/ShowPoolRuntimeMetricsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowPoolRuntimeMetricsResponse::ShowPoolRuntimeMetricsResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    itemsIsSet_ = false;
}

ShowPoolRuntimeMetricsResponse::~ShowPoolRuntimeMetricsResponse() = default;

void ShowPoolRuntimeMetricsResponse::validate()
{
}

web::json::value ShowPoolRuntimeMetricsResponse::toJson() const
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
bool ShowPoolRuntimeMetricsResponse::fromJson(const web::json::value& val)
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
            std::vector<MetricsItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


std::string ShowPoolRuntimeMetricsResponse::getApiVersion() const
{
    return apiVersion_;
}

void ShowPoolRuntimeMetricsResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ShowPoolRuntimeMetricsResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ShowPoolRuntimeMetricsResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ShowPoolRuntimeMetricsResponse::getKind() const
{
    return kind_;
}

void ShowPoolRuntimeMetricsResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ShowPoolRuntimeMetricsResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ShowPoolRuntimeMetricsResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::vector<MetricsItem>& ShowPoolRuntimeMetricsResponse::getItems()
{
    return items_;
}

void ShowPoolRuntimeMetricsResponse::setItems(const std::vector<MetricsItem>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ShowPoolRuntimeMetricsResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ShowPoolRuntimeMetricsResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


