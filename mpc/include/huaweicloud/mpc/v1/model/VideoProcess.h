
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
    /// 是否开启上采样，如支持从480P的片源转为720P，可取值为:  - 0：表示上采样关闭， - 1：表示上采样开启. 
    /// </summary>

    int32_t getUpsample() const;
    bool upsampleIsSet() const;
    void unsetupsample();
    void setUpsample(int32_t value);


protected:
    int32_t hlsInitCount_;
    bool hlsInitCountIsSet_;
    int32_t hlsInitInterval_;
    bool hlsInitIntervalIsSet_;
    int32_t rotate_;
    bool rotateIsSet_;
    std::string adaptation_;
    bool adaptationIsSet_;
    int32_t upsample_;
    bool upsampleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_VideoProcess_H_
