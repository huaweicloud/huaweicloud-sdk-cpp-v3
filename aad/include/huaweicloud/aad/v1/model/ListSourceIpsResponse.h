
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_ListSourceIpsResponse_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_ListSourceIpsResponse_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
class HUAWEICLOUD_AAD_V1_EXPORT  ListSourceIpsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSourceIpsResponse();
    virtual ~ListSourceIpsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSourceIpsResponse members

    /// <summary>
    /// 查询高防回源IP段列表
    /// </summary>

    std::vector<std::string>& getIps();
    bool ipsIsSet() const;
    void unsetips();
    void setIps(const std::vector<std::string>& value);


protected:
    std::vector<std::string> ips_;
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

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_ListSourceIpsResponse_H_
