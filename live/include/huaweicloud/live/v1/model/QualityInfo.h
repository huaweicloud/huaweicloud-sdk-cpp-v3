
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_QualityInfo_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_QualityInfo_H_

#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  QualityInfo
    : public ModelBase
{
public:
    QualityInfo();
    virtual ~QualityInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QualityInfo members

    /// <summary>
    /// 模板名称。
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// 包含如下取值： - FHD： 超高清，系统缺省名称 - HD： 高清，系统缺省名称 - SD： 标清，系统缺省名称 - LD： 流畅，系统缺省名称 - XXX： 租户自定义名称。用户自定义名称不能与系统缺省名称冲突；多个自定义名称不能重复 
    /// </summary>

    std::string getQuality() const;
    bool qualityIsSet() const;
    void unsetquality();
    void setQuality(const std::string& value);

    /// <summary>
    /// 是否使用窄带高清转码，模板组里不同模板的PVC选项必须相同。 - on：启用。 - off：不启用。 默认为off 
    /// </summary>

    std::string getPvc() const;
    bool pvcIsSet() const;
    void unsetpvc();
    void setPvc(const std::string& value);

    /// <summary>
    /// 是否启用高清低码，较PVC相比画质增强。 - on：启用。 - off：不启用。 默认为off。 
    /// </summary>

    std::string getHdlb() const;
    bool hdlbIsSet() const;
    void unsethdlb();
    void setHdlb(const std::string& value);

    /// <summary>
    /// 视频编码格式，模板组里不同模板的编码格式必须相同。 - H264：使用H.264。 - H265：使用H.265。 默认为H264。 
    /// </summary>

    std::string getCodec() const;
    bool codecIsSet() const;
    void unsetcodec();
    void setCodec(const std::string& value);

    /// <summary>
    /// 视频宽度（单位：像素） - H264   取值范围：32-3840，必须为2的倍数 。 - H265   取值范围：320-3840 ，必须为4的倍数。 
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// 视频高度（单位：像素） - H264   取值范围：32-2160，必须为2的倍数。 - H265   取值范围：240-2160，必须为4的倍数。 
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 转码视频的码率（单位：Kbps）。 取值范围：40-30000。 
    /// </summary>

    int32_t getBitrate() const;
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(int32_t value);

    /// <summary>
    /// 转码视频帧率（单位：fps）。 取值范围：0-30，0表示保持帧率不变。 
    /// </summary>

    int32_t getVideoFrameRate() const;
    bool videoFrameRateIsSet() const;
    void unsetvideoFrameRate();
    void setVideoFrameRate(int32_t value);

    /// <summary>
    /// 转码输出支持的协议类型。当前只支持RTMP和HLS，且模板组里不同模板的输出协议类型必须相同。 - RTMP - HLS - DASH  默认为RTMP。 
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// I帧间隔（单位：帧）。  取值范围：0-500。  默认为25。 
    /// </summary>

    int32_t getIFrameInterval() const;
    bool iFrameIntervalIsSet() const;
    void unsetiFrameInterval();
    void setIFrameInterval(int32_t value);

    /// <summary>
    /// 按时间设置I帧间隔，与“iFrameInterval”选择一个设置即可。  取值范围：[0,10]  默认值：4 
    /// </summary>

    int32_t getGop() const;
    bool gopIsSet() const;
    void unsetgop();
    void setGop(int32_t value);


protected:
    std::string templateName_;
    bool templateNameIsSet_;
    std::string quality_;
    bool qualityIsSet_;
    std::string pvc_;
    bool pvcIsSet_;
    std::string hdlb_;
    bool hdlbIsSet_;
    std::string codec_;
    bool codecIsSet_;
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    int32_t bitrate_;
    bool bitrateIsSet_;
    int32_t videoFrameRate_;
    bool videoFrameRateIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    int32_t iFrameInterval_;
    bool iFrameIntervalIsSet_;
    int32_t gop_;
    bool gopIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_QualityInfo_H_
