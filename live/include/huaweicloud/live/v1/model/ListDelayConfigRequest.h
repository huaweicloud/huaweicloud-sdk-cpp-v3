
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListDelayConfigRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListDelayConfigRequest_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_LIVE_V1_EXPORT  ListDelayConfigRequest
    : public ModelBase
{
public:
    ListDelayConfigRequest();
    virtual ~ListDelayConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDelayConfigRequest members

    /// <summary>
    /// 播放域名
    /// </summary>

    std::string getPlayDomain() const;
    bool playDomainIsSet() const;
    void unsetplayDomain();
    void setPlayDomain(const std::string& value);


protected:
    std::string playDomain_;
    bool playDomainIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListDelayConfigRequest& dereference_from_shared_ptr(std::shared_ptr<ListDelayConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListDelayConfigRequest_H_
