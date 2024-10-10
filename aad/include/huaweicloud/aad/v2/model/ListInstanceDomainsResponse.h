
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ListInstanceDomainsResponse_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ListInstanceDomainsResponse_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/aad/v2/model/InstanceDomainItem.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ListInstanceDomainsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInstanceDomainsResponse();
    virtual ~ListInstanceDomainsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstanceDomainsResponse members

    /// <summary>
    /// 实例id
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 实例名称
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 域名信息
    /// </summary>

    std::vector<InstanceDomainItem>& getDomains();
    bool domainsIsSet() const;
    void unsetdomains();
    void setDomains(const std::vector<InstanceDomainItem>& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::vector<InstanceDomainItem> domains_;
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

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ListInstanceDomainsResponse_H_
