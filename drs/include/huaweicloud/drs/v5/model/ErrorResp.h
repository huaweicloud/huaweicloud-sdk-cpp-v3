
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ErrorResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ErrorResp_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 请求失败时返回的错误对象响应体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ErrorResp
    : public ModelBase
{
public:
    ErrorResp();
    virtual ~ErrorResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ErrorResp members

    /// <summary>
    /// **参数解释**：  错误码，当任务报错时返回的错误代码。  **约束限制**：  - 最小长度：12 - 最大长度：12  **取值范围**：  格式为DRS.XXXXXX。  **默认取值**：  不涉及
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// **参数解释**：  错误详细信息，当任务执行失败时返回的具体错误描述。  **约束限制**：  - 最小长度：1 - 最大长度：512  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);


protected:
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ErrorResp_H_
