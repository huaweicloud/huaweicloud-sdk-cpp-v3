
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_Retry_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_Retry_H_


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
/// 重试策略
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  Retry
    : public ModelBase
{
public:
    Retry();
    virtual ~Retry();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Retry members

    /// <summary>
    /// 重试策略名称，在单个流程中，名称需要唯一
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 重试间隔，单位：秒。若不传，默认为1
    /// </summary>

    int64_t getDelay() const;
    bool delayIsSet() const;
    void unsetdelay();
    void setDelay(int64_t value);

    /// <summary>
    /// 最大重试次数，。若不传，默认为3
    /// </summary>

    int64_t getMaxAttempts() const;
    bool maxAttemptsIsSet() const;
    void unsetmaxAttempts();
    void setMaxAttempts(int64_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    int64_t delay_;
    bool delayIsSet_;
    int64_t maxAttempts_;
    bool maxAttemptsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_Retry_H_
