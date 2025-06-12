

#include "huaweicloud/metastudio/v1/model/VideoScriptBaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




VideoScriptBaseInfo::VideoScriptBaseInfo()
{
    scriptId_ = "";
    scriptIdIsSet_ = false;
    scriptName_ = "";
    scriptNameIsSet_ = false;
    scriptDescription_ = "";
    scriptDescriptionIsSet_ = false;
    modelAssetId_ = "";
    modelAssetIdIsSet_ = false;
    modelAssetType_ = "";
    modelAssetTypeIsSet_ = false;
    scriptCoverUrl_ = "";
    scriptCoverUrlIsSet_ = false;
    scriptType_ = "";
    scriptTypeIsSet_ = false;
    text_ = "";
    textIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

VideoScriptBaseInfo::~VideoScriptBaseInfo() = default;

void VideoScriptBaseInfo::validate()
{
}

web::json::value VideoScriptBaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scriptIdIsSet_) {
        val[utility::conversions::to_string_t("script_id")] = ModelBase::toJson(scriptId_);
    }
    if(scriptNameIsSet_) {
        val[utility::conversions::to_string_t("script_name")] = ModelBase::toJson(scriptName_);
    }
    if(scriptDescriptionIsSet_) {
        val[utility::conversions::to_string_t("script_description")] = ModelBase::toJson(scriptDescription_);
    }
    if(modelAssetIdIsSet_) {
        val[utility::conversions::to_string_t("model_asset_id")] = ModelBase::toJson(modelAssetId_);
    }
    if(modelAssetTypeIsSet_) {
        val[utility::conversions::to_string_t("model_asset_type")] = ModelBase::toJson(modelAssetType_);
    }
    if(scriptCoverUrlIsSet_) {
        val[utility::conversions::to_string_t("script_cover_url")] = ModelBase::toJson(scriptCoverUrl_);
    }
    if(scriptTypeIsSet_) {
        val[utility::conversions::to_string_t("script_type")] = ModelBase::toJson(scriptType_);
    }
    if(textIsSet_) {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(text_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool VideoScriptBaseInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("script_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("script_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("script_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("model_asset_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_asset_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelAssetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("script_cover_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_cover_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptCoverUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("script_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string VideoScriptBaseInfo::getScriptId() const
{
    return scriptId_;
}

void VideoScriptBaseInfo::setScriptId(const std::string& value)
{
    scriptId_ = value;
    scriptIdIsSet_ = true;
}

bool VideoScriptBaseInfo::scriptIdIsSet() const
{
    return scriptIdIsSet_;
}

void VideoScriptBaseInfo::unsetscriptId()
{
    scriptIdIsSet_ = false;
}

std::string VideoScriptBaseInfo::getScriptName() const
{
    return scriptName_;
}

void VideoScriptBaseInfo::setScriptName(const std::string& value)
{
    scriptName_ = value;
    scriptNameIsSet_ = true;
}

bool VideoScriptBaseInfo::scriptNameIsSet() const
{
    return scriptNameIsSet_;
}

void VideoScriptBaseInfo::unsetscriptName()
{
    scriptNameIsSet_ = false;
}

std::string VideoScriptBaseInfo::getScriptDescription() const
{
    return scriptDescription_;
}

void VideoScriptBaseInfo::setScriptDescription(const std::string& value)
{
    scriptDescription_ = value;
    scriptDescriptionIsSet_ = true;
}

bool VideoScriptBaseInfo::scriptDescriptionIsSet() const
{
    return scriptDescriptionIsSet_;
}

void VideoScriptBaseInfo::unsetscriptDescription()
{
    scriptDescriptionIsSet_ = false;
}

std::string VideoScriptBaseInfo::getModelAssetId() const
{
    return modelAssetId_;
}

void VideoScriptBaseInfo::setModelAssetId(const std::string& value)
{
    modelAssetId_ = value;
    modelAssetIdIsSet_ = true;
}

bool VideoScriptBaseInfo::modelAssetIdIsSet() const
{
    return modelAssetIdIsSet_;
}

void VideoScriptBaseInfo::unsetmodelAssetId()
{
    modelAssetIdIsSet_ = false;
}

std::string VideoScriptBaseInfo::getModelAssetType() const
{
    return modelAssetType_;
}

void VideoScriptBaseInfo::setModelAssetType(const std::string& value)
{
    modelAssetType_ = value;
    modelAssetTypeIsSet_ = true;
}

bool VideoScriptBaseInfo::modelAssetTypeIsSet() const
{
    return modelAssetTypeIsSet_;
}

void VideoScriptBaseInfo::unsetmodelAssetType()
{
    modelAssetTypeIsSet_ = false;
}

std::string VideoScriptBaseInfo::getScriptCoverUrl() const
{
    return scriptCoverUrl_;
}

void VideoScriptBaseInfo::setScriptCoverUrl(const std::string& value)
{
    scriptCoverUrl_ = value;
    scriptCoverUrlIsSet_ = true;
}

bool VideoScriptBaseInfo::scriptCoverUrlIsSet() const
{
    return scriptCoverUrlIsSet_;
}

void VideoScriptBaseInfo::unsetscriptCoverUrl()
{
    scriptCoverUrlIsSet_ = false;
}

std::string VideoScriptBaseInfo::getScriptType() const
{
    return scriptType_;
}

void VideoScriptBaseInfo::setScriptType(const std::string& value)
{
    scriptType_ = value;
    scriptTypeIsSet_ = true;
}

bool VideoScriptBaseInfo::scriptTypeIsSet() const
{
    return scriptTypeIsSet_;
}

void VideoScriptBaseInfo::unsetscriptType()
{
    scriptTypeIsSet_ = false;
}

std::string VideoScriptBaseInfo::getText() const
{
    return text_;
}

void VideoScriptBaseInfo::setText(const std::string& value)
{
    text_ = value;
    textIsSet_ = true;
}

bool VideoScriptBaseInfo::textIsSet() const
{
    return textIsSet_;
}

void VideoScriptBaseInfo::unsettext()
{
    textIsSet_ = false;
}

std::string VideoScriptBaseInfo::getCreateTime() const
{
    return createTime_;
}

void VideoScriptBaseInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool VideoScriptBaseInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void VideoScriptBaseInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string VideoScriptBaseInfo::getUpdateTime() const
{
    return updateTime_;
}

void VideoScriptBaseInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool VideoScriptBaseInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void VideoScriptBaseInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


