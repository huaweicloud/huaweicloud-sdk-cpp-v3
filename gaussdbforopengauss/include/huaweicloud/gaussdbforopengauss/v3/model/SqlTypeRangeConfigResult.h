
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SqlTypeRangeConfigResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SqlTypeRangeConfigResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 全量SQL开关记录
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  SqlTypeRangeConfigResult
    : public ModelBase
{
public:
    SqlTypeRangeConfigResult();
    virtual ~SqlTypeRangeConfigResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SqlTypeRangeConfigResult members

    /// <summary>
    /// **参数解释**: SQL类型的归类名称。 对常用SQL类型，简单归类为6个类别，每个类别对应一组固定的采集SQL语句类型列表，采用前缀进行匹配。 对于其他场景，可以使用自定义类别，允许按需自定义采集SQL的语句前缀。 **取值范围**: - all：不区分SQL类型，全部采集。 - ddl：只采集DDL语句类型。 - dml：只采集DML语句类型。 - dcl：只采集DCL语句类型。 - tcl：只采集TCL语句类型。 - dql：只采集DQL语句类型。 - custom：采集自定义语句类型。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**: 对应SQL类别中，采集的SQL语句类型列表，采用前缀方式进行匹配。 **取值范围**: - all：不区分SQL类型，全部采集。对应取值为：[\&quot;.*\&quot;]。 - ddl：只采集DDL语句类别，对于取值为：[\&quot;create\&quot;, \&quot;alter\&quot;, \&quot;drop\&quot;, \&quot;truncate\&quot;, \&quot;reindex\&quot;, \&quot;vacuum\&quot;, \&quot;analyze\&quot;, \&quot;declare\&quot;, \&quot;move\&quot;, \&quot;close\&quot;]。 - dml：只采集DML语句类型，对于取值为：[\&quot;insert\&quot;, \&quot;update\&quot;, \&quot;delete\&quot;, \&quot;merge\&quot;, \&quot;show\&quot;, \&quot;explain\&quot;, \&quot;prepare\&quot;, \&quot;lock\&quot;, \&quot;copy\&quot;, \&quot;execute\&quot;, \&quot;deallocate\&quot;]。 - dcl：只采集DCL语句类型，对于取值为：[\&quot;grant\&quot;, \&quot;revoke\&quot;, \&quot;reassign\&quot;, \&quot;set\&quot;]。 - tcl：只采集TCL语句类型，对于取值为：[\&quot;begin\&quot;, \&quot;commit\&quot;, \&quot;rollback\&quot;, \&quot;start\&quot;, \&quot;savepoint\&quot;, \&quot;checkpoint\&quot;, \&quot;release savepoint\&quot;]。 - dql：只采集DQL语句类型，对于取值为：[\&quot;select\&quot;]。 - custom：采集自定义语句类型。对应取值为：开启全量SQL时，用户填写的自定义SQL语句类型列表。
    /// </summary>

    std::string getPrefixes() const;
    bool prefixesIsSet() const;
    void unsetprefixes();
    void setPrefixes(const std::string& value);

    /// <summary>
    /// **参数解释**: 对应SQL类别是否为预置类别。 **取值范围**: - true：对应category取值all、ddl 、dml 、dcl 、tcl 、dql 。 - false：对应category取值custom。
    /// </summary>

    bool isIsPreset() const;
    bool isPresetIsSet() const;
    void unsetisPreset();
    void setIsPreset(bool value);


protected:
    std::string category_;
    bool categoryIsSet_;
    std::string prefixes_;
    bool prefixesIsSet_;
    bool isPreset_;
    bool isPresetIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SqlTypeRangeConfigResult_H_
