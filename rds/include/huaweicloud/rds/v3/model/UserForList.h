
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UserForList_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UserForList_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/DatabaseWithPrivilegeObject.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库用户信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  UserForList
    : public ModelBase
{
public:
    UserForList();
    virtual ~UserForList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserForList members

    /// <summary>
    /// 数据库用户名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 数据库及其权限。
    /// </summary>

    std::vector<DatabaseWithPrivilegeObject>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<DatabaseWithPrivilegeObject>& value);

    /// <summary>
    /// 授权用户登录主机IP列表 • 若IP地址为%，则表示允许所有地址访问MySQL实例。 • 若IP地址为“10.10.10.%”，则表示10.10.10.X的IP地址都可以访问该MySQL实例。 • 支持添加多个IP地址。
    /// </summary>

    std::vector<std::string>& getHosts();
    bool hostsIsSet() const;
    void unsethosts();
    void setHosts(const std::vector<std::string>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<DatabaseWithPrivilegeObject> databases_;
    bool databasesIsSet_;
    std::vector<std::string> hosts_;
    bool hostsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UserForList_H_
