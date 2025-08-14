
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ErrorInfoDTO_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ErrorInfoDTO_H_


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
/// 异常信息
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ErrorInfoDTO
    : public ModelBase
{
public:
    ErrorInfoDTO();
    virtual ~ErrorInfoDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ErrorInfoDTO members

    /// <summary>
    /// **参数说明**：异常信息错误码，包含IOTDA.014016和IOTDA.014112。IOTDA.014016表示设备不在线；IOTDA.014112表示设备没有订阅topic。
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// **参数说明**：异常信息说明，包含设备不在线和设备没有订阅topic说明。
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

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ErrorInfoDTO_H_
