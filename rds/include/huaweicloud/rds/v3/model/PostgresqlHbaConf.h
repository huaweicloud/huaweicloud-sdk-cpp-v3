
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgresqlHbaConf_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgresqlHbaConf_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  PostgresqlHbaConf
    : public ModelBase
{
public:
    PostgresqlHbaConf();
    virtual ~PostgresqlHbaConf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostgresqlHbaConf members

    /// <summary>
    /// 连接类型，枚举，host、hostssl、hostnossl
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 数据库名，除template0，template1的数据库名，多个以逗号隔开
    /// </summary>

    std::string getDatabase() const;
    bool databaseIsSet() const;
    void unsetdatabase();
    void setDatabase(const std::string& value);

    /// <summary>
    /// 用户名，all，除内置用户（rdsAdmin, rdsMetric, rdsBackup, rdsRepl, rdsProxy）以外，多个以逗号隔开
    /// </summary>

    std::string getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const std::string& value);

    /// <summary>
    /// 客户端IP地址。0.0.0.0/0表示允许用户从任意IP地址访问数据库
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 掩码，默认为空字符串
    /// </summary>

    std::string getMask() const;
    bool maskIsSet() const;
    void unsetmask();
    void setMask(const std::string& value);

    /// <summary>
    /// 认证方式。枚举：reject、md5、scram-sha-256
    /// </summary>

    std::string getMethod() const;
    bool methodIsSet() const;
    void unsetmethod();
    void setMethod(const std::string& value);

    /// <summary>
    /// 优先级，表示配置的先后
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string database_;
    bool databaseIsSet_;
    std::string user_;
    bool userIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string mask_;
    bool maskIsSet_;
    std::string method_;
    bool methodIsSet_;
    int32_t priority_;
    bool priorityIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgresqlHbaConf_H_
