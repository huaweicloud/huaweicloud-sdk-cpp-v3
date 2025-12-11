
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_RdsDbListResponse_databases_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_RdsDbListResponse_databases_H_


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
class HUAWEICLOUD_DBSS_V1_EXPORT  RdsDbListResponse_databases
    : public ModelBase
{
public:
    RdsDbListResponse_databases();
    virtual ~RdsDbListResponse_databases();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RdsDbListResponse_databases members

    /// <summary>
    /// ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 数据库名称
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 实例状态。 - BUILD：表示实例正在创建。 - ACTIVE：表示实例正常。 - FAILED：表示实例异常。 - FROZEN：表示实例冻结。 - MODIFYING：表示实例正在扩容。 - REBOOTING：表示实例正在重启。 - RESTORING：表示实例正在恢复。 - MODIFYING INSTANCE TYPE：表示实例正在转主备。 - SWITCHOVER：表示实例正在主备切换。 - MIGRATING：表示实例正在迁移。 - BACKING UP：表示实例正在进行备份。 - MODIFYING DATABASE PORT：表示实例正在修改数据库端口。 - STORAGE FULL：表示实例磁盘空间满。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 数据库端口
    /// </summary>

    std::string getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(const std::string& value);

    /// <summary>
    /// 数据库IP
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// rds实例名称
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 数据库类型 - MYSQL: MySql - ORACLE: Oracle - POSTGRESQL: PostgreSQL - SQLSERVER: SQL Server - DAMENG: DAMENG - TAURUS: TaurusDB - DWS: GaussDB DWS - KINGBASE: KINGBASE - MARIADB: MariaDB - GAUSSDBOPENGAUSS: GaussDB/openGauss
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 版本
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 是否支持免agent审计
    /// </summary>

    bool isIsSupported() const;
    bool isSupportedIsSet() const;
    void unsetisSupported();
    void setIsSupported(bool value);

    /// <summary>
    /// 企业项目ID
    /// </summary>

    std::string getEnterpriseId() const;
    bool enterpriseIdIsSet() const;
    void unsetenterpriseId();
    void setEnterpriseId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string port_;
    bool portIsSet_;
    std::string ip_;
    bool ipIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string version_;
    bool versionIsSet_;
    bool isSupported_;
    bool isSupportedIsSet_;
    std::string enterpriseId_;
    bool enterpriseIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_RdsDbListResponse_databases_H_
