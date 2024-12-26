

#include "huaweicloud/cfw/v1/model/FirewallStatusVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




FirewallStatusVO::FirewallStatusVO()
{
    availableEipCount_ = 0;
    availableEipCountIsSet_ = false;
    beyondMaxCount_ = false;
    beyondMaxCountIsSet_ = false;
    eipProtectedSelf_ = 0;
    eipProtectedSelfIsSet_ = false;
    eipTotal_ = 0;
    eipTotalIsSet_ = false;
    eipUnProtected_ = 0;
    eipUnProtectedIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

FirewallStatusVO::~FirewallStatusVO() = default;

void FirewallStatusVO::validate()
{
}

web::json::value FirewallStatusVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(availableEipCountIsSet_) {
        val[utility::conversions::to_string_t("available_eip_count")] = ModelBase::toJson(availableEipCount_);
    }
    if(beyondMaxCountIsSet_) {
        val[utility::conversions::to_string_t("beyond_max_count")] = ModelBase::toJson(beyondMaxCount_);
    }
    if(eipProtectedSelfIsSet_) {
        val[utility::conversions::to_string_t("eip_protected_self")] = ModelBase::toJson(eipProtectedSelf_);
    }
    if(eipTotalIsSet_) {
        val[utility::conversions::to_string_t("eip_total")] = ModelBase::toJson(eipTotal_);
    }
    if(eipUnProtectedIsSet_) {
        val[utility::conversions::to_string_t("eip_un_protected")] = ModelBase::toJson(eipUnProtected_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool FirewallStatusVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("available_eip_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("available_eip_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailableEipCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("beyond_max_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("beyond_max_count"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeyondMaxCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eip_protected_self"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip_protected_self"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEipProtectedSelf(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eip_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip_total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEipTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eip_un_protected"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip_un_protected"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEipUnProtected(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


int32_t FirewallStatusVO::getAvailableEipCount() const
{
    return availableEipCount_;
}

void FirewallStatusVO::setAvailableEipCount(int32_t value)
{
    availableEipCount_ = value;
    availableEipCountIsSet_ = true;
}

bool FirewallStatusVO::availableEipCountIsSet() const
{
    return availableEipCountIsSet_;
}

void FirewallStatusVO::unsetavailableEipCount()
{
    availableEipCountIsSet_ = false;
}

bool FirewallStatusVO::isBeyondMaxCount() const
{
    return beyondMaxCount_;
}

void FirewallStatusVO::setBeyondMaxCount(bool value)
{
    beyondMaxCount_ = value;
    beyondMaxCountIsSet_ = true;
}

bool FirewallStatusVO::beyondMaxCountIsSet() const
{
    return beyondMaxCountIsSet_;
}

void FirewallStatusVO::unsetbeyondMaxCount()
{
    beyondMaxCountIsSet_ = false;
}

int32_t FirewallStatusVO::getEipProtectedSelf() const
{
    return eipProtectedSelf_;
}

void FirewallStatusVO::setEipProtectedSelf(int32_t value)
{
    eipProtectedSelf_ = value;
    eipProtectedSelfIsSet_ = true;
}

bool FirewallStatusVO::eipProtectedSelfIsSet() const
{
    return eipProtectedSelfIsSet_;
}

void FirewallStatusVO::unseteipProtectedSelf()
{
    eipProtectedSelfIsSet_ = false;
}

int32_t FirewallStatusVO::getEipTotal() const
{
    return eipTotal_;
}

void FirewallStatusVO::setEipTotal(int32_t value)
{
    eipTotal_ = value;
    eipTotalIsSet_ = true;
}

bool FirewallStatusVO::eipTotalIsSet() const
{
    return eipTotalIsSet_;
}

void FirewallStatusVO::unseteipTotal()
{
    eipTotalIsSet_ = false;
}

int32_t FirewallStatusVO::getEipUnProtected() const
{
    return eipUnProtected_;
}

void FirewallStatusVO::setEipUnProtected(int32_t value)
{
    eipUnProtected_ = value;
    eipUnProtectedIsSet_ = true;
}

bool FirewallStatusVO::eipUnProtectedIsSet() const
{
    return eipUnProtectedIsSet_;
}

void FirewallStatusVO::unseteipUnProtected()
{
    eipUnProtectedIsSet_ = false;
}

std::string FirewallStatusVO::getObjectId() const
{
    return objectId_;
}

void FirewallStatusVO::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool FirewallStatusVO::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void FirewallStatusVO::unsetobjectId()
{
    objectIdIsSet_ = false;
}

int32_t FirewallStatusVO::getStatus() const
{
    return status_;
}

void FirewallStatusVO::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool FirewallStatusVO::statusIsSet() const
{
    return statusIsSet_;
}

void FirewallStatusVO::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


