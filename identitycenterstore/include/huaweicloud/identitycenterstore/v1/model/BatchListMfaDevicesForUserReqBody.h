
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_BatchListMfaDevicesForUserReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_BatchListMfaDevicesForUserReqBody_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenterstore/v1/model/RetrieveMfaDevicesForUserDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  BatchListMfaDevicesForUserReqBody
    : public ModelBase
{
public:
    BatchListMfaDevicesForUserReqBody();
    virtual ~BatchListMfaDevicesForUserReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchListMfaDevicesForUserReqBody members

    /// <summary>
    /// 用户列表
    /// </summary>

    std::vector<RetrieveMfaDevicesForUserDto>& getUserList();
    bool userListIsSet() const;
    void unsetuserList();
    void setUserList(const std::vector<RetrieveMfaDevicesForUserDto>& value);


protected:
    std::vector<RetrieveMfaDevicesForUserDto> userList_;
    bool userListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_BatchListMfaDevicesForUserReqBody_H_
