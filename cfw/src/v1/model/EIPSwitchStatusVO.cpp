

#include "huaweicloud/cfw/v1/model/EIPSwitchStatusVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




EIPSwitchStatusVO::EIPSwitchStatusVO()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    failEipIdListIsSet_ = false;
    failEipListIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

EIPSwitchStatusVO::~EIPSwitchStatusVO() = default;

void EIPSwitchStatusVO::validate()
{
}

web::json::value EIPSwitchStatusVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(failEipIdListIsSet_) {
        val[utility::conversions::to_string_t("fail_eip_id_list")] = ModelBase::toJson(failEipIdList_);
    }
    if(failEipListIsSet_) {
        val[utility::conversions::to_string_t("fail_eip_list")] = ModelBase::toJson(failEipList_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool EIPSwitchStatusVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("fail_eip_id_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_eip_id_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailEipIdList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_eip_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_eip_list"));
        if(!fieldValue.is_null())
        {
            std::vector<FailedEipInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailEipList(refVal);
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
    return ok;
}


std::string EIPSwitchStatusVO::getObjectId() const
{
    return objectId_;
}

void EIPSwitchStatusVO::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool EIPSwitchStatusVO::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void EIPSwitchStatusVO::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::vector<std::string>& EIPSwitchStatusVO::getFailEipIdList()
{
    return failEipIdList_;
}

void EIPSwitchStatusVO::setFailEipIdList(const std::vector<std::string>& value)
{
    failEipIdList_ = value;
    failEipIdListIsSet_ = true;
}

bool EIPSwitchStatusVO::failEipIdListIsSet() const
{
    return failEipIdListIsSet_;
}

void EIPSwitchStatusVO::unsetfailEipIdList()
{
    failEipIdListIsSet_ = false;
}

std::vector<FailedEipInfo>& EIPSwitchStatusVO::getFailEipList()
{
    return failEipList_;
}

void EIPSwitchStatusVO::setFailEipList(const std::vector<FailedEipInfo>& value)
{
    failEipList_ = value;
    failEipListIsSet_ = true;
}

bool EIPSwitchStatusVO::failEipListIsSet() const
{
    return failEipListIsSet_;
}

void EIPSwitchStatusVO::unsetfailEipList()
{
    failEipListIsSet_ = false;
}

std::string EIPSwitchStatusVO::getId() const
{
    return id_;
}

void EIPSwitchStatusVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool EIPSwitchStatusVO::idIsSet() const
{
    return idIsSet_;
}

void EIPSwitchStatusVO::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


