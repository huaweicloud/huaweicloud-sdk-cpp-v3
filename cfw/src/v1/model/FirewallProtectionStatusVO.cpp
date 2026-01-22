

#include "huaweicloud/cfw/v1/model/FirewallProtectionStatusVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




FirewallProtectionStatusVO::FirewallProtectionStatusVO()
{
    protectionStatus_ = 0;
    protectionStatusIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
    failedEipListIsSet_ = false;
    failedEipIdListIsSet_ = false;
}

FirewallProtectionStatusVO::~FirewallProtectionStatusVO() = default;

void FirewallProtectionStatusVO::validate()
{
}

web::json::value FirewallProtectionStatusVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protectionStatusIsSet_) {
        val[utility::conversions::to_string_t("protection_status")] = ModelBase::toJson(protectionStatus_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(failedEipListIsSet_) {
        val[utility::conversions::to_string_t("failed_eip_list")] = ModelBase::toJson(failedEipList_);
    }
    if(failedEipIdListIsSet_) {
        val[utility::conversions::to_string_t("failed_eip_id_list")] = ModelBase::toJson(failedEipIdList_);
    }

    return val;
}
bool FirewallProtectionStatusVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protection_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protection_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectionStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed_eip_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_eip_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedEipList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed_eip_id_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_eip_id_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedEipIdList(refVal);
        }
    }
    return ok;
}


int32_t FirewallProtectionStatusVO::getProtectionStatus() const
{
    return protectionStatus_;
}

void FirewallProtectionStatusVO::setProtectionStatus(int32_t value)
{
    protectionStatus_ = value;
    protectionStatusIsSet_ = true;
}

bool FirewallProtectionStatusVO::protectionStatusIsSet() const
{
    return protectionStatusIsSet_;
}

void FirewallProtectionStatusVO::unsetprotectionStatus()
{
    protectionStatusIsSet_ = false;
}

std::string FirewallProtectionStatusVO::getId() const
{
    return id_;
}

void FirewallProtectionStatusVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool FirewallProtectionStatusVO::idIsSet() const
{
    return idIsSet_;
}

void FirewallProtectionStatusVO::unsetid()
{
    idIsSet_ = false;
}

std::string FirewallProtectionStatusVO::getObjectId() const
{
    return objectId_;
}

void FirewallProtectionStatusVO::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool FirewallProtectionStatusVO::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void FirewallProtectionStatusVO::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::vector<std::string>& FirewallProtectionStatusVO::getFailedEipList()
{
    return failedEipList_;
}

void FirewallProtectionStatusVO::setFailedEipList(const std::vector<std::string>& value)
{
    failedEipList_ = value;
    failedEipListIsSet_ = true;
}

bool FirewallProtectionStatusVO::failedEipListIsSet() const
{
    return failedEipListIsSet_;
}

void FirewallProtectionStatusVO::unsetfailedEipList()
{
    failedEipListIsSet_ = false;
}

std::vector<std::string>& FirewallProtectionStatusVO::getFailedEipIdList()
{
    return failedEipIdList_;
}

void FirewallProtectionStatusVO::setFailedEipIdList(const std::vector<std::string>& value)
{
    failedEipIdList_ = value;
    failedEipIdListIsSet_ = true;
}

bool FirewallProtectionStatusVO::failedEipIdListIsSet() const
{
    return failedEipIdListIsSet_;
}

void FirewallProtectionStatusVO::unsetfailedEipIdList()
{
    failedEipIdListIsSet_ = false;
}

}
}
}
}
}


