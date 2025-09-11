
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FunctionAsyncConfig_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FunctionAsyncConfig_H_


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
/// 函数异步配置返回结构体。
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  FunctionAsyncConfig
    : public ModelBase
{
public:
    FunctionAsyncConfig();
    virtual ~FunctionAsyncConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FunctionAsyncConfig members

    /// <summary>
    /// 消息最大存活时长，取值范围[60，86400]。单位：秒。
    /// </summary>

    int32_t getMaxAsyncEventAgeInSeconds() const;
    bool maxAsyncEventAgeInSecondsIsSet() const;
    void unsetmaxAsyncEventAgeInSeconds();
    void setMaxAsyncEventAgeInSeconds(int32_t value);

    /// <summary>
    /// 异步调用失败后的最大重试次数，默认值为3。取值范围[0，8]。
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
    /// 异步调用配置的创建时间。
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// 异步调用配置的最后更改时间。
    /// </summary>

    std::string getLastModified() const;
    bool lastModifiedIsSet() const;
    void unsetlastModified();
    void setLastModified(const std::string& value);


protected:
    int32_t maxAsyncEventAgeInSeconds_;
    bool maxAsyncEventAgeInSecondsIsSet_;
    int32_t maxAsyncRetryAttempts_;
    bool maxAsyncRetryAttemptsIsSet_;
    FuncAsyncDestinationConfig destinationConfig_;
    bool destinationConfigIsSet_;
    std::string createdTime_;
    bool createdTimeIsSet_;
    std::string lastModified_;
    bool lastModifiedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FunctionAsyncConfig_H_
