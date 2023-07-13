
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ListDomainProjectsRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ListDomainProjectsRequest_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ListDomainProjectsRequest
    : public ModelBase
{
public:
    ListDomainProjectsRequest();
    virtual ~ListDomainProjectsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListDomainProjectsRequest members

    /// <summary>
    /// 租户名称
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);


protected:
    std::string domainName_;
    bool domainNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListDomainProjectsRequest& dereference_from_shared_ptr(std::shared_ptr<ListDomainProjectsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ListDomainProjectsRequest_H_
