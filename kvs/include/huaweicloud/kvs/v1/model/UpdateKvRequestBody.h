
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_UpdateKvRequestBody_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_UpdateKvRequestBody_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/ConditionExpression.h>
#include <huaweicloud/kvs/v1/model/KvOptions.h>
#include <huaweicloud/kvs/v1/model/ReturnPartialBlob.h>
#include <string>
#include <huaweicloud/kvs/v1/model/UpdateBlob.h>
#include <huaweicloud/core/bson/Bson.h>
#include <huaweicloud/kvs/v1/model/UpdateFields.h>
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
    /// 
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Document getPrimaryKey() const;
    bool primaryKeyIsSet() const;
    void unsetprimaryKey();
    void setPrimaryKey(const Document& value);

    /// <summary>
    /// 
    /// </summary>

    ConditionExpression getConditionExpression() const;
    bool conditionExpressionIsSet() const;
    void unsetconditionExpression();
    void setConditionExpression(const ConditionExpression& value);

    /// <summary>
    /// 
    /// </summary>

    KvOptions getKvOptions() const;
    bool kvOptionsIsSet() const;
    void unsetkvOptions();
    void setKvOptions(const KvOptions& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateFields getUpdateFields() const;
    bool updateFieldsIsSet() const;
    void unsetupdateFields();
    void setUpdateFields(const UpdateFields& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getProjectionFields();
    bool projectionFieldsIsSet() const;
    void unsetprojectionFields();
    void setProjectionFields(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateBlob getUpdateBlob() const;
    bool updateBlobIsSet() const;
    void unsetupdateBlob();
    void setUpdateBlob(const UpdateBlob& value);

    /// <summary>
    /// 
    /// </summary>

    ReturnPartialBlob getReturnPartialBlob() const;
    bool returnPartialBlobIsSet() const;
    void unsetreturnPartialBlob();
    void setReturnPartialBlob(const ReturnPartialBlob& value);


protected:
    std::string tableName_;
    bool tableNameIsSet_;
    Document primaryKey_;
    bool primaryKeyIsSet_;
    ConditionExpression conditionExpression_;
    bool conditionExpressionIsSet_;
    KvOptions kvOptions_;
    bool kvOptionsIsSet_;
    UpdateFields updateFields_;
    bool updateFieldsIsSet_;
    std::vector<std::string> projectionFields_;
    bool projectionFieldsIsSet_;
    UpdateBlob updateBlob_;
    bool updateBlobIsSet_;
    ReturnPartialBlob returnPartialBlob_;
    bool returnPartialBlobIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_UpdateKvRequestBody_H_
