

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowSqlPatchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowSqlPatchResponse::ShowSqlPatchResponse()
{
    patchName_ = "";
    patchNameIsSet_ = false;
    hint_ = "";
    hintIsSet_ = false;
    patchStatus_ = "";
    patchStatusIsSet_ = false;
}

ShowSqlPatchResponse::~ShowSqlPatchResponse() = default;

void ShowSqlPatchResponse::validate()
{
}

web::json::value ShowSqlPatchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(patchNameIsSet_) {
        val[utility::conversions::to_string_t("patch_name")] = ModelBase::toJson(patchName_);
    }
    if(hintIsSet_) {
        val[utility::conversions::to_string_t("hint")] = ModelBase::toJson(hint_);
    }
    if(patchStatusIsSet_) {
        val[utility::conversions::to_string_t("patch_status")] = ModelBase::toJson(patchStatus_);
    }

    return val;
}
bool ShowSqlPatchResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("hint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHint(refVal);
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
    return ok;
}


std::string ShowSqlPatchResponse::getPatchName() const
{
    return patchName_;
}

void ShowSqlPatchResponse::setPatchName(const std::string& value)
{
    patchName_ = value;
    patchNameIsSet_ = true;
}

bool ShowSqlPatchResponse::patchNameIsSet() const
{
    return patchNameIsSet_;
}

void ShowSqlPatchResponse::unsetpatchName()
{
    patchNameIsSet_ = false;
}

std::string ShowSqlPatchResponse::getHint() const
{
    return hint_;
}

void ShowSqlPatchResponse::setHint(const std::string& value)
{
    hint_ = value;
    hintIsSet_ = true;
}

bool ShowSqlPatchResponse::hintIsSet() const
{
    return hintIsSet_;
}

void ShowSqlPatchResponse::unsethint()
{
    hintIsSet_ = false;
}

std::string ShowSqlPatchResponse::getPatchStatus() const
{
    return patchStatus_;
}

void ShowSqlPatchResponse::setPatchStatus(const std::string& value)
{
    patchStatus_ = value;
    patchStatusIsSet_ = true;
}

bool ShowSqlPatchResponse::patchStatusIsSet() const
{
    return patchStatusIsSet_;
}

void ShowSqlPatchResponse::unsetpatchStatus()
{
    patchStatusIsSet_ = false;
}

}
}
}
}
}


