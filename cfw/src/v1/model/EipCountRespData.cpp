

#include "huaweicloud/cfw/v1/model/EipCountRespData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




EipCountRespData::EipCountRespData()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    eipTotal_ = 0;
    eipTotalIsSet_ = false;
    eipProtected_ = 0;
    eipProtectedIsSet_ = false;
}

EipCountRespData::~EipCountRespData() = default;

void EipCountRespData::validate()
{
}

web::json::value EipCountRespData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(eipTotalIsSet_) {
        val[utility::conversions::to_string_t("eip_total")] = ModelBase::toJson(eipTotal_);
    }
    if(eipProtectedIsSet_) {
        val[utility::conversions::to_string_t("eip_protected")] = ModelBase::toJson(eipProtected_);
    }

    return val;
}
bool EipCountRespData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("eip_protected"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip_protected"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEipProtected(refVal);
        }
    }
    return ok;
}


std::string EipCountRespData::getObjectId() const
{
    return objectId_;
}

void EipCountRespData::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool EipCountRespData::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void EipCountRespData::unsetobjectId()
{
    objectIdIsSet_ = false;
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

}
}
}
}
}


