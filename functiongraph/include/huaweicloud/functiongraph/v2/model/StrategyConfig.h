
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_StrategyConfig_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_StrategyConfig_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 函数策略配置。
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  StrategyConfig
    : public ModelBase
{
public:
    StrategyConfig();
    virtual ~StrategyConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StrategyConfig members

    /// <summary>
    /// 单函数最大实例数，v1取值0和-1，v2取值-1到1000 -1代表该函数实例数无限制 0代表该函数被禁用
    /// </summary>

    int32_t getConcurrency() const;
    bool concurrencyIsSet() const;
    void unsetconcurrency();
    void setConcurrency(int32_t value);

    /// <summary>
    /// 单实例并发数，v2版本才支持，取值1到1000
    /// </summary>

    int32_t getConcurrentNum() const;
    bool concurrentNumIsSet() const;
    void unsetconcurrentNum();
    void setConcurrentNum(int32_t value);


protected:
    int32_t concurrency_;
    bool concurrencyIsSet_;
    int32_t concurrentNum_;
    bool concurrentNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_StrategyConfig_H_
