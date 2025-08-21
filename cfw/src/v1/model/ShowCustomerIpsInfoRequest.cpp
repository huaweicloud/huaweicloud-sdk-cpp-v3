

#include "huaweicloud/cfw/v1/model/ShowCustomerIpsInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowCustomerIpsInfoRequest::ShowCustomerIpsInfoRequest()
{
    ipsCfwId_ = "";
    ipsCfwIdIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
}

ShowCustomerIpsInfoRequest::~ShowCustomerIpsInfoRequest() = default;

void ShowCustomerIpsInfoRequest::validate()
{
}

web::json::value ShowCustomerIpsInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipsCfwIdIsSet_) {
        val[utility::conversions::to_string_t("ips_cfw_id")] = ModelBase::toJson(ipsCfwId_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }

    return val;
}
bool ShowCustomerIpsInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ips_cfw_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_cfw_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsCfwId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
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


std::string ShowCustomerIpsInfoRequest::getIpsCfwId() const
{
    return ipsCfwId_;
}

void ShowCustomerIpsInfoRequest::setIpsCfwId(const std::string& value)
{
    ipsCfwId_ = value;
    ipsCfwIdIsSet_ = true;
}

bool ShowCustomerIpsInfoRequest::ipsCfwIdIsSet() const
{
    return ipsCfwIdIsSet_;
}

void ShowCustomerIpsInfoRequest::unsetipsCfwId()
{
    ipsCfwIdIsSet_ = false;
}

std::string ShowCustomerIpsInfoRequest::getObjectId() const
{
    return objectId_;
}

void ShowCustomerIpsInfoRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ShowCustomerIpsInfoRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ShowCustomerIpsInfoRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string ShowCustomerIpsInfoRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ShowCustomerIpsInfoRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ShowCustomerIpsInfoRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ShowCustomerIpsInfoRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


