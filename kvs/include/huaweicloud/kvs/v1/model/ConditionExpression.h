
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_ConditionExpression_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_ConditionExpression_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/SingleKvExpr.h>
#include <huaweicloud/kvs/v1/model/MultiFieldExpr.h>
#include <huaweicloud/kvs/v1/model/SingleFieldExpr.h>

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
class HUAWEICLOUD_KVS_V1_EXPORT  ConditionExpression
    : public ModelBase
{
public:
    ConditionExpression();
    virtual ~ConditionExpression();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// ConditionExpression members

    /// <summary>
    /// 
    /// </summary>

    SingleFieldExpr getSingleFieldExpr() const;
    bool singleFieldExprIsSet() const;
    void unsetsingleFieldExpr();
    void setSingleFieldExpr(const SingleFieldExpr& value);

    /// <summary>
    /// 
    /// </summary>

    MultiFieldExpr getMultiFieldExpr() const;
    bool multiFieldExprIsSet() const;
    void unsetmultiFieldExpr();
    void setMultiFieldExpr(const MultiFieldExpr& value);

    /// <summary>
    /// 
    /// </summary>

    SingleKvExpr getSingleKvExpr() const;
    bool singleKvExprIsSet() const;
    void unsetsingleKvExpr();
    void setSingleKvExpr(const SingleKvExpr& value);


protected:
    SingleFieldExpr singleFieldExpr_;
    bool singleFieldExprIsSet_;
    MultiFieldExpr multiFieldExpr_;
    bool multiFieldExprIsSet_;
    SingleKvExpr singleKvExpr_;
    bool singleKvExprIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_ConditionExpression_H_
