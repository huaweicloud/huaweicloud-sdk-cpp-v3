
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_KernelExecTimeDetails_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_KernelExecTimeDetails_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 内核耗时详细信息
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  KernelExecTimeDetails
    : public ModelBase
{
public:
    KernelExecTimeDetails();
    virtual ~KernelExecTimeDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// KernelExecTimeDetails members

    /// <summary>
    /// **参数解释**: 执行器内执行时间（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getExecutionTime() const;
    bool executionTimeIsSet() const;
    void unsetexecutionTime();
    void setExecutionTime(int64_t value);

    /// <summary>
    /// **参数解释**: 执行器内执行时间（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getOtherTime() const;
    bool otherTimeIsSet() const;
    void unsetotherTime();
    void setOtherTime(int64_t value);


protected:
    int64_t executionTime_;
    bool executionTimeIsSet_;
    int64_t otherTime_;
    bool otherTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_KernelExecTimeDetails_H_
