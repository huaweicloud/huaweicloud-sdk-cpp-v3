
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowDomainDetailRequest_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowDomainDetailRequest_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ShowDomainDetailRequest
    : public ModelBase
{
public:
    ShowDomainDetailRequest();
    virtual ~ShowDomainDetailRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDomainDetailRequest members

    /// <summary>
    /// 域名ID
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowDomainDetailRequest& dereference_from_shared_ptr(std::shared_ptr<ShowDomainDetailRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowDomainDetailRequest_H_
