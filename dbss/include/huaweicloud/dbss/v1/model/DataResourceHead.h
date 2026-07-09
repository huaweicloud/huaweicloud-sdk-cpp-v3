
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_DataResourceHead_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_DataResourceHead_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/DbDataStore.h>
#include <huaweicloud/dbss/v1/model/DbUser.h>
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
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  DataResourceHead
    : public ModelBase
{
public:
    DataResourceHead();
    virtual ~DataResourceHead();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DataResourceHead members

    /// <summary>
    /// 数据库实例别名
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DbDataStore getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const DbDataStore& value);

    /// <summary>
    /// 数据库IP
    /// </summary>

    std::string getDbIp() const;
    bool dbIpIsSet() const;
    void unsetdbIp();
    void setDbIp(const std::string& value);

    /// <summary>
    /// 数据库名称
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 数据库端口
    /// </summary>

    std::string getDbPort() const;
    bool dbPortIsSet() const;
    void unsetdbPort();
    void setDbPort(const std::string& value);

    /// <summary>
    /// 数据库用户列表
    /// </summary>

    std::vector<DbUser>& getDbUserList();
    bool dbUserListIsSet() const;
    void unsetdbUserList();
    void setDbUserList(const std::vector<DbUser>& value);

    /// <summary>
    /// 云服务名称，云上数据库服务，如：rds
    /// </summary>

    std::string getProvider() const;
    bool providerIsSet() const;
    void unsetprovider();
    void setProvider(const std::string& value);

    /// <summary>
    /// rds数据库ID
    /// </summary>

    std::string getRdsId() const;
    bool rdsIdIsSet() const;
    void unsetrdsId();
    void setRdsId(const std::string& value);

    /// <summary>
    /// 数据库状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 数据库类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string alias_;
    bool aliasIsSet_;
    DbDataStore datastore_;
    bool datastoreIsSet_;
    std::string dbIp_;
    bool dbIpIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    std::string dbPort_;
    bool dbPortIsSet_;
    std::vector<DbUser> dbUserList_;
    bool dbUserListIsSet_;
    std::string provider_;
    bool providerIsSet_;
    std::string rdsId_;
    bool rdsIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_DataResourceHead_H_
