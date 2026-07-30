
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolStatus_driver_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolStatus_driver_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PoolDriverStatus.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：资源池驱动状态信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolStatus_driver
    : public ModelBase
{
public:
    PoolStatus_driver();
    virtual ~PoolStatus_driver();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolStatus_driver members

    /// <summary>
    /// 
    /// </summary>

    PoolDriverStatus getGpu() const;
    bool gpuIsSet() const;
    void unsetgpu();
    void setGpu(const PoolDriverStatus& value);

    /// <summary>
    /// 
    /// </summary>

    PoolDriverStatus getNpu() const;
    bool npuIsSet() const;
    void unsetnpu();
    void setNpu(const PoolDriverStatus& value);


protected:
    PoolDriverStatus gpu_;
    bool gpuIsSet_;
    PoolDriverStatus npu_;
    bool npuIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolStatus_driver_H_
