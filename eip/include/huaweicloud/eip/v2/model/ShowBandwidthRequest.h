
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ShowBandwidthRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ShowBandwidthRequest_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  ShowBandwidthRequest
    : public ModelBase
{
public:
    ShowBandwidthRequest();
    virtual ~ShowBandwidthRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowBandwidthRequest members

    /// <summary>
    /// 带宽唯一标识
    /// </summary>

    std::string getBandwidthId() const;
    bool bandwidthIdIsSet() const;
    void unsetbandwidthId();
    void setBandwidthId(const std::string& value);


protected:
    std::string bandwidthId_;
    bool bandwidthIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowBandwidthRequest& dereference_from_shared_ptr(std::shared_ptr<ShowBandwidthRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ShowBandwidthRequest_H_
