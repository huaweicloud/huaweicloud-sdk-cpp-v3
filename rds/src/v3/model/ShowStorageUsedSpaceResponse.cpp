

#include "huaweicloud/rds/v3/model/ShowStorageUsedSpaceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowStorageUsedSpaceResponse::ShowStorageUsedSpaceResponse()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    used_ = "";
    usedIsSet_ = false;
}

ShowStorageUsedSpaceResponse::~ShowStorageUsedSpaceResponse() = default;

void ShowStorageUsedSpaceResponse::validate()
{
}

web::json::value ShowStorageUsedSpaceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }

    return val;
}
bool ShowStorageUsedSpaceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
        }
    }
    return ok;
}


std::string ShowStorageUsedSpaceResponse::getNodeId() const
{
    return nodeId_;
}

void ShowStorageUsedSpaceResponse::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ShowStorageUsedSpaceResponse::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ShowStorageUsedSpaceResponse::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ShowStorageUsedSpaceResponse::getUsed() const
{
    return used_;
}

void ShowStorageUsedSpaceResponse::setUsed(const std::string& value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool ShowStorageUsedSpaceResponse::usedIsSet() const
{
    return usedIsSet_;
}

void ShowStorageUsedSpaceResponse::unsetused()
{
    usedIsSet_ = false;
}

}
}
}
}
}


