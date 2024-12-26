

#include "huaweicloud/cfw/v1/model/ListAlarmWhitelistRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAlarmWhitelistRequest::ListAlarmWhitelistRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    ipAddress_ = "";
    ipAddressIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ListAlarmWhitelistRequest::~ListAlarmWhitelistRequest() = default;

void ListAlarmWhitelistRequest::validate()
{
}

web::json::value ListAlarmWhitelistRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool ListAlarmWhitelistRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpAddress(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}


std::string ListAlarmWhitelistRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListAlarmWhitelistRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListAlarmWhitelistRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListAlarmWhitelistRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string ListAlarmWhitelistRequest::getIpAddress() const
{
    return ipAddress_;
}

void ListAlarmWhitelistRequest::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool ListAlarmWhitelistRequest::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void ListAlarmWhitelistRequest::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

int32_t ListAlarmWhitelistRequest::getLimit() const
{
    return limit_;
}

void ListAlarmWhitelistRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAlarmWhitelistRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAlarmWhitelistRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListAlarmWhitelistRequest::getOffset() const
{
    return offset_;
}

void ListAlarmWhitelistRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAlarmWhitelistRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAlarmWhitelistRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAlarmWhitelistRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListAlarmWhitelistRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListAlarmWhitelistRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListAlarmWhitelistRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


