
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_VideoSaturation_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_VideoSaturation_H_

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
class HUAWEICLOUD_MPC_V1_EXPORT  VideoSaturation
    : public ModelBase
{
public:
    VideoSaturation();
    virtual ~VideoSaturation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VideoSaturation members

    /// <summary>
    /// 饱和度算法名称\&quot;“hw-saturation\&quot;。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 1 表示视频处理时第一个执行，2表示第二个执行，以此类推；除不执行，各视频处理算法的执行次序不可相同。 
    /// </summary>

    int32_t getExecutionOrder() const;
    bool executionOrderIsSet() const;
    void unsetexecutionOrder();
    void setExecutionOrder(int32_t value);

    /// <summary>
    /// 饱和度调节的程度， 值越大， 饱和度越高。 
    /// </summary>

    std::string getSaturation() const;
    bool saturationIsSet() const;
    void unsetsaturation();
    void setSaturation(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t executionOrder_;
    bool executionOrderIsSet_;
    std::string saturation_;
    bool saturationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_VideoSaturation_H_
