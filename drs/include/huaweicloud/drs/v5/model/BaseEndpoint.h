
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_BaseEndpoint_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_BaseEndpoint_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/BaseEndpoint.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库基本信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  BaseEndpoint
    : public ModelBase
{
public:
    BaseEndpoint();
    virtual ~BaseEndpoint();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BaseEndpoint members

    /// <summary>
    /// 数据库信息ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 数据库场景类型。取值： - oracle：云下自建Oracle数据库。 - ecs_oracle：华为云ECS自建Oracle数据库。 - cloud_gaussdbv5：华为云数据库GaussDB分布式。 - mysql：他云/本地自建MySQL数据库。 - ecs_mysql：华为云ECS自建MySQL数据库。 - cloud_mysql：华为云数据库RDS for MySQL。
    /// </summary>

    std::string getEndpointName() const;
    bool endpointNameIsSet() const;
    void unsetendpointName();
    void setEndpointName(const std::string& value);

    /// <summary>
    /// 数据库IP。 约束： - 数据库为自建MongoDB时，数据库IP与端口之间用“:”英文冒号拼接，多个值之间请用“,”英文逗号隔开，最多支持填写3个IP地址或域名。 - 数据库为DDS实例时，数据库IP与端口之间用“:”英文冒号拼接，多个IP端口之间请用“,”英文逗号分隔。 示例： - MySQL：192.168.0.10 - MongoDB：192.168.0.10:8080,192.168.0.11:8080,192.168.0.12:8080 - DDS：192.168.205.130:8635,192.168.250.64:8635
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// 数据库端口。  约束：输入范围为1-65535之间的整数。
    /// </summary>

    std::string getDbPort() const;
    bool dbPortIsSet() const;
    void unsetdbPort();
    void setDbPort(const std::string& value);

    /// <summary>
    /// 数据库用户名。
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
    /// 华为云数据库实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 华为云数据库实例名称。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 指定数据库名称。例如： - oracle：serviceName.orcl。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 物理源库信息。
    /// </summary>

    std::vector<BaseEndpoint>& getSourceSharding();
    bool sourceShardingIsSet() const;
    void unsetsourceSharding();
    void setSourceSharding(const std::vector<BaseEndpoint>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string endpointName_;
    bool endpointNameIsSet_;
    std::string ip_;
    bool ipIsSet_;
    std::string dbPort_;
    bool dbPortIsSet_;
    std::string dbUser_;
    bool dbUserIsSet_;
    std::string dbPassword_;
    bool dbPasswordIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    std::vector<BaseEndpoint> sourceSharding_;
    bool sourceShardingIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_BaseEndpoint_H_
