

#include "huaweicloud/vod/v1/model/ThumbnailTaskOutPut.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ThumbnailTaskOutPut::ThumbnailTaskOutPut()
{
    obsInfoIsSet_ = false;
    picInfoListIsSet_ = false;
}

ThumbnailTaskOutPut::~ThumbnailTaskOutPut() = default;

void ThumbnailTaskOutPut::validate()
{
}

web::json::value ThumbnailTaskOutPut::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsInfoIsSet_) {
        val[utility::conversions::to_string_t("obs_info")] = ModelBase::toJson(obsInfo_);
    }
    if(picInfoListIsSet_) {
        val[utility::conversions::to_string_t("pic_info_list")] = ModelBase::toJson(picInfoList_);
    }

    return val;
}
bool ThumbnailTaskOutPut::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("obs_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_info"));
        if(!fieldValue.is_null())
        {
            ObsInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pic_info_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pic_info_list"));
        if(!fieldValue.is_null())
        {
            std::vector<PicInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPicInfoList(refVal);
        }
    }
    return ok;
}


ObsInfo ThumbnailTaskOutPut::getObsInfo() const
{
    return obsInfo_;
}

void ThumbnailTaskOutPut::setObsInfo(const ObsInfo& value)
{
    obsInfo_ = value;
    obsInfoIsSet_ = true;
}

bool ThumbnailTaskOutPut::obsInfoIsSet() const
{
    return obsInfoIsSet_;
}

void ThumbnailTaskOutPut::unsetobsInfo()
{
    obsInfoIsSet_ = false;
}

std::vector<PicInfo>& ThumbnailTaskOutPut::getPicInfoList()
{
    return picInfoList_;
}

void ThumbnailTaskOutPut::setPicInfoList(const std::vector<PicInfo>& value)
{
    picInfoList_ = value;
    picInfoListIsSet_ = true;
}

bool ThumbnailTaskOutPut::picInfoListIsSet() const
{
    return picInfoListIsSet_;
}

void ThumbnailTaskOutPut::unsetpicInfoList()
{
    picInfoListIsSet_ = false;
}

}
}
}
}
}


