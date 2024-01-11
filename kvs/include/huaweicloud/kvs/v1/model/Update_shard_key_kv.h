
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Update_shard_key_kv_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Update_shard_key_kv_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/Update_fields.h>
#include <huaweicloud/kvs/v1/model/Condition_expression.h>
#include <huaweicloud/kvs/v1/model/Update_blob.h>
#include <huaweicloud/core/bson/Bson.h>

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
class HUAWEICLOUD_KVS_V1_EXPORT  Update_shard_key_kv
    : public ModelBase
{
public:
    Update_shard_key_kv();
    virtual ~Update_shard_key_kv();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Update_shard_key_kv members

    /// <summary>
    /// 
    /// </summary>

    Condition_expression getConditionExpression() const;
    bool conditionExpressionIsSet() const;
    void unsetconditionExpression();
    void setConditionExpression(const Condition_expression& value);

    /// <summary>
    /// 用户自定义的排序键及值
    /// </summary>

    Document getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const Document& value);

    /// <summary>
    /// 
    /// </summary>

    Update_fields getUpdateFields() const;
    bool updateFieldsIsSet() const;
    void unsetupdateFields();
    void setUpdateFields(const Update_fields& value);

    /// <summary>
    /// 
    /// </summary>

    Update_blob getUpdateBlob() const;
    bool updateBlobIsSet() const;
    void unsetupdateBlob();
    void setUpdateBlob(const Update_blob& value);


protected:
    Condition_expression conditionExpression_;
    bool conditionExpressionIsSet_;
    Document sortKey_;
    bool sortKeyIsSet_;
    Update_fields updateFields_;
    bool updateFieldsIsSet_;
    Update_blob updateBlob_;
    bool updateBlobIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Update_shard_key_kv_H_
