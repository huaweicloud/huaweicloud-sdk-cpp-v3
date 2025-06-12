

#include "huaweicloud/metastudio/v1/model/LivePlayingScriptInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




LivePlayingScriptInfo::LivePlayingScriptInfo()
{
    scriptName_ = "";
    scriptNameIsSet_ = false;
    modelAssetId_ = "";
    modelAssetIdIsSet_ = false;
    shootScriptsIsSet_ = false;
}

LivePlayingScriptInfo::~LivePlayingScriptInfo() = default;

void LivePlayingScriptInfo::validate()
{
}

web::json::value LivePlayingScriptInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scriptNameIsSet_) {
        val[utility::conversions::to_string_t("script_name")] = ModelBase::toJson(scriptName_);
    }
    if(modelAssetIdIsSet_) {
        val[utility::conversions::to_string_t("model_asset_id")] = ModelBase::toJson(modelAssetId_);
    }
    if(shootScriptsIsSet_) {
        val[utility::conversions::to_string_t("shoot_scripts")] = ModelBase::toJson(shootScripts_);
    }

    return val;
}
bool LivePlayingScriptInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("script_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model_asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shoot_scripts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shoot_scripts"));
        if(!fieldValue.is_null())
        {
            std::vector<LivePlayingShootScriptItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShootScripts(refVal);
        }
    }
    return ok;
}


std::string LivePlayingScriptInfo::getScriptName() const
{
    return scriptName_;
}

void LivePlayingScriptInfo::setScriptName(const std::string& value)
{
    scriptName_ = value;
    scriptNameIsSet_ = true;
}

bool LivePlayingScriptInfo::scriptNameIsSet() const
{
    return scriptNameIsSet_;
}

void LivePlayingScriptInfo::unsetscriptName()
{
    scriptNameIsSet_ = false;
}

std::string LivePlayingScriptInfo::getModelAssetId() const
{
    return modelAssetId_;
}

void LivePlayingScriptInfo::setModelAssetId(const std::string& value)
{
    modelAssetId_ = value;
    modelAssetIdIsSet_ = true;
}

bool LivePlayingScriptInfo::modelAssetIdIsSet() const
{
    return modelAssetIdIsSet_;
}

void LivePlayingScriptInfo::unsetmodelAssetId()
{
    modelAssetIdIsSet_ = false;
}

std::vector<LivePlayingShootScriptItem>& LivePlayingScriptInfo::getShootScripts()
{
    return shootScripts_;
}

void LivePlayingScriptInfo::setShootScripts(const std::vector<LivePlayingShootScriptItem>& value)
{
    shootScripts_ = value;
    shootScriptsIsSet_ = true;
}

bool LivePlayingScriptInfo::shootScriptsIsSet() const
{
    return shootScriptsIsSet_;
}

void LivePlayingScriptInfo::unsetshootScripts()
{
    shootScriptsIsSet_ = false;
}

}
}
}
}
}


