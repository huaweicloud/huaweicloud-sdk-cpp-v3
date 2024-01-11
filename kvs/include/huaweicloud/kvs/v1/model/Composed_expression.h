
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Composed_expression_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Composed_expression_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/kvs/v1/model/Expression.h>
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
class HUAWEICLOUD_KVS_V1_EXPORT  Composed_expression
    : public ModelBase
{
public:
    Composed_expression();
    virtual ~Composed_expression();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Composed_expression members

    /// <summary>
    /// 逻辑关系，取值如\&quot;$and\&quot;, \&quot;$or\&quot;, \&quot;$nor\&quot;
    /// </summary>

    std::string getLogic() const;
    bool logicIsSet() const;
    void unsetlogic();
    void setLogic(const std::string& value);

    /// <summary>
    /// 多个相同优先级且相同逻辑的单字段或多字段条件
    /// </summary>

    std::vector<Expression>& getExpressions();
    bool expressionsIsSet() const;
    void unsetexpressions();
    void setExpressions(const std::vector<Expression>& value);


protected:
    std::string logic_;
    bool logicIsSet_;
    std::vector<Expression> expressions_;
    bool expressionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Composed_expression_H_
