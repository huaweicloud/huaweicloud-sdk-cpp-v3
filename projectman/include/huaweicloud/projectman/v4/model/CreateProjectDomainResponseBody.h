
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProjectDomainResponseBody_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProjectDomainResponseBody_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CreateProjectDomainResponseBody
    : public ModelBase
{
public:
    CreateProjectDomainResponseBody();
    virtual ~CreateProjectDomainResponseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateProjectDomainResponseBody members

    /// <summary>
    /// 领域名称
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 领域id
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);


protected:
    std::string domainName_;
    bool domainNameIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProjectDomainResponseBody_H_
