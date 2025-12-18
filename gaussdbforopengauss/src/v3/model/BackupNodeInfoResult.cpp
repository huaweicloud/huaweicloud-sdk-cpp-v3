

#include "huaweicloud/gaussdbforopengauss/v3/model/BackupNodeInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BackupNodeInfoResult::BackupNodeInfoResult()
{
    azList_ = "";
    azListIsSet_ = false;
    nodeList_ = "";
    nodeListIsSet_ = false;
}

BackupNodeInfoResult::~BackupNodeInfoResult() = default;

void BackupNodeInfoResult::validate()
{
}

web::json::value BackupNodeInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(azListIsSet_) {
        val[utility::conversions::to_string_t("az_list")] = ModelBase::toJson(azList_);
    }
    if(nodeListIsSet_) {
        val[utility::conversions::to_string_t("node_list")] = ModelBase::toJson(nodeList_);
    }

    return val;
}
bool BackupNodeInfoResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("az_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_list"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_list"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeList(refVal);
        }
    }
    return ok;
}


std::string BackupNodeInfoResult::getAzList() const
{
    return azList_;
}

void BackupNodeInfoResult::setAzList(const std::string& value)
{
    azList_ = value;
    azListIsSet_ = true;
}

bool BackupNodeInfoResult::azListIsSet() const
{
    return azListIsSet_;
}

void BackupNodeInfoResult::unsetazList()
{
    azListIsSet_ = false;
}

std::string BackupNodeInfoResult::getNodeList() const
{
    return nodeList_;
}

void BackupNodeInfoResult::setNodeList(const std::string& value)
{
    nodeList_ = value;
    nodeListIsSet_ = true;
}

bool BackupNodeInfoResult::nodeListIsSet() const
{
    return nodeListIsSet_;
}

void BackupNodeInfoResult::unsetnodeList()
{
    nodeListIsSet_ = false;
}

}
}
}
}
}


