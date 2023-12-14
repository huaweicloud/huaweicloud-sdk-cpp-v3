
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateGeoBlockingConfigRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateGeoBlockingConfigRequest_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/GeoBlockingConfigInfo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  UpdateGeoBlockingConfigRequest
    : public ModelBase
{
public:
    UpdateGeoBlockingConfigRequest();
    virtual ~UpdateGeoBlockingConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateGeoBlockingConfigRequest members

    /// <summary>
    /// 播放域名
    /// </summary>

    std::string getPlayDomain() const;
    bool playDomainIsSet() const;
    void unsetplayDomain();
    void setPlayDomain(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    GeoBlockingConfigInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const GeoBlockingConfigInfo& value);


protected:
    std::string playDomain_;
    bool playDomainIsSet_;
    GeoBlockingConfigInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateGeoBlockingConfigRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateGeoBlockingConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateGeoBlockingConfigRequest_H_
