

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

}
}
}
}
}


