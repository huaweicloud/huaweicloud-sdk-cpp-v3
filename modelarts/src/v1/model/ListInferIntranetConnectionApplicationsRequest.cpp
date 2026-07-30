

#include "huaweicloud/modelarts/v1/model/ListInferIntranetConnectionApplicationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferIntranetConnectionApplicationsRequest::ListInferIntranetConnectionApplicationsRequest()
{
    scene_ = "";
    sceneIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    serviceId_ = "";
    serviceIdIsSet_ = false;
    serviceName_ = "";
    serviceNameIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    vpcName_ = "";
    vpcNameIsSet_ = false;
    poolId_ = "";
    poolIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
}

ListInferIntranetConnectionApplicationsRequest::~ListInferIntranetConnectionApplicationsRequest() = default;

void ListInferIntranetConnectionApplicationsRequest::validate()
{
}

web::json::value ListInferIntranetConnectionApplicationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sceneIsSet_) {
        val[utility::conversions::to_string_t("scene")] = ModelBase::toJson(scene_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(serviceNameIsSet_) {
        val[utility::conversions::to_string_t("service_name")] = ModelBase::toJson(serviceName_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(vpcNameIsSet_) {
        val[utility::conversions::to_string_t("vpc_name")] = ModelBase::toJson(vpcName_);
    }
    if(poolIdIsSet_) {
        val[utility::conversions::to_string_t("pool_id")] = ModelBase::toJson(poolId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }

    return val;
}
bool ListInferIntranetConnectionApplicationsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("scene"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scene"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScene(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    return ok;
}


std::string ListInferIntranetConnectionApplicationsRequest::getScene() const
{
    return scene_;
}

void ListInferIntranetConnectionApplicationsRequest::setScene(const std::string& value)
{
    scene_ = value;
    sceneIsSet_ = true;
}

bool ListInferIntranetConnectionApplicationsRequest::sceneIsSet() const
{
    return sceneIsSet_;
}

void ListInferIntranetConnectionApplicationsRequest::unsetscene()
{
    sceneIsSet_ = false;
}

std::string ListInferIntranetConnectionApplicationsRequest::getStatus() const
{
    return status_;
}

void ListInferIntranetConnectionApplicationsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListInferIntranetConnectionApplicationsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListInferIntranetConnectionApplicationsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListInferIntranetConnectionApplicationsRequest::getId() const
{
    return id_;
}

void ListInferIntranetConnectionApplicationsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListInferIntranetConnectionApplicationsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListInferIntranetConnectionApplicationsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListInferIntranetConnectionApplicationsRequest::getServiceId() const
{
    return serviceId_;
}

void ListInferIntranetConnectionApplicationsRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ListInferIntranetConnectionApplicationsRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ListInferIntranetConnectionApplicationsRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ListInferIntranetConnectionApplicationsRequest::getServiceName() const
{
    return serviceName_;
}

void ListInferIntranetConnectionApplicationsRequest::setServiceName(const std::string& value)
{
    serviceName_ = value;
    serviceNameIsSet_ = true;
}

bool ListInferIntranetConnectionApplicationsRequest::serviceNameIsSet() const
{
    return serviceNameIsSet_;
}

void ListInferIntranetConnectionApplicationsRequest::unsetserviceName()
{
    serviceNameIsSet_ = false;
}

std::string ListInferIntranetConnectionApplicationsRequest::getVpcId() const
{
    return vpcId_;
}

void ListInferIntranetConnectionApplicationsRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ListInferIntranetConnectionApplicationsRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ListInferIntranetConnectionApplicationsRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string ListInferIntranetConnectionApplicationsRequest::getVpcName() const
{
    return vpcName_;
}

void ListInferIntranetConnectionApplicationsRequest::setVpcName(const std::string& value)
{
    vpcName_ = value;
    vpcNameIsSet_ = true;
}

bool ListInferIntranetConnectionApplicationsRequest::vpcNameIsSet() const
{
    return vpcNameIsSet_;
}

void ListInferIntranetConnectionApplicationsRequest::unsetvpcName()
{
    vpcNameIsSet_ = false;
}

std::string ListInferIntranetConnectionApplicationsRequest::getPoolId() const
{
    return poolId_;
}

void ListInferIntranetConnectionApplicationsRequest::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool ListInferIntranetConnectionApplicationsRequest::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void ListInferIntranetConnectionApplicationsRequest::unsetpoolId()
{
    poolIdIsSet_ = false;
}

int32_t ListInferIntranetConnectionApplicationsRequest::getOffset() const
{
    return offset_;
}

void ListInferIntranetConnectionApplicationsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInferIntranetConnectionApplicationsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInferIntranetConnectionApplicationsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListInferIntranetConnectionApplicationsRequest::getLimit() const
{
    return limit_;
}

void ListInferIntranetConnectionApplicationsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInferIntranetConnectionApplicationsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInferIntranetConnectionApplicationsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListInferIntranetConnectionApplicationsRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ListInferIntranetConnectionApplicationsRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ListInferIntranetConnectionApplicationsRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ListInferIntranetConnectionApplicationsRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string ListInferIntranetConnectionApplicationsRequest::getSortDir() const
{
    return sortDir_;
}

void ListInferIntranetConnectionApplicationsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListInferIntranetConnectionApplicationsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListInferIntranetConnectionApplicationsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListInferIntranetConnectionApplicationsRequest::getSortKey() const
{
    return sortKey_;
}

void ListInferIntranetConnectionApplicationsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListInferIntranetConnectionApplicationsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListInferIntranetConnectionApplicationsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

}
}
}
}
}


