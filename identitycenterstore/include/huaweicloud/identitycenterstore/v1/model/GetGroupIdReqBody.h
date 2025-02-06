
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_GetGroupIdReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_GetGroupIdReqBody_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenterstore/v1/model/AlternateIdentifierDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 获取用户组id请求体
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  GetGroupIdReqBody
    : public ModelBase
{
public:
    GetGroupIdReqBody();
    virtual ~GetGroupIdReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetGroupIdReqBody members

    /// <summary>
    /// 
    /// </summary>

    AlternateIdentifierDto getAlternateIdentifier() const;
    bool alternateIdentifierIsSet() const;
    void unsetalternateIdentifier();
    void setAlternateIdentifier(const AlternateIdentifierDto& value);


protected:
    AlternateIdentifierDto alternateIdentifier_;
    bool alternateIdentifierIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_GetGroupIdReqBody_H_
