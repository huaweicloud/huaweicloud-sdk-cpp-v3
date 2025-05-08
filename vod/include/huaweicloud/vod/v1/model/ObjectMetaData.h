
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ObjectMetaData_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ObjectMetaData_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/MetaVideoInfo.h>
#include <huaweicloud/vod/v1/model/MetaAudioInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ObjectMetaData
    : public ModelBase
{
public:
    ObjectMetaData();
    virtual ~ObjectMetaData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ObjectMetaData members

    /// <summary>
    /// 总码率，单位：bit/秒 
    /// </summary>

    int64_t getBitrate() const;
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(int64_t value);

    /// <summary>
    /// 封装格式 
    /// </summary>

    std::string getContainer() const;
    bool containerIsSet() const;
    void unsetcontainer();
    void setContainer(const std::string& value);

    /// <summary>
    /// 时长，单位：秒 
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

    /// <summary>
    /// 时长，单位：秒 
    /// </summary>

    float getVideoDuration() const;
    bool videoDurationIsSet() const;
    void unsetvideoDuration();
    void setVideoDuration(float value);

    /// <summary>
    /// 时长，单位：秒 
    /// </summary>

    float getAudioDuration() const;
    bool audioDurationIsSet() const;
    void unsetaudioDuration();
    void setAudioDuration(float value);

    /// <summary>
    /// 时长，单位：秒 
    /// </summary>

    float getFloatDuration() const;
    bool floatDurationIsSet() const;
    void unsetfloatDuration();
    void setFloatDuration(float value);

    /// <summary>
    /// 视频高度 
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 视频宽度 
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// 视频md5 
    /// </summary>

    std::string getMd5() const;
    bool md5IsSet() const;
    void unsetmd5();
    void setMd5(const std::string& value);

    /// <summary>
    /// 视频拍摄角度 
    /// </summary>

    float getRotate() const;
    bool rotateIsSet() const;
    void unsetrotate();
    void setRotate(float value);

    /// <summary>
    /// 文件大小，单位：byte 
    /// </summary>

    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int64_t value);

    /// <summary>
    /// 视频流元数据 
    /// </summary>

    std::vector<MetaVideoInfo>& getVideoStreamList();
    bool videoStreamListIsSet() const;
    void unsetvideoStreamList();
    void setVideoStreamList(const std::vector<MetaVideoInfo>& value);

    /// <summary>
    /// 音频流元数据 
    /// </summary>

    std::vector<MetaAudioInfo>& getAudioStreamList();
    bool audioStreamListIsSet() const;
    void unsetaudioStreamList();
    void setAudioStreamList(const std::vector<MetaAudioInfo>& value);


protected:
    int64_t bitrate_;
    bool bitrateIsSet_;
    std::string container_;
    bool containerIsSet_;
    int32_t duration_;
    bool durationIsSet_;
    float videoDuration_;
    bool videoDurationIsSet_;
    float audioDuration_;
    bool audioDurationIsSet_;
    float floatDuration_;
    bool floatDurationIsSet_;
    int32_t height_;
    bool heightIsSet_;
    int32_t width_;
    bool widthIsSet_;
    std::string md5_;
    bool md5IsSet_;
    float rotate_;
    bool rotateIsSet_;
    int64_t size_;
    bool sizeIsSet_;
    std::vector<MetaVideoInfo> videoStreamList_;
    bool videoStreamListIsSet_;
    std::vector<MetaAudioInfo> audioStreamList_;
    bool audioStreamListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ObjectMetaData_H_
