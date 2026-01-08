
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_VideoProcess_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_VideoProcess_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_MPC_V1_EXPORT  VideoProcess
    : public ModelBase
{
public:
    VideoProcess();
    virtual ~VideoProcess();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VideoProcess members

    /// <summary>
    /// 需要单独设置时长的HLS起始分片数量。与hls_init_interval配合使用，设置前面hls_init_count个HLS分片时长。 为0表示不单独配置时长。 
    /// </summary>

    int32_t getHlsInitCount() const;
    bool hlsInitCountIsSet() const;
    void unsethlsInitCount();
    void setHlsInitCount(int32_t value);

    /// <summary>
    /// 表示前面hls_init_count个HLS分片的时长,hls_init_count不为0时，该字段才起作用。 
    /// </summary>

    int32_t getHlsInitInterval() const;
    bool hlsInitIntervalIsSet() const;
    void unsethlsInitInterval();
    void setHlsInitInterval(int32_t value);

    /// <summary>
    /// hls的音视频流存储方式。  - composite：存储在同一个文件中。 - separate：存储在不同的文件中 
    /// </summary>

    std::string getHlsStorageType() const;
    bool hlsStorageTypeIsSet() const;
    void unsethlsStorageType();
    void setHlsStorageType(const std::string& value);

    /// <summary>
    /// 视频顺时针旋转角度。  - 0：表示不旋转 - 1：表示顺时针旋转90度 - 2：表示顺时针旋转180度 - 3：表示顺时针旋转270度 
    /// </summary>

    int32_t getRotate() const;
    bool rotateIsSet() const;
    void unsetrotate();
    void setRotate(int32_t value);

    /// <summary>
    /// 长短边自适应控制字段： - SHORT：表示短边自适应 - LONG：表示长边自适应 - NONE：表示不自适应 
    /// </summary>

    std::string getAdaptation() const;
    bool adaptationIsSet() const;
    void unsetadaptation();
    void setAdaptation(const std::string& value);

    /// <summary>
    /// adaptation为NONE时生效： - stretch：拉伸，对每一帧进行拉伸，填满整个画面 - black：留黑，保持视频宽高比不变，边缘剩余部分使用黑色填充。 - white：留白，保持视频宽高比不变，边缘剩余部分使用白色填充。 - gauss：高斯模糊，保持视频宽高比不变，边缘剩余部分使用高斯模糊。 
    /// </summary>

    std::string getFillType() const;
    bool fillTypeIsSet() const;
    void unsetfillType();
    void setFillType(const std::string& value);

    /// <summary>
    /// 是否开启上采样，如支持从480P的片源转为720P，可取值为:  - 0：表示上采样关闭， - 1：表示上采样开启. 
    /// </summary>

    int32_t getUpsample() const;
    bool upsampleIsSet() const;
    void unsetupsample();
    void setUpsample(int32_t value);

    /// <summary>
    /// HLS切片类型。  取值如下所示： - mpegts：ts切片 - fmp4：fmp4切片  不设置默认为ts切片。 
    /// </summary>

    std::string getHlsSegmentType() const;
    bool hlsSegmentTypeIsSet() const;
    void unsethlsSegmentType();
    void setHlsSegmentType(const std::string& value);


protected:
    int32_t hlsInitCount_;
    bool hlsInitCountIsSet_;
    int32_t hlsInitInterval_;
    bool hlsInitIntervalIsSet_;
    std::string hlsStorageType_;
    bool hlsStorageTypeIsSet_;
    int32_t rotate_;
    bool rotateIsSet_;
    std::string adaptation_;
    bool adaptationIsSet_;
    std::string fillType_;
    bool fillTypeIsSet_;
    int32_t upsample_;
    bool upsampleIsSet_;
    std::string hlsSegmentType_;
    bool hlsSegmentTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_VideoProcess_H_
