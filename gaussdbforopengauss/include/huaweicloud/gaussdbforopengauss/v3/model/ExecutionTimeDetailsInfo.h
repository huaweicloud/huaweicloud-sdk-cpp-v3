
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ExecutionTimeDetailsInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ExecutionTimeDetailsInfo_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/WaitEventTime.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/KernelTime.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/KernelExecutionTime.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResourceTime.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ExecutionTimeDetailsInfo
    : public ModelBase
{
public:
    ExecutionTimeDetailsInfo();
    virtual ~ExecutionTimeDetailsInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExecutionTimeDetailsInfo members

    /// <summary>
    /// 
    /// </summary>

    ResourceTime getResourceTime() const;
    bool resourceTimeIsSet() const;
    void unsetresourceTime();
    void setResourceTime(const ResourceTime& value);

    /// <summary>
    /// 
    /// </summary>

    KernelTime getKernelTime() const;
    bool kernelTimeIsSet() const;
    void unsetkernelTime();
    void setKernelTime(const KernelTime& value);

    /// <summary>
    /// 
    /// </summary>

    KernelExecutionTime getKernelExecutionTime() const;
    bool kernelExecutionTimeIsSet() const;
    void unsetkernelExecutionTime();
    void setKernelExecutionTime(const KernelExecutionTime& value);

    /// <summary>
    /// 
    /// </summary>

    WaitEventTime getWaitEventTime() const;
    bool waitEventTimeIsSet() const;
    void unsetwaitEventTime();
    void setWaitEventTime(const WaitEventTime& value);


protected:
    ResourceTime resourceTime_;
    bool resourceTimeIsSet_;
    KernelTime kernelTime_;
    bool kernelTimeIsSet_;
    KernelExecutionTime kernelExecutionTime_;
    bool kernelExecutionTimeIsSet_;
    WaitEventTime waitEventTime_;
    bool waitEventTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ExecutionTimeDetailsInfo_H_
