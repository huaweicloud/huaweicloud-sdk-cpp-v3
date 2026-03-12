

#include "huaweicloud/gaussdbforopengauss/v3/model/ListTopTableVolumesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListTopTableVolumesResponse::ListTopTableVolumesResponse()
{
    tableVolumesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
}

ListTopTableVolumesResponse::~ListTopTableVolumesResponse() = default;

void ListTopTableVolumesResponse::validate()
{
}

web::json::value ListTopTableVolumesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tableVolumesIsSet_) {
        val[utility::conversions::to_string_t("table_volumes")] = ModelBase::toJson(tableVolumes_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }

    return val;
}
bool ListTopTableVolumesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("table_volumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_volumes"));
        if(!fieldValue.is_null())
        {
            std::vector<TableVolumeResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableVolumes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    return ok;
}


std::vector<TableVolumeResult>& ListTopTableVolumesResponse::getTableVolumes()
{
    return tableVolumes_;
}

void ListTopTableVolumesResponse::setTableVolumes(const std::vector<TableVolumeResult>& value)
{
    tableVolumes_ = value;
    tableVolumesIsSet_ = true;
}

bool ListTopTableVolumesResponse::tableVolumesIsSet() const
{
    return tableVolumesIsSet_;
}

void ListTopTableVolumesResponse::unsettableVolumes()
{
    tableVolumesIsSet_ = false;
}

int32_t ListTopTableVolumesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListTopTableVolumesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListTopTableVolumesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListTopTableVolumesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::string ListTopTableVolumesResponse::getState() const
{
    return state_;
}

void ListTopTableVolumesResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ListTopTableVolumesResponse::stateIsSet() const
{
    return stateIsSet_;
}

void ListTopTableVolumesResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string ListTopTableVolumesResponse::getJobId() const
{
    return jobId_;
}

void ListTopTableVolumesResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListTopTableVolumesResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListTopTableVolumesResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListTopTableVolumesResponse::getNodeId() const
{
    return nodeId_;
}

void ListTopTableVolumesResponse::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListTopTableVolumesResponse::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListTopTableVolumesResponse::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

}
}
}
}
}


