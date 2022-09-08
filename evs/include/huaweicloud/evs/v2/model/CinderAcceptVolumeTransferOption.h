
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderAcceptVolumeTransferOption_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderAcceptVolumeTransferOption_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 标记接受云硬盘过户操作。
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  CinderAcceptVolumeTransferOption
    : public ModelBase
{
public:
    CinderAcceptVolumeTransferOption();
    virtual ~CinderAcceptVolumeTransferOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CinderAcceptVolumeTransferOption members

    /// <summary>
    /// 云硬盘过户的身份认证密钥。  创建云硬盘过户时会返回该身份认证密钥。
    /// </summary>

    std::string getAuthKey() const;
    bool authKeyIsSet() const;
    void unsetauthKey();
    void setAuthKey(const std::string& value);


protected:
    std::string authKey_;
    bool authKeyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderAcceptVolumeTransferOption_H_
