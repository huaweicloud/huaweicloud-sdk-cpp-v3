
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
    /// 添加的数据库类型： 枚举值：  MYSQL  ORACLE  POSTGRESQL  SQLSERVER  DAMENG  TAURUS  DWS  KINGBASE  GAUSSDBOPENGAUSS   GREENPLUM   HIGHGO   SHENTONG   GBASE8A   GBASE8S   GBASEXDM   MONGODB   DDS
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
    /// 数据库字符集
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
    /// 开启状态（1：开启，0：关闭）
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
    /// 数据库的运行状态 枚举值：  ACTIVE  SHUTOFF  ERROR
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
    /// 数据库分类，取值范围： RDS（表示RDS数据库）和 ECS（自建数据库）
    /// </summary>

    std::string getDbClassification() const;
    bool dbClassificationIsSet() const;
    void unsetdbClassification();
    void setDbClassification(const std::string& value);


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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_DataBase_H_
