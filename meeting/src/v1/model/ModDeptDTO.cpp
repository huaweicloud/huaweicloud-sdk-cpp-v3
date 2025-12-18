

#include "huaweicloud/meeting/v1/model/ModDeptDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ModDeptDTO::ModDeptDTO()
{
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

ModDeptDTO::~ModDeptDTO() = default;

void ModDeptDTO::validate()
{
}

web::json::value ModDeptDTO::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool ModDeptDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ModDeptDTO::getDeptName() const
{
    return deptName_;
}

void ModDeptDTO::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool ModDeptDTO::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void ModDeptDTO::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string ModDeptDTO::getParentDeptCode() const
{
    return parentDeptCode_;
}

void ModDeptDTO::setParentDeptCode(const std::string& value)
{
    parentDeptCode_ = value;
    parentDeptCodeIsSet_ = true;
}

bool ModDeptDTO::parentDeptCodeIsSet() const
{
    return parentDeptCodeIsSet_;
}

void ModDeptDTO::unsetparentDeptCode()
{
    parentDeptCodeIsSet_ = false;
}

std::string ModDeptDTO::getNote() const
{
    return note_;
}

void ModDeptDTO::setNote(const std::string& value)
{
    note_ = value;
    noteIsSet_ = true;
}

bool ModDeptDTO::noteIsSet() const
{
    return noteIsSet_;
}

void ModDeptDTO::unsetnote()
{
    noteIsSet_ = false;
}

std::string ModDeptDTO::getInPermission() const
{
    return inPermission_;
}

void ModDeptDTO::setInPermission(const std::string& value)
{
    inPermission_ = value;
    inPermissionIsSet_ = true;
}

bool ModDeptDTO::inPermissionIsSet() const
{
    return inPermissionIsSet_;
}

void ModDeptDTO::unsetinPermission()
{
    inPermissionIsSet_ = false;
}

std::string ModDeptDTO::getOutPermission() const
{
    return outPermission_;
}

void ModDeptDTO::setOutPermission(const std::string& value)
{
    outPermission_ = value;
    outPermissionIsSet_ = true;
}

bool ModDeptDTO::outPermissionIsSet() const
{
    return outPermissionIsSet_;
}

void ModDeptDTO::unsetoutPermission()
{
    outPermissionIsSet_ = false;
}

std::vector<std::string>& ModDeptDTO::getDesignatedOutDeptCodes()
{
    return designatedOutDeptCodes_;
}

void ModDeptDTO::setDesignatedOutDeptCodes(const std::vector<std::string>& value)
{
    designatedOutDeptCodes_ = value;
    designatedOutDeptCodesIsSet_ = true;
}

bool ModDeptDTO::designatedOutDeptCodesIsSet() const
{
    return designatedOutDeptCodesIsSet_;
}

void ModDeptDTO::unsetdesignatedOutDeptCodes()
{
    designatedOutDeptCodesIsSet_ = false;
}

int32_t ModDeptDTO::getSortLevel() const
{
    return sortLevel_;
}

void ModDeptDTO::setSortLevel(int32_t value)
{
    sortLevel_ = value;
    sortLevelIsSet_ = true;
}

bool ModDeptDTO::sortLevelIsSet() const
{
    return sortLevelIsSet_;
}

void ModDeptDTO::unsetsortLevel()
{
    sortLevelIsSet_ = false;
}

}
}
}
}
}


