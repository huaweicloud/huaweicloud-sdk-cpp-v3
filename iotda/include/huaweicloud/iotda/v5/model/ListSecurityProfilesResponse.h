
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListSecurityProfilesResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListSecurityProfilesResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/SecurityProfileDTO.h>
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
class HUAWEICLOUD_IOTDA_V5_EXPORT  ListSecurityProfilesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSecurityProfilesResponse();
    virtual ~ListSecurityProfilesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSecurityProfilesResponse members

    /// <summary>
    /// 安全态势感知配置信息列表。
    /// </summary>

    std::vector<SecurityProfileDTO>& getSecurityProfiles();
    bool securityProfilesIsSet() const;
    void unsetsecurityProfiles();
    void setSecurityProfiles(const std::vector<SecurityProfileDTO>& value);

    /// <summary>
    /// 
    /// </summary>

    Page getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(const Page& value);


protected:
    std::vector<SecurityProfileDTO> securityProfiles_;
    bool securityProfilesIsSet_;
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

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListSecurityProfilesResponse_H_
