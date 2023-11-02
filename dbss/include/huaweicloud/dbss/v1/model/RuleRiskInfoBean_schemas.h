
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_RuleRiskInfoBean_schemas_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_RuleRiskInfoBean_schemas_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_DBSS_V1_EXPORT  RuleRiskInfoBean_schemas
    : public ModelBase
{
public:
    RuleRiskInfoBean_schemas();
    virtual ~RuleRiskInfoBean_schemas();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleRiskInfoBean_schemas members

    /// <summary>
    /// schema名称
    /// </summary>

    std::string getSchema() const;
    bool schemaIsSet() const;
    void unsetschema();
    void setSchema(const std::string& value);

    /// <summary>
    /// 表名
    /// </summary>

    std::string getTable() const;
    bool tableIsSet() const;
    void unsettable();
    void setTable(const std::string& value);

    /// <summary>
    /// 列名
    /// </summary>

    std::string getColumn() const;
    bool columnIsSet() const;
    void unsetcolumn();
    void setColumn(const std::string& value);


protected:
    std::string schema_;
    bool schemaIsSet_;
    std::string table_;
    bool tableIsSet_;
    std::string column_;
    bool columnIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_RuleRiskInfoBean_schemas_H_
