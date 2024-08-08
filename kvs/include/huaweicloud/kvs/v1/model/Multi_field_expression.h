
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Multi_field_expression_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Multi_field_expression_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/Single_field_expression.h>
#include <string>
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
class HUAWEICLOUD_KVS_V1_EXPORT  Multi_field_expression
    : public ModelBase
{
public:
    Multi_field_expression();
    virtual ~Multi_field_expression();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Multi_field_expression members

    /// <summary>
    /// 多字段条件，多个相同优先级的单字段条件。
    /// </summary>

    std::string getLogic() const;
    bool logicIsSet() const;
    void unsetlogic();
    void setLogic(const std::string& value);

    /// <summary>
    /// 多个相同逻辑操作的单字段条件。
    /// </summary>

    std::vector<Single_field_expression>& getExpressions();
    bool expressionsIsSet() const;
    void unsetexpressions();
    void setExpressions(const std::vector<Single_field_expression>& value);


protected:
    std::string logic_;
    bool logicIsSet_;
    std::vector<Single_field_expression> expressions_;
    bool expressionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Multi_field_expression_H_
