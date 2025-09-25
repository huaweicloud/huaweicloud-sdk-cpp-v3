
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_KernelExecutionTime_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_KernelExecutionTime_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/KernelExecTimeDetails.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 内核执行模块耗时
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  KernelExecutionTime
    : public ModelBase
{
public:
    KernelExecutionTime();
    virtual ~KernelExecutionTime();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// KernelExecutionTime members

    /// <summary>
    /// **参数解释**: 总耗时（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getAllTime() const;
    bool allTimeIsSet() const;
    void unsetallTime();
    void setAllTime(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    KernelExecTimeDetails getKernelExecutionTimeDetails() const;
    bool kernelExecutionTimeDetailsIsSet() const;
    void unsetkernelExecutionTimeDetails();
    void setKernelExecutionTimeDetails(const KernelExecTimeDetails& value);


protected:
    int64_t allTime_;
    bool allTimeIsSet_;
    KernelExecTimeDetails kernelExecutionTimeDetails_;
    bool kernelExecutionTimeDetailsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_KernelExecutionTime_H_
