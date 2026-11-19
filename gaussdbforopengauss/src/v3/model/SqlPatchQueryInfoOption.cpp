

#include "huaweicloud/gaussdbforopengauss/v3/model/SqlPatchQueryInfoOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SqlPatchQueryInfoOption::SqlPatchQueryInfoOption()
{
    sqlId_ = "";
    sqlIdIsSet_ = false;
    sqlText_ = "";
    sqlTextIsSet_ = false;
    patchName_ = "";
    patchNameIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
    abortPatch_ = false;
    abortPatchIsSet_ = false;
}

SqlPatchQueryInfoOption::~SqlPatchQueryInfoOption() = default;

void SqlPatchQueryInfoOption::validate()
{
}

web::json::value SqlPatchQueryInfoOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sqlIdIsSet_) {
        val[utility::conversions::to_string_t("sql_id")] = ModelBase::toJson(sqlId_);
    }
    if(sqlTextIsSet_) {
        val[utility::conversions::to_string_t("sql_text")] = ModelBase::toJson(sqlText_);
    }
    if(patchNameIsSet_) {
        val[utility::conversions::to_string_t("patch_name")] = ModelBase::toJson(patchName_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(abortPatchIsSet_) {
        val[utility::conversions::to_string_t("abort_patch")] = ModelBase::toJson(abortPatch_);
    }

    return val;
}
bool SqlPatchQueryInfoOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sql_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("patch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("patch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPatchName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
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
    return ok;
}


std::string SqlPatchQueryInfoOption::getSqlId() const
{
    return sqlId_;
}

void SqlPatchQueryInfoOption::setSqlId(const std::string& value)
{
    sqlId_ = value;
    sqlIdIsSet_ = true;
}

bool SqlPatchQueryInfoOption::sqlIdIsSet() const
{
    return sqlIdIsSet_;
}

void SqlPatchQueryInfoOption::unsetsqlId()
{
    sqlIdIsSet_ = false;
}

std::string SqlPatchQueryInfoOption::getSqlText() const
{
    return sqlText_;
}

void SqlPatchQueryInfoOption::setSqlText(const std::string& value)
{
    sqlText_ = value;
    sqlTextIsSet_ = true;
}

bool SqlPatchQueryInfoOption::sqlTextIsSet() const
{
    return sqlTextIsSet_;
}

void SqlPatchQueryInfoOption::unsetsqlText()
{
    sqlTextIsSet_ = false;
}

std::string SqlPatchQueryInfoOption::getPatchName() const
{
    return patchName_;
}

void SqlPatchQueryInfoOption::setPatchName(const std::string& value)
{
    patchName_ = value;
    patchNameIsSet_ = true;
}

bool SqlPatchQueryInfoOption::patchNameIsSet() const
{
    return patchNameIsSet_;
}

void SqlPatchQueryInfoOption::unsetpatchName()
{
    patchNameIsSet_ = false;
}

std::string SqlPatchQueryInfoOption::getNodeId() const
{
    return nodeId_;
}

void SqlPatchQueryInfoOption::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool SqlPatchQueryInfoOption::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void SqlPatchQueryInfoOption::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

bool SqlPatchQueryInfoOption::isEnabled() const
{
    return enabled_;
}

void SqlPatchQueryInfoOption::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool SqlPatchQueryInfoOption::enabledIsSet() const
{
    return enabledIsSet_;
}

void SqlPatchQueryInfoOption::unsetenabled()
{
    enabledIsSet_ = false;
}

bool SqlPatchQueryInfoOption::isAbortPatch() const
{
    return abortPatch_;
}

void SqlPatchQueryInfoOption::setAbortPatch(bool value)
{
    abortPatch_ = value;
    abortPatchIsSet_ = true;
}

bool SqlPatchQueryInfoOption::abortPatchIsSet() const
{
    return abortPatchIsSet_;
}

void SqlPatchQueryInfoOption::unsetabortPatch()
{
    abortPatchIsSet_ = false;
}

}
}
}
}
}


