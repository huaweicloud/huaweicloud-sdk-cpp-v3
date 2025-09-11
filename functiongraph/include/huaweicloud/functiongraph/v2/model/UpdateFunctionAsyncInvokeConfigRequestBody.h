
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateFunctionAsyncInvokeConfigRequestBody_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateFunctionAsyncInvokeConfigRequestBody_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/functiongraph/v2/model/FuncAsyncDestinationConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 函数异步配置请求体。
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  UpdateFunctionAsyncInvokeConfigRequestBody
    : public ModelBase
{
public:
    UpdateFunctionAsyncInvokeConfigRequestBody();
    virtual ~UpdateFunctionAsyncInvokeConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateFunctionAsyncInvokeConfigRequestBody members

    /// <summary>
    /// 消息最大存活时长，取值范围[1，86400]，单位：秒，默认值为3600。
    /// </summary>

    int32_t getMaxAsyncEventAgeInSeconds() const;
    bool maxAsyncEventAgeInSecondsIsSet() const;
    void unsetmaxAsyncEventAgeInSeconds();
    void setMaxAsyncEventAgeInSeconds(int32_t value);

    /// <summary>
    /// 异步调用失败后的最大重试次数，默认值为1。取值范围[0，3]。
    /// </summary>

    int32_t getMaxAsyncRetryAttempts() const;
    bool maxAsyncRetryAttemptsIsSet() const;
    void unsetmaxAsyncRetryAttempts();
    void setMaxAsyncRetryAttempts(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    FuncAsyncDestinationConfig getDestinationConfig() const;
    bool destinationConfigIsSet() const;
    void unsetdestinationConfig();
    void setDestinationConfig(const FuncAsyncDestinationConfig& value);

    /// <summary>
    /// 开启异步调用状态持久化
    /// </summary>

    bool isEnableAsyncStatusLog() const;
    bool enableAsyncStatusLogIsSet() const;
    void unsetenableAsyncStatusLog();
    void setEnableAsyncStatusLog(bool value);

    /// <summary>
    /// 自定义日志查询组id。
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// 自定义日志查询流id。
    /// </summary>

    std::string getLogStreamId() const;
    bool logStreamIdIsSet() const;
    void unsetlogStreamId();
    void setLogStreamId(const std::string& value);

    /// <summary>
    /// 自定义日志查询组名称。
    /// </summary>

    std::string getLogGroupName() const;
    bool logGroupNameIsSet() const;
    void unsetlogGroupName();
    void setLogGroupName(const std::string& value);

    /// <summary>
    /// 自定义日志查询流名称。
    /// </summary>

    std::string getLogStreamName() const;
    bool logStreamNameIsSet() const;
    void unsetlogStreamName();
    void setLogStreamName(const std::string& value);


protected:
    int32_t maxAsyncEventAgeInSeconds_;
    bool maxAsyncEventAgeInSecondsIsSet_;
    int32_t maxAsyncRetryAttempts_;
    bool maxAsyncRetryAttemptsIsSet_;
    FuncAsyncDestinationConfig destinationConfig_;
    bool destinationConfigIsSet_;
    bool enableAsyncStatusLog_;
    bool enableAsyncStatusLogIsSet_;
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    std::string logStreamId_;
    bool logStreamIdIsSet_;
    std::string logGroupName_;
    bool logGroupNameIsSet_;
    std::string logStreamName_;
    bool logStreamNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateFunctionAsyncInvokeConfigRequestBody_H_
