

#include "huaweicloud/meeting/v1/model/DeptDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




DeptDTO::DeptDTO()
{
    deptCode_ = "";
    deptCodeIsSet_ = false;
    deptName_ = "";
    deptNameIsSet_ = false;
    parentDeptCode_ = "";
    parentDeptCodeIsSet_ = false;
    note_ = "";
    noteIsSet_ = false;
    inPermission_ = "";
    inPermissionIsSet_ = false;
    outPermission_ = "";
    outPermissionIsSet_ = false;
    designatedOutDeptCodesIsSet_ = false;
    sortLevel_ = 0;
    sortLevelIsSet_ = false;
}

DeptDTO::~DeptDTO() = default;

void DeptDTO::validate()
{
}

web::json::value DeptDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deptCodeIsSet_) {
        val[utility::conversions::to_string_t("deptCode")] = ModelBase::toJson(deptCode_);
    }
    if(deptNameIsSet_) {
        val[utility::conversions::to_string_t("deptName")] = ModelBase::toJson(deptName_);
    }
    if(parentDeptCodeIsSet_) {
        val[utility::conversions::to_string_t("parentDeptCode")] = ModelBase::toJson(parentDeptCode_);
    }
    if(noteIsSet_) {
        val[utility::conversions::to_string_t("note")] = ModelBase::toJson(note_);
    }
    if(inPermissionIsSet_) {
        val[utility::conversions::to_string_t("inPermission")] = ModelBase::toJson(inPermission_);
    }
    if(outPermissionIsSet_) {
        val[utility::conversions::to_string_t("outPermission")] = ModelBase::toJson(outPermission_);
    }
    if(designatedOutDeptCodesIsSet_) {
        val[utility::conversions::to_string_t("designatedOutDeptCodes")] = ModelBase::toJson(designatedOutDeptCodes_);
    }
    if(sortLevelIsSet_) {
        val[utility::conversions::to_string_t("sortLevel")] = ModelBase::toJson(sortLevel_);
    }

    return val;
}
bool DeptDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("parentDeptCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parentDeptCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentDeptCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("note"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("note"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNote(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inPermission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inPermission"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInPermission(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("outPermission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("outPermission"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutPermission(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("designatedOutDeptCodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("designatedOutDeptCodes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDesignatedOutDeptCodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sortLevel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sortLevel"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortLevel(refVal);
        }
    }
    return ok;
}


std::string DeptDTO::getDeptCode() const
{
    return deptCode_;
}

void DeptDTO::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool DeptDTO::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void DeptDTO::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

std::string DeptDTO::getDeptName() const
{
    return deptName_;
}

void DeptDTO::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool DeptDTO::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void DeptDTO::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string DeptDTO::getParentDeptCode() const
{
    return parentDeptCode_;
}

void DeptDTO::setParentDeptCode(const std::string& value)
{
    parentDeptCode_ = value;
    parentDeptCodeIsSet_ = true;
}

bool DeptDTO::parentDeptCodeIsSet() const
{
    return parentDeptCodeIsSet_;
}

void DeptDTO::unsetparentDeptCode()
{
    parentDeptCodeIsSet_ = false;
}

std::string DeptDTO::getNote() const
{
    return note_;
}

void DeptDTO::setNote(const std::string& value)
{
    note_ = value;
    noteIsSet_ = true;
}

bool DeptDTO::noteIsSet() const
{
    return noteIsSet_;
}

void DeptDTO::unsetnote()
{
    noteIsSet_ = false;
}

std::string DeptDTO::getInPermission() const
{
    return inPermission_;
}

void DeptDTO::setInPermission(const std::string& value)
{
    inPermission_ = value;
    inPermissionIsSet_ = true;
}

bool DeptDTO::inPermissionIsSet() const
{
    return inPermissionIsSet_;
}

void DeptDTO::unsetinPermission()
{
    inPermissionIsSet_ = false;
}

std::string DeptDTO::getOutPermission() const
{
    return outPermission_;
}

void DeptDTO::setOutPermission(const std::string& value)
{
    outPermission_ = value;
    outPermissionIsSet_ = true;
}

bool DeptDTO::outPermissionIsSet() const
{
    return outPermissionIsSet_;
}

void DeptDTO::unsetoutPermission()
{
    outPermissionIsSet_ = false;
}

std::vector<std::string>& DeptDTO::getDesignatedOutDeptCodes()
{
    return designatedOutDeptCodes_;
}

void DeptDTO::setDesignatedOutDeptCodes(const std::vector<std::string>& value)
{
    designatedOutDeptCodes_ = value;
    designatedOutDeptCodesIsSet_ = true;
}

bool DeptDTO::designatedOutDeptCodesIsSet() const
{
    return designatedOutDeptCodesIsSet_;
}

void DeptDTO::unsetdesignatedOutDeptCodes()
{
    designatedOutDeptCodesIsSet_ = false;
}

int32_t DeptDTO::getSortLevel() const
{
    return sortLevel_;
}

void DeptDTO::setSortLevel(int32_t value)
{
    sortLevel_ = value;
    sortLevelIsSet_ = true;
}

bool DeptDTO::sortLevelIsSet() const
{
    return sortLevelIsSet_;
}

void DeptDTO::unsetsortLevel()
{
    sortLevelIsSet_ = false;
}

}
}
}
}
}


