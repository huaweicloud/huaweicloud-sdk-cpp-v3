
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkStatus_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkStatus_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/NetworkConnectionStatus.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源池状态信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NetworkStatus
    : public ModelBase
{
public:
    NetworkStatus();
    virtual ~NetworkStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NetworkStatus members

    /// <summary>
    /// **参数解释**：网络资源的当前状态。 **取值范围**：可选值如下： - Creating：网络创建中。 - Active：网络正常。 - Abnormal：网络异常。
    /// </summary>

    std::string getPhase() const;
    bool phaseIsSet() const;
    void unsetphase();
    void setPhase(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NetworkConnectionStatus getConnectionStatus() const;
    bool connectionStatusIsSet() const;
    void unsetconnectionStatus();
    void setConnectionStatus(const NetworkConnectionStatus& value);


protected:
    std::string phase_;
    bool phaseIsSet_;
    NetworkConnectionStatus connectionStatus_;
    bool connectionStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkStatus_H_
