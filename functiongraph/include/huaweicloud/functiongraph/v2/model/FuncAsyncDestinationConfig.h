
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FuncAsyncDestinationConfig_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FuncAsyncDestinationConfig_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/FuncDestinationConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 函数异步调用目标参数配置。
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  FuncAsyncDestinationConfig
    : public ModelBase
{
public:
    FuncAsyncDestinationConfig();
    virtual ~FuncAsyncDestinationConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FuncAsyncDestinationConfig members

    /// <summary>
    /// 
    /// </summary>

    FuncDestinationConfig getOnSuccess() const;
    bool onSuccessIsSet() const;
    void unsetonSuccess();
    void setOnSuccess(const FuncDestinationConfig& value);

    /// <summary>
    /// 
    /// </summary>

    FuncDestinationConfig getOnFailure() const;
    bool onFailureIsSet() const;
    void unsetonFailure();
    void setOnFailure(const FuncDestinationConfig& value);


protected:
    FuncDestinationConfig onSuccess_;
    bool onSuccessIsSet_;
    FuncDestinationConfig onFailure_;
    bool onFailureIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FuncAsyncDestinationConfig_H_
