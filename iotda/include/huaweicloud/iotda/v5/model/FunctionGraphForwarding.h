
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_FunctionGraphForwarding_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_FunctionGraphForwarding_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 函数工作流转发配置信息
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  FunctionGraphForwarding
    : public ModelBase
{
public:
    FunctionGraphForwarding();
    virtual ~FunctionGraphForwarding();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FunctionGraphForwarding members

    /// <summary>
    /// **参数说明**：函数的URN（Uniform Resource Name），唯一标识函数。
    /// </summary>

    std::string getFuncUrn() const;
    bool funcUrnIsSet() const;
    void unsetfuncUrn();
    void setFuncUrn(const std::string& value);

    /// <summary>
    /// **参数说明**：函数名称。
    /// </summary>

    std::string getFuncName() const;
    bool funcNameIsSet() const;
    void unsetfuncName();
    void setFuncName(const std::string& value);


protected:
    std::string funcUrn_;
    bool funcUrnIsSet_;
    std::string funcName_;
    bool funcNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_FunctionGraphForwarding_H_
