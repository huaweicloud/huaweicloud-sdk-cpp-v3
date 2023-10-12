
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdateBandwidthRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdateBandwidthRequest_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/UpdateBandwidthRequestBody.h>
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
class HUAWEICLOUD_EIP_V2_EXPORT  UpdateBandwidthRequest
    : public ModelBase
{
public:
    UpdateBandwidthRequest();
    virtual ~UpdateBandwidthRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateBandwidthRequest members

    /// <summary>
    /// 带宽唯一标识
    /// </summary>

    std::string getBandwidthId() const;
    bool bandwidthIdIsSet() const;
    void unsetbandwidthId();
    void setBandwidthId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateBandwidthRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateBandwidthRequestBody& value);


protected:
    std::string bandwidthId_;
    bool bandwidthIdIsSet_;
    UpdateBandwidthRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateBandwidthRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateBandwidthRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdateBandwidthRequest_H_
