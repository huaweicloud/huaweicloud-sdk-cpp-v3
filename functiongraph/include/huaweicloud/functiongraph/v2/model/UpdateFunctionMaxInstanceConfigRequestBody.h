
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateFunctionMaxInstanceConfigRequestBody_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateFunctionMaxInstanceConfigRequestBody_H_


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
/// 更新函数最大实例数请求体
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  UpdateFunctionMaxInstanceConfigRequestBody
    : public ModelBase
{
public:
    UpdateFunctionMaxInstanceConfigRequestBody();
    virtual ~UpdateFunctionMaxInstanceConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateFunctionMaxInstanceConfigRequestBody members

    /// <summary>
    /// 最大实例数；-1代表该函数实例数无限制，0代表该函数被禁用
    /// </summary>

    int32_t getMaxInstanceNum() const;
    bool maxInstanceNumIsSet() const;
    void unsetmaxInstanceNum();
    void setMaxInstanceNum(int32_t value);


protected:
    int32_t maxInstanceNum_;
    bool maxInstanceNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateFunctionMaxInstanceConfigRequestBody_H_
