
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowAutopilotClusterConfigResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowAutopilotClusterConfigResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/AutopilotClusterLogConfig_log_configs.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ShowAutopilotClusterConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAutopilotClusterConfigResponse();
    virtual ~ShowAutopilotClusterConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAutopilotClusterConfigResponse members

    /// <summary>
    /// 存储时长
    /// </summary>

    int32_t getTtlInDays() const;
    bool ttlInDaysIsSet() const;
    void unsetttlInDays();
    void setTtlInDays(int32_t value);

    /// <summary>
    /// 日志配置项
    /// </summary>

    std::vector<AutopilotClusterLogConfig_log_configs>& getLogConfigs();
    bool logConfigsIsSet() const;
    void unsetlogConfigs();
    void setLogConfigs(const std::vector<AutopilotClusterLogConfig_log_configs>& value);


protected:
    int32_t ttlInDays_;
    bool ttlInDaysIsSet_;
    std::vector<AutopilotClusterLogConfig_log_configs> logConfigs_;
    bool logConfigsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowAutopilotClusterConfigResponse_H_
