
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_DeleteDomainV2RequestBody_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_DeleteDomainV2RequestBody_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  DeleteDomainV2RequestBody
    : public ModelBase
{
public:
    DeleteDomainV2RequestBody();
    virtual ~DeleteDomainV2RequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteDomainV2RequestBody members

    /// <summary>
    /// 域名id列表
    /// </summary>

    std::vector<std::string>& getDomainId();
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::vector<std::string>& value);


protected:
    std::vector<std::string> domainId_;
    bool domainIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_DeleteDomainV2RequestBody_H_
