

#include "huaweicloud/gaussdbforopengauss/v3/model/SqlPatchInfosResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SqlPatchInfosResult::SqlPatchInfosResult()
{
    patchName_ = "";
    patchNameIsSet_ = false;
    sqlId_ = "";
    sqlIdIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
    patchStatus_ = "";
    patchStatusIsSet_ = false;
    abortPatch_ = false;
    abortPatchIsSet_ = false;
    hint_ = "";
    hintIsSet_ = false;
    sqlText_ = "";
    sqlTextIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
}

SqlPatchInfosResult::~SqlPatchInfosResult() = default;

void SqlPatchInfosResult::validate()
{
}

web::json::value SqlPatchInfosResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(patchNameIsSet_) {
        val[utility::conversions::to_string_t("patch_name")] = ModelBase::toJson(patchName_);
    }
    if(sqlIdIsSet_) {
        val[utility::conversions::to_string_t("sql_id")] = ModelBase::toJson(sqlId_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(patchStatusIsSet_) {
        val[utility::conversions::to_string_t("patch_status")] = ModelBase::toJson(patchStatus_);
    }
    if(abortPatchIsSet_) {
        val[utility::conversions::to_string_t("abort_patch")] = ModelBase::toJson(abortPatch_);
    }
    if(hintIsSet_) {
        val[utility::conversions::to_string_t("hint")] = ModelBase::toJson(hint_);
    }
    if(sqlTextIsSet_) {
        val[utility::conversions::to_string_t("sql_text")] = ModelBase::toJson(sqlText_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }

    return val;
}
bool SqlPatchInfosResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("patch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("patch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPatchName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("patch_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("patch_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPatchStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("abort_patch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("abort_patch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAbortPatch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    return ok;
}


std::string SqlPatchInfosResult::getPatchName() const
{
    return patchName_;
}

void SqlPatchInfosResult::setPatchName(const std::string& value)
{
    patchName_ = value;
    patchNameIsSet_ = true;
}

bool SqlPatchInfosResult::patchNameIsSet() const
{
    return patchNameIsSet_;
}

void SqlPatchInfosResult::unsetpatchName()
{
    patchNameIsSet_ = false;
}

std::string SqlPatchInfosResult::getSqlId() const
{
    return sqlId_;
}

void SqlPatchInfosResult::setSqlId(const std::string& value)
{
    sqlId_ = value;
    sqlIdIsSet_ = true;
}

bool SqlPatchInfosResult::sqlIdIsSet() const
{
    return sqlIdIsSet_;
}

void SqlPatchInfosResult::unsetsqlId()
{
    sqlIdIsSet_ = false;
}

bool SqlPatchInfosResult::isEnabled() const
{
    return enabled_;
}

void SqlPatchInfosResult::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool SqlPatchInfosResult::enabledIsSet() const
{
    return enabledIsSet_;
}

void SqlPatchInfosResult::unsetenabled()
{
    enabledIsSet_ = false;
}

std::string SqlPatchInfosResult::getPatchStatus() const
{
    return patchStatus_;
}

void SqlPatchInfosResult::setPatchStatus(const std::string& value)
{
    patchStatus_ = value;
    patchStatusIsSet_ = true;
}

bool SqlPatchInfosResult::patchStatusIsSet() const
{
    return patchStatusIsSet_;
}

void SqlPatchInfosResult::unsetpatchStatus()
{
    patchStatusIsSet_ = false;
}

bool SqlPatchInfosResult::isAbortPatch() const
{
    return abortPatch_;
}

void SqlPatchInfosResult::setAbortPatch(bool value)
{
    abortPatch_ = value;
    abortPatchIsSet_ = true;
}

bool SqlPatchInfosResult::abortPatchIsSet() const
{
    return abortPatchIsSet_;
}

void SqlPatchInfosResult::unsetabortPatch()
{
    abortPatchIsSet_ = false;
}

std::string SqlPatchInfosResult::getHint() const
{
    return hint_;
}

void SqlPatchInfosResult::setHint(const std::string& value)
{
    hint_ = value;
    hintIsSet_ = true;
}

bool SqlPatchInfosResult::hintIsSet() const
{
    return hintIsSet_;
}

void SqlPatchInfosResult::unsethint()
{
    hintIsSet_ = false;
}

std::string SqlPatchInfosResult::getSqlText() const
{
    return sqlText_;
}

void SqlPatchInfosResult::setSqlText(const std::string& value)
{
    sqlText_ = value;
    sqlTextIsSet_ = true;
}

bool SqlPatchInfosResult::sqlTextIsSet() const
{
    return sqlTextIsSet_;
}

void SqlPatchInfosResult::unsetsqlText()
{
    sqlTextIsSet_ = false;
}

std::string SqlPatchInfosResult::getNodeId() const
{
    return nodeId_;
}

void SqlPatchInfosResult::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool SqlPatchInfosResult::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void SqlPatchInfosResult::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

}
}
}
}
}


