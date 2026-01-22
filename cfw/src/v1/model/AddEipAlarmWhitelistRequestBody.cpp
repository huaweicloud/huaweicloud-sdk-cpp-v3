

#include "huaweicloud/cfw/v1/model/AddEipAlarmWhitelistRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddEipAlarmWhitelistRequestBody::AddEipAlarmWhitelistRequestBody()
{
    eipInfosIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
}

AddEipAlarmWhitelistRequestBody::~AddEipAlarmWhitelistRequestBody() = default;

void AddEipAlarmWhitelistRequestBody::validate()
{
}

web::json::value AddEipAlarmWhitelistRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eipInfosIsSet_) {
        val[utility::conversions::to_string_t("eip_infos")] = ModelBase::toJson(eipInfos_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }

    return val;
}
bool AddEipAlarmWhitelistRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("eip_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<EipInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEipInfos(refVal);
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


std::vector<EipInfo>& AddEipAlarmWhitelistRequestBody::getEipInfos()
{
    return eipInfos_;
}

void AddEipAlarmWhitelistRequestBody::setEipInfos(const std::vector<EipInfo>& value)
{
    eipInfos_ = value;
    eipInfosIsSet_ = true;
}

bool AddEipAlarmWhitelistRequestBody::eipInfosIsSet() const
{
    return eipInfosIsSet_;
}

void AddEipAlarmWhitelistRequestBody::unseteipInfos()
{
    eipInfosIsSet_ = false;
}

std::string AddEipAlarmWhitelistRequestBody::getFwInstanceId() const
{
    return fwInstanceId_;
}

void AddEipAlarmWhitelistRequestBody::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool AddEipAlarmWhitelistRequestBody::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void AddEipAlarmWhitelistRequestBody::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


