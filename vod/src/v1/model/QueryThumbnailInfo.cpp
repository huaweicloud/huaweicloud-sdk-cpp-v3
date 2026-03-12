

#include "huaweicloud/vod/v1/model/QueryThumbnailInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




QueryThumbnailInfo::QueryThumbnailInfo()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    thumbnailParaIsSet_ = false;
    thumbnailCount_ = 0;
    thumbnailCountIsSet_ = false;
}

QueryThumbnailInfo::~QueryThumbnailInfo() = default;

void QueryThumbnailInfo::validate()
{
}

web::json::value QueryThumbnailInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(thumbnailParaIsSet_) {
        val[utility::conversions::to_string_t("thumbnail_para")] = ModelBase::toJson(thumbnailPara_);
    }
    if(thumbnailCountIsSet_) {
        val[utility::conversions::to_string_t("thumbnail_count")] = ModelBase::toJson(thumbnailCount_);
    }

    return val;
}
bool QueryThumbnailInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thumbnail_para"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnail_para"));
        if(!fieldValue.is_null())
        {
            Thumbnail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnailPara(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thumbnail_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnail_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnailCount(refVal);
        }
    }
    return ok;
}


std::string QueryThumbnailInfo::getTaskId() const
{
    return taskId_;
}

void QueryThumbnailInfo::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool QueryThumbnailInfo::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void QueryThumbnailInfo::unsettaskId()
{
    taskIdIsSet_ = false;
}

Thumbnail QueryThumbnailInfo::getThumbnailPara() const
{
    return thumbnailPara_;
}

void QueryThumbnailInfo::setThumbnailPara(const Thumbnail& value)
{
    thumbnailPara_ = value;
    thumbnailParaIsSet_ = true;
}

bool QueryThumbnailInfo::thumbnailParaIsSet() const
{
    return thumbnailParaIsSet_;
}

void QueryThumbnailInfo::unsetthumbnailPara()
{
    thumbnailParaIsSet_ = false;
}

int32_t QueryThumbnailInfo::getThumbnailCount() const
{
    return thumbnailCount_;
}

void QueryThumbnailInfo::setThumbnailCount(int32_t value)
{
    thumbnailCount_ = value;
    thumbnailCountIsSet_ = true;
}

bool QueryThumbnailInfo::thumbnailCountIsSet() const
{
    return thumbnailCountIsSet_;
}

void QueryThumbnailInfo::unsetthumbnailCount()
{
    thumbnailCountIsSet_ = false;
}

}
}
}
}
}


