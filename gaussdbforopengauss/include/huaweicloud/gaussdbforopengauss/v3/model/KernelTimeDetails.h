
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_KernelTimeDetails_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_KernelTimeDetails_H_


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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  KernelTimeDetails
    : public ModelBase
{
public:
    KernelTimeDetails();
    virtual ~KernelTimeDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// KernelTimeDetails members

    /// <summary>
    /// **参数解释**: SQL解析时间（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getParseTime() const;
    bool parseTimeIsSet() const;
    void unsetparseTime();
    void setParseTime(int64_t value);

    /// <summary>
    /// **参数解释**: SQL重写时间（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getRewriteTime() const;
    bool rewriteTimeIsSet() const;
    void unsetrewriteTime();
    void setRewriteTime(int64_t value);

    /// <summary>
    /// **参数解释**: SQL生成计划时间（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getPlanTime() const;
    bool planTimeIsSet() const;
    void unsetplanTime();
    void setPlanTime(int64_t value);

    /// <summary>
    /// **参数解释**: 执行器内执行时间（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getExecutionTime() const;
    bool executionTimeIsSet() const;
    void unsetexecutionTime();
    void setExecutionTime(int64_t value);

    /// <summary>
    /// **参数解释**: 其余耗时（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getOtherTime() const;
    bool otherTimeIsSet() const;
    void unsetotherTime();
    void setOtherTime(int64_t value);


protected:
    int64_t parseTime_;
    bool parseTimeIsSet_;
    int64_t rewriteTime_;
    bool rewriteTimeIsSet_;
    int64_t planTime_;
    bool planTimeIsSet_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_KernelTimeDetails_H_
