
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_FuseConfig_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_FuseConfig_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 熔断配置。 **取值范围：** 不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  FuseConfig
    : public ModelBase
{
public:
    FuseConfig();
    virtual ~FuseConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FuseConfig members

    /// <summary>
    /// **参数解释：** 错误率熔断开关。 **约束限制：** 不涉及。 **取值范围：** * true：开启错误率熔断。 * false：不打开错误率熔断。 **默认取值：** false：不打开错误率熔断。
    /// </summary>

    bool isErrorRateFuseEnable() const;
    bool errorRateFuseEnableIsSet() const;
    void unseterrorRateFuseEnable();
    void setErrorRateFuseEnable(bool value);

    /// <summary>
    /// **参数解释：** 错误率熔断阈值。 **约束限制：** 不涉及。 **取值范围：** (0, 1]（最多支持2位小数，小数点后第3位做四舍五入处理）。 **默认取值：** 不涉及。
    /// </summary>

    float getErrorRateThreshold() const;
    bool errorRateThresholdIsSet() const;
    void unseterrorRateThreshold();
    void setErrorRateThreshold(float value);


protected:
    bool errorRateFuseEnable_;
    bool errorRateFuseEnableIsSet_;
    float errorRateThreshold_;
    bool errorRateThresholdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_FuseConfig_H_
