
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_ScanKvRequestBody_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_ScanKvRequestBody_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/Condition_expression.h>
#include <string>
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
class HUAWEICLOUD_KVS_V1_EXPORT  ScanKvRequestBody
    : public ModelBase
{
public:
    ScanKvRequestBody();
    virtual ~ScanKvRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// ScanKvRequestBody members

    /// <summary>
    /// 表名，仓内唯一。 - 长度：[3, 63] - 取值字符限制：[a-z0-9_-]+
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// create_table时指定的索引名，默认空表示主索引。 - 长度：[3, 63] - 取值字符限制：[a-z0-9_-]+
    /// </summary>

    std::string getHintIndexName() const;
    bool hintIndexNameIsSet() const;
    void unsethintIndexName();
    void setHintIndexName(const std::string& value);

    /// <summary>
    /// 数据量不超过1MB时，返回的文档个数，最大100个，默认1MB或者100个文档。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 起始主键或索引键值。 - 默认空，表示从头遍历，左闭。 &gt; 分页返回时，该值使用上次响应返回的cursor_key。
    /// </summary>

    Document getStartKey() const;
    bool startKeyIsSet() const;
    void unsetstartKey();
    void setStartKey(const Document& value);

    /// <summary>
    /// 终止主键或索引键值。 - 默认空，表示直到最后，右开。
    /// </summary>

    Document getEndKey() const;
    bool endKeyIsSet() const;
    void unsetendKey();
    void setEndKey(const Document& value);

    /// <summary>
    /// 
    /// </summary>

    Condition_expression getFilterExpression() const;
    bool filterExpressionIsSet() const;
    void unsetfilterExpression();
    void setFilterExpression(const Condition_expression& value);

    /// <summary>
    /// 对kv_doc有效，返回指定字段列表，默认全部。
    /// </summary>

    std::vector<std::string>& getProjectionFields();
    bool projectionFieldsIsSet() const;
    void unsetprojectionFields();
    void setProjectionFields(const std::vector<std::string>& value);

    /// <summary>
    /// 对表进行采样，尽最大努力保证返回的段列表均分整张表。举例：sample_segments_count&#x3D;4，返回的段列表[MinKey, KV1)、[KV1,KV2)、[KV2,KV3)和[KV3,MaxKey)。用户可以使用scan-kv对这四个分区执行并发扫描，提高遍历效率。 - 范围: [1, 10000]。默认值：不执行采样。 - sample_segments_count仅能和table_name、start_key和end_key字段配合使用。Range分区模式下支持全表采样和范围采样；Hash分区模式仅支持全表扫描。 - 仅支持对Primary key进行采样，不支持本地/全局二级索引。 - 返回的段列表仅包含主键，不包含键值；且段列表是编码后的数据 ，不可修改。
    /// </summary>

    int32_t getSampleSegmentsCount() const;
    bool sampleSegmentsCountIsSet() const;
    void unsetsampleSegmentsCount();
    void setSampleSegmentsCount(int32_t value);

    /// <summary>
    /// 返回查询条件对应的KV总数. - 当KV总数小于limit条件时，返回KV查询结果和KV总数。 - 当KV总数多于limit条件时，只返回KV总数。
    /// </summary>

    bool isReturnCountOnly() const;
    bool returnCountOnlyIsSet() const;
    void unsetreturnCountOnly();
    void setReturnCountOnly(bool value);


protected:
    std::string tableName_;
    bool tableNameIsSet_;
    std::string hintIndexName_;
    bool hintIndexNameIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    Document startKey_;
    bool startKeyIsSet_;
    Document endKey_;
    bool endKeyIsSet_;
    Condition_expression filterExpression_;
    bool filterExpressionIsSet_;
    std::vector<std::string> projectionFields_;
    bool projectionFieldsIsSet_;
    int32_t sampleSegmentsCount_;
    bool sampleSegmentsCountIsSet_;
    bool returnCountOnly_;
    bool returnCountOnlyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_ScanKvRequestBody_H_
