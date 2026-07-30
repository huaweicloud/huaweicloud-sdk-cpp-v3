
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateDevServerResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateDevServerResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Endpoints.h>
#include <huaweicloud/modelarts/v1/model/EndpointsRes.h>
#include <huaweicloud/modelarts/v1/model/CloudServer.h>
#include <huaweicloud/modelarts/v1/model/ServerImageResponse.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/ServerVolume.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/ServerHpsInfo.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateDevServerResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateDevServerResponse();
    virtual ~CreateDevServerResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDevServerResponse members

    /// <summary>
    /// **参数解释**：创建时间。 **取值范围**：不涉及。
    /// </summary>

    int64_t getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(int64_t value);

    /// <summary>
    /// **参数解释**：更新时间。 **取值范围**：不涉及。
    /// </summary>

    int64_t getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(int64_t value);

    /// <summary>
    /// **参数解释**：计费模式。 **取值范围**： - [COMMON：同时支持包周期和按需](tag:hws,hws_hk) - POST_PAID：按需模式 - [PRE_PAID：包周期](tag:hws,hws_hk)
    /// </summary>

    std::string getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CloudServer getCloudServer() const;
    bool cloudServerIsSet() const;
    void unsetcloudServer();
    void setCloudServer(const CloudServer& value);

    /// <summary>
    /// **参数解释**：实例私有IP信息。
    /// </summary>

    std::vector<Endpoints>& getEndpointsResponse();
    bool endpointsResponseIsSet() const;
    void unsetendpointsResponse();
    void setEndpointsResponse(const std::vector<Endpoints>& value);

    /// <summary>
    /// **参数解释**：实例规格名称。 **取值范围**：^.{1,128}$。
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// **参数解释**：实例ID。 **取值范围**：^[0-9a-f]{8}-[0-9a-f]{4}-[1-5][0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：密钥对名称。 **取值范围**：^[-_.a-zA-Z0-9]{1,64}$。
    /// </summary>

    std::string getKeyPairName() const;
    bool keyPairNameIsSet() const;
    void unsetkeyPairName();
    void setKeyPairName(const std::string& value);

    /// <summary>
    /// **参数解释**：实例名称。 **取值范围**：^[-_.a-zA-Z0-9]{1,64}$。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：订单ID。 **取值范围**：^[a-zA-Z0-9]{1,64}$。
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// **参数解释**：实例状态。表示实例的当前运行状态，用于监控实例的生命周期和健康状况。 **取值范围**： - CREATE_FAILED: 创建失败 - CREATING: 创建中 - DELETED: 已删除 - DELETE_FAILED: 删除失败 - DELETING: 删除中 - ERROR: 错误 - RUNNING: 运行中 - STARTING: 启动中 - START_FAILED: 启动失败 - STOPPED: 已停止 - STOPPING: 停止中 - STOP_FAILED: 停止失败 - REBOOTING: 重启中 - REBOOT_FAILED: 重启失败 - CHANGINGOS: 切换操作系统中 - CHANGINGOS_FAILED: 切换操作系统失败 - REINSTALLINGOS: 重装操作系统中 - REINSTALLINGOS_FAILED: 重装操作系统失败
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：实例所在虚拟私有云ID。 **取值范围**：^[0-9a-f]{8}-[0-9a-f]{4}-[1-5][0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// **参数解释**：服务器私有IP信息。
    /// </summary>

    std::vector<EndpointsRes>& getEndpoints();
    bool endpointsIsSet() const;
    void unsetendpoints();
    void setEndpoints(const std::vector<EndpointsRes>& value);

    /// <summary>
    /// **参数解释**：挂载硬盘信息。
    /// </summary>

    std::vector<ServerVolume>& getVolumes();
    bool volumesIsSet() const;
    void unsetvolumes();
    void setVolumes(const std::vector<ServerVolume>& value);

    /// <summary>
    /// 
    /// </summary>

    ServerImageResponse getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const ServerImageResponse& value);

    /// <summary>
    /// **参数解释**：服务器归属类型。 **取值范围**： - [HPS：超节点服务器](tag:hws,hws_hk) - [SPOD：整柜服务器](tag:hws,hws_hk) - [SERVER：单台服务器](tag:hws,hws_hk)
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ServerHpsInfo getServerHps() const;
    bool serverHpsIsSet() const;
    void unsetserverHps();
    void setServerHps(const ServerHpsInfo& value);

    /// <summary>
    /// **参数解释**：实例所在子网的ID。 **取值范围**：^[0-9a-f]{8}-[0-9a-f]{4}-[1-5][0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);


protected:
    int64_t createAt_;
    bool createAtIsSet_;
    int64_t updateAt_;
    bool updateAtIsSet_;
    std::string chargingMode_;
    bool chargingModeIsSet_;
    CloudServer cloudServer_;
    bool cloudServerIsSet_;
    std::vector<Endpoints> endpointsResponse_;
    bool endpointsResponseIsSet_;
    std::string flavor_;
    bool flavorIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string keyPairName_;
    bool keyPairNameIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::vector<EndpointsRes> endpoints_;
    bool endpointsIsSet_;
    std::vector<ServerVolume> volumes_;
    bool volumesIsSet_;
    ServerImageResponse image_;
    bool imageIsSet_;
    std::string category_;
    bool categoryIsSet_;
    ServerHpsInfo serverHps_;
    bool serverHpsIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateDevServerResponse_H_
