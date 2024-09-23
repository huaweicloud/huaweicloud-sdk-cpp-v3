
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListServicesResponse_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListServicesResponse_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  ListServicesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListServicesResponse();
    virtual ~ListServicesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListServicesResponse members

    /// <summary>
    /// 云服务名称。
    /// </summary>

    std::vector<std::string>& getServices();
    bool servicesIsSet() const;
    void unsetservices();
    void setServices(const std::vector<std::string>& value);


protected:
    std::vector<std::string> services_;
    bool servicesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListServicesResponse_H_
