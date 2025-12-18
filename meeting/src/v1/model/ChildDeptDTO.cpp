

#include "huaweicloud/meeting/v1/model/ChildDeptDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ChildDeptDTO::ChildDeptDTO()
{
    deptCode_ = "";
    deptCodeIsSet_ = false;
    deptName_ = "";
    deptNameIsSet_ = false;
    isLeafNodes_ = false;
    isLeafNodesIsSet_ = false;
}

ChildDeptDTO::~ChildDeptDTO() = default;

void ChildDeptDTO::validate()
{
}

web::json::value ChildDeptDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deptCodeIsSet_) {
        val[utility::conversions::to_string_t("deptCode")] = ModelBase::toJson(deptCode_);
    }
    if(deptNameIsSet_) {
        val[utility::conversions::to_string_t("deptName")] = ModelBase::toJson(deptName_);
    }
    if(isLeafNodesIsSet_) {
        val[utility::conversions::to_string_t("isLeafNodes")] = ModelBase::toJson(isLeafNodes_);
    }

    return val;
}
bool ChildDeptDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("deptCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deptName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isLeafNodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isLeafNodes"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsLeafNodes(refVal);
        }
    }
    return ok;
}


std::string ChildDeptDTO::getDeptCode() const
{
    return deptCode_;
}

void ChildDeptDTO::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool ChildDeptDTO::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void ChildDeptDTO::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

std::string ChildDeptDTO::getDeptName() const
{
    return deptName_;
}

void ChildDeptDTO::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool ChildDeptDTO::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void ChildDeptDTO::unsetdeptName()
{
    deptNameIsSet_ = false;
}

bool ChildDeptDTO::isIsLeafNodes() const
{
    return isLeafNodes_;
}

void ChildDeptDTO::setIsLeafNodes(bool value)
{
    isLeafNodes_ = value;
    isLeafNodesIsSet_ = true;
}

bool ChildDeptDTO::isLeafNodesIsSet() const
{
    return isLeafNodesIsSet_;
}

void ChildDeptDTO::unsetisLeafNodes()
{
    isLeafNodesIsSet_ = false;
}

}
}
}
}
}


