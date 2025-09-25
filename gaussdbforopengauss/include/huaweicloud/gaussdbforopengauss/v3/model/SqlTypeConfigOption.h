
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SqlTypeConfigOption_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SqlTypeConfigOption_H_


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
/// **参数解释**: SQL采集类型列表。默认取值[]，表示采集所有SQL语句。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  SqlTypeConfigOption
    : public ModelBase
{
public:
    SqlTypeConfigOption();
    virtual ~SqlTypeConfigOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SqlTypeConfigOption members

    /// <summary>
    /// **参数解释**: SQL类型的归类名称。 **约束限制**: - 对常用SQL类型，简单归类为6个类别，每个类别对应一组固定的采集SQL语句类型列表，采用前缀进行匹配。 - 对于其他场景，可以使用自定义类别，允许按需自定义采集SQL的语句前缀。  **取值范围**: - all：不区分SQL类型，全部采集。 - ddl：只采集DDL语句类别，包含如下SQL语句类型： create, alter, drop, truncate, reindex, vacuum, analyze, declare, move, close。 - dml：只采集DML语句类型，包含如下SQL语句类型： insert, update, delete, merge, show, explain, prepare, lock, copy, execute, deallocate。 - dcl：只采集DCL语句类型，包含如下SQL语句类型： grant, revoke, reassign, set。 - tcl：只采集TCL语句类型，包含如下SQL语句类型： begin, commit, rollback, start, savepoint, checkpoint, release savepoint。 - dql：只采集DQL语句类型，包含如下SQL语句类型： select。 - custom：采集自定义语句类型。需在prefixes字段中，填写要采集的SQL语句前缀片段。  **默认取值**: 不涉及。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**: 针对custom自定义类别，指定要采集的SQL语句类型的列表，默认取值为[]。采集过程中，采用前缀方式对SQL文本进行匹配。 **约束限制**: - category取值custom时，此参数必填，不可为空。 - category取值其他类别时，此参数忽略。
    /// </summary>

    std::vector<std::string>& getPrefixes();
    bool prefixesIsSet() const;
    void unsetprefixes();
    void setPrefixes(const std::vector<std::string>& value);


protected:
    std::string category_;
    bool categoryIsSet_;
    std::vector<std::string> prefixes_;
    bool prefixesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SqlTypeConfigOption_H_
