
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowDomainNameConfigRequest_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowDomainNameConfigRequest_H_


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
class HUAWEICLOUD_AAD_V2_EXPORT  ShowDomainNameConfigRequest
    : public ModelBase
{
public:
    ShowDomainNameConfigRequest();
    virtual ~ShowDomainNameConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDomainNameConfigRequest members

    /// <summary>
    /// 域名id
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 请求类型 domain、waf
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;
    std::string type_;
    bool typeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowDomainNameConfigRequest& dereference_from_shared_ptr(std::shared_ptr<ShowDomainNameConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowDomainNameConfigRequest_H_
