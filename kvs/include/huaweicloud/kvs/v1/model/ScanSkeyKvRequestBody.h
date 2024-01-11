
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_ScanSkeyKvRequestBody_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_ScanSkeyKvRequestBody_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/Condition_expression.h>
#include <string>
#include <huaweicloud/kvs/v1/model/Projection_blob.h>
#include <huaweicloud/core/bson/Bson.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_KVS_V1_EXPORT  ScanSkeyKvRequestBody
    : public ModelBase
{
public:
    ScanSkeyKvRequestBody();
    virtual ~ScanSkeyKvRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// ScanSkeyKvRequestBody members

    /// <summary>
    /// 表名，仓内唯一。 - 长度：[3, 63] - 取值字符限制：[a-z0-9_-]+
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// create_table时指定的索引名。
    /// </summary>

    std::string getHintIndexName() const;
    bool hintIndexNameIsSet() const;
    void unsethintIndexName();
    void setHintIndexName(const std::string& value);

    /// <summary>
    /// 数据量不超过_1_mb时，返回的文档个数，最大_100_个，默认_1_mb_或者_100_个文档。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 要遍历的指定分区键下的kv。
    /// </summary>

    Document getShardKey() const;
    bool shardKeyIsSet() const;
    void unsetshardKey();
    void setShardKey(const Document& value);

    /// <summary>
    /// 起始排序键值，默认空表示从头遍历，左闭。 &gt; 分页返回时，该值使用上次响应返回的cursor_sort_key
    /// </summary>

    Document getStartSortKey() const;
    bool startSortKeyIsSet() const;
    void unsetstartSortKey();
    void setStartSortKey(const Document& value);

    /// <summary>
    /// 终止主键或索引键值，默认空表示直到最后，右开。
    /// </summary>

    Document getEndSortKey() const;
    bool endSortKeyIsSet() const;
    void unsetendSortKey();
    void setEndSortKey(const Document& value);

    /// <summary>
    /// 
    /// </summary>

    Condition_expression getFilterExpression() const;
    bool filterExpressionIsSet() const;
    void unsetfilterExpression();
    void setFilterExpression(const Condition_expression& value);

    /// <summary>
    /// 对kv_doc有效，返回哪些字段列表，默认全部。 - 数组元素的字段名或嵌套字段路径用&#39;/&#39;分割，e_name为下标。
    /// </summary>

    std::vector<std::string>& getProjectionFields();
    bool projectionFieldsIsSet() const;
    void unsetprojectionFields();
    void setProjectionFields(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    Projection_blob getProjectionBlob() const;
    bool projectionBlobIsSet() const;
    void unsetprojectionBlob();
    void setProjectionBlob(const Projection_blob& value);


protected:
    std::string tableName_;
    bool tableNameIsSet_;
    std::string hintIndexName_;
    bool hintIndexNameIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    Document shardKey_;
    bool shardKeyIsSet_;
    Document startSortKey_;
    bool startSortKeyIsSet_;
    Document endSortKey_;
    bool endSortKeyIsSet_;
    Condition_expression filterExpression_;
    bool filterExpressionIsSet_;
    std::vector<std::string> projectionFields_;
    bool projectionFieldsIsSet_;
    Projection_blob projectionBlob_;
    bool projectionBlobIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_ScanSkeyKvRequestBody_H_
