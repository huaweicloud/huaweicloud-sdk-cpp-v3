
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_DataBase_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_DataBase_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库信息
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  DataBase
    : public ModelBase
{
public:
    DataBase();
    virtual ~DataBase();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DataBase members

    /// <summary>
    /// 数据库ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 数据库名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 添加的数据库类型： - MYSQL：MySQL - ORACLE：Oracle - POSTGRESQL: PostgreSQL - SQLSERVER: SqlServer - DAMENG: Dameng - TAURUS: Taurus - DWS: Dws - KINGBASE: Kingbase - GAUSSDBOPENGAUSS：GaussDB(for openGauss) - GREENPLUM：Greenplum - HIGHGO：HighGo - SHENTONG：ShenTong - GBASE8A：GBase 8a - GBASE8S：GBase 8s - GBASEXDM：GBase XDM - MONGODB：MongoDB - DDS：DDS（Document Database Service）
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 数据库版本
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 数据库字符集 - GBK：GBK - UTF8：UTF8
    /// </summary>

    std::string getCharset() const;
    bool charsetIsSet() const;
    void unsetcharset();
    void setCharset(const std::string& value);

    /// <summary>
    /// 数据库IP
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// 数据库端口
    /// </summary>

    std::string getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(const std::string& value);

    /// <summary>
    /// 数据库操作系统
    /// </summary>

    std::string getOs() const;
    bool osIsSet() const;
    void unsetos();
    void setOs(const std::string& value);

    /// <summary>
    /// 实例状态 - ON :开启 - OFF : 关闭
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 数据库实例名
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 数据库的运行状态 - ACTIVE：运行中 - SHUTOFF：已关闭 - ERROR：故障
    /// </summary>

    std::string getAuditStatus() const;
    bool auditStatusIsSet() const;
    void unsetauditStatus();
    void setAuditStatus(const std::string& value);

    /// <summary>
    /// agent的唯一ID
    /// </summary>

    std::vector<std::string>& getAgentUrl();
    bool agentUrlIsSet() const;
    void unsetagentUrl();
    void setAgentUrl(const std::vector<std::string>& value);

    /// <summary>
    /// 数据库分类 - RDS: 表示RDS数据库 - ECS: 自建数据库
    /// </summary>

    std::string getDbClassification() const;
    bool dbClassificationIsSet() const;
    void unsetdbClassification();
    void setDbClassification(const std::string& value);

    /// <summary>
    /// rds实例审计开关状态不匹配。当数据库审计开启且rds侧日志上传开关关闭时该字段为true。
    /// </summary>

    bool isRdsAuditSwitchMismatch() const;
    bool rdsAuditSwitchMismatchIsSet() const;
    void unsetrdsAuditSwitchMismatch();
    void setRdsAuditSwitchMismatch(bool value);

    /// <summary>
    /// RDS数据库的ID。
    /// </summary>

    std::string getRdsId() const;
    bool rdsIdIsSet() const;
    void unsetrdsId();
    void setRdsId(const std::string& value);

    /// <summary>
    /// RDS数据库信息。
    /// </summary>

    std::string getRdsObjInfo() const;
    bool rdsObjInfoIsSet() const;
    void unsetrdsObjInfo();
    void setRdsObjInfo(const std::string& value);

    /// <summary>
    /// DWS数据库信息。
    /// </summary>

    std::string getDwsObjInfo() const;
    bool dwsObjInfoIsSet() const;
    void unsetdwsObjInfo();
    void setDwsObjInfo(const std::string& value);

    /// <summary>
    /// 云数据库信息，该字段已废弃。
    /// </summary>

    std::string getClouddbObjInfo() const;
    bool clouddbObjInfoIsSet() const;
    void unsetclouddbObjInfo();
    void setClouddbObjInfo(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string charset_;
    bool charsetIsSet_;
    std::string ip_;
    bool ipIsSet_;
    std::string port_;
    bool portIsSet_;
    std::string os_;
    bool osIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string auditStatus_;
    bool auditStatusIsSet_;
    std::vector<std::string> agentUrl_;
    bool agentUrlIsSet_;
    std::string dbClassification_;
    bool dbClassificationIsSet_;
    bool rdsAuditSwitchMismatch_;
    bool rdsAuditSwitchMismatchIsSet_;
    std::string rdsId_;
    bool rdsIdIsSet_;
    std::string rdsObjInfo_;
    bool rdsObjInfoIsSet_;
    std::string dwsObjInfo_;
    bool dwsObjInfoIsSet_;
    std::string clouddbObjInfo_;
    bool clouddbObjInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_DataBase_H_
