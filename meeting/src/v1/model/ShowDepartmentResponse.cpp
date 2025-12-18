

#include "huaweicloud/meeting/v1/model/ShowDepartmentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowDepartmentResponse::ShowDepartmentResponse()
{
    deptCode_ = "";
    deptCodeIsSet_ = false;
    deptName_ = "";
    deptNameIsSet_ = false;
    isLeafNodes_ = false;
    isLeafNodesIsSet_ = false;
    childDeptsIsSet_ = false;
}

ShowDepartmentResponse::~ShowDepartmentResponse() = default;

void ShowDepartmentResponse::validate()
{
}

web::json::value ShowDepartmentResponse::toJson() const
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
    if(childDeptsIsSet_) {
        val[utility::conversions::to_string_t("childDepts")] = ModelBase::toJson(childDepts_);
    }

    return val;
}
bool ShowDepartmentResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("childDepts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("childDepts"));
        if(!fieldValue.is_null())
        {
            std::vector<ChildDeptDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildDepts(refVal);
        }
    }
    return ok;
}


std::string ShowDepartmentResponse::getDeptCode() const
{
    return deptCode_;
}

void ShowDepartmentResponse::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool ShowDepartmentResponse::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void ShowDepartmentResponse::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

std::string ShowDepartmentResponse::getDeptName() const
{
    return deptName_;
}

void ShowDepartmentResponse::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool ShowDepartmentResponse::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void ShowDepartmentResponse::unsetdeptName()
{
    deptNameIsSet_ = false;
}

bool ShowDepartmentResponse::isIsLeafNodes() const
{
    return isLeafNodes_;
}

void ShowDepartmentResponse::setIsLeafNodes(bool value)
{
    isLeafNodes_ = value;
    isLeafNodesIsSet_ = true;
}

bool ShowDepartmentResponse::isLeafNodesIsSet() const
{
    return isLeafNodesIsSet_;
}

void ShowDepartmentResponse::unsetisLeafNodes()
{
    isLeafNodesIsSet_ = false;
}

std::vector<ChildDeptDTO>& ShowDepartmentResponse::getChildDepts()
{
    return childDepts_;
}

void ShowDepartmentResponse::setChildDepts(const std::vector<ChildDeptDTO>& value)
{
    childDepts_ = value;
    childDeptsIsSet_ = true;
}

bool ShowDepartmentResponse::childDeptsIsSet() const
{
    return childDeptsIsSet_;
}

void ShowDepartmentResponse::unsetchildDepts()
{
    childDeptsIsSet_ = false;
}

}
}
}
}
}


