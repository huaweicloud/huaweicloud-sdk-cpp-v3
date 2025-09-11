
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ApigTriggerFuncInfo_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ApigTriggerFuncInfo_H_


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
/// APIG触发器函数工作流后端详情（APIG触发器参数）。APIG触发器此参数必填。
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ApigTriggerFuncInfo
    : public ModelBase
{
public:
    ApigTriggerFuncInfo();
    virtual ~ApigTriggerFuncInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApigTriggerFuncInfo members

    /// <summary>
    /// 函数的URN，详细解释见FunctionGraph函数模型的描述。
    /// </summary>

    std::string getFunctionUrn() const;
    bool functionUrnIsSet() const;
    void unsetfunctionUrn();
    void setFunctionUrn(const std::string& value);

    /// <summary>
    /// 调用函数执行方式。 - sync：同步执行 - async：异步执行
    /// </summary>

    std::string getInvocationType() const;
    bool invocationTypeIsSet() const;
    void unsetinvocationType();
    void setInvocationType(const std::string& value);

    /// <summary>
    /// API网关请求函数服务的超时时间（毫秒）。APIG触发器此参数必填。
    /// </summary>

    int32_t getTimeout() const;
    bool timeoutIsSet() const;
    void unsettimeout();
    void setTimeout(int32_t value);

    /// <summary>
    /// 函数版本信息。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);


protected:
    std::string functionUrn_;
    bool functionUrnIsSet_;
    std::string invocationType_;
    bool invocationTypeIsSet_;
    int32_t timeout_;
    bool timeoutIsSet_;
    std::string version_;
    bool versionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ApigTriggerFuncInfo_H_
