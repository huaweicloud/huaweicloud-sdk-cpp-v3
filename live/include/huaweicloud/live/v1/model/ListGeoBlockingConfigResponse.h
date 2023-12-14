
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListGeoBlockingConfigResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListGeoBlockingConfigResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/GeoBlockingConfigInfo.h>
#include <string>
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
class HUAWEICLOUD_LIVE_V1_EXPORT  ListGeoBlockingConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ListGeoBlockingConfigResponse();
    virtual ~ListGeoBlockingConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListGeoBlockingConfigResponse members

    /// <summary>
    /// 直播播放域名
    /// </summary>

    std::string getPlayDomain() const;
    bool playDomainIsSet() const;
    void unsetplayDomain();
    void setPlayDomain(const std::string& value);

    /// <summary>
    /// 应用列表
    /// </summary>

    std::vector<GeoBlockingConfigInfo>& getApps();
    bool appsIsSet() const;
    void unsetapps();
    void setApps(const std::vector<GeoBlockingConfigInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string playDomain_;
    bool playDomainIsSet_;
    std::vector<GeoBlockingConfigInfo> apps_;
    bool appsIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListGeoBlockingConfigResponse_H_
