
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateSecretRequestBody_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateSecretRequestBody_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新凭据对象的元数据信息请求体
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  UpdateSecretRequestBody
    : public ModelBase
{
public:
    UpdateSecretRequestBody();
    virtual ~UpdateSecretRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSecretRequestBody members

    /// <summary>
    /// 用于加密保护凭据值的KMS主密钥ID。更新凭据的主密钥后，仅新创建的凭据版本使用更新后的主密钥ID加密，之前的凭据版本依旧使用之前的主密钥ID解密。
    /// </summary>

    std::string getKmsKeyId() const;
    bool kmsKeyIdIsSet() const;
    void unsetkmsKeyId();
    void setKmsKeyId(const std::string& value);

    /// <summary>
    /// 凭据的描述信息。 约束：2048字节。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 自动轮转  取值：true 开启 false 关
    /// </summary>

    bool isAutoRotation() const;
    bool autoRotationIsSet() const;
    void unsetautoRotation();
    void setAutoRotation(bool value);

    /// <summary>
    /// 轮转周期  约束：6小时-8,760小时 （365天）  类型：Integer[unit] ，Integer表示时间长度 。unit表示时间单位，d（天）、h（小时）、m（分钟）、s（秒）。例如 1d 表示一天，24h也表示一天  说明：当开启自动轮转时，必须填写该值
    /// </summary>

    std::string getRotationPeriod() const;
    bool rotationPeriodIsSet() const;
    void unsetrotationPeriod();
    void setRotationPeriod(const std::string& value);

    /// <summary>
    /// 凭据订阅的事件列表，当前最大可订阅一个事件。当事件包含的基础事件触发时，通知消息将发送到事件对应的通知主题。
    /// </summary>

    std::vector<std::string>& getEventSubscriptions();
    bool eventSubscriptionsIsSet() const;
    void unseteventSubscriptions();
    void setEventSubscriptions(const std::vector<std::string>& value);

    /// <summary>
    /// FunctionGraph函数的urn。
    /// </summary>

    std::string getRotationFuncUrn() const;
    bool rotationFuncUrnIsSet() const;
    void unsetrotationFuncUrn();
    void setRotationFuncUrn(const std::string& value);


protected:
    std::string kmsKeyId_;
    bool kmsKeyIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    bool autoRotation_;
    bool autoRotationIsSet_;
    std::string rotationPeriod_;
    bool rotationPeriodIsSet_;
    std::vector<std::string> eventSubscriptions_;
    bool eventSubscriptionsIsSet_;
    std::string rotationFuncUrn_;
    bool rotationFuncUrnIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateSecretRequestBody_H_
