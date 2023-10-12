
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_DetachBatchPublicIpResponse_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_DetachBatchPublicIpResponse_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v3/model/BatchPublicipResp.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  DetachBatchPublicIpResponse
    : public ModelBase, public HttpResponse
{
public:
    DetachBatchPublicIpResponse();
    virtual ~DetachBatchPublicIpResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DetachBatchPublicIpResponse members

    /// <summary>
    /// 弹性公网IP对象
    /// </summary>

    std::vector<BatchPublicipResp>& getPublicips();
    bool publicipsIsSet() const;
    void unsetpublicips();
    void setPublicips(const std::vector<BatchPublicipResp>& value);

    /// <summary>
    /// 本次请求编号
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);


protected:
    std::vector<BatchPublicipResp> publicips_;
    bool publicipsIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_DetachBatchPublicIpResponse_H_
