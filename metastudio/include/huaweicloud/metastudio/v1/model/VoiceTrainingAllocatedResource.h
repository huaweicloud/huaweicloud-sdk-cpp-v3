
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VoiceTrainingAllocatedResource_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VoiceTrainingAllocatedResource_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/ChardMode.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  VoiceTrainingAllocatedResource
    : public ModelBase
{
public:
    VoiceTrainingAllocatedResource();
    virtual ~VoiceTrainingAllocatedResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VoiceTrainingAllocatedResource members

    /// <summary>
    /// 资源ID。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ChardMode getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const ChardMode& value);

    /// <summary>
    /// 资源过期时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;
    /// </summary>

    std::string getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(const std::string& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    ChardMode chargeMode_;
    bool chargeModeIsSet_;
    std::string expireTime_;
    bool expireTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VoiceTrainingAllocatedResource_H_
