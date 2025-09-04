
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DomainsStatusesRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DomainsStatusesRequestBody_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// DomainsStatuses请求体
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  DomainsStatusesRequestBody
    : public ModelBase
{
public:
    DomainsStatusesRequestBody();
    virtual ~DomainsStatusesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DomainsStatusesRequestBody members

    /// <summary>
    /// **参数解释**： 租户id集合。 **约束限制**： 不涉及。 **取值范围**： 不涉及。
    /// </summary>

    std::string getDomainIds() const;
    bool domainIdsIsSet() const;
    void unsetdomainIds();
    void setDomainIds(const std::string& value);


protected:
    std::string domainIds_;
    bool domainIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DomainsStatusesRequestBody_H_
