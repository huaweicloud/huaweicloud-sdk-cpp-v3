
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_GrantDatabasePermission_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_GrantDatabasePermission_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/DatabasePermission.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库用户权限信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  GrantDatabasePermission
    : public ModelBase
{
public:
    GrantDatabasePermission();
    virtual ~GrantDatabasePermission();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GrantDatabasePermission members

    /// <summary>
    /// 数据库用户名。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 主机地址。
    /// </summary>

    std::string getHost() const;
    bool hostIsSet() const;
    void unsethost();
    void setHost(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<DatabasePermission>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<DatabasePermission>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string host_;
    bool hostIsSet_;
    std::vector<DatabasePermission> databases_;
    bool databasesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_GrantDatabasePermission_H_
