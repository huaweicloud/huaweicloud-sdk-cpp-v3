
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchInternetBandwidthsGlobalEipResponseBody_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchInternetBandwidthsGlobalEipResponseBody_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  BatchInternetBandwidthsGlobalEipResponseBody
    : public ModelBase
{
public:
    BatchInternetBandwidthsGlobalEipResponseBody();
    virtual ~BatchInternetBandwidthsGlobalEipResponseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchInternetBandwidthsGlobalEipResponseBody members

    /// <summary>
    /// 请求完成的job id
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchInternetBandwidthsGlobalEipResponseBody_H_
