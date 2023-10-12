

#include "huaweicloud/dds/v3/model/ResizeInstanceVolumeOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ResizeInstanceVolumeOption::ResizeInstanceVolumeOption()
{
    size_ = "";
    sizeIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    nodeIdsIsSet_ = false;
}

ResizeInstanceVolumeOption::~ResizeInstanceVolumeOption() = default;

void ResizeInstanceVolumeOption::validate()
{
}

web::json::value ResizeInstanceVolumeOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(nodeIdsIsSet_) {
        val[utility::conversions::to_string_t("node_ids")] = ModelBase::toJson(nodeIds_);
    }

    return val;
}
bool ResizeInstanceVolumeOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeIds(refVal);
        }
    }
    return ok;
}


std::string ResizeInstanceVolumeOption::getSize() const
{
    return size_;
}

void ResizeInstanceVolumeOption::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ResizeInstanceVolumeOption::sizeIsSet() const
{
    return sizeIsSet_;
}

void ResizeInstanceVolumeOption::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ResizeInstanceVolumeOption::getGroupId() const
{
    return groupId_;
}

void ResizeInstanceVolumeOption::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ResizeInstanceVolumeOption::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ResizeInstanceVolumeOption::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::vector<std::string>& ResizeInstanceVolumeOption::getNodeIds()
{
    return nodeIds_;
}

void ResizeInstanceVolumeOption::setNodeIds(const std::vector<std::string>& value)
{
    nodeIds_ = value;
    nodeIdsIsSet_ = true;
}

bool ResizeInstanceVolumeOption::nodeIdsIsSet() const
{
    return nodeIdsIsSet_;
}

void ResizeInstanceVolumeOption::unsetnodeIds()
{
    nodeIdsIsSet_ = false;
}

}
}
}
}
}


