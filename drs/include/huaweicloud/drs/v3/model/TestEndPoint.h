
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_TestEndPoint_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_TestEndPoint_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/CustomizedDns.h>
#include <huaweicloud/drs/v3/model/KafkaSecurity.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 测试连接信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  TestEndPoint
    : public ModelBase
{
public:
    TestEndPoint();
    virtual ~TestEndPoint();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestEndPoint members

    /// <summary>
    /// **参数解释**：  DRS任务ID，用于唯一标识一个数据复制任务，可从任务列表或任务详情页面获取。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务使用的网络类型。  **约束限制**：  不涉及。  **取值范围**：  - vpn：虚拟专用网络 - vpc：虚拟私有云 - eip：弹性公网IP  **默认取值**：  不涉及
    /// </summary>

    std::string getNetType() const;
    bool netTypeIsSet() const;
    void unsetnetType();
    void setNetType(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据库类型，标识源库或目标库的数据库引擎种类。  **约束限制**：  不涉及。  **取值范围**：  - mysql：MySQL - mongodb：MongoDB - gaussdbv5：GaussDB分布式版 - postgresql：PostgreSQL - kafka：Kafka - gaussdbv5ha：GaussDB集中式版 - taurus：TaurusDB  **默认取值**：  不涉及
    /// </summary>

    std::string getDbType() const;
    bool dbTypeIsSet() const;
    void unsetdbType();
    void setDbType(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据库IP地址，用于指定连接数据库的服务器地址。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据库端口号，用于指定连接数据库的服务端口。  **约束限制**：  - db_type为MongoDB、DDS时端口必填取值为0。 - db_type为Oracle时为必填。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    int32_t getDbPort() const;
    bool dbPortIsSet() const;
    void unsetdbPort();
    void setDbPort(int32_t value);

    /// <summary>
    /// **参数解释**：  RDS实例ID，用于标识华为云RDS数据库实例。  **约束限制**：  - 数据库为RDS实例时必填。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getInstId() const;
    bool instIdIsSet() const;
    void unsetinstId();
    void setInstId(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据库帐号，用于连接数据库的用户名。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getDbUser() const;
    bool dbUserIsSet() const;
    void unsetdbUser();
    void setDbUser(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据库密码，用于连接数据库的认证密码。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getDbPassword() const;
    bool dbPasswordIsSet() const;
    void unsetdbPassword();
    void setDbPassword(const std::string& value);

    /// <summary>
    /// **参数解释**：  是否使用SSL安全连接，指定数据库连接是否启用SSL加密传输。  **约束限制**：  - 该参数为true时，需填写SSL证书相关信息参数。  **取值范围**：  - true：使用SSL安全连接 - false：不使用SSL安全连接  **默认取值**：  不涉及
    /// </summary>

    bool isSslLink() const;
    bool sslLinkIsSet() const;
    void unsetsslLink();
    void setSslLink(bool value);

    /// <summary>
    /// **参数解释**：  SSL证书内容，获取SSL证书后将内容通过BASE64加密后所得的字符串。  **约束限制**：  - ssl_link为true时必填。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getSslCertKey() const;
    bool sslCertKeyIsSet() const;
    void unsetsslCertKey();
    void setSslCertKey(const std::string& value);

    /// <summary>
    /// **参数解释**：  SSL证书名字。  **约束限制**：  - ssl_link为true时必填。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getSslCertName() const;
    bool sslCertNameIsSet() const;
    void unsetsslCertName();
    void setSslCertName(const std::string& value);

    /// <summary>
    /// **参数解释**：  SSL证书内容checksum值，获取SSL证书后将内容经过SHA256加密后的值，后端校验用。  **约束限制**：  - ssl_link为true时必填。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getSslCertCheckSum() const;
    bool sslCertCheckSumIsSet() const;
    void unsetsslCertCheckSum();
    void setSslCertCheckSum(const std::string& value);

    /// <summary>
    /// **参数解释**：  SSL证书密码。  **约束限制**：  - 证书文件后缀为.p12时需要填写密码。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getSslCertPassword() const;
    bool sslCertPasswordIsSet() const;
    void unsetsslCertPassword();
    void setSslCertPassword(const std::string& value);

    /// <summary>
    /// **参数解释**：  虚拟私有云ID，用于标识数据库所在的VPC。  **约束限制**：  - 网络类型为VPC时必填。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// **参数解释**：  子网ID，用于标识数据库所在的子网。  **约束限制**：  - 网络类型为VPC时必填。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据库端点类型，标识该数据库在数据复制任务中是源端还是目标端。  **约束限制**：  不涉及。  **取值范围**：  - so：源库 - ta：目标库  **默认取值**：  so
    /// </summary>

    std::string getEndPointType() const;
    bool endPointTypeIsSet() const;
    void unsetendPointType();
    void setEndPointType(const std::string& value);

    /// <summary>
    /// **参数解释**：  RDS实例所在区域，用于标识数据库实例的地理区域。  **约束限制**：  - 数据库为RDS实例时必填。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据库实例所在Region的项目ID，数据库为云上实例时填写数据库实例所在Region下的项目ID，否则填写当前任务所在Region下的项目ID。获取方法请参见获取项目ID。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据库名称，Oracle场景下为serviceName。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    KafkaSecurity getKafkaSecurityConfig() const;
    bool kafkaSecurityConfigIsSet() const;
    void unsetkafkaSecurityConfig();
    void setKafkaSecurityConfig(const KafkaSecurity& value);

    /// <summary>
    /// 
    /// </summary>

    CustomizedDns getCustomizedDns() const;
    bool customizedDnsIsSet() const;
    void unsetcustomizedDns();
    void setCustomizedDns(const CustomizedDns& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string netType_;
    bool netTypeIsSet_;
    std::string dbType_;
    bool dbTypeIsSet_;
    std::string ip_;
    bool ipIsSet_;
    int32_t dbPort_;
    bool dbPortIsSet_;
    std::string instId_;
    bool instIdIsSet_;
    std::string dbUser_;
    bool dbUserIsSet_;
    std::string dbPassword_;
    bool dbPasswordIsSet_;
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
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string endPointType_;
    bool endPointTypeIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    KafkaSecurity kafkaSecurityConfig_;
    bool kafkaSecurityConfigIsSet_;
    CustomizedDns customizedDns_;
    bool customizedDnsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_TestEndPoint_H_
