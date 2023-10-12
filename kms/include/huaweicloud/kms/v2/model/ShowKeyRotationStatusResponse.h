
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowKeyRotationStatusResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowKeyRotationStatusResponse_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ShowKeyRotationStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowKeyRotationStatusResponse();
    virtual ~ShowKeyRotationStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowKeyRotationStatusResponse members

    /// <summary>
    /// 密钥轮换状态，默认为“false”，表示关闭密钥轮换功能。
    /// </summary>

    bool isKeyRotationEnabled() const;
    bool keyRotationEnabledIsSet() const;
    void unsetkeyRotationEnabled();
    void setKeyRotationEnabled(bool value);

    /// <summary>
    /// 轮换周期，取值范围为30~365的整数。 周期范围设置根据密钥使用频率进行，若密钥使用频率高，建议设置为短周期；反之，则设置为长周期。
    /// </summary>

    int32_t getRotationInterval() const;
    bool rotationIntervalIsSet() const;
    void unsetrotationInterval();
    void setRotationInterval(int32_t value);

    /// <summary>
    /// 上一次密钥轮换时间。时间戳，即从1970年1月1日至该时间的总秒数。
    /// </summary>

    std::string getLastRotationTime() const;
    bool lastRotationTimeIsSet() const;
    void unsetlastRotationTime();
    void setLastRotationTime(const std::string& value);

    /// <summary>
    /// 密钥轮换次数。
    /// </summary>

    int32_t getNumberOfRotations() const;
    bool numberOfRotationsIsSet() const;
    void unsetnumberOfRotations();
    void setNumberOfRotations(int32_t value);


protected:
    bool keyRotationEnabled_;
    bool keyRotationEnabledIsSet_;
    int32_t rotationInterval_;
    bool rotationIntervalIsSet_;
    std::string lastRotationTime_;
    bool lastRotationTimeIsSet_;
    int32_t numberOfRotations_;
    bool numberOfRotationsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowKeyRotationStatusResponse_H_
