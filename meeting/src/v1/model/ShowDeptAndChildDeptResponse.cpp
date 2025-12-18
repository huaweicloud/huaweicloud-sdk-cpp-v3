

#include "huaweicloud/meeting/v1/model/ShowDeptAndChildDeptResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowDeptAndChildDeptResponse::ShowDeptAndChildDeptResponse()
{
    corpId_ = "";
    corpIdIsSet_ = false;
    deptCode_ = "";
    deptCodeIsSet_ = false;
    deptLevel_ = 0;
    deptLevelIsSet_ = false;
    deptName_ = "";
    deptNameIsSet_ = false;
    deptNamePath_ = "";
    deptNamePathIsSet_ = false;
    isLeafNode_ = false;
    isLeafNodeIsSet_ = false;
    parentDeptCode_ = "";
    parentDeptCodeIsSet_ = false;
    deptCodePath_ = "";
    deptCodePathIsSet_ = false;
    note_ = "";
    noteIsSet_ = false;
    inPermission_ = "";
    inPermissionIsSet_ = false;
    outPermission_ = "";
    outPermissionIsSet_ = false;
    designatedOutDeptCodesIsSet_ = false;
    childDeptsIsSet_ = false;
    sortLevel_ = 0;
    sortLevelIsSet_ = false;
}

ShowDeptAndChildDeptResponse::~ShowDeptAndChildDeptResponse() = default;

void ShowDeptAndChildDeptResponse::validate()
{
}

web::json::value ShowDeptAndChildDeptResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(corpIdIsSet_) {
        val[utility::conversions::to_string_t("corpId")] = ModelBase::toJson(corpId_);
    }
    if(deptCodeIsSet_) {
        val[utility::conversions::to_string_t("deptCode")] = ModelBase::toJson(deptCode_);
    }
    if(deptLevelIsSet_) {
        val[utility::conversions::to_string_t("deptLevel")] = ModelBase::toJson(deptLevel_);
    }
    if(deptNameIsSet_) {
        val[utility::conversions::to_string_t("deptName")] = ModelBase::toJson(deptName_);
    }
    if(deptNamePathIsSet_) {
        val[utility::conversions::to_string_t("deptNamePath")] = ModelBase::toJson(deptNamePath_);
    }
    if(isLeafNodeIsSet_) {
        val[utility::conversions::to_string_t("isLeafNode")] = ModelBase::toJson(isLeafNode_);
    }
    if(parentDeptCodeIsSet_) {
        val[utility::conversions::to_string_t("parentDeptCode")] = ModelBase::toJson(parentDeptCode_);
    }
    if(deptCodePathIsSet_) {
        val[utility::conversions::to_string_t("deptCodePath")] = ModelBase::toJson(deptCodePath_);
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
    if(childDeptsIsSet_) {
        val[utility::conversions::to_string_t("childDepts")] = ModelBase::toJson(childDepts_);
    }
    if(sortLevelIsSet_) {
        val[utility::conversions::to_string_t("sortLevel")] = ModelBase::toJson(sortLevel_);
    }

    return val;
}
bool ShowDeptAndChildDeptResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("corpId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("corpId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCorpId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deptCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deptLevel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptLevel"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptLevel(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("deptNamePath"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptNamePath"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptNamePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isLeafNode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isLeafNode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsLeafNode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("deptCodePath"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptCodePath"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptCodePath(refVal);
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
            std::vector<IdMarkDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDesignatedOutDeptCodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("childDepts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("childDepts"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryDeptResultDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildDepts(refVal);
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


std::string ShowDeptAndChildDeptResponse::getCorpId() const
{
    return corpId_;
}

void ShowDeptAndChildDeptResponse::setCorpId(const std::string& value)
{
    corpId_ = value;
    corpIdIsSet_ = true;
}

bool ShowDeptAndChildDeptResponse::corpIdIsSet() const
{
    return corpIdIsSet_;
}

void ShowDeptAndChildDeptResponse::unsetcorpId()
{
    corpIdIsSet_ = false;
}

std::string ShowDeptAndChildDeptResponse::getDeptCode() const
{
    return deptCode_;
}

void ShowDeptAndChildDeptResponse::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool ShowDeptAndChildDeptResponse::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void ShowDeptAndChildDeptResponse::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

int32_t ShowDeptAndChildDeptResponse::getDeptLevel() const
{
    return deptLevel_;
}

void ShowDeptAndChildDeptResponse::setDeptLevel(int32_t value)
{
    deptLevel_ = value;
    deptLevelIsSet_ = true;
}

bool ShowDeptAndChildDeptResponse::deptLevelIsSet() const
{
    return deptLevelIsSet_;
}

void ShowDeptAndChildDeptResponse::unsetdeptLevel()
{
    deptLevelIsSet_ = false;
}

std::string ShowDeptAndChildDeptResponse::getDeptName() const
{
    return deptName_;
}

void ShowDeptAndChildDeptResponse::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool ShowDeptAndChildDeptResponse::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void ShowDeptAndChildDeptResponse::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string ShowDeptAndChildDeptResponse::getDeptNamePath() const
{
    return deptNamePath_;
}

void ShowDeptAndChildDeptResponse::setDeptNamePath(const std::string& value)
{
    deptNamePath_ = value;
    deptNamePathIsSet_ = true;
}

bool ShowDeptAndChildDeptResponse::deptNamePathIsSet() const
{
    return deptNamePathIsSet_;
}

void ShowDeptAndChildDeptResponse::unsetdeptNamePath()
{
    deptNamePathIsSet_ = false;
}

bool ShowDeptAndChildDeptResponse::isIsLeafNode() const
{
    return isLeafNode_;
}

void ShowDeptAndChildDeptResponse::setIsLeafNode(bool value)
{
    isLeafNode_ = value;
    isLeafNodeIsSet_ = true;
}

bool ShowDeptAndChildDeptResponse::isLeafNodeIsSet() const
{
    return isLeafNodeIsSet_;
}

void ShowDeptAndChildDeptResponse::unsetisLeafNode()
{
    isLeafNodeIsSet_ = false;
}

std::string ShowDeptAndChildDeptResponse::getParentDeptCode() const
{
    return parentDeptCode_;
}

void ShowDeptAndChildDeptResponse::setParentDeptCode(const std::string& value)
{
    parentDeptCode_ = value;
    parentDeptCodeIsSet_ = true;
}

bool ShowDeptAndChildDeptResponse::parentDeptCodeIsSet() const
{
    return parentDeptCodeIsSet_;
}

void ShowDeptAndChildDeptResponse::unsetparentDeptCode()
{
    parentDeptCodeIsSet_ = false;
}

std::string ShowDeptAndChildDeptResponse::getDeptCodePath() const
{
    return deptCodePath_;
}

void ShowDeptAndChildDeptResponse::setDeptCodePath(const std::string& value)
{
    deptCodePath_ = value;
    deptCodePathIsSet_ = true;
}

bool ShowDeptAndChildDeptResponse::deptCodePathIsSet() const
{
    return deptCodePathIsSet_;
}

void ShowDeptAndChildDeptResponse::unsetdeptCodePath()
{
    deptCodePathIsSet_ = false;
}

std::string ShowDeptAndChildDeptResponse::getNote() const
{
    return note_;
}

void ShowDeptAndChildDeptResponse::setNote(const std::string& value)
{
    note_ = value;
    noteIsSet_ = true;
}

bool ShowDeptAndChildDeptResponse::noteIsSet() const
{
    return noteIsSet_;
}

void ShowDeptAndChildDeptResponse::unsetnote()
{
    noteIsSet_ = false;
}

std::string ShowDeptAndChildDeptResponse::getInPermission() const
{
    return inPermission_;
}

void ShowDeptAndChildDeptResponse::setInPermission(const std::string& value)
{
    inPermission_ = value;
    inPermissionIsSet_ = true;
}

bool ShowDeptAndChildDeptResponse::inPermissionIsSet() const
{
    return inPermissionIsSet_;
}

void ShowDeptAndChildDeptResponse::unsetinPermission()
{
    inPermissionIsSet_ = false;
}

std::string ShowDeptAndChildDeptResponse::getOutPermission() const
{
    return outPermission_;
}

void ShowDeptAndChildDeptResponse::setOutPermission(const std::string& value)
{
    outPermission_ = value;
    outPermissionIsSet_ = true;
}

bool ShowDeptAndChildDeptResponse::outPermissionIsSet() const
{
    return outPermissionIsSet_;
}

void ShowDeptAndChildDeptResponse::unsetoutPermission()
{
    outPermissionIsSet_ = false;
}

std::vector<IdMarkDTO>& ShowDeptAndChildDeptResponse::getDesignatedOutDeptCodes()
{
    return designatedOutDeptCodes_;
}

void ShowDeptAndChildDeptResponse::setDesignatedOutDeptCodes(const std::vector<IdMarkDTO>& value)
{
    designatedOutDeptCodes_ = value;
    designatedOutDeptCodesIsSet_ = true;
}

bool ShowDeptAndChildDeptResponse::designatedOutDeptCodesIsSet() const
{
    return designatedOutDeptCodesIsSet_;
}

void ShowDeptAndChildDeptResponse::unsetdesignatedOutDeptCodes()
{
    designatedOutDeptCodesIsSet_ = false;
}

std::vector<QueryDeptResultDTO>& ShowDeptAndChildDeptResponse::getChildDepts()
{
    return childDepts_;
}

void ShowDeptAndChildDeptResponse::setChildDepts(const std::vector<QueryDeptResultDTO>& value)
{
    childDepts_ = value;
    childDeptsIsSet_ = true;
}

bool ShowDeptAndChildDeptResponse::childDeptsIsSet() const
{
    return childDeptsIsSet_;
}

void ShowDeptAndChildDeptResponse::unsetchildDepts()
{
    childDeptsIsSet_ = false;
}

int32_t ShowDeptAndChildDeptResponse::getSortLevel() const
{
    return sortLevel_;
}

void ShowDeptAndChildDeptResponse::setSortLevel(int32_t value)
{
    sortLevel_ = value;
    sortLevelIsSet_ = true;
}

bool ShowDeptAndChildDeptResponse::sortLevelIsSet() const
{
    return sortLevelIsSet_;
}

void ShowDeptAndChildDeptResponse::unsetsortLevel()
{
    sortLevelIsSet_ = false;
}

}
}
}
}
}


