
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TunnelInfo_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TunnelInfo_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/ConnectState.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 隧道信息
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  TunnelInfo
    : public ModelBase
{
public:
    TunnelInfo();
    virtual ~TunnelInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TunnelInfo members

    /// <summary>
    /// 隧道ID
    /// </summary>

    std::string getTunnelId() const;
    bool tunnelIdIsSet() const;
    void unsettunnelId();
    void setTunnelId(const std::string& value);

    /// <summary>
    /// 设备ID
    /// </summary>

    std::string getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const std::string& value);

    /// <summary>
    /// 隧道创建时间。格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如20151212T121212Z。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 隧道更新时间。格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如20151212T121212Z。
    /// </summary>

    std::string getClosedTime() const;
    bool closedTimeIsSet() const;
    void unsetclosedTime();
    void setClosedTime(const std::string& value);

    /// <summary>
    /// 隧道状态 CLOSED | OPEN
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ConnectState getSourceConnectState() const;
    bool sourceConnectStateIsSet() const;
    void unsetsourceConnectState();
    void setSourceConnectState(const ConnectState& value);

    /// <summary>
    /// 
    /// </summary>

    ConnectState getDeviceConnectState() const;
    bool deviceConnectStateIsSet() const;
    void unsetdeviceConnectState();
    void setDeviceConnectState(const ConnectState& value);


protected:
    std::string tunnelId_;
    bool tunnelIdIsSet_;
    std::string deviceId_;
    bool deviceIdIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string closedTime_;
    bool closedTimeIsSet_;
    std::string status_;
    bool statusIsSet_;
    ConnectState sourceConnectState_;
    bool sourceConnectStateIsSet_;
    ConnectState deviceConnectState_;
    bool deviceConnectStateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TunnelInfo_H_
