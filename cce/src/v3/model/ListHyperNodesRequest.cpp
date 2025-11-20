

#include "huaweicloud/cce/v3/model/ListHyperNodesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListHyperNodesRequest::ListHyperNodesRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListHyperNodesRequest::~ListHyperNodesRequest() = default;

void ListHyperNodesRequest::validate()
{
}

web::json::value ListHyperNodesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListHyperNodesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
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
    return ok;
}


std::string ListHyperNodesRequest::getClusterId() const
{
    return clusterId_;
}

void ListHyperNodesRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ListHyperNodesRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ListHyperNodesRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

int32_t ListHyperNodesRequest::getLimit() const
{
    return limit_;
}

void ListHyperNodesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListHyperNodesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListHyperNodesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListHyperNodesRequest::getOffset() const
{
    return offset_;
}

void ListHyperNodesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListHyperNodesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListHyperNodesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


