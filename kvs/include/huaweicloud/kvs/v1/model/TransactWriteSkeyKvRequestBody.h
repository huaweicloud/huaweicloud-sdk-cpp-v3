
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_TransactWriteSkeyKvRequestBody_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_TransactWriteSkeyKvRequestBody_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/Shard_key_kv_oper_item.h>
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
class HUAWEICLOUD_KVS_V1_EXPORT  TransactWriteSkeyKvRequestBody
    : public ModelBase
{
public:
    TransactWriteSkeyKvRequestBody();
    virtual ~TransactWriteSkeyKvRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// TransactWriteSkeyKvRequestBody members

    /// <summary>
    /// 表名，仓内唯一
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// 要遍历的指定分区键下的kv
    /// </summary>

    Document getShardKey() const;
    bool shardKeyIsSet() const;
    void unsetshardKey();
    void setShardKey(const Document& value);

    /// <summary>
    /// 行操作数组，行操作类型可以是多个文档的 put_kv_oper或delete_kv或CheckKv或update_kv
    /// </summary>

    std::vector<Shard_key_kv_oper_item>& getShardKeyKvOpers();
    bool shardKeyKvOpersIsSet() const;
    void unsetshardKeyKvOpers();
    void setShardKeyKvOpers(const std::vector<Shard_key_kv_oper_item>& value);


protected:
    std::string tableName_;
    bool tableNameIsSet_;
    Document shardKey_;
    bool shardKeyIsSet_;
    std::vector<Shard_key_kv_oper_item> shardKeyKvOpers_;
    bool shardKeyKvOpersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_TransactWriteSkeyKvRequestBody_H_
