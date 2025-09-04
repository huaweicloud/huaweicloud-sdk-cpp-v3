
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ExportTableVolumeRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ExportTableVolumeRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ExportTableVolumeRequestBody
    : public ModelBase
{
public:
    ExportTableVolumeRequestBody();
    virtual ~ExportTableVolumeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExportTableVolumeRequestBody members

    /// <summary>
    /// **参数解释**: 数据库名称。 **约束限制**: 不涉及 **取值范围**: 不涉及 **默认取值**: 不涉及。 
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// **参数解释**: schema名称。 **约束限制**: 不涉及 **取值范围**: 不涉及 **默认取值**: 不涉及。 
    /// </summary>

    std::vector<std::string>& getSchemaNames();
    bool schemaNamesIsSet() const;
    void unsetschemaNames();
    void setSchemaNames(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**:   表名称。 **约束限制**: 不涉及 **取值范围**: 不涉及 **默认取值**: 不涉及。 
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// **参数解释**: 表所属用户名称。 **约束限制**: 不涉及 **取值范围**: 不涉及 **默认取值**: 不涉及。 
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释**: 排序字段。 **约束限制**: 不涉及 **取值范围**: 不涉及 **默认取值**: 不涉及。 
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// **参数解释**: 排序方法。 **约束限制**: 不涉及 **取值范围**: 不涉及 **默认取值**: 不涉及。 
    /// </summary>

    std::string getSortOrder() const;
    bool sortOrderIsSet() const;
    void unsetsortOrder();
    void setSortOrder(const std::string& value);


protected:
    std::string databaseName_;
    bool databaseNameIsSet_;
    std::vector<std::string> schemaNames_;
    bool schemaNamesIsSet_;
    std::string tableName_;
    bool tableNameIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string sortOrder_;
    bool sortOrderIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ExportTableVolumeRequestBody_H_
