
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FunctionRef_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FunctionRef_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 函数调用信息
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  FunctionRef
    : public ModelBase
{
public:
    FunctionRef();
    virtual ~FunctionRef();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FunctionRef members

    /// <summary>
    /// 函数引用名称，需要和外层functions中的name对应
    /// </summary>

    std::string getRefName() const;
    bool refNameIsSet() const;
    void unsetrefName();
    void setRefName(const std::string& value);

    /// <summary>
    /// 函数调用模式，目前只支持同步调用
    /// </summary>

    std::string getInvokeMode() const;
    bool invokeModeIsSet() const;
    void unsetinvokeMode();
    void setInvokeMode(const std::string& value);

    /// <summary>
    /// 函数执行时的入参，支持引用constants中的常量 定义方式：参数路径 | 常量值/常量路径 参数路径指输入参数的JsonPath路径，如$.a.b[0].c 常量值可以为数字类型，字符串类型(需要用单引号括起来)，布尔类型 常量路径为常量的JsonPath路径，但是根节点需要用$CONST表示，示例：$CONST.a.b
    /// </summary>

    Object getArguments() const;
    bool argumentsIsSet() const;
    void unsetarguments();
    void setArguments(const Object& value);


protected:
    std::string refName_;
    bool refNameIsSet_;
    std::string invokeMode_;
    bool invokeModeIsSet_;
    Object arguments_;
    bool argumentsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FunctionRef_H_
