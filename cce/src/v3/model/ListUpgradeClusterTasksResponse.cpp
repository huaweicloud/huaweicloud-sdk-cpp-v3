

#include "huaweicloud/cce/v3/model/ListUpgradeClusterTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListUpgradeClusterTasksResponse::ListUpgradeClusterTasksResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    itemsIsSet_ = false;
}

ListUpgradeClusterTasksResponse::~ListUpgradeClusterTasksResponse() = default;

void ListUpgradeClusterTasksResponse::validate()
{
}

web::json::value ListUpgradeClusterTasksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }

    return val;
}
bool ListUpgradeClusterTasksResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            UpgradeTaskMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<UpgradeTaskResponseBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


std::string ListUpgradeClusterTasksResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListUpgradeClusterTasksResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListUpgradeClusterTasksResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListUpgradeClusterTasksResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ListUpgradeClusterTasksResponse::getKind() const
{
    return kind_;
}

void ListUpgradeClusterTasksResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListUpgradeClusterTasksResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListUpgradeClusterTasksResponse::unsetkind()
{
    kindIsSet_ = false;
}

UpgradeTaskMetadata ListUpgradeClusterTasksResponse::getMetadata() const
{
    return metadata_;
}

void ListUpgradeClusterTasksResponse::setMetadata(const UpgradeTaskMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ListUpgradeClusterTasksResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ListUpgradeClusterTasksResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::vector<UpgradeTaskResponseBody>& ListUpgradeClusterTasksResponse::getItems()
{
    return items_;
}

void ListUpgradeClusterTasksResponse::setItems(const std::vector<UpgradeTaskResponseBody>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListUpgradeClusterTasksResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListUpgradeClusterTasksResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


