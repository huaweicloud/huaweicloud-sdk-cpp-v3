

#include "huaweicloud/vod/v1/model/SubtitleModifyReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




SubtitleModifyReq::SubtitleModifyReq()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    defaultLanguage_ = "";
    defaultLanguageIsSet_ = false;
    addSubtitlesIsSet_ = false;
    deleteSubtitlesIsSet_ = false;
}

SubtitleModifyReq::~SubtitleModifyReq() = default;

void SubtitleModifyReq::validate()
{
}

web::json::value SubtitleModifyReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(defaultLanguageIsSet_) {
        val[utility::conversions::to_string_t("default_language")] = ModelBase::toJson(defaultLanguage_);
    }
    if(addSubtitlesIsSet_) {
        val[utility::conversions::to_string_t("add_subtitles")] = ModelBase::toJson(addSubtitles_);
    }
    if(deleteSubtitlesIsSet_) {
        val[utility::conversions::to_string_t("delete_subtitles")] = ModelBase::toJson(deleteSubtitles_);
    }

    return val;
}

bool SubtitleModifyReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("add_subtitles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("add_subtitles"));
        if(!fieldValue.is_null())
        {
            std::vector<AddSubtitle> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddSubtitles(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_subtitles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_subtitles"));
        if(!fieldValue.is_null())
        {
            std::vector<DeleteSubtitle> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteSubtitles(refVal);
        }
    }
    return ok;
}


std::string SubtitleModifyReq::getAssetId() const
{
    return assetId_;
}

void SubtitleModifyReq::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool SubtitleModifyReq::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void SubtitleModifyReq::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string SubtitleModifyReq::getDefaultLanguage() const
{
    return defaultLanguage_;
}

void SubtitleModifyReq::setDefaultLanguage(const std::string& value)
{
    defaultLanguage_ = value;
    defaultLanguageIsSet_ = true;
}

bool SubtitleModifyReq::defaultLanguageIsSet() const
{
    return defaultLanguageIsSet_;
}

void SubtitleModifyReq::unsetdefaultLanguage()
{
    defaultLanguageIsSet_ = false;
}

std::vector<AddSubtitle>& SubtitleModifyReq::getAddSubtitles()
{
    return addSubtitles_;
}

void SubtitleModifyReq::setAddSubtitles(const std::vector<AddSubtitle>& value)
{
    addSubtitles_ = value;
    addSubtitlesIsSet_ = true;
}

bool SubtitleModifyReq::addSubtitlesIsSet() const
{
    return addSubtitlesIsSet_;
}

void SubtitleModifyReq::unsetaddSubtitles()
{
    addSubtitlesIsSet_ = false;
}

std::vector<DeleteSubtitle>& SubtitleModifyReq::getDeleteSubtitles()
{
    return deleteSubtitles_;
}

void SubtitleModifyReq::setDeleteSubtitles(const std::vector<DeleteSubtitle>& value)
{
    deleteSubtitles_ = value;
    deleteSubtitlesIsSet_ = true;
}

bool SubtitleModifyReq::deleteSubtitlesIsSet() const
{
    return deleteSubtitlesIsSet_;
}

void SubtitleModifyReq::unsetdeleteSubtitles()
{
    deleteSubtitlesIsSet_ = false;
}

}
}
}
}
}


