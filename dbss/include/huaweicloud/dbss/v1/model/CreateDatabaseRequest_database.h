
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_CreateDatabaseRequest_database_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_CreateDatabaseRequest_database_H_


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
/// 数据库信息
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  CreateDatabaseRequest_database
    : public ModelBase
{
public:
    CreateDatabaseRequest_database();
    virtual ~CreateDatabaseRequest_database();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDatabaseRequest_database members

    /// <summary>
    /// 数据库分类 - RDS: RDS数据库 - ECS: 自建数据库
    /// </summary>

    std::string getDbClassification() const;
    bool dbClassificationIsSet() const;
    void unsetdbClassification();
    void setDbClassification(const std::string& value);

    /// <summary>
    /// 数据库名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 数据库类型 - MYSQL: MySQL - ORACLE: Oracle - POSTGRESQL: PostgreSQL - SQLSERVER: SQL Server - DAMENG： DAMENG - TAURUS: Taurus DB - DWS: GaussDB(DWS) - KINGBASE: Kingbase - GAUSSDBOPENGAUSS：GaussDB/openGauss - GREENPLUM： Greenplum - HIGHGO: HIGHGO - SHENTONG： ShenTong - GBASE8A: GBase 8a - GBASE8S： GBase 8s - GBASEXDM： GBase XDM - MONGODB: MongoDB - DDS： DDS(MongoDB)
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
    /// 字符集。 - GBK： GBK - UTF8：UTF8
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
    /// 数据库操作系统 - LINUX64：LINUX64 - WINDOWS64：WINDOWS64 - UNIX：UNIX
    /// </summary>

    std::string getOs() const;
    bool osIsSet() const;
    void unsetos();
    void setOs(const std::string& value);

    /// <summary>
    /// 数据库实例名称
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);


protected:
    std::string dbClassification_;
    bool dbClassificationIsSet_;
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
    std::string instanceName_;
    bool instanceNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_CreateDatabaseRequest_database_H_
