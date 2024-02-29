

#include "huaweicloud/cfw/v1/model/VPCProtectsVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




VPCProtectsVo::VPCProtectsVo()
{
    total_ = 0;
    totalIsSet_ = false;
    selfTotal_ = 0;
    selfTotalIsSet_ = false;
    otherTotal_ = 0;
    otherTotalIsSet_ = false;
    protectVpcsIsSet_ = false;
    selfProtectVpcsIsSet_ = false;
    otherProtectVpcsIsSet_ = false;
    totalAssets_ = 0;
    totalAssetsIsSet_ = false;
}

VPCProtectsVo::~VPCProtectsVo() = default;

void VPCProtectsVo::validate()
{
}

web::json::value VPCProtectsVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(selfTotalIsSet_) {
        val[utility::conversions::to_string_t("self_total")] = ModelBase::toJson(selfTotal_);
    }
    if(otherTotalIsSet_) {
        val[utility::conversions::to_string_t("other_total")] = ModelBase::toJson(otherTotal_);
    }
    if(protectVpcsIsSet_) {
        val[utility::conversions::to_string_t("protect_vpcs")] = ModelBase::toJson(protectVpcs_);
    }
    if(selfProtectVpcsIsSet_) {
        val[utility::conversions::to_string_t("self_protect_vpcs")] = ModelBase::toJson(selfProtectVpcs_);
    }
    if(otherProtectVpcsIsSet_) {
        val[utility::conversions::to_string_t("other_protect_vpcs")] = ModelBase::toJson(otherProtectVpcs_);
    }
    if(totalAssetsIsSet_) {
        val[utility::conversions::to_string_t("total_assets")] = ModelBase::toJson(totalAssets_);
    }

    return val;
}
bool VPCProtectsVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("self_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("self_total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSelfTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("other_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("other_total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOtherTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protect_vpcs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protect_vpcs"));
        if(!fieldValue.is_null())
        {
            std::vector<VpcAttachmentDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectVpcs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("self_protect_vpcs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("self_protect_vpcs"));
        if(!fieldValue.is_null())
        {
            std::vector<VpcAttachmentDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSelfProtectVpcs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("other_protect_vpcs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("other_protect_vpcs"));
        if(!fieldValue.is_null())
        {
            std::vector<VpcAttachmentDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOtherProtectVpcs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_assets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_assets"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalAssets(refVal);
        }
    }
    return ok;
}


int32_t VPCProtectsVo::getTotal() const
{
    return total_;
}

void VPCProtectsVo::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool VPCProtectsVo::totalIsSet() const
{
    return totalIsSet_;
}

void VPCProtectsVo::unsettotal()
{
    totalIsSet_ = false;
}

int32_t VPCProtectsVo::getSelfTotal() const
{
    return selfTotal_;
}

void VPCProtectsVo::setSelfTotal(int32_t value)
{
    selfTotal_ = value;
    selfTotalIsSet_ = true;
}

bool VPCProtectsVo::selfTotalIsSet() const
{
    return selfTotalIsSet_;
}

void VPCProtectsVo::unsetselfTotal()
{
    selfTotalIsSet_ = false;
}

int32_t VPCProtectsVo::getOtherTotal() const
{
    return otherTotal_;
}

void VPCProtectsVo::setOtherTotal(int32_t value)
{
    otherTotal_ = value;
    otherTotalIsSet_ = true;
}

bool VPCProtectsVo::otherTotalIsSet() const
{
    return otherTotalIsSet_;
}

void VPCProtectsVo::unsetotherTotal()
{
    otherTotalIsSet_ = false;
}

std::vector<VpcAttachmentDetail>& VPCProtectsVo::getProtectVpcs()
{
    return protectVpcs_;
}

void VPCProtectsVo::setProtectVpcs(const std::vector<VpcAttachmentDetail>& value)
{
    protectVpcs_ = value;
    protectVpcsIsSet_ = true;
}

bool VPCProtectsVo::protectVpcsIsSet() const
{
    return protectVpcsIsSet_;
}

void VPCProtectsVo::unsetprotectVpcs()
{
    protectVpcsIsSet_ = false;
}

std::vector<VpcAttachmentDetail>& VPCProtectsVo::getSelfProtectVpcs()
{
    return selfProtectVpcs_;
}

void VPCProtectsVo::setSelfProtectVpcs(const std::vector<VpcAttachmentDetail>& value)
{
    selfProtectVpcs_ = value;
    selfProtectVpcsIsSet_ = true;
}

bool VPCProtectsVo::selfProtectVpcsIsSet() const
{
    return selfProtectVpcsIsSet_;
}

void VPCProtectsVo::unsetselfProtectVpcs()
{
    selfProtectVpcsIsSet_ = false;
}

std::vector<VpcAttachmentDetail>& VPCProtectsVo::getOtherProtectVpcs()
{
    return otherProtectVpcs_;
}

void VPCProtectsVo::setOtherProtectVpcs(const std::vector<VpcAttachmentDetail>& value)
{
    otherProtectVpcs_ = value;
    otherProtectVpcsIsSet_ = true;
}

bool VPCProtectsVo::otherProtectVpcsIsSet() const
{
    return otherProtectVpcsIsSet_;
}

void VPCProtectsVo::unsetotherProtectVpcs()
{
    otherProtectVpcsIsSet_ = false;
}

int32_t VPCProtectsVo::getTotalAssets() const
{
    return totalAssets_;
}

void VPCProtectsVo::setTotalAssets(int32_t value)
{
    totalAssets_ = value;
    totalAssetsIsSet_ = true;
}

bool VPCProtectsVo::totalAssetsIsSet() const
{
    return totalAssetsIsSet_;
}

void VPCProtectsVo::unsettotalAssets()
{
    totalAssetsIsSet_ = false;
}

}
}
}
}
}


