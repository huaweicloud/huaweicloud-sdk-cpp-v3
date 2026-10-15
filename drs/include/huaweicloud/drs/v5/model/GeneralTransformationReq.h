
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_GeneralTransformationReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_GeneralTransformationReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/DataFilterObjectInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据过滤对象信息请求体  注意：           每张表仅支持添加一个校验规则。           数据过滤每次最多支持500张表。           过滤表达式不支持使用某种数据库引擎特有的package、函数、变量、常量等写法，须使用通用SQL标准。请直接输入SQL语句中WHERE之后的部分（不包含WHERE和分号，例如：sid &gt; 3 and sname like \&quot;G %\&quot;），最多支持输入512个字符。           过滤条件填写的SQL语句中，关键字需要用反引号，datatime类型（包含日期和时间）需要用单引号，例如：update &gt; &#39;2022-07-13 00:00:00&#39; and age &gt;10。           不支持对LOB字段设置过滤条件，如CLOB、BLOB、BYTEA等大字段类型。           不支持库名、表名带有换行符的对象设置过滤规则。           建议不要对非精确类型字段设置过滤条件，如FLOAT、DECIMAL、DOUBLE等。           建议不要对带有特殊字符的字段设置过滤条件。           不建议使用非幂等表达式或函数作为数据加工条件，如SYSTIMESTAMP，SYSDATE等，因其每次调用返回的结果可能会有差异，导致达不到预期。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  GeneralTransformationReq
    : public ModelBase
{
public:
    GeneralTransformationReq();
    virtual ~GeneralTransformationReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GeneralTransformationReq members

    /// <summary>
    /// 数据过滤对象列表。包含需要校验的具体数据库对象（库/Schema/表）信息，在简单条件过滤场景下为必填项。列表中的每个元素代表一个待过滤的数据库对象。适用条件：简单过滤条件场景下必填。
    /// </summary>

    std::vector<DataFilterObjectInfo>& getFilterObjectList();
    bool filterObjectListIsSet() const;
    void unsetfilterObjectList();
    void setFilterObjectList(const std::vector<DataFilterObjectInfo>& value);

    /// <summary>
    /// 源端数据库的过滤条件SQL语句。用于定义源库数据过滤规则，支持SQL子查询等高级过滤表达式。当数据过滤涉及子查询场景时，需要通过此字段配置查询条件。
    /// </summary>

    std::string getSourceFilterCondition() const;
    bool sourceFilterConditionIsSet() const;
    void unsetsourceFilterCondition();
    void setSourceFilterCondition(const std::string& value);


protected:
    std::vector<DataFilterObjectInfo> filterObjectList_;
    bool filterObjectListIsSet_;
    std::string sourceFilterCondition_;
    bool sourceFilterConditionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_GeneralTransformationReq_H_
