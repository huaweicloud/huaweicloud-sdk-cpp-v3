

#include "huaweicloud/rds/v3/model/FollowerMigrateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




FollowerMigrateRequest::FollowerMigrateRequest()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    azCode_ = "";
    azCodeIsSet_ = false;
}

FollowerMigrateRequest::~FollowerMigrateRequest() = default;

void FollowerMigrateRequest::validate()
{
}

web::json::value FollowerMigrateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("nodeId")] = ModelBase::toJson(nodeId_);
    }
    if(azCodeIsSet_) {
        val[utility::conversions::to_string_t("azCode")] = ModelBase::toJson(azCode_);
    }

    return val;
}

bool FollowerMigrateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nodeId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("azCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("azCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzCode(refVal);
        }
    }
    return ok;
}

std::string FollowerMigrateRequest::getNodeId() const
{
    return nodeId_;
}

void FollowerMigrateRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool FollowerMigrateRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void FollowerMigrateRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string FollowerMigrateRequest::getAzCode() const
{
    return azCode_;
}

void FollowerMigrateRequest::setAzCode(const std::string& value)
{
    azCode_ = value;
    azCodeIsSet_ = true;
}

bool FollowerMigrateRequest::azCodeIsSet() const
{
    return azCodeIsSet_;
}

void FollowerMigrateRequest::unsetazCode()
{
    azCodeIsSet_ = false;
}

}
}
}
}
}


