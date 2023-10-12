
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_CpuOptions_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_CpuOptions_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 自定义CPU选项。
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  CpuOptions
    : public ModelBase
{
public:
    CpuOptions();
    virtual ~CpuOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CpuOptions members

    /// <summary>
    /// CPU超线程数， 决定CPU是否开启超线程
    /// </summary>

    int32_t getHwcpuThreads() const;
    bool hwcpuThreadsIsSet() const;
    void unsethwcpuThreads();
    void setHwcpuThreads(int32_t value);


protected:
    int32_t hwcpuThreads_;
    bool hwcpuThreadsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_CpuOptions_H_
