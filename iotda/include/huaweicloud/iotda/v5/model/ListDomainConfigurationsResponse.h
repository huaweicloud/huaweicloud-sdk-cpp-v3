
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListDomainConfigurationsResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListDomainConfigurationsResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/DomainConfigurationDTO.h>
#include <huaweicloud/iotda/v5/model/Page.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ListDomainConfigurationsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDomainConfigurationsResponse();
    virtual ~ListDomainConfigurationsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDomainConfigurationsResponse members

    /// <summary>
    /// **参数说明**：域配置列表。
    /// </summary>

    std::vector<DomainConfigurationDTO>& getDomainConfigurations();
    bool domainConfigurationsIsSet() const;
    void unsetdomainConfigurations();
    void setDomainConfigurations(const std::vector<DomainConfigurationDTO>& value);

    /// <summary>
    /// 
    /// </summary>

    Page getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(const Page& value);


protected:
    std::vector<DomainConfigurationDTO> domainConfigurations_;
    bool domainConfigurationsIsSet_;
    Page page_;
    bool pageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListDomainConfigurationsResponse_H_
