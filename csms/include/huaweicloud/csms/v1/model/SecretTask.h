
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_SecretTask_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_SecretTask_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  SecretTask
    : public ModelBase
{
public:
    SecretTask();
    virtual ~SecretTask();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SecretTask members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 凭据名称。
    /// </summary>

    std::string getSecretName() const;
    bool secretNameIsSet() const;
    void unsetsecretName();
    void setSecretName(const std::string& value);

    /// <summary>
    /// FunctionGraph函数的urn。
    /// </summary>

    std::string getRotationFuncUrn() const;
    bool rotationFuncUrnIsSet() const;
    void unsetrotationFuncUrn();
    void setRotationFuncUrn(const std::string& value);

    /// <summary>
    /// 任务状态。
    /// </summary>

    std::string getTaskStatus() const;
    bool taskStatusIsSet() const;
    void unsettaskStatus();
    void setTaskStatus(const std::string& value);

    /// <summary>
    /// 轮转类型。
    /// </summary>

    std::string getOperateType() const;
    bool operateTypeIsSet() const;
    void unsetoperateType();
    void setOperateType(const std::string& value);

    /// <summary>
    /// 任务创建时间。
    /// </summary>

    int64_t getTaskTime() const;
    bool taskTimeIsSet() const;
    void unsettaskTime();
    void setTaskTime(int64_t value);

    /// <summary>
    /// 轮转尝试次数。
    /// </summary>

    int32_t getAttemptNums() const;
    bool attemptNumsIsSet() const;
    void unsetattemptNums();
    void setAttemptNums(int32_t value);

    /// <summary>
    /// 任务错误码。
    /// </summary>

    std::string getTaskErrorCode() const;
    bool taskErrorCodeIsSet() const;
    void unsettaskErrorCode();
    void setTaskErrorCode(const std::string& value);

    /// <summary>
    /// 任务错误信息。
    /// </summary>

    std::string getTaskErrorMsg() const;
    bool taskErrorMsgIsSet() const;
    void unsettaskErrorMsg();
    void setTaskErrorMsg(const std::string& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string secretName_;
    bool secretNameIsSet_;
    std::string rotationFuncUrn_;
    bool rotationFuncUrnIsSet_;
    std::string taskStatus_;
    bool taskStatusIsSet_;
    std::string operateType_;
    bool operateTypeIsSet_;
    int64_t taskTime_;
    bool taskTimeIsSet_;
    int32_t attemptNums_;
    bool attemptNumsIsSet_;
    std::string taskErrorCode_;
    bool taskErrorCodeIsSet_;
    std::string taskErrorMsg_;
    bool taskErrorMsgIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_SecretTask_H_
