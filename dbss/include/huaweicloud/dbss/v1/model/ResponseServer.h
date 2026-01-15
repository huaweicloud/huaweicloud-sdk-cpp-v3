
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ResponseServer_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ResponseServer_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ResponseServer
    : public ModelBase
{
public:
    ResponseServer();
    virtual ~ResponseServer();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResponseServer members

    /// <summary>
    /// 连接IP
    /// </summary>

    std::string getConnectIp() const;
    bool connectIpIsSet() const;
    void unsetconnectIp();
    void setConnectIp(const std::string& value);

    /// <summary>
    /// CPU数
    /// </summary>

    std::string getCpu() const;
    bool cpuIsSet() const;
    void unsetcpu();
    void setCpu(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 实例冻结状态  - 1：冻结可释放 （默认）  - 2：冻结不可释放  - 3：冻结后不可续费
    /// </summary>

    int32_t getEffect() const;
    bool effectIsSet() const;
    void unseteffect();
    void setEffect(int32_t value);

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 双机实例HA中用来标注实例为主机还是备机, - 0：主机  - 1：备机
    /// </summary>

    int32_t getIsActive() const;
    bool isActiveIsSet() const;
    void unsetisActive();
    void setIsActive(int32_t value);

    /// <summary>
    /// 实例名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 内存大小
    /// </summary>

    std::string getRam() const;
    bool ramIsSet() const;
    void unsetram();
    void setRam(const std::string& value);

    /// <summary>
    /// 所属REGION
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 实例所属规格编码
    /// </summary>

    std::string getResourceSpecCode() const;
    bool resourceSpecCodeIsSet() const;
    void unsetresourceSpecCode();
    void setResourceSpecCode(const std::string& value);

    /// <summary>
    /// 冻结场景  - POLICE：公安冻结  - ILLEGAL：违规冻结  - VERIFY：未实名认证冻结  - PARTNER：合作伙伴冻结 - ARREAR：普通冻结（普通）
    /// </summary>

    std::string getScene() const;
    bool sceneIsSet() const;
    void unsetscene();
    void setScene(const std::string& value);

    /// <summary>
    /// 安全组ID
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// 资源规格类型编码
    /// </summary>

    std::string getSpecification() const;
    bool specificationIsSet() const;
    void unsetspecification();
    void setSpecification(const std::string& value);

    /// <summary>
    /// 实例状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 子网ID
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 实例处理中状态
    /// </summary>

    std::string getTaskStatus() const;
    bool taskStatusIsSet() const;
    void unsettaskStatus();
    void setTaskStatus(const std::string& value);

    /// <summary>
    /// 升级状态  - SUCCESS：成功  - FAILED：失败  - UPGRADING：升级中
    /// </summary>

    std::string getUpdateStatus() const;
    bool updateStatusIsSet() const;
    void unsetupdateStatus();
    void setUpdateStatus(const std::string& value);

    /// <summary>
    /// 版本号
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// VPC ID
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 所属区域
    /// </summary>

    std::string getZone() const;
    bool zoneIsSet() const;
    void unsetzone();
    void setZone(const std::string& value);

    /// <summary>
    /// 服务器ID
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);


protected:
    std::string connectIp_;
    bool connectIpIsSet_;
    std::string cpu_;
    bool cpuIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t effect_;
    bool effectIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    int32_t isActive_;
    bool isActiveIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string ram_;
    bool ramIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string resourceSpecCode_;
    bool resourceSpecCodeIsSet_;
    std::string scene_;
    bool sceneIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    std::string specification_;
    bool specificationIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string taskStatus_;
    bool taskStatusIsSet_;
    std::string updateStatus_;
    bool updateStatusIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string zone_;
    bool zoneIsSet_;
    std::string serverId_;
    bool serverIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ResponseServer_H_
