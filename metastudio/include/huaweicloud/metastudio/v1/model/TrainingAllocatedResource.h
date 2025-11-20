
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TrainingAllocatedResource_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TrainingAllocatedResource_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  TrainingAllocatedResource
    : public ModelBase
{
public:
    TrainingAllocatedResource();
    virtual ~TrainingAllocatedResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TrainingAllocatedResource members

    /// <summary>
    /// 资源ID。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 资源计费类型。 * PERIODIC: 包周期 * ONE_TIME：一次性计费 &gt; * 一次性计费包括：租户订购的一次性资源，SP管理员分配给租户的一次性资源。 * ON_DEMAND: 按需
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);

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
    std::string chargeMode_;
    bool chargeModeIsSet_;
    std::string expireTime_;
    bool expireTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TrainingAllocatedResource_H_
