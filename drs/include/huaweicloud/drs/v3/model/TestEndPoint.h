
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_TestEndPoint_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_TestEndPoint_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
    /// 任务ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 网络类型
    /// </summary>

    std::string getNetType() const;
    bool netTypeIsSet() const;
    void unsetnetType();
    void setNetType(const std::string& value);

    /// <summary>
    /// 数据库类型
    /// </summary>

    std::string getDbType() const;
    bool dbTypeIsSet() const;
    void unsetdbType();
    void setDbType(const std::string& value);

    /// <summary>
    /// 数据库IP
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// 数据库端口，Mongo、DDS必填为0。
    /// </summary>

    int32_t getDbPort() const;
    bool dbPortIsSet() const;
    void unsetdbPort();
    void setDbPort(int32_t value);

    /// <summary>
    /// RDS实例id，RDS实例必填。
    /// </summary>

    std::string getInstId() const;
    bool instIdIsSet() const;
    void unsetinstId();
    void setInstId(const std::string& value);

    /// <summary>
    /// 数据库帐号。
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
    /// 是否SSL安全连接。
    /// </summary>

    bool isSslLink() const;
    bool sslLinkIsSet() const;
    void unsetsslLink();
    void setSslLink(bool value);

    /// <summary>
    /// SSL证书内容，base64加密后的值，源库安全连接必选。
    /// </summary>

    std::string getSslCertKey() const;
    bool sslCertKeyIsSet() const;
    void unsetsslCertKey();
    void setSslCertKey(const std::string& value);

    /// <summary>
    /// SSL证书名字，源库安全连接必选。
    /// </summary>

    std::string getSslCertName() const;
    bool sslCertNameIsSet() const;
    void unsetsslCertName();
    void setSslCertName(const std::string& value);

    /// <summary>
    /// SSL证书内容checksum值，证书经过sha256加密后的值，后端校验，源库安全连接必选。
    /// </summary>

    std::string getSslCertCheckSum() const;
    bool sslCertCheckSumIsSet() const;
    void unsetsslCertCheckSum();
    void setSslCertCheckSum(const std::string& value);

    /// <summary>
    /// SSL证书密码，证书文件后缀为.p12，需要密码。
    /// </summary>

    std::string getSslCertPassword() const;
    bool sslCertPasswordIsSet() const;
    void unsetsslCertPassword();
    void setSslCertPassword(const std::string& value);

    /// <summary>
    /// vpcid，数据库为RDS时必选。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// subnetid，数据库为RDS必选。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 源库：so,目标库：ta
    /// </summary>

    std::string getEndPointType() const;
    bool endPointTypeIsSet() const;
    void unsetendPointType();
    void setEndPointType(const std::string& value);

    /// <summary>
    /// rds实例region，数据库为RDS时必填。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 用户所处region的projectId。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 数据库用户名，DDS的账号认证数据库，Oracle的serviceName。
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_TestEndPoint_H_
