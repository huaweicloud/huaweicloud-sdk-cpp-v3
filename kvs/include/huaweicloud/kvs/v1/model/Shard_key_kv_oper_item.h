
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Shard_key_kv_oper_item_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Shard_key_kv_oper_item_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/Update_shard_key_kv.h>
#include <huaweicloud/kvs/v1/model/Delete_shard_key_kv.h>
#include <huaweicloud/kvs/v1/model/Check_shard_key_kv.h>
#include <huaweicloud/kvs/v1/model/Put_shard_key_kv.h>

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
class HUAWEICLOUD_KVS_V1_EXPORT  Shard_key_kv_oper_item
    : public ModelBase
{
public:
    Shard_key_kv_oper_item();
    virtual ~Shard_key_kv_oper_item();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Shard_key_kv_oper_item members

    /// <summary>
    /// 
    /// </summary>

    Check_shard_key_kv getCheckShardKeyKv() const;
    bool checkShardKeyKvIsSet() const;
    void unsetcheckShardKeyKv();
    void setCheckShardKeyKv(const Check_shard_key_kv& value);

    /// <summary>
    /// 
    /// </summary>

    Put_shard_key_kv getPutShardKeyKv() const;
    bool putShardKeyKvIsSet() const;
    void unsetputShardKeyKv();
    void setPutShardKeyKv(const Put_shard_key_kv& value);

    /// <summary>
    /// 
    /// </summary>

    Delete_shard_key_kv getDeleteShardKeyKv() const;
    bool deleteShardKeyKvIsSet() const;
    void unsetdeleteShardKeyKv();
    void setDeleteShardKeyKv(const Delete_shard_key_kv& value);

    /// <summary>
    /// 
    /// </summary>

    Update_shard_key_kv getUpdateShardKeyKv() const;
    bool updateShardKeyKvIsSet() const;
    void unsetupdateShardKeyKv();
    void setUpdateShardKeyKv(const Update_shard_key_kv& value);


protected:
    Check_shard_key_kv checkShardKeyKv_;
    bool checkShardKeyKvIsSet_;
    Put_shard_key_kv putShardKeyKv_;
    bool putShardKeyKvIsSet_;
    Delete_shard_key_kv deleteShardKeyKv_;
    bool deleteShardKeyKvIsSet_;
    Update_shard_key_kv updateShardKeyKv_;
    bool updateShardKeyKvIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Shard_key_kv_oper_item_H_
