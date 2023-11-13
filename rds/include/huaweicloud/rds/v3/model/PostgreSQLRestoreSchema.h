
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLRestoreSchema_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLRestoreSchema_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/PostgreSQLRestoreTable.h>
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
/// 恢复模式信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  PostgreSQLRestoreSchema
    : public ModelBase
{
public:
    PostgreSQLRestoreSchema();
    virtual ~PostgreSQLRestoreSchema();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostgreSQLRestoreSchema members

    /// <summary>
    /// 模式信息
    /// </summary>

    std::string getSchema() const;
    bool schemaIsSet() const;
    void unsetschema();
    void setSchema(const std::string& value);

    /// <summary>
    /// 表信息
    /// </summary>

    std::vector<PostgreSQLRestoreTable>& getTables();
    bool tablesIsSet() const;
    void unsettables();
    void setTables(const std::vector<PostgreSQLRestoreTable>& value);


protected:
    std::string schema_;
    bool schemaIsSet_;
    std::vector<PostgreSQLRestoreTable> tables_;
    bool tablesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLRestoreSchema_H_
