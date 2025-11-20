
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_CertDuration_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_CertDuration_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_CCE_V3_EXPORT  CertDuration
    : public ModelBase
{
public:
    CertDuration();
    virtual ~CertDuration();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CertDuration members

    /// <summary>
    /// **参数解释：** 集群证书有效时间 **约束限制：** 不涉及 **取值范围：** -1或[1,1827] &gt; - 最小值为1天，最大值为5年，因此取值范围为1-1827（以天为单位，实际上限取决于5年内闰年的数量，例如5年内存在一个闰年则上限为1826天）； &gt; - 若填-1则为最大值5年。  **默认取值：** 不涉及 
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);


protected:
    int32_t duration_;
    bool durationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_CertDuration_H_
