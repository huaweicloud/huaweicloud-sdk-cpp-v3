
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListProfilesResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListProfilesResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/ApplicationProfileDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ListProfilesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListProfilesResponse();
    virtual ~ListProfilesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProfilesResponse members

    /// <summary>
    /// 应用程序Profile
    /// </summary>

    std::vector<ApplicationProfileDto>& getApplicationProfiles();
    bool applicationProfilesIsSet() const;
    void unsetapplicationProfiles();
    void setApplicationProfiles(const std::vector<ApplicationProfileDto>& value);


protected:
    std::vector<ApplicationProfileDto> applicationProfiles_;
    bool applicationProfilesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListProfilesResponse_H_
