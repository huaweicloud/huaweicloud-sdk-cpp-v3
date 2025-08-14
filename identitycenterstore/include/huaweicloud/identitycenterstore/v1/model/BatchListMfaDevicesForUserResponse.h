
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_BatchListMfaDevicesForUserResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_BatchListMfaDevicesForUserResponse_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenterstore/v1/model/RetrieveMfaDevicesForUserEntryDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  BatchListMfaDevicesForUserResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchListMfaDevicesForUserResponse();
    virtual ~BatchListMfaDevicesForUserResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchListMfaDevicesForUserResponse members

    /// <summary>
    /// 用户MFA设备信息列表
    /// </summary>

    std::vector<RetrieveMfaDevicesForUserEntryDto>& getUserMfaDevicesEntryList();
    bool userMfaDevicesEntryListIsSet() const;
    void unsetuserMfaDevicesEntryList();
    void setUserMfaDevicesEntryList(const std::vector<RetrieveMfaDevicesForUserEntryDto>& value);


protected:
    std::vector<RetrieveMfaDevicesForUserEntryDto> userMfaDevicesEntryList_;
    bool userMfaDevicesEntryListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_BatchListMfaDevicesForUserResponse_H_
