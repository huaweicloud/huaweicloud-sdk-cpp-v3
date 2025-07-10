
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowComplianceStatusForOrganizationalUnitResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowComplianceStatusForOrganizationalUnitResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ShowComplianceStatusForOrganizationalUnitResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowComplianceStatusForOrganizationalUnitResponse();
    virtual ~ShowComplianceStatusForOrganizationalUnitResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowComplianceStatusForOrganizationalUnitResponse members

    /// <summary>
    /// 合规状态。
    /// </summary>

    std::string getComplianceStatus() const;
    bool complianceStatusIsSet() const;
    void unsetcomplianceStatus();
    void setComplianceStatus(const std::string& value);


protected:
    std::string complianceStatus_;
    bool complianceStatusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowComplianceStatusForOrganizationalUnitResponse_H_
