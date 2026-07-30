

#include "huaweicloud/modelarts/v1/model/ListInferDeploymentsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferDeploymentsRequest::ListInferDeploymentsRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    deleteAfter_ = 0;
    deleteAfterIsSet_ = false;
}

ListInferDeploymentsRequest::~ListInferDeploymentsRequest() = default;

void ListInferDeploymentsRequest::validate()
{
}

web::json::value ListInferDeploymentsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(deleteAfterIsSet_) {
        val[utility::conversions::to_string_t("delete_after")] = ModelBase::toJson(deleteAfter_);
    }

    return val;
}
bool ListInferDeploymentsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_after"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_after"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteAfter(refVal);
        }
    }
    return ok;
}


std::string ListInferDeploymentsRequest::getServiceId() const
{
    return serviceId_;
}

void ListInferDeploymentsRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ListInferDeploymentsRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ListInferDeploymentsRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ListInferDeploymentsRequest::getSortKey() const
{
    return sortKey_;
}

void ListInferDeploymentsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListInferDeploymentsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListInferDeploymentsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListInferDeploymentsRequest::getStatus() const
{
    return status_;
}

void ListInferDeploymentsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListInferDeploymentsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListInferDeploymentsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListInferDeploymentsRequest::getSortDir() const
{
    return sortDir_;
}

void ListInferDeploymentsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListInferDeploymentsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListInferDeploymentsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

int32_t ListInferDeploymentsRequest::getLimit() const
{
    return limit_;
}

void ListInferDeploymentsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInferDeploymentsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInferDeploymentsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListInferDeploymentsRequest::getOffset() const
{
    return offset_;
}

void ListInferDeploymentsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInferDeploymentsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInferDeploymentsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListInferDeploymentsRequest::getContentType() const
{
    return contentType_;
}

void ListInferDeploymentsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListInferDeploymentsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListInferDeploymentsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

int32_t ListInferDeploymentsRequest::getDeleteAfter() const
{
    return deleteAfter_;
}

void ListInferDeploymentsRequest::setDeleteAfter(int32_t value)
{
    deleteAfter_ = value;
    deleteAfterIsSet_ = true;
}

bool ListInferDeploymentsRequest::deleteAfterIsSet() const
{
    return deleteAfterIsSet_;
}

void ListInferDeploymentsRequest::unsetdeleteAfter()
{
    deleteAfterIsSet_ = false;
}

}
}
}
}
}


