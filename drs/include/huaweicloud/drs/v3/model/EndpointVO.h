
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_EndpointVO_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_EndpointVO_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v3/model/KerberosVO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库信息
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  EndpointVO
    : public ModelBase
{
public:
    EndpointVO();
    virtual ~EndpointVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// EndpointVO members

    /// <summary>
    /// 数据库id。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 对象id。
    /// </summary>

    std::string getObjId() const;
    bool objIdIsSet() const;
    void unsetobjId();
    void setObjId(const std::string& value);

    /// <summary>
    /// RDS实例名称。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 数据库类型
    /// </summary>

    std::string getDbType() const;
    bool dbTypeIsSet() const;
    void unsetdbType();
    void setDbType(const std::string& value);

    /// <summary>
    /// 数据库用户。
    /// </summary>

    std::string getDbUser() const;
    bool dbUserIsSet() const;
    void unsetdbUser();
    void setDbUser(const std::string& value);

    /// <summary>
    /// 数据库密码。
    /// </summary>

    std::string getDbPassword() const;
    bool dbPasswordIsSet() const;
    void unsetdbPassword();
    void setDbPassword(const std::string& value);

    /// <summary>
    /// 管理IP。
    /// </summary>

    std::string getManageIp() const;
    bool manageIpIsSet() const;
    void unsetmanageIp();
    void setManageIp(const std::string& value);

    /// <summary>
    /// 流量IP。
    /// </summary>

    std::string getTrafficIp() const;
    bool trafficIpIsSet() const;
    void unsettrafficIp();
    void setTrafficIp(const std::string& value);

    /// <summary>
    /// 数据库端口。
    /// </summary>

    int32_t getDbPort() const;
    bool dbPortIsSet() const;
    void unsetdbPort();
    void setDbPort(int32_t value);

    /// <summary>
    /// RDS实例所在region。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 创建日期，格式yyyy-MM-dd&#39;T&#39;HH:mm:ss&#39;Z&#39;
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 修改日期，格式yyyy-MM-dd&#39;T&#39;HH:mm:ss&#39;Z&#39;
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 迁移实例所在的私有IP。
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// 迁移实例所在的公网IP。
    /// </summary>

    std::string getPublicIp() const;
    bool publicIpIsSet() const;
    void unsetpublicIp();
    void setPublicIp(const std::string& value);

    /// <summary>
    /// 可用区azCode。
    /// </summary>

    std::string getAzCode() const;
    bool azCodeIsSet() const;
    void unsetazCode();
    void setAzCode(const std::string& value);

    /// <summary>
    /// 源库所在的安全组id。
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// 源库所在的子网id。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 源库所在的虚拟私有云id。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 迁移实例的磁盘大小。
    /// </summary>

    int64_t getVolumeSize() const;
    bool volumeSizeIsSet() const;
    void unsetvolumeSize();
    void setVolumeSize(int64_t value);

    /// <summary>
    /// 全量迁移用户密码，密文。
    /// </summary>

    std::string getFullTransUserPwd() const;
    bool fullTransUserPwdIsSet() const;
    void unsetfullTransUserPwd();
    void setFullTransUserPwd(const std::string& value);

    /// <summary>
    /// 增量迁移用户密码，密文。
    /// </summary>

    std::string getIncrementTransUserPwd() const;
    bool incrementTransUserPwdIsSet() const;
    void unsetincrementTransUserPwd();
    void setIncrementTransUserPwd(const std::string& value);

    /// <summary>
    /// 是否SSL安全连接。
    /// </summary>

    bool isSslLink() const;
    bool sslLinkIsSet() const;
    void unsetsslLink();
    void setSslLink(bool value);

    /// <summary>
    /// SSL证书内容。
    /// </summary>

    std::string getSslCertKey() const;
    bool sslCertKeyIsSet() const;
    void unsetsslCertKey();
    void setSslCertKey(const std::string& value);

    /// <summary>
    /// SSL证书名字。
    /// </summary>

    std::string getSslCertName() const;
    bool sslCertNameIsSet() const;
    void unsetsslCertName();
    void setSslCertName(const std::string& value);

    /// <summary>
    /// SSL证书内容checksum值。
    /// </summary>

    std::string getSslCertCheckSum() const;
    bool sslCertCheckSumIsSet() const;
    void unsetsslCertCheckSum();
    void setSslCertCheckSum(const std::string& value);

    /// <summary>
    /// SSL证书密码，密文。
    /// </summary>

    std::string getSslCertPassword() const;
    bool sslCertPasswordIsSet() const;
    void unsetsslCertPassword();
    void setSslCertPassword(const std::string& value);

    /// <summary>
    /// 数据库版本。
    /// </summary>

    std::string getDbVersion() const;
    bool dbVersionIsSet() const;
    void unsetdbVersion();
    void setDbVersion(const std::string& value);

    /// <summary>
    /// mongoHa模式。 - Sharding 集群 - ReplicaSet 副本集 - ReplicaSingle 单节点
    /// </summary>

    std::string getMongoHaMode() const;
    bool mongoHaModeIsSet() const;
    void unsetmongoHaMode();
    void setMongoHaMode(const std::string& value);

    /// <summary>
    /// RDS实例projectId。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 集群模式。 - Single：单节点RDS - Ha：主备RDS - GR：金融版RDS - Sharding：mongodb 集群或DDM的模式，均默认为分片 - Sharding4.0+：mongodb 集群版本4.0+，默认为不分片 - ReplicaSet：mongodb 副本集,Replica RDS只读副本 - ReplicaSingle：mongodb 单节点 - Cluster：集群 - Independent：gaussdbv5 independent模式 - Combined：gaussdbv5 Combined模式 - Distributed ：分布式taurus - NoSharding：非集群模式
    /// </summary>

    std::string getClusterMode() const;
    bool clusterModeIsSet() const;
    void unsetclusterMode();
    void setClusterMode(const std::string& value);

    /// <summary>
    /// RDS实例id。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// Oracle服务名serviceName。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// mrskafka topic名称。
    /// </summary>

    std::string getTopic() const;
    bool topicIsSet() const;
    void unsettopic();
    void setTopic(const std::string& value);

    /// <summary>
    /// MRSkafka是否开启kerberos认证 - 0非安全认证 - 1安全认证
    /// </summary>

    int32_t getSafeMode() const;
    bool safeModeIsSet() const;
    void unsetsafeMode();
    void setSafeMode(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    KerberosVO getKerberosVo() const;
    bool kerberosVoIsSet() const;
    void unsetkerberosVo();
    void setKerberosVo(const KerberosVO& value);

    /// <summary>
    /// 多写数据库Id。
    /// </summary>

    std::string getMultiWriteDbId() const;
    bool multiWriteDbIdIsSet() const;
    void unsetmultiWriteDbId();
    void setMultiWriteDbId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string objId_;
    bool objIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string dbType_;
    bool dbTypeIsSet_;
    std::string dbUser_;
    bool dbUserIsSet_;
    std::string dbPassword_;
    bool dbPasswordIsSet_;
    std::string manageIp_;
    bool manageIpIsSet_;
    std::string trafficIp_;
    bool trafficIpIsSet_;
    int32_t dbPort_;
    bool dbPortIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string ip_;
    bool ipIsSet_;
    std::string publicIp_;
    bool publicIpIsSet_;
    std::string azCode_;
    bool azCodeIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    int64_t volumeSize_;
    bool volumeSizeIsSet_;
    std::string fullTransUserPwd_;
    bool fullTransUserPwdIsSet_;
    std::string incrementTransUserPwd_;
    bool incrementTransUserPwdIsSet_;
    bool sslLink_;
    bool sslLinkIsSet_;
    std::string sslCertKey_;
    bool sslCertKeyIsSet_;
    std::string sslCertName_;
    bool sslCertNameIsSet_;
    std::string sslCertCheckSum_;
    bool sslCertCheckSumIsSet_;
    std::string sslCertPassword_;
    bool sslCertPasswordIsSet_;
    std::string dbVersion_;
    bool dbVersionIsSet_;
    std::string mongoHaMode_;
    bool mongoHaModeIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string clusterMode_;
    bool clusterModeIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    std::string topic_;
    bool topicIsSet_;
    int32_t safeMode_;
    bool safeModeIsSet_;
    KerberosVO kerberosVo_;
    bool kerberosVoIsSet_;
    std::string multiWriteDbId_;
    bool multiWriteDbIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_EndpointVO_H_
