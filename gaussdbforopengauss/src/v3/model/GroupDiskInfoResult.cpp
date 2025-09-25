

#include "huaweicloud/gaussdbforopengauss/v3/model/GroupDiskInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




GroupDiskInfoResult::GroupDiskInfoResult()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    used_ = 0.0;
    usedIsSet_ = false;
    total_ = 0.0;
    totalIsSet_ = false;
}

GroupDiskInfoResult::~GroupDiskInfoResult() = default;

void GroupDiskInfoResult::validate()
{
}

web::json::value GroupDiskInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool GroupDiskInfoResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::string GroupDiskInfoResult::getGroupId() const
{
    return groupId_;
}

void GroupDiskInfoResult::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool GroupDiskInfoResult::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void GroupDiskInfoResult::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string GroupDiskInfoResult::getName() const
{
    return name_;
}

void GroupDiskInfoResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GroupDiskInfoResult::nameIsSet() const
{
    return nameIsSet_;
}

void GroupDiskInfoResult::unsetname()
{
    nameIsSet_ = false;
}

double GroupDiskInfoResult::getUsed() const
{
    return used_;
}

void GroupDiskInfoResult::setUsed(double value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool GroupDiskInfoResult::usedIsSet() const
{
    return usedIsSet_;
}

void GroupDiskInfoResult::unsetused()
{
    usedIsSet_ = false;
}

double GroupDiskInfoResult::getTotal() const
{
    return total_;
}

void GroupDiskInfoResult::setTotal(double value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool GroupDiskInfoResult::totalIsSet() const
{
    return totalIsSet_;
}

void GroupDiskInfoResult::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


