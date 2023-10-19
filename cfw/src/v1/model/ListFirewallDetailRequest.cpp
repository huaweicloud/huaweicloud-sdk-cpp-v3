

#include "huaweicloud/cfw/v1/model/ListFirewallDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListFirewallDetailRequest::ListFirewallDetailRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    serviceType_ = 0;
    serviceTypeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
}

ListFirewallDetailRequest::~ListFirewallDetailRequest() = default;

void ListFirewallDetailRequest::validate()
{
}

web::json::value ListFirewallDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }

    return val;
}
bool ListFirewallDetailRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    return ok;
}


int32_t ListFirewallDetailRequest::getOffset() const
{
    return offset_;
}

void ListFirewallDetailRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListFirewallDetailRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListFirewallDetailRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListFirewallDetailRequest::getLimit() const
{
    return limit_;
}

void ListFirewallDetailRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListFirewallDetailRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListFirewallDetailRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListFirewallDetailRequest::getServiceType() const
{
    return serviceType_;
}

void ListFirewallDetailRequest::setServiceType(int32_t value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool ListFirewallDetailRequest::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void ListFirewallDetailRequest::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string ListFirewallDetailRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListFirewallDetailRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListFirewallDetailRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListFirewallDetailRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListFirewallDetailRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListFirewallDetailRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListFirewallDetailRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListFirewallDetailRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


