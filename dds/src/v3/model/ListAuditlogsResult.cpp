

#include "huaweicloud/dds/v3/model/ListAuditlogsResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListAuditlogsResult::ListAuditlogsResult()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListAuditlogsResult::~ListAuditlogsResult() = default;

void ListAuditlogsResult::validate()
{
}

web::json::value ListAuditlogsResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}

bool ListAuditlogsResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}

std::string ListAuditlogsResult::getNodeId() const
{
    return nodeId_;
}

void ListAuditlogsResult::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListAuditlogsResult::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListAuditlogsResult::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ListAuditlogsResult::getId() const
{
    return id_;
}

void ListAuditlogsResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListAuditlogsResult::idIsSet() const
{
    return idIsSet_;
}

void ListAuditlogsResult::unsetid()
{
    idIsSet_ = false;
}

std::string ListAuditlogsResult::getName() const
{
    return name_;
}

void ListAuditlogsResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListAuditlogsResult::nameIsSet() const
{
    return nameIsSet_;
}

void ListAuditlogsResult::unsetname()
{
    nameIsSet_ = false;
}

int64_t ListAuditlogsResult::getSize() const
{
    return size_;
}

void ListAuditlogsResult::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListAuditlogsResult::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListAuditlogsResult::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ListAuditlogsResult::getStartTime() const
{
    return startTime_;
}

void ListAuditlogsResult::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListAuditlogsResult::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListAuditlogsResult::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListAuditlogsResult::getEndTime() const
{
    return endTime_;
}

void ListAuditlogsResult::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListAuditlogsResult::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListAuditlogsResult::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


