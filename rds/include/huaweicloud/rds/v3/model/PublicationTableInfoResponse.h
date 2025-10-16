
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_PublicationTableInfoResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_PublicationTableInfoResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ArticlePropertiesResponse.h>
#include <string>
#include <vector>
#include <huaweicloud/rds/v3/model/PublicationTableFilterInfoResponse.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 发布表详情。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  PublicationTableInfoResponse
    : public ModelBase
{
public:
    PublicationTableInfoResponse();
    virtual ~PublicationTableInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PublicationTableInfoResponse members

    /// <summary>
    /// 表名。
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// 命名空间。
    /// </summary>

    std::string getSchema() const;
    bool schemaIsSet() const;
    void unsetschema();
    void setSchema(const std::string& value);

    /// <summary>
    /// 发布的字段（未传或为空说明选择所有字段）。
    /// </summary>

    std::vector<std::string>& getColumns();
    bool columnsIsSet() const;
    void unsetcolumns();
    void setColumns(const std::vector<std::string>& value);

    /// <summary>
    /// 主键。
    /// </summary>

    std::vector<std::string>& getPrimaryKey();
    bool primaryKeyIsSet() const;
    void unsetprimaryKey();
    void setPrimaryKey(const std::vector<std::string>& value);

    /// <summary>
    /// 筛选语句。
    /// </summary>

    std::string getFilterStatement() const;
    bool filterStatementIsSet() const;
    void unsetfilterStatement();
    void setFilterStatement(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PublicationTableFilterInfoResponse getFilter() const;
    bool filterIsSet() const;
    void unsetfilter();
    void setFilter(const PublicationTableFilterInfoResponse& value);

    /// <summary>
    /// 
    /// </summary>

    ArticlePropertiesResponse getArticleProperties() const;
    bool articlePropertiesIsSet() const;
    void unsetarticleProperties();
    void setArticleProperties(const ArticlePropertiesResponse& value);


protected:
    std::string tableName_;
    bool tableNameIsSet_;
    std::string schema_;
    bool schemaIsSet_;
    std::vector<std::string> columns_;
    bool columnsIsSet_;
    std::vector<std::string> primaryKey_;
    bool primaryKeyIsSet_;
    std::string filterStatement_;
    bool filterStatementIsSet_;
    PublicationTableFilterInfoResponse filter_;
    bool filterIsSet_;
    ArticlePropertiesResponse articleProperties_;
    bool articlePropertiesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_PublicationTableInfoResponse_H_
