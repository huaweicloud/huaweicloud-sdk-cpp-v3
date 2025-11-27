
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterCertDuration_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterCertDuration_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 集群证书有效期
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ClusterCertDuration
    : public ModelBase
{
public:
    ClusterCertDuration();
    virtual ~ClusterCertDuration();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClusterCertDuration members

    /// <summary>
    /// **参数解释：** 集群证书有效时间。 **约束限制：** duration和expire_at参数至少需要指定一个，若同时指定则以expire_at参数为准。 **取值范围：** 最小值为1天，最大值为5年，因此取值范围为1-1827（以天为单位，实际上限取决于5年内闰年的数量，例如5年内存在一个闰年则上限为1826天）；若填-1则为最大值5年 **默认取值：** 不涉及
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

    /// <summary>
    /// **参数解释：** 集群证书到期时间。 **约束限制：** duration和expire_at参数至少需要指定一个，若同时指定则以expire_at参数为准。 **取值范围：** 证书到期时间须在当前时间后15分钟至5年之间，参数格式为：2025-01-01 16:00:00 +0000 UTC。 **默认取值：** 不涉及
    /// </summary>

    std::string getExpireAt() const;
    bool expireAtIsSet() const;
    void unsetexpireAt();
    void setExpireAt(const std::string& value);


protected:
    int32_t duration_;
    bool durationIsSet_;
    std::string expireAt_;
    bool expireAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterCertDuration_H_
