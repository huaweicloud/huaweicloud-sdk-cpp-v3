
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Update_kv_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Update_kv_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/Update_fields.h>
#include <huaweicloud/kvs/v1/model/Condition_expression.h>
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
class HUAWEICLOUD_KVS_V1_EXPORT  Update_kv
    : public ModelBase
{
public:
    Update_kv();
    virtual ~Update_kv();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Update_kv members

    /// <summary>
    /// 请求内的操作编码，未成功的操作返回该标识。
    /// </summary>

    int32_t getOperId() const;
    bool operIdIsSet() const;
    void unsetoperId();
    void setOperId(int32_t value);

    /// <summary>
    /// 用户自定义的主键名及值。
    /// </summary>

    Document getPrimaryKey() const;
    bool primaryKeyIsSet() const;
    void unsetprimaryKey();
    void setPrimaryKey(const Document& value);

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

    Condition_expression getConditionExpression() const;
    bool conditionExpressionIsSet() const;
    void unsetconditionExpression();
    void setConditionExpression(const Condition_expression& value);


protected:
    int32_t operId_;
    bool operIdIsSet_;
    Document primaryKey_;
    bool primaryKeyIsSet_;
    Update_fields updateFields_;
    bool updateFieldsIsSet_;
    Condition_expression conditionExpression_;
    bool conditionExpressionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Update_kv_H_
