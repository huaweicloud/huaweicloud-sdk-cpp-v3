
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_EditVideoInfo_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_EditVideoInfo_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  EditVideoInfo
    : public ModelBase
{
public:
    EditVideoInfo();
    virtual ~EditVideoInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// EditVideoInfo members

    /// <summary>
    /// 剪辑输出视频参数的参照物。取值如下： - MAX，以输入片源中最大分辨率的视频参数作为输出参照。 - MIN，以输入片源中最小分辨率的视频参数作为输出参照。 - CUSTOM，自定义视频输出参数，使用该参数时，所有视频参数必填。- SHORT_HEIGHT_SHORT_WIDTH，当edit_type为MIX时，只能使用该值。
    /// </summary>

    std::string getReference() const;
    bool referenceIsSet() const;
    void unsetreference();
    void setReference(const std::string& value);

    /// <summary>
    /// 视频宽度。
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// 视频高度。
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 视频频编码格式。
    /// </summary>

    std::string getCodec() const;
    bool codecIsSet() const;
    void unsetcodec();
    void setCodec(const std::string& value);

    /// <summary>
    /// 视频码率，单位: bit/s 
    /// </summary>

    int32_t getBitrate() const;
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(int32_t value);

    /// <summary>
    /// 帧率。 
    /// </summary>

    int32_t getFrameRate() const;
    bool frameRateIsSet() const;
    void unsetframeRate();
    void setFrameRate(int32_t value);


protected:
    std::string reference_;
    bool referenceIsSet_;
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    std::string codec_;
    bool codecIsSet_;
    int32_t bitrate_;
    bool bitrateIsSet_;
    int32_t frameRate_;
    bool frameRateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_EditVideoInfo_H_
