
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowIpInfoResponse_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowIpInfoResponse_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/CdnIps.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  ShowIpInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowIpInfoResponse();
    virtual ~ShowIpInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIpInfoResponse members

    /// <summary>
    /// IP归属信息列表。
    /// </summary>

    std::vector<CdnIps>& getCdnIps();
    bool cdnIpsIsSet() const;
    void unsetcdnIps();
    void setCdnIps(const std::vector<CdnIps>& value);


protected:
    std::vector<CdnIps> cdnIps_;
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

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowIpInfoResponse_H_
