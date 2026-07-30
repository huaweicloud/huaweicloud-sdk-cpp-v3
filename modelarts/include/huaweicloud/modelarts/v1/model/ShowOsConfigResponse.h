
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowOsConfigResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowOsConfigResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowOsConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowOsConfigResponse();
    virtual ~ShowOsConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowOsConfigResponse members

    /// <summary>
    /// **参数解释**：网络配置项。
    /// </summary>

    std::vector<std::string>& getNetworkCidrs();
    bool networkCidrsIsSet() const;
    void unsetnetworkCidrs();
    void setNetworkCidrs(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：用户可创建网络个数配额。 **取值范围**：不涉及
    /// </summary>

    int32_t getNetworkQuota() const;
    bool networkQuotaIsSet() const;
    void unsetnetworkQuota();
    void setNetworkQuota(int32_t value);

    /// <summary>
    /// **参数解释**：用户可创建资源池个数配额。 **取值范围**：不涉及
    /// </summary>

    int32_t getPoolQuota() const;
    bool poolQuotaIsSet() const;
    void unsetpoolQuota();
    void setPoolQuota(int32_t value);

    /// <summary>
    /// **参数解释**：当前环境/局点是否支持创建高可用资源池。 **取值范围**： - true：支持 - false：不支持
    /// </summary>

    bool isPoolHighAvailable() const;
    bool poolHighAvailableIsSet() const;
    void unsetpoolHighAvailable();
    void setPoolHighAvailable(bool value);


protected:
    std::vector<std::string> networkCidrs_;
    bool networkCidrsIsSet_;
    int32_t networkQuota_;
    bool networkQuotaIsSet_;
    int32_t poolQuota_;
    bool poolQuotaIsSet_;
    bool poolHighAvailable_;
    bool poolHighAvailableIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowOsConfigResponse_H_
