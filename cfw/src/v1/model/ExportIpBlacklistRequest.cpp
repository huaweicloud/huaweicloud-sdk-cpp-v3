

#include "huaweicloud/cfw/v1/model/ExportIpBlacklistRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ExportIpBlacklistRequest::ExportIpBlacklistRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ExportIpBlacklistRequest::~ExportIpBlacklistRequest() = default;

void ExportIpBlacklistRequest::validate()
{
}

web::json::value ExportIpBlacklistRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ExportIpBlacklistRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string ExportIpBlacklistRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ExportIpBlacklistRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ExportIpBlacklistRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ExportIpBlacklistRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string ExportIpBlacklistRequest::getName() const
{
    return name_;
}

void ExportIpBlacklistRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ExportIpBlacklistRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ExportIpBlacklistRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


