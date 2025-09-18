
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectDomainsResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectDomainsResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/CreateProjectDomainResponseBody.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListProjectDomainsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListProjectDomainsResponse();
    virtual ~ListProjectDomainsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectDomainsResponse members

    /// <summary>
    /// 领域总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 领域列表
    /// </summary>

    std::vector<CreateProjectDomainResponseBody>& getDomains();
    bool domainsIsSet() const;
    void unsetdomains();
    void setDomains(const std::vector<CreateProjectDomainResponseBody>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<CreateProjectDomainResponseBody> domains_;
    bool domainsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectDomainsResponse_H_
