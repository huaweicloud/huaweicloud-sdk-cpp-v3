
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DevicePolicyBindOrUnbindFailureDetail_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DevicePolicyBindOrUnbindFailureDetail_H_


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
/// 策略绑定失败详情结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  DevicePolicyBindOrUnbindFailureDetail
    : public ModelBase
{
public:
    DevicePolicyBindOrUnbindFailureDetail();
    virtual ~DevicePolicyBindOrUnbindFailureDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DevicePolicyBindOrUnbindFailureDetail members

    /// <summary>
    /// 失败的目标id。
    /// </summary>

    std::string getTargetId() const;
    bool targetIdIsSet() const;
    void unsettargetId();
    void setTargetId(const std::string& value);

    /// <summary>
    /// 错误码。
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 错误详情。
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);


protected:
    std::string targetId_;
    bool targetIdIsSet_;
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

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DevicePolicyBindOrUnbindFailureDetail_H_
