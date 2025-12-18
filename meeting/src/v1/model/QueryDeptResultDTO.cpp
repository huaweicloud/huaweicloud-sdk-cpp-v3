

#include "huaweicloud/meeting/v1/model/QueryDeptResultDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




QueryDeptResultDTO::QueryDeptResultDTO()
{
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
    corpId_ = "";
    corpIdIsSet_ = false;
    inPermission_ = "";
    inPermissionIsSet_ = false;
    outPermission_ = "";
    outPermissionIsSet_ = false;
    designatedOutDeptCodesIsSet_ = false;
    sortLevel_ = 0;
    sortLevelIsSet_ = false;
}

QueryDeptResultDTO::~QueryDeptResultDTO() = default;

void QueryDeptResultDTO::validate()
{
}

web::json::value QueryDeptResultDTO::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(corpIdIsSet_) {
        val[utility::conversions::to_string_t("corpId")] = ModelBase::toJson(corpId_);
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
bool QueryDeptResultDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("corpId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("corpId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCorpId(refVal);
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


std::string QueryDeptResultDTO::getDeptCode() const
{
    return deptCode_;
}

void QueryDeptResultDTO::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool QueryDeptResultDTO::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void QueryDeptResultDTO::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

int32_t QueryDeptResultDTO::getDeptLevel() const
{
    return deptLevel_;
}

void QueryDeptResultDTO::setDeptLevel(int32_t value)
{
    deptLevel_ = value;
    deptLevelIsSet_ = true;
}

bool QueryDeptResultDTO::deptLevelIsSet() const
{
    return deptLevelIsSet_;
}

void QueryDeptResultDTO::unsetdeptLevel()
{
    deptLevelIsSet_ = false;
}

std::string QueryDeptResultDTO::getDeptName() const
{
    return deptName_;
}

void QueryDeptResultDTO::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool QueryDeptResultDTO::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void QueryDeptResultDTO::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string QueryDeptResultDTO::getDeptNamePath() const
{
    return deptNamePath_;
}

void QueryDeptResultDTO::setDeptNamePath(const std::string& value)
{
    deptNamePath_ = value;
    deptNamePathIsSet_ = true;
}

bool QueryDeptResultDTO::deptNamePathIsSet() const
{
    return deptNamePathIsSet_;
}

void QueryDeptResultDTO::unsetdeptNamePath()
{
    deptNamePathIsSet_ = false;
}

bool QueryDeptResultDTO::isIsLeafNode() const
{
    return isLeafNode_;
}

void QueryDeptResultDTO::setIsLeafNode(bool value)
{
    isLeafNode_ = value;
    isLeafNodeIsSet_ = true;
}

bool QueryDeptResultDTO::isLeafNodeIsSet() const
{
    return isLeafNodeIsSet_;
}

void QueryDeptResultDTO::unsetisLeafNode()
{
    isLeafNodeIsSet_ = false;
}

std::string QueryDeptResultDTO::getParentDeptCode() const
{
    return parentDeptCode_;
}

void QueryDeptResultDTO::setParentDeptCode(const std::string& value)
{
    parentDeptCode_ = value;
    parentDeptCodeIsSet_ = true;
}

bool QueryDeptResultDTO::parentDeptCodeIsSet() const
{
    return parentDeptCodeIsSet_;
}

void QueryDeptResultDTO::unsetparentDeptCode()
{
    parentDeptCodeIsSet_ = false;
}

std::string QueryDeptResultDTO::getDeptCodePath() const
{
    return deptCodePath_;
}

void QueryDeptResultDTO::setDeptCodePath(const std::string& value)
{
    deptCodePath_ = value;
    deptCodePathIsSet_ = true;
}

bool QueryDeptResultDTO::deptCodePathIsSet() const
{
    return deptCodePathIsSet_;
}

void QueryDeptResultDTO::unsetdeptCodePath()
{
    deptCodePathIsSet_ = false;
}

std::string QueryDeptResultDTO::getNote() const
{
    return note_;
}

void QueryDeptResultDTO::setNote(const std::string& value)
{
    note_ = value;
    noteIsSet_ = true;
}

bool QueryDeptResultDTO::noteIsSet() const
{
    return noteIsSet_;
}

void QueryDeptResultDTO::unsetnote()
{
    noteIsSet_ = false;
}

std::string QueryDeptResultDTO::getCorpId() const
{
    return corpId_;
}

void QueryDeptResultDTO::setCorpId(const std::string& value)
{
    corpId_ = value;
    corpIdIsSet_ = true;
}

bool QueryDeptResultDTO::corpIdIsSet() const
{
    return corpIdIsSet_;
}

void QueryDeptResultDTO::unsetcorpId()
{
    corpIdIsSet_ = false;
}

std::string QueryDeptResultDTO::getInPermission() const
{
    return inPermission_;
}

void QueryDeptResultDTO::setInPermission(const std::string& value)
{
    inPermission_ = value;
    inPermissionIsSet_ = true;
}

bool QueryDeptResultDTO::inPermissionIsSet() const
{
    return inPermissionIsSet_;
}

void QueryDeptResultDTO::unsetinPermission()
{
    inPermissionIsSet_ = false;
}

std::string QueryDeptResultDTO::getOutPermission() const
{
    return outPermission_;
}

void QueryDeptResultDTO::setOutPermission(const std::string& value)
{
    outPermission_ = value;
    outPermissionIsSet_ = true;
}

bool QueryDeptResultDTO::outPermissionIsSet() const
{
    return outPermissionIsSet_;
}

void QueryDeptResultDTO::unsetoutPermission()
{
    outPermissionIsSet_ = false;
}

std::vector<IdMarkDTO>& QueryDeptResultDTO::getDesignatedOutDeptCodes()
{
    return designatedOutDeptCodes_;
}

void QueryDeptResultDTO::setDesignatedOutDeptCodes(const std::vector<IdMarkDTO>& value)
{
    designatedOutDeptCodes_ = value;
    designatedOutDeptCodesIsSet_ = true;
}

bool QueryDeptResultDTO::designatedOutDeptCodesIsSet() const
{
    return designatedOutDeptCodesIsSet_;
}

void QueryDeptResultDTO::unsetdesignatedOutDeptCodes()
{
    designatedOutDeptCodesIsSet_ = false;
}

int32_t QueryDeptResultDTO::getSortLevel() const
{
    return sortLevel_;
}

void QueryDeptResultDTO::setSortLevel(int32_t value)
{
    sortLevel_ = value;
    sortLevelIsSet_ = true;
}

bool QueryDeptResultDTO::sortLevelIsSet() const
{
    return sortLevelIsSet_;
}

void QueryDeptResultDTO::unsetsortLevel()
{
    sortLevelIsSet_ = false;
}

}
}
}
}
}


