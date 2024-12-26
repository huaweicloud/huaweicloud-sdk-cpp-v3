

#include "huaweicloud/rds/v3/model/QueryDRInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




QueryDRInfoRequest::QueryDRInfoRequest()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    masterInstanceId_ = "";
    masterInstanceIdIsSet_ = false;
    masterRegion_ = "";
    masterRegionIsSet_ = false;
    slaveInstanceId_ = "";
    slaveInstanceIdIsSet_ = false;
    slaveRegion_ = "";
    slaveRegionIsSet_ = false;
    createAtStart_ = 0L;
    createAtStartIsSet_ = false;
    createAtEnd_ = 0L;
    createAtEndIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
    sortField_ = "";
    sortFieldIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

QueryDRInfoRequest::~QueryDRInfoRequest() = default;

void QueryDRInfoRequest::validate()
{
}

web::json::value QueryDRInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(masterInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("master_instance_id")] = ModelBase::toJson(masterInstanceId_);
    }
    if(masterRegionIsSet_) {
        val[utility::conversions::to_string_t("master_region")] = ModelBase::toJson(masterRegion_);
    }
    if(slaveInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("slave_instance_id")] = ModelBase::toJson(slaveInstanceId_);
    }
    if(slaveRegionIsSet_) {
        val[utility::conversions::to_string_t("slave_region")] = ModelBase::toJson(slaveRegion_);
    }
    if(createAtStartIsSet_) {
        val[utility::conversions::to_string_t("create_at_start")] = ModelBase::toJson(createAtStart_);
    }
    if(createAtEndIsSet_) {
        val[utility::conversions::to_string_t("create_at_end")] = ModelBase::toJson(createAtEnd_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(sortFieldIsSet_) {
        val[utility::conversions::to_string_t("sort_field")] = ModelBase::toJson(sortField_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool QueryDRInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("master_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("master_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slave_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slave_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlaveInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slave_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slave_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlaveRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_at_start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at_start"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAtStart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_at_end"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at_end"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAtEnd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortField(refVal);
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
    return ok;
}


std::string QueryDRInfoRequest::getId() const
{
    return id_;
}

void QueryDRInfoRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool QueryDRInfoRequest::idIsSet() const
{
    return idIsSet_;
}

void QueryDRInfoRequest::unsetid()
{
    idIsSet_ = false;
}

std::string QueryDRInfoRequest::getStatus() const
{
    return status_;
}

void QueryDRInfoRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool QueryDRInfoRequest::statusIsSet() const
{
    return statusIsSet_;
}

void QueryDRInfoRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string QueryDRInfoRequest::getMasterInstanceId() const
{
    return masterInstanceId_;
}

void QueryDRInfoRequest::setMasterInstanceId(const std::string& value)
{
    masterInstanceId_ = value;
    masterInstanceIdIsSet_ = true;
}

bool QueryDRInfoRequest::masterInstanceIdIsSet() const
{
    return masterInstanceIdIsSet_;
}

void QueryDRInfoRequest::unsetmasterInstanceId()
{
    masterInstanceIdIsSet_ = false;
}

std::string QueryDRInfoRequest::getMasterRegion() const
{
    return masterRegion_;
}

void QueryDRInfoRequest::setMasterRegion(const std::string& value)
{
    masterRegion_ = value;
    masterRegionIsSet_ = true;
}

bool QueryDRInfoRequest::masterRegionIsSet() const
{
    return masterRegionIsSet_;
}

void QueryDRInfoRequest::unsetmasterRegion()
{
    masterRegionIsSet_ = false;
}

std::string QueryDRInfoRequest::getSlaveInstanceId() const
{
    return slaveInstanceId_;
}

void QueryDRInfoRequest::setSlaveInstanceId(const std::string& value)
{
    slaveInstanceId_ = value;
    slaveInstanceIdIsSet_ = true;
}

bool QueryDRInfoRequest::slaveInstanceIdIsSet() const
{
    return slaveInstanceIdIsSet_;
}

void QueryDRInfoRequest::unsetslaveInstanceId()
{
    slaveInstanceIdIsSet_ = false;
}

std::string QueryDRInfoRequest::getSlaveRegion() const
{
    return slaveRegion_;
}

void QueryDRInfoRequest::setSlaveRegion(const std::string& value)
{
    slaveRegion_ = value;
    slaveRegionIsSet_ = true;
}

bool QueryDRInfoRequest::slaveRegionIsSet() const
{
    return slaveRegionIsSet_;
}

void QueryDRInfoRequest::unsetslaveRegion()
{
    slaveRegionIsSet_ = false;
}

int64_t QueryDRInfoRequest::getCreateAtStart() const
{
    return createAtStart_;
}

void QueryDRInfoRequest::setCreateAtStart(int64_t value)
{
    createAtStart_ = value;
    createAtStartIsSet_ = true;
}

bool QueryDRInfoRequest::createAtStartIsSet() const
{
    return createAtStartIsSet_;
}

void QueryDRInfoRequest::unsetcreateAtStart()
{
    createAtStartIsSet_ = false;
}

int64_t QueryDRInfoRequest::getCreateAtEnd() const
{
    return createAtEnd_;
}

void QueryDRInfoRequest::setCreateAtEnd(int64_t value)
{
    createAtEnd_ = value;
    createAtEndIsSet_ = true;
}

bool QueryDRInfoRequest::createAtEndIsSet() const
{
    return createAtEndIsSet_;
}

void QueryDRInfoRequest::unsetcreateAtEnd()
{
    createAtEndIsSet_ = false;
}

std::string QueryDRInfoRequest::getOrder() const
{
    return order_;
}

void QueryDRInfoRequest::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool QueryDRInfoRequest::orderIsSet() const
{
    return orderIsSet_;
}

void QueryDRInfoRequest::unsetorder()
{
    orderIsSet_ = false;
}

std::string QueryDRInfoRequest::getSortField() const
{
    return sortField_;
}

void QueryDRInfoRequest::setSortField(const std::string& value)
{
    sortField_ = value;
    sortFieldIsSet_ = true;
}

bool QueryDRInfoRequest::sortFieldIsSet() const
{
    return sortFieldIsSet_;
}

void QueryDRInfoRequest::unsetsortField()
{
    sortFieldIsSet_ = false;
}

int32_t QueryDRInfoRequest::getOffset() const
{
    return offset_;
}

void QueryDRInfoRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool QueryDRInfoRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void QueryDRInfoRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t QueryDRInfoRequest::getLimit() const
{
    return limit_;
}

void QueryDRInfoRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool QueryDRInfoRequest::limitIsSet() const
{
    return limitIsSet_;
}

void QueryDRInfoRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


