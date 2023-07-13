
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_Endpoint_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_Endpoint_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  Endpoint
    : public ModelBase
{
public:
    Endpoint();
    virtual ~Endpoint();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Endpoint members

    /// <summary>
    /// 数据库类型，测试连接之后修改调用时必填。
    /// </summary>

    std::string getDbType() const;
    bool dbTypeIsSet() const;
    void unsetdbType();
    void setDbType(const std::string& value);

    /// <summary>
    /// 数据库所在可用区azCode
    /// </summary>

    std::string getAzCode() const;
    bool azCodeIsSet() const;
    void unsetazCode();
    void setAzCode(const std::string& value);

    /// <summary>
    /// RDS实例所在Region，数据库为RDS实例时必填（灾备场景下job_direction为down时source_endpoint中该值为必填，job_direction为up时target_endpoint中该值为必填）。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// RDS实例ID，数据库为RDS实例必填（灾备场景下job_direction为down时source_endpoint中该值为必填，job_direction为up时target_endpoint中该值为必填）。
    /// </summary>

    std::string getInstId() const;
    bool instIdIsSet() const;
    void unsetinstId();
    void setInstId(const std::string& value);

    /// <summary>
    /// 数据库所在的虚拟私有云id
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 数据库所在的子网id
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 数据库所在的安全组id。
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// RDS实例projectId
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 服务名serviceName，源库为oracle场景时必填。约束：不能超过128位，不能包含!&lt;&gt;&amp;&#39;\&quot;\\特殊字符。待还原数据库名称是指备份文件中包含的数据库名称，当您选择部分数据库恢复时，需要选择恢复一个或者多个数据库。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 数据库密码。
    /// </summary>

    std::string getDbPassword() const;
    bool dbPasswordIsSet() const;
    void unsetdbPassword();
    void setDbPassword(const std::string& value);

    /// <summary>
    /// 数据库端口。约束：输入范围为1-65535之间的整数。
    /// </summary>

    int32_t getDbPort() const;
    bool dbPortIsSet() const;
    void unsetdbPort();
    void setDbPort(int32_t value);

    /// <summary>
    /// 数据库用户。
    /// </summary>

    std::string getDbUser() const;
    bool dbUserIsSet() const;
    void unsetdbUser();
    void setDbUser(const std::string& value);

    /// <summary>
    /// RDS实例名称。
    /// </summary>

    std::string getInstName() const;
    bool instNameIsSet() const;
    void unsetinstName();
    void setInstName(const std::string& value);

    /// <summary>
    /// 数据库ip
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// mongo ha模式。
    /// </summary>

    std::string getMongoHaMode() const;
    bool mongoHaModeIsSet() const;
    void unsetmongoHaMode();
    void setMongoHaMode(const std::string& value);

    /// <summary>
    /// MRS集群运行模式，取值： - 0普通集群 - 1安全集群
    /// </summary>

    int32_t getSafeMode() const;
    bool safeModeIsSet() const;
    void unsetsafeMode();
    void setSafeMode(int32_t value);

    /// <summary>
    /// SSL证书密码，证书文件后缀为.p12
    /// </summary>

    std::string getSslCertPassword() const;
    bool sslCertPasswordIsSet() const;
    void unsetsslCertPassword();
    void setSslCertPassword(const std::string& value);

    /// <summary>
    /// SSL证书内容checksum值，后端校验，源库安全连接必选。
    /// </summary>

    std::string getSslCertCheckSum() const;
    bool sslCertCheckSumIsSet() const;
    void unsetsslCertCheckSum();
    void setSslCertCheckSum(const std::string& value);

    /// <summary>
    /// SSL证书内容，用base64加密
    /// </summary>

    std::string getSslCertKey() const;
    bool sslCertKeyIsSet() const;
    void unsetsslCertKey();
    void setSslCertKey(const std::string& value);

    /// <summary>
    /// SSL证书名字
    /// </summary>

    std::string getSslCertName() const;
    bool sslCertNameIsSet() const;
    void unsetsslCertName();
    void setSslCertName(const std::string& value);

    /// <summary>
    /// 是否SSL安全连接。
    /// </summary>

    bool isSslLink() const;
    bool sslLinkIsSet() const;
    void unsetsslLink();
    void setSslLink(bool value);

    /// <summary>
    /// kafka topic名称
    /// </summary>

    std::string getTopic() const;
    bool topicIsSet() const;
    void unsettopic();
    void setTopic(const std::string& value);

    /// <summary>
    /// MongDB集群4.0及以上版本，当集群实例无法获取到分片节点的IP时，source_endpoint中需要填写，值为：Sharding4.0+。
    /// </summary>

    std::string getClusterMode() const;
    bool clusterModeIsSet() const;
    void unsetclusterMode();
    void setClusterMode(const std::string& value);


protected:
    std::string dbType_;
    bool dbTypeIsSet_;
    std::string azCode_;
    bool azCodeIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string instId_;
    bool instIdIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    std::string dbPassword_;
    bool dbPasswordIsSet_;
    int32_t dbPort_;
    bool dbPortIsSet_;
    std::string dbUser_;
    bool dbUserIsSet_;
    std::string instName_;
    bool instNameIsSet_;
    std::string ip_;
    bool ipIsSet_;
    std::string mongoHaMode_;
    bool mongoHaModeIsSet_;
    int32_t safeMode_;
    bool safeModeIsSet_;
    std::string sslCertPassword_;
    bool sslCertPasswordIsSet_;
    std::string sslCertCheckSum_;
    bool sslCertCheckSumIsSet_;
    std::string sslCertKey_;
    bool sslCertKeyIsSet_;
    std::string sslCertName_;
    bool sslCertNameIsSet_;
    bool sslLink_;
    bool sslLinkIsSet_;
    std::string topic_;
    bool topicIsSet_;
    std::string clusterMode_;
    bool clusterModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_Endpoint_H_
