
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StarRocksDatabaseUserPSinfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StarRocksDatabaseUserPSinfo_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改数据库账号权限
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  StarRocksDatabaseUserPSinfo
    : public ModelBase
{
public:
    StarRocksDatabaseUserPSinfo();
    virtual ~StarRocksDatabaseUserPSinfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StarRocksDatabaseUserPSinfo members

    /// <summary>
    /// 数据库账号名。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 数据库列表。
    /// </summary>

    std::vector<std::string>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<std::string>& value);

    /// <summary>
    /// DML权限。 取值范围： - 0：读写权限 - 1：只读权限 - 2：只读和设置权限 - 3：读写和设置权限
    /// </summary>

    int32_t getDml() const;
    bool dmlIsSet() const;
    void unsetdml();
    void setDml(int32_t value);

    /// <summary>
    /// DDL权限。 取值范围： - 0：无DDL权限 - 1：有DDL权限
    /// </summary>

    int32_t getDdl() const;
    bool ddlIsSet() const;
    void unsetddl();
    void setDdl(int32_t value);


protected:
    std::string userName_;
    bool userNameIsSet_;
    std::vector<std::string> databases_;
    bool databasesIsSet_;
    int32_t dml_;
    bool dmlIsSet_;
    int32_t ddl_;
    bool ddlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StarRocksDatabaseUserPSinfo_H_
