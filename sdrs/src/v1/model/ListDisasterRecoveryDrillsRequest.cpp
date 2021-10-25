

#include "huaweicloud/sdrs/v1/model/ListDisasterRecoveryDrillsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ListDisasterRecoveryDrillsRequest::ListDisasterRecoveryDrillsRequest()
{
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    drillVpcId_ = "";
    drillVpcIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListDisasterRecoveryDrillsRequest::~ListDisasterRecoveryDrillsRequest() = default;

void ListDisasterRecoveryDrillsRequest::validate()
{
}

web::json::value ListDisasterRecoveryDrillsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverGroupIdIsSet_) {
        val[utility::conversions::to_string_t("server_group_id")] = ModelBase::toJson(serverGroupId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(drillVpcIdIsSet_) {
        val[utility::conversions::to_string_t("drill_vpc_id")] = ModelBase::toJson(drillVpcId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}

bool ListDisasterRecoveryDrillsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerGroupId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("drill_vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("drill_vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrillVpcId(refVal);
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


std::string ListDisasterRecoveryDrillsRequest::getServerGroupId() const
{
    return serverGroupId_;
}

void ListDisasterRecoveryDrillsRequest::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool ListDisasterRecoveryDrillsRequest::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void ListDisasterRecoveryDrillsRequest::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

std::string ListDisasterRecoveryDrillsRequest::getName() const
{
    return name_;
}

void ListDisasterRecoveryDrillsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListDisasterRecoveryDrillsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListDisasterRecoveryDrillsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListDisasterRecoveryDrillsRequest::getStatus() const
{
    return status_;
}

void ListDisasterRecoveryDrillsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListDisasterRecoveryDrillsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListDisasterRecoveryDrillsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListDisasterRecoveryDrillsRequest::getDrillVpcId() const
{
    return drillVpcId_;
}

void ListDisasterRecoveryDrillsRequest::setDrillVpcId(const std::string& value)
{
    drillVpcId_ = value;
    drillVpcIdIsSet_ = true;
}

bool ListDisasterRecoveryDrillsRequest::drillVpcIdIsSet() const
{
    return drillVpcIdIsSet_;
}

void ListDisasterRecoveryDrillsRequest::unsetdrillVpcId()
{
    drillVpcIdIsSet_ = false;
}

int32_t ListDisasterRecoveryDrillsRequest::getLimit() const
{
    return limit_;
}

void ListDisasterRecoveryDrillsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDisasterRecoveryDrillsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDisasterRecoveryDrillsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListDisasterRecoveryDrillsRequest::getOffset() const
{
    return offset_;
}

void ListDisasterRecoveryDrillsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDisasterRecoveryDrillsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDisasterRecoveryDrillsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


