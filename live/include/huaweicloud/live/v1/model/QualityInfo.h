
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
    /// 自定义模板名称。 - 若需要自定义模板名称，请将quality参数设置为userdefine； - 多个自定义模板名称之间不能重复； - 自定义模板名称不能与其他模板的quality参数重复； - 若quality不为userdefine，请勿填写此字段。 
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// 包含如下取值： - lud： 超高清，系统缺省名称； - lhd： 高清，系统缺省名称； - lsd： 标清，系统缺省名称； - lld： 流畅，系统缺省名称； - userdefine： 视频质量自定义。填写userdefine时，templateName字段不能为空。 
    /// </summary>

    std::string getQuality() const;
    bool qualityIsSet() const;
    void unsetquality();
    void setQuality(const std::string& value);

    /// <summary>
    /// 是否使用窄带高清转码。默认值：off。  注意：该字段已不再维护，建议使用hdlb。  包含如下取值： - off：不启用。 - on：启用。 
    /// </summary>

    std::string getPvc() const;
    bool pvcIsSet() const;
    void unsetpvc();
    void setPvc(const std::string& value);

    /// <summary>
    /// 是否启用高清低码，较PVC相比画质增强。默认值：off。  提示：使用hdlb字段开启高清低码时，PVC字段不生效。  包含如下取值： - off：不开启高清低码； - on：开启高清低码。 
    /// </summary>

    std::string getHdlb() const;
    bool hdlbIsSet() const;
    void unsethdlb();
    void setHdlb(const std::string& value);

    /// <summary>
    /// 视频编码格式。默认为H264。 - H264：使用H.264。 - H265：使用H.265。 
    /// </summary>

    std::string getCodec() const;
    bool codecIsSet() const;
    void unsetcodec();
    void setCodec(const std::string& value);

    /// <summary>
    /// 视频长边（横屏的宽，竖屏的高）  单位：像素；默认值：0 - H264 建议取值范围：32-3840，必须为2的倍数 。 - H265 建议取值范围：320-3840 ，必须为2的倍数。  注意：width和height全为0，则输出分辨率和源一致；width和height只有一个为0， 则分辨率按非0项的比例缩放。 
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// 视频短边（横屏的高，竖屏的宽）  单位：像素；默认值：0 - H264 建议取值范围：32-2160，必须为2的倍数。 - H265 建议取值范围：240-2160，必须为2的倍数。  注意：width和height全为0，则输出分辨率和源一致；width和height只有一个为0， 则分辨率按非0项的比例缩放。 
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 转码视频的码率  单位：Kbps  取值范围：40-30000 
    /// </summary>

    int32_t getBitrate() const;
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(int32_t value);

    /// <summary>
    /// 转码视频帧率  单位：fps  默认值：0  取值范围：0-60，0表示保持帧率不变。 
    /// </summary>

    int32_t getVideoFrameRate() const;
    bool videoFrameRateIsSet() const;
    void unsetvideoFrameRate();
    void setVideoFrameRate(int32_t value);

    /// <summary>
    /// 转码输出支持的协议类型。默认为RTMP。当前只支持RTMP。  包含如下取值： - RTMP 
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// 最大I帧间隔  单位：帧数  取值范围：[0, 500]，默认值：50  注意：若希望通过iFrameInterval设置i帧间隔，请将gop设为0，或不传gop参数。 
    /// </summary>

    int32_t getIFrameInterval() const;
    bool iFrameIntervalIsSet() const;
    void unsetiFrameInterval();
    void setIFrameInterval(int32_t value);

    /// <summary>
    /// 按时间设置I帧间隔  单位：秒  取值范围：[0,10]，默认值：2  注意：gop不为0时，则以gop设置i帧间隔，iFrameInterval字段不生效。 
    /// </summary>

    int32_t getGop() const;
    bool gopIsSet() const;
    void unsetgop();
    void setGop(int32_t value);

    /// <summary>
    /// 自适应码率参数，默认值：off。  包含如下取值： - off：关闭码率自适应，目标码率按设定的码率输出； - minimum：目标码率按设定码率和源文件码率最小值输出（即码率不上扬）； - adaptive：目标码率按源文件码率自适应输出。 
    /// </summary>

    std::string getBitrateAdaptive() const;
    bool bitrateAdaptiveIsSet() const;
    void unsetbitrateAdaptive();
    void setBitrateAdaptive(const std::string& value);

    /// <summary>
    /// 编码输出I帧策略，默认值：auto。  包含如下取值： - auto：I帧按设置的gop时长输出； - strictSync：编码输出I帧完全和源保持一致（源是I帧则编码输出I帧，源不是I帧则编码非I帧），设置该参数后gop时长设置无效。 
    /// </summary>

    std::string getIFramePolicy() const;
    bool iFramePolicyIsSet() const;
    void unsetiFramePolicy();
    void setIFramePolicy(const std::string& value);


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
    std::string bitrateAdaptive_;
    bool bitrateAdaptiveIsSet_;
    std::string iFramePolicy_;
    bool iFramePolicyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_QualityInfo_H_
