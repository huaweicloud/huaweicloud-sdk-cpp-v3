

#include "huaweicloud/vod/v1/model/BaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




BaseInfo::BaseInfo()
{
    title_ = "";
    titleIsSet_ = false;
    videoName_ = "";
    videoNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    categoryId_ = 0L;
    categoryIdIsSet_ = false;
    categoryName_ = "";
    categoryNameIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    lastModified_ = "";
    lastModifiedIsSet_ = false;
    videoType_ = "";
    videoTypeIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
    metaDataIsSet_ = false;
    videoUrl_ = "";
    videoUrlIsSet_ = false;
    signUrl_ = "";
    signUrlIsSet_ = false;
    coverInfoArrayIsSet_ = false;
    subtitleInfoIsSet_ = false;
    sourcePathIsSet_ = false;
    outputPathIsSet_ = false;
}

BaseInfo::~BaseInfo() = default;

void BaseInfo::validate()
{
}

web::json::value BaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(videoNameIsSet_) {
        val[utility::conversions::to_string_t("video_name")] = ModelBase::toJson(videoName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(categoryIdIsSet_) {
        val[utility::conversions::to_string_t("category_id")] = ModelBase::toJson(categoryId_);
    }
    if(categoryNameIsSet_) {
        val[utility::conversions::to_string_t("category_name")] = ModelBase::toJson(categoryName_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(lastModifiedIsSet_) {
        val[utility::conversions::to_string_t("last_modified")] = ModelBase::toJson(lastModified_);
    }
    if(videoTypeIsSet_) {
        val[utility::conversions::to_string_t("video_type")] = ModelBase::toJson(videoType_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(metaDataIsSet_) {
        val[utility::conversions::to_string_t("meta_data")] = ModelBase::toJson(metaData_);
    }
    if(videoUrlIsSet_) {
        val[utility::conversions::to_string_t("video_url")] = ModelBase::toJson(videoUrl_);
    }
    if(signUrlIsSet_) {
        val[utility::conversions::to_string_t("sign_url")] = ModelBase::toJson(signUrl_);
    }
    if(coverInfoArrayIsSet_) {
        val[utility::conversions::to_string_t("cover_info_array")] = ModelBase::toJson(coverInfoArray_);
    }
    if(subtitleInfoIsSet_) {
        val[utility::conversions::to_string_t("subtitle_info")] = ModelBase::toJson(subtitleInfo_);
    }
    if(sourcePathIsSet_) {
        val[utility::conversions::to_string_t("source_path")] = ModelBase::toJson(sourcePath_);
    }
    if(outputPathIsSet_) {
        val[utility::conversions::to_string_t("output_path")] = ModelBase::toJson(outputPath_);
    }

    return val;
}
bool BaseInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category_id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategoryName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("last_modified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModified(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("meta_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("meta_data"));
        if(!fieldValue.is_null())
        {
            MetaData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetaData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sign_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sign_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSignUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cover_info_array"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cover_info_array"));
        if(!fieldValue.is_null())
        {
            std::vector<CoverInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoverInfoArray(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subtitle_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subtitle_info"));
        if(!fieldValue.is_null())
        {
            std::vector<SubtitleInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubtitleInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_path"));
        if(!fieldValue.is_null())
        {
            File_addr refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourcePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_path"));
        if(!fieldValue.is_null())
        {
            File_addr refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputPath(refVal);
        }
    }
    return ok;
}


std::string BaseInfo::getTitle() const
{
    return title_;
}

void BaseInfo::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool BaseInfo::titleIsSet() const
{
    return titleIsSet_;
}

void BaseInfo::unsettitle()
{
    titleIsSet_ = false;
}

std::string BaseInfo::getVideoName() const
{
    return videoName_;
}

void BaseInfo::setVideoName(const std::string& value)
{
    videoName_ = value;
    videoNameIsSet_ = true;
}

bool BaseInfo::videoNameIsSet() const
{
    return videoNameIsSet_;
}

void BaseInfo::unsetvideoName()
{
    videoNameIsSet_ = false;
}

std::string BaseInfo::getDescription() const
{
    return description_;
}

void BaseInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool BaseInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void BaseInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

int64_t BaseInfo::getCategoryId() const
{
    return categoryId_;
}

void BaseInfo::setCategoryId(int64_t value)
{
    categoryId_ = value;
    categoryIdIsSet_ = true;
}

bool BaseInfo::categoryIdIsSet() const
{
    return categoryIdIsSet_;
}

void BaseInfo::unsetcategoryId()
{
    categoryIdIsSet_ = false;
}

std::string BaseInfo::getCategoryName() const
{
    return categoryName_;
}

void BaseInfo::setCategoryName(const std::string& value)
{
    categoryName_ = value;
    categoryNameIsSet_ = true;
}

bool BaseInfo::categoryNameIsSet() const
{
    return categoryNameIsSet_;
}

void BaseInfo::unsetcategoryName()
{
    categoryNameIsSet_ = false;
}

std::string BaseInfo::getCreateTime() const
{
    return createTime_;
}

void BaseInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool BaseInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void BaseInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string BaseInfo::getLastModified() const
{
    return lastModified_;
}

void BaseInfo::setLastModified(const std::string& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool BaseInfo::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void BaseInfo::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

std::string BaseInfo::getVideoType() const
{
    return videoType_;
}

void BaseInfo::setVideoType(const std::string& value)
{
    videoType_ = value;
    videoTypeIsSet_ = true;
}

bool BaseInfo::videoTypeIsSet() const
{
    return videoTypeIsSet_;
}

void BaseInfo::unsetvideoType()
{
    videoTypeIsSet_ = false;
}

std::string BaseInfo::getTags() const
{
    return tags_;
}

void BaseInfo::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BaseInfo::tagsIsSet() const
{
    return tagsIsSet_;
}

void BaseInfo::unsettags()
{
    tagsIsSet_ = false;
}

MetaData BaseInfo::getMetaData() const
{
    return metaData_;
}

void BaseInfo::setMetaData(const MetaData& value)
{
    metaData_ = value;
    metaDataIsSet_ = true;
}

bool BaseInfo::metaDataIsSet() const
{
    return metaDataIsSet_;
}

void BaseInfo::unsetmetaData()
{
    metaDataIsSet_ = false;
}

std::string BaseInfo::getVideoUrl() const
{
    return videoUrl_;
}

void BaseInfo::setVideoUrl(const std::string& value)
{
    videoUrl_ = value;
    videoUrlIsSet_ = true;
}

bool BaseInfo::videoUrlIsSet() const
{
    return videoUrlIsSet_;
}

void BaseInfo::unsetvideoUrl()
{
    videoUrlIsSet_ = false;
}

std::string BaseInfo::getSignUrl() const
{
    return signUrl_;
}

void BaseInfo::setSignUrl(const std::string& value)
{
    signUrl_ = value;
    signUrlIsSet_ = true;
}

bool BaseInfo::signUrlIsSet() const
{
    return signUrlIsSet_;
}

void BaseInfo::unsetsignUrl()
{
    signUrlIsSet_ = false;
}

std::vector<CoverInfo>& BaseInfo::getCoverInfoArray()
{
    return coverInfoArray_;
}

void BaseInfo::setCoverInfoArray(const std::vector<CoverInfo>& value)
{
    coverInfoArray_ = value;
    coverInfoArrayIsSet_ = true;
}

bool BaseInfo::coverInfoArrayIsSet() const
{
    return coverInfoArrayIsSet_;
}

void BaseInfo::unsetcoverInfoArray()
{
    coverInfoArrayIsSet_ = false;
}

std::vector<SubtitleInfo>& BaseInfo::getSubtitleInfo()
{
    return subtitleInfo_;
}

void BaseInfo::setSubtitleInfo(const std::vector<SubtitleInfo>& value)
{
    subtitleInfo_ = value;
    subtitleInfoIsSet_ = true;
}

bool BaseInfo::subtitleInfoIsSet() const
{
    return subtitleInfoIsSet_;
}

void BaseInfo::unsetsubtitleInfo()
{
    subtitleInfoIsSet_ = false;
}

File_addr BaseInfo::getSourcePath() const
{
    return sourcePath_;
}

void BaseInfo::setSourcePath(const File_addr& value)
{
    sourcePath_ = value;
    sourcePathIsSet_ = true;
}

bool BaseInfo::sourcePathIsSet() const
{
    return sourcePathIsSet_;
}

void BaseInfo::unsetsourcePath()
{
    sourcePathIsSet_ = false;
}

File_addr BaseInfo::getOutputPath() const
{
    return outputPath_;
}

void BaseInfo::setOutputPath(const File_addr& value)
{
    outputPath_ = value;
    outputPathIsSet_ = true;
}

bool BaseInfo::outputPathIsSet() const
{
    return outputPathIsSet_;
}

void BaseInfo::unsetoutputPath()
{
    outputPathIsSet_ = false;
}

}
}
}
}
}


