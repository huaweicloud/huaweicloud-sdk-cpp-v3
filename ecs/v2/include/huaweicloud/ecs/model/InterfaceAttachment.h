
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_InterfaceAttachment_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_InterfaceAttachment_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ecs/model/ServerInterfaceFixedIp.h"
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  InterfaceAttachment
    : public ModelBase
{
public:
    InterfaceAttachment();
    virtual ~InterfaceAttachment();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// InterfaceAttachment members

    /// <summary>
    /// 网卡私网IP信息列表。
    /// </summary>

    std::vector<ServerInterfaceFixedIp>& getFixedIps();
    bool fixedIpsIsSet() const;
    void unsetfixedIps();
    void setFixedIps(const std::vector<ServerInterfaceFixedIp>& value);

    /// <summary>
    /// 网卡Mac地址信息。
    /// </summary>

    std::string getMacAddr() const;
    bool macAddrIsSet() const;
    void unsetmacAddr();
    void setMacAddr(const std::string& value);

    /// <summary>
    /// 网卡端口所属网络ID。
    /// </summary>

    std::string getNetId() const;
    bool netIdIsSet() const;
    void unsetnetId();
    void setNetId(const std::string& value);

    /// <summary>
    /// 网卡端口ID。
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);

    /// <summary>
    /// 网卡端口状态。
    /// </summary>

    std::string getPortState() const;
    bool portStateIsSet() const;
    void unsetportState();
    void setPortState(const std::string& value);


protected:
    std::vector<ServerInterfaceFixedIp> fixedIps_;
    bool fixedIpsIsSet_;
    std::string macAddr_;
    bool macAddrIsSet_;
    std::string netId_;
    bool netIdIsSet_;
    std::string portId_;
    bool portIdIsSet_;
    std::string portState_;
    bool portStateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_InterfaceAttachment_H_
