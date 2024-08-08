
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Expression_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Expression_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/Single_field_expression.h>
#include <huaweicloud/kvs/v1/model/Multi_field_expression.h>
#include <huaweicloud/kvs/v1/model/Composed_expression.h>

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
class HUAWEICLOUD_KVS_V1_EXPORT  Expression
    : public ModelBase
{
public:
    Expression();
    virtual ~Expression();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Expression members

    /// <summary>
    /// 
    /// </summary>

    Single_field_expression getSingleFieldExpression() const;
    bool singleFieldExpressionIsSet() const;
    void unsetsingleFieldExpression();
    void setSingleFieldExpression(const Single_field_expression& value);

    /// <summary>
    /// 
    /// </summary>

    Multi_field_expression getMultiFieldExpression() const;
    bool multiFieldExpressionIsSet() const;
    void unsetmultiFieldExpression();
    void setMultiFieldExpression(const Multi_field_expression& value);

    /// <summary>
    /// 
    /// </summary>

    Composed_expression getComposedExpression() const;
    bool composedExpressionIsSet() const;
    void unsetcomposedExpression();
    void setComposedExpression(const Composed_expression& value);


protected:
    Single_field_expression singleFieldExpression_;
    bool singleFieldExpressionIsSet_;
    Multi_field_expression multiFieldExpression_;
    bool multiFieldExpressionIsSet_;
    Composed_expression composedExpression_;
    bool composedExpressionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Expression_H_
