
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchModifyBandwidthResponse_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchModifyBandwidthResponse_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/FailureResources.h>
#include <vector>
#include <huaweicloud/eip/v2/model/SuccessResources.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  BatchModifyBandwidthResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchModifyBandwidthResponse();
    virtual ~BatchModifyBandwidthResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchModifyBandwidthResponse members

    /// <summary>
    /// 成功资源
    /// </summary>

    std::vector<SuccessResources>& getSuccessResources();
    bool successResourcesIsSet() const;
    void unsetsuccessResources();
    void setSuccessResources(const std::vector<SuccessResources>& value);

    /// <summary>
    /// 失败资源
    /// </summary>

    std::vector<FailureResources>& getFailureResources();
    bool failureResourcesIsSet() const;
    void unsetfailureResources();
    void setFailureResources(const std::vector<FailureResources>& value);


protected:
    std::vector<SuccessResources> successResources_;
    bool successResourcesIsSet_;
    std::vector<FailureResources> failureResources_;
    bool failureResourcesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchModifyBandwidthResponse_H_
