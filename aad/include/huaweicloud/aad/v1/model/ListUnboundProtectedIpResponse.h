
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_ListUnboundProtectedIpResponse_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_ListUnboundProtectedIpResponse_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v1/model/ProtectedIpResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  ListUnboundProtectedIpResponse
    : public ModelBase, public HttpResponse
{
public:
    ListUnboundProtectedIpResponse();
    virtual ~ListUnboundProtectedIpResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListUnboundProtectedIpResponse members

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 防护ip列表
    /// </summary>

    std::vector<ProtectedIpResponse>& getIps();
    bool ipsIsSet() const;
    void unsetips();
    void setIps(const std::vector<ProtectedIpResponse>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<ProtectedIpResponse> ips_;
    bool ipsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_ListUnboundProtectedIpResponse_H_
