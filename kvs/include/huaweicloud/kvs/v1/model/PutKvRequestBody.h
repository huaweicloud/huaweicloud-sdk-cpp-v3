
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_PutKvRequestBody_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_PutKvRequestBody_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/ConditionExpression.h>
#include <huaweicloud/kvs/v1/model/KvBlob.h>
#include <string>
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
class HUAWEICLOUD_KVS_V1_EXPORT  PutKvRequestBody
    : public ModelBase
{
public:
    PutKvRequestBody();
    virtual ~PutKvRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// PutKvRequestBody members

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

    ConditionExpression getConditionExpression() const;
    bool conditionExpressionIsSet() const;
    void unsetconditionExpression();
    void setConditionExpression(const ConditionExpression& value);

    /// <summary>
    /// 
    /// </summary>

    Document getKvDoc() const;
    bool kvDocIsSet() const;
    void unsetkvDoc();
    void setKvDoc(const Document& value);

    /// <summary>
    /// 
    /// </summary>

    KvBlob getKvBlob() const;
    bool kvBlobIsSet() const;
    void unsetkvBlob();
    void setKvBlob(const KvBlob& value);


protected:
    std::string tableName_;
    bool tableNameIsSet_;
    ConditionExpression conditionExpression_;
    bool conditionExpressionIsSet_;
    Document kvDoc_;
    bool kvDocIsSet_;
    KvBlob kvBlob_;
    bool kvBlobIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_PutKvRequestBody_H_
