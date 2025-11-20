
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ListSourceIpResponse_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ListSourceIpResponse_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v2/model/SourceIp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ListSourceIpResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSourceIpResponse();
    virtual ~ListSourceIpResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSourceIpResponse members

    /// <summary>
    /// ip
    /// </summary>

    std::vector<SourceIp>& getIps();
    bool ipsIsSet() const;
    void unsetips();
    void setIps(const std::vector<SourceIp>& value);


protected:
    std::vector<SourceIp> ips_;
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

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ListSourceIpResponse_H_
