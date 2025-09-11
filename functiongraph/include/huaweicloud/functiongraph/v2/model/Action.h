
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_Action_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_Action_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/FunctionRef.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点操作详情
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  Action
    : public ModelBase
{
public:
    Action();
    virtual ~Action();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Action members

    /// <summary>
    /// 
    /// </summary>

    FunctionRef getFunctionRef() const;
    bool functionRefIsSet() const;
    void unsetfunctionRef();
    void setFunctionRef(const FunctionRef& value);


protected:
    FunctionRef functionRef_;
    bool functionRefIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_Action_H_
