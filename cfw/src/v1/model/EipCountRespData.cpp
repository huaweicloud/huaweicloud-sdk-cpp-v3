

#include "huaweicloud/cfw/v1/model/EipCountRespData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




EipCountRespData::EipCountRespData()
{
    eipTotal_ = 0;
    eipTotalIsSet_ = false;
    eipProtected_ = 0;
    eipProtectedIsSet_ = false;
    eipProtectedSelf_ = 0;
    eipProtectedSelfIsSet_ = false;
}

EipCountRespData::~EipCountRespData() = default;

void EipCountRespData::validate()
{
}

web::json::value EipCountRespData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eipTotalIsSet_) {
        val[utility::conversions::to_string_t("eip_total")] = ModelBase::toJson(eipTotal_);
    }
    if(eipProtectedIsSet_) {
        val[utility::conversions::to_string_t("eip_protected")] = ModelBase::toJson(eipProtected_);
    }
    if(eipProtectedSelfIsSet_) {
        val[utility::conversions::to_string_t("eip_protected_self")] = ModelBase::toJson(eipProtectedSelf_);
    }

    return val;
}
bool EipCountRespData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("eip_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip_total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEipTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eip_protected"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip_protected"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEipProtected(refVal);
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
    return ok;
}


int32_t EipCountRespData::getEipTotal() const
{
    return eipTotal_;
}

void EipCountRespData::setEipTotal(int32_t value)
{
    eipTotal_ = value;
    eipTotalIsSet_ = true;
}

bool EipCountRespData::eipTotalIsSet() const
{
    return eipTotalIsSet_;
}

void EipCountRespData::unseteipTotal()
{
    eipTotalIsSet_ = false;
}

int32_t EipCountRespData::getEipProtected() const
{
    return eipProtected_;
}

void EipCountRespData::setEipProtected(int32_t value)
{
    eipProtected_ = value;
    eipProtectedIsSet_ = true;
}

bool EipCountRespData::eipProtectedIsSet() const
{
    return eipProtectedIsSet_;
}

void EipCountRespData::unseteipProtected()
{
    eipProtectedIsSet_ = false;
}

int32_t EipCountRespData::getEipProtectedSelf() const
{
    return eipProtectedSelf_;
}

void EipCountRespData::setEipProtectedSelf(int32_t value)
{
    eipProtectedSelf_ = value;
    eipProtectedSelfIsSet_ = true;
}

bool EipCountRespData::eipProtectedSelfIsSet() const
{
    return eipProtectedSelfIsSet_;
}

void EipCountRespData::unseteipProtectedSelf()
{
    eipProtectedSelfIsSet_ = false;
}

}
}
}
}
}


