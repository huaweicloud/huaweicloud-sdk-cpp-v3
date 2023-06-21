

#include "huaweicloud/cfw/v1/model/EipOperateProtectReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




EipOperateProtectReq::EipOperateProtectReq()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    ipInfosIsSet_ = false;
}

EipOperateProtectReq::~EipOperateProtectReq() = default;

void EipOperateProtectReq::validate()
{
}

web::json::value EipOperateProtectReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(ipInfosIsSet_) {
        val[utility::conversions::to_string_t("ip_infos")] = ModelBase::toJson(ipInfos_);
    }

    return val;
}

bool EipOperateProtectReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<EipOperateProtectReq_ip_infos> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpInfos(refVal);
        }
    }
    return ok;
}


std::string EipOperateProtectReq::getObjectId() const
{
    return objectId_;
}

void EipOperateProtectReq::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool EipOperateProtectReq::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void EipOperateProtectReq::unsetobjectId()
{
    objectIdIsSet_ = false;
}

int32_t EipOperateProtectReq::getStatus() const
{
    return status_;
}

void EipOperateProtectReq::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool EipOperateProtectReq::statusIsSet() const
{
    return statusIsSet_;
}

void EipOperateProtectReq::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<EipOperateProtectReq_ip_infos>& EipOperateProtectReq::getIpInfos()
{
    return ipInfos_;
}

void EipOperateProtectReq::setIpInfos(const std::vector<EipOperateProtectReq_ip_infos>& value)
{
    ipInfos_ = value;
    ipInfosIsSet_ = true;
}

bool EipOperateProtectReq::ipInfosIsSet() const
{
    return ipInfosIsSet_;
}

void EipOperateProtectReq::unsetipInfos()
{
    ipInfosIsSet_ = false;
}

}
}
}
}
}


