
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Global_secondary_index_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Global_secondary_index_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/Provisioned_throughput.h>
#include <string>
#include <vector>
#include <huaweicloud/kvs/v1/model/Field.h>

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
class HUAWEICLOUD_KVS_V1_EXPORT  Global_secondary_index
    : public ModelBase
{
public:
    Global_secondary_index();
    virtual ~Global_secondary_index();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Global_secondary_index members

    /// <summary>
    /// 二级索引名称，表内唯一。
    /// </summary>

    std::string getIndexName() const;
    bool indexNameIsSet() const;
    void unsetindexName();
    void setIndexName(const std::string& value);

    /// <summary>
    /// 分区键字段名数组，顺序组合。
    /// </summary>

    std::vector<Field>& getShardKeyFields();
    bool shardKeyFieldsIsSet() const;
    void unsetshardKeyFields();
    void setShardKeyFields(const std::vector<Field>& value);

    /// <summary>
    /// 分区模式。
    /// </summary>

    std::string getShardMode() const;
    bool shardModeIsSet() const;
    void unsetshardMode();
    void setShardMode(const std::string& value);

    /// <summary>
    /// 排序键字段名数组，顺序组合。
    /// </summary>

    std::vector<Field>& getSortKeyFields();
    bool sortKeyFieldsIsSet() const;
    void unsetsortKeyFields();
    void setSortKeyFields(const std::vector<Field>& value);

    /// <summary>
    /// 摘要字段名数组。
    /// </summary>

    std::vector<std::string>& getAbstractFields();
    bool abstractFieldsIsSet() const;
    void unsetabstractFields();
    void setAbstractFields(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    Provisioned_throughput getProvisionedThroughput() const;
    bool provisionedThroughputIsSet() const;
    void unsetprovisionedThroughput();
    void setProvisionedThroughput(const Provisioned_throughput& value);


protected:
    std::string indexName_;
    bool indexNameIsSet_;
    std::vector<Field> shardKeyFields_;
    bool shardKeyFieldsIsSet_;
    std::string shardMode_;
    bool shardModeIsSet_;
    std::vector<Field> sortKeyFields_;
    bool sortKeyFieldsIsSet_;
    std::vector<std::string> abstractFields_;
    bool abstractFieldsIsSet_;
    Provisioned_throughput provisionedThroughput_;
    bool provisionedThroughputIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Global_secondary_index_H_
