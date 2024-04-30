
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_UpdateKvRequestBody_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_UpdateKvRequestBody_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/Kv_options.h>
#include <huaweicloud/kvs/v1/model/Update_fields.h>
#include <huaweicloud/kvs/v1/model/Condition_expression.h>
#include <string>
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
class HUAWEICLOUD_KVS_V1_EXPORT  UpdateKvRequestBody
    : public ModelBase
{
public:
    UpdateKvRequestBody();
    virtual ~UpdateKvRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// UpdateKvRequestBody members

    /// <summary>
    /// 表名，仓内唯一。 - 长度：[3, 63] - 取值字符限制：[a-z0-9_-]+
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// 用户自定义的主键名及值。 &gt; 内容字段：主键字段名和值，组合索引多个元素。
    /// </summary>

    Document getPrimaryKey() const;
    bool primaryKeyIsSet() const;
    void unsetprimaryKey();
    void setPrimaryKey(const Document& value);

    /// <summary>
    /// 
    /// </summary>

    Condition_expression getConditionExpression() const;
    bool conditionExpressionIsSet() const;
    void unsetconditionExpression();
    void setConditionExpression(const Condition_expression& value);

    /// <summary>
    /// 
    /// </summary>

    Kv_options getKvOptions() const;
    bool kvOptionsIsSet() const;
    void unsetkvOptions();
    void setKvOptions(const Kv_options& value);

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
    std::string tableName_;
    bool tableNameIsSet_;
    Document primaryKey_;
    bool primaryKeyIsSet_;
    Condition_expression conditionExpression_;
    bool conditionExpressionIsSet_;
    Kv_options kvOptions_;
    bool kvOptionsIsSet_;
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

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_UpdateKvRequestBody_H_
