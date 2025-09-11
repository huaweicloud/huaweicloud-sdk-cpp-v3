
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_OnError_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_OnError_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 错误处理策略详情
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  OnError
    : public ModelBase
{
public:
    OnError();
    virtual ~OnError();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OnError members

    /// <summary>
    /// 错误匹配表达式，用来过滤需要处理的异常
    /// </summary>

    std::string getError() const;
    bool errorIsSet() const;
    void unseterror();
    void setError(const std::string& value);

    /// <summary>
    /// 下一步骤节点ID
    /// </summary>

    std::string getTransition() const;
    bool transitionIsSet() const;
    void unsettransition();
    void setTransition(const std::string& value);

    /// <summary>
    /// 重试策略名称
    /// </summary>

    std::string getRetryRef() const;
    bool retryRefIsSet() const;
    void unsetretryRef();
    void setRetryRef(const std::string& value);


protected:
    std::string error_;
    bool errorIsSet_;
    std::string transition_;
    bool transitionIsSet_;
    std::string retryRef_;
    bool retryRefIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_OnError_H_
