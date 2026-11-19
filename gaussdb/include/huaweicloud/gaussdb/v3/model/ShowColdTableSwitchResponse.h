
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowColdTableSwitchResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowColdTableSwitchResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowColdTableSwitchResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowColdTableSwitchResponse();
    virtual ~ShowColdTableSwitchResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowColdTableSwitchResponse members

    /// <summary>
    /// **参数解释**：  冷热分离开关状态。  **取值范围**： - off：关闭。 - on：开启。
    /// </summary>

    std::string getSwitchStatus() const;
    bool switchStatusIsSet() const;
    void unsetswitchStatus();
    void setSwitchStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  支持冷热分离的最低内核版本。  **取值范围**：  不涉及。
    /// </summary>

    std::string getKernelVersion() const;
    bool kernelVersionIsSet() const;
    void unsetkernelVersion();
    void setKernelVersion(const std::string& value);


protected:
    std::string switchStatus_;
    bool switchStatusIsSet_;
    std::string kernelVersion_;
    bool kernelVersionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowColdTableSwitchResponse_H_
