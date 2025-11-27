
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ListDomainConfigsResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ListDomainConfigsResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/CnameStatus.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ListDomainConfigsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDomainConfigsResponse();
    virtual ~ListDomainConfigsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDomainConfigsResponse members

    /// <summary>
    /// 域名cname状态。
    /// </summary>

    std::vector<CnameStatus>& getCnameStatus();
    bool cnameStatusIsSet() const;
    void unsetcnameStatus();
    void setCnameStatus(const std::vector<CnameStatus>& value);


protected:
    std::vector<CnameStatus> cnameStatus_;
    bool cnameStatusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ListDomainConfigsResponse_H_
