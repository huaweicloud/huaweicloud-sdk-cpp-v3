
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ExecuteOptimizeTableSpaceRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ExecuteOptimizeTableSpaceRequestBody_H_


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
/// 清理表碎片空间的请求体。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ExecuteOptimizeTableSpaceRequestBody
    : public ModelBase
{
public:
    ExecuteOptimizeTableSpaceRequestBody();
    virtual ~ExecuteOptimizeTableSpaceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExecuteOptimizeTableSpaceRequestBody members

    /// <summary>
    /// **参数解释**：  表名。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据库名。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);


protected:
    std::string tableName_;
    bool tableNameIsSet_;
    std::string databaseName_;
    bool databaseNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ExecuteOptimizeTableSpaceRequestBody_H_
