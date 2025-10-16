
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_PublicationTableInfoRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_PublicationTableInfoRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/PublicationTableFilterInfoRequest.h>
#include <string>
#include <huaweicloud/rds/v3/model/ArticlePropertiesRequest.h>
#include <vector>

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
class HUAWEICLOUD_RDS_V3_EXPORT  PublicationTableInfoRequest
    : public ModelBase
{
public:
    PublicationTableInfoRequest();
    virtual ~PublicationTableInfoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PublicationTableInfoRequest members

    /// <summary>
    /// 表名。  表名长度可在1～64个字符之间，由字母、数字或下划线组成，不能包含其他特殊字符
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// 命名空间。默认值dbo。
    /// </summary>

    std::string getSchema() const;
    bool schemaIsSet() const;
    void unsetschema();
    void setSchema(const std::string& value);

    /// <summary>
    /// 发布的字段（不传或为空说明选择所有字段）。  字段名称长度可在1～64个字符之间，由字母、数字或下划线组成，不能包含其他特殊字符
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
    /// 筛选语句。不能包含英文单引号&#39;。
    /// </summary>

    std::string getFilterStatement() const;
    bool filterStatementIsSet() const;
    void unsetfilterStatement();
    void setFilterStatement(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PublicationTableFilterInfoRequest getFilter() const;
    bool filterIsSet() const;
    void unsetfilter();
    void setFilter(const PublicationTableFilterInfoRequest& value);

    /// <summary>
    /// 
    /// </summary>

    ArticlePropertiesRequest getArticleProperties() const;
    bool articlePropertiesIsSet() const;
    void unsetarticleProperties();
    void setArticleProperties(const ArticlePropertiesRequest& value);


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
    PublicationTableFilterInfoRequest filter_;
    bool filterIsSet_;
    ArticlePropertiesRequest articleProperties_;
    bool articlePropertiesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_PublicationTableInfoRequest_H_
