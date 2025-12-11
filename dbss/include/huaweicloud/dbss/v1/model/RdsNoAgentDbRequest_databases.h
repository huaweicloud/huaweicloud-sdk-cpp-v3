
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_RdsNoAgentDbRequest_databases_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_RdsNoAgentDbRequest_databases_H_


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
class HUAWEICLOUD_DBSS_V1_EXPORT  RdsNoAgentDbRequest_databases
    : public ModelBase
{
public:
    RdsNoAgentDbRequest_databases();
    virtual ~RdsNoAgentDbRequest_databases();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RdsNoAgentDbRequest_databases members

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

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 数据库状态 - ON：启用 - OFF：关闭
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
    /// 数据库实例名称
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 数据库版本
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 数据库类型 - MYSQL: MySQL - ORACLE: Oracle - POSTGRESQL: PostgreSQL - TAURUS: Taurus DB - DWS: GaussDB(DWS) - GAUSSDBOPENGAUSS：GaussDB/openGauss - DDS： DDS(MongoDB)
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 企业项目ID
    /// </summary>

    std::string getEnterpriseId() const;
    bool enterpriseIdIsSet() const;
    void unsetenterpriseId();
    void setEnterpriseId(const std::string& value);

    /// <summary>
    /// 企业项目名称
    /// </summary>

    std::string getEnterpriseName() const;
    bool enterpriseNameIsSet() const;
    void unsetenterpriseName();
    void setEnterpriseName(const std::string& value);


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
    std::string version_;
    bool versionIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string enterpriseId_;
    bool enterpriseIdIsSet_;
    std::string enterpriseName_;
    bool enterpriseNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_RdsNoAgentDbRequest_databases_H_
