
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_BridgeResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_BridgeResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  BridgeResponse
    : public ModelBase
{
public:
    BridgeResponse();
    virtual ~BridgeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BridgeResponse members

    /// <summary>
    /// 网桥ID
    /// </summary>

    std::string getBridgeId() const;
    bool bridgeIdIsSet() const;
    void unsetbridgeId();
    void setBridgeId(const std::string& value);

    /// <summary>
    /// 网桥名称。
    /// </summary>

    std::string getBridgeName() const;
    bool bridgeNameIsSet() const;
    void unsetbridgeName();
    void setBridgeName(const std::string& value);

    /// <summary>
    /// 网桥状态。 - ONLINE：网桥在线。 - OFFLINE：网桥离线。 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string bridgeId_;
    bool bridgeIdIsSet_;
    std::string bridgeName_;
    bool bridgeNameIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_BridgeResponse_H_
