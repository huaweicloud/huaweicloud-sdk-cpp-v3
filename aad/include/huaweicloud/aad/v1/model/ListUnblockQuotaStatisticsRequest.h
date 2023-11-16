
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_ListUnblockQuotaStatisticsRequest_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_ListUnblockQuotaStatisticsRequest_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  ListUnblockQuotaStatisticsRequest
    : public ModelBase
{
public:
    ListUnblockQuotaStatisticsRequest();
    virtual ~ListUnblockQuotaStatisticsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListUnblockQuotaStatisticsRequest members

    /// <summary>
    /// 租户id
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
    ListUnblockQuotaStatisticsRequest& dereference_from_shared_ptr(std::shared_ptr<ListUnblockQuotaStatisticsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_ListUnblockQuotaStatisticsRequest_H_
