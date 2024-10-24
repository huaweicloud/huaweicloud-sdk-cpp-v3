
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_FailoverConditions_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_FailoverConditions_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 主备切换配置
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  FailoverConditions
    : public ModelBase
{
public:
    FailoverConditions();
    virtual ~FailoverConditions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FailoverConditions members

    /// <summary>
    /// 入流停止的时长阈值。到达此阈值后，自动触发主备切换。  单位：毫秒，取值范围：0 - 3600000。  非必填，默认填2000ms。
    /// </summary>

    int32_t getInputLossThresholdMsec() const;
    bool inputLossThresholdMsecIsSet() const;
    void unsetinputLossThresholdMsec();
    void setInputLossThresholdMsec(int32_t value);

    /// <summary>
    /// 以主入流URL为第一优先级（PRIMARY）或主备URL平等切换（EQUAL）。  如果是平等切换时，使用的是备URL，不会自动切换至主URL。  非必填，默认值为EQUAL。
    /// </summary>

    std::string getInputPreference() const;
    bool inputPreferenceIsSet() const;
    void unsetinputPreference();
    void setInputPreference(const std::string& value);


protected:
    int32_t inputLossThresholdMsec_;
    bool inputLossThresholdMsecIsSet_;
    std::string inputPreference_;
    bool inputPreferenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_FailoverConditions_H_
