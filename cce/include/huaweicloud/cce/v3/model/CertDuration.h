
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
    /// 集群证书有效时间，单位为天，最小值为1，最大值为1825(5*365，1年固定计365天，忽略闰年影响)；若填-1则为最大值5年。 
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
