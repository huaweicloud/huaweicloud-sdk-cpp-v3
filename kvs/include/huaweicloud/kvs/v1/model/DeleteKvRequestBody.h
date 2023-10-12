
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_DeleteKvRequestBody_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_DeleteKvRequestBody_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/ConditionExpression.h>
#include <huaweicloud/kvs/v1/model/ReturnPartialBlob.h>
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
class HUAWEICLOUD_KVS_V1_EXPORT  DeleteKvRequestBody
    : public ModelBase
{
public:
    DeleteKvRequestBody();
    virtual ~DeleteKvRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// DeleteKvRequestBody members

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

    Document getExpressionVarDefine() const;
    bool expressionVarDefineIsSet() const;
    void unsetexpressionVarDefine();
    void setExpressionVarDefine(const Document& value);

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
    Document expressionVarDefine_;
    bool expressionVarDefineIsSet_;
    std::vector<std::string> projectionFields_;
    bool projectionFieldsIsSet_;
    ReturnPartialBlob returnPartialBlob_;
    bool returnPartialBlobIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_DeleteKvRequestBody_H_
