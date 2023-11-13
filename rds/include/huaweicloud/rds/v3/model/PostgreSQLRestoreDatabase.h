
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLRestoreDatabase_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLRestoreDatabase_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/PostgreSQLRestoreSchema.h>
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
/// 恢复库信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  PostgreSQLRestoreDatabase
    : public ModelBase
{
public:
    PostgreSQLRestoreDatabase();
    virtual ~PostgreSQLRestoreDatabase();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostgreSQLRestoreDatabase members

    /// <summary>
    /// 数据库名
    /// </summary>

    std::string getDatabase() const;
    bool databaseIsSet() const;
    void unsetdatabase();
    void setDatabase(const std::string& value);

    /// <summary>
    /// 模式信息
    /// </summary>

    std::vector<PostgreSQLRestoreSchema>& getSchemas();
    bool schemasIsSet() const;
    void unsetschemas();
    void setSchemas(const std::vector<PostgreSQLRestoreSchema>& value);


protected:
    std::string database_;
    bool databaseIsSet_;
    std::vector<PostgreSQLRestoreSchema> schemas_;
    bool schemasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLRestoreDatabase_H_
