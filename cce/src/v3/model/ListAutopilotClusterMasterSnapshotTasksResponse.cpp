

#include "huaweicloud/cce/v3/model/ListAutopilotClusterMasterSnapshotTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAutopilotClusterMasterSnapshotTasksResponse::ListAutopilotClusterMasterSnapshotTasksResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    itemsIsSet_ = false;
    statusIsSet_ = false;
}

ListAutopilotClusterMasterSnapshotTasksResponse::~ListAutopilotClusterMasterSnapshotTasksResponse() = default;

void ListAutopilotClusterMasterSnapshotTasksResponse::validate()
{
}

web::json::value ListAutopilotClusterMasterSnapshotTasksResponse::toJson() const
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
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ListAutopilotClusterMasterSnapshotTasksResponse::fromJson(const web::json::value& val)
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
            SnapshotTaskMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<SnapshotTask> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            SnapshotTaskStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string ListAutopilotClusterMasterSnapshotTasksResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListAutopilotClusterMasterSnapshotTasksResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListAutopilotClusterMasterSnapshotTasksResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListAutopilotClusterMasterSnapshotTasksResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ListAutopilotClusterMasterSnapshotTasksResponse::getKind() const
{
    return kind_;
}

void ListAutopilotClusterMasterSnapshotTasksResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListAutopilotClusterMasterSnapshotTasksResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListAutopilotClusterMasterSnapshotTasksResponse::unsetkind()
{
    kindIsSet_ = false;
}

SnapshotTaskMetadata ListAutopilotClusterMasterSnapshotTasksResponse::getMetadata() const
{
    return metadata_;
}

void ListAutopilotClusterMasterSnapshotTasksResponse::setMetadata(const SnapshotTaskMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ListAutopilotClusterMasterSnapshotTasksResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ListAutopilotClusterMasterSnapshotTasksResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::vector<SnapshotTask>& ListAutopilotClusterMasterSnapshotTasksResponse::getItems()
{
    return items_;
}

void ListAutopilotClusterMasterSnapshotTasksResponse::setItems(const std::vector<SnapshotTask>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListAutopilotClusterMasterSnapshotTasksResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListAutopilotClusterMasterSnapshotTasksResponse::unsetitems()
{
    itemsIsSet_ = false;
}

SnapshotTaskStatus ListAutopilotClusterMasterSnapshotTasksResponse::getStatus() const
{
    return status_;
}

void ListAutopilotClusterMasterSnapshotTasksResponse::setStatus(const SnapshotTaskStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAutopilotClusterMasterSnapshotTasksResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListAutopilotClusterMasterSnapshotTasksResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


