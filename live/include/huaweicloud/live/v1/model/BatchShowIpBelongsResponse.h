
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_BatchShowIpBelongsResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_BatchShowIpBelongsResponse_H_

#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/CdnIp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  BatchShowIpBelongsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchShowIpBelongsResponse();
    virtual ~BatchShowIpBelongsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchShowIpBelongsResponse members

    /// <summary>
    /// IP归属信息列表。
    /// </summary>

    std::vector<CdnIp>& getCdnIps();
    bool cdnIpsIsSet() const;
    void unsetcdnIps();
    void setCdnIps(const std::vector<CdnIp>& value);


protected:
    std::vector<CdnIp> cdnIps_;
    bool cdnIpsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_BatchShowIpBelongsResponse_H_
