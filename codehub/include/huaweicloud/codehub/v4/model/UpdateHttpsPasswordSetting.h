
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateHttpsPasswordSetting_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateHttpsPasswordSetting_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  UpdateHttpsPasswordSetting
    : public ModelBase
{
public:
    UpdateHttpsPasswordSetting();
    virtual ~UpdateHttpsPasswordSetting();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateHttpsPasswordSetting members

    /// <summary>
    /// **参数解释：** 是否用https的认证方式 true,false。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getHttpsCloneIamAuth() const;
    bool httpsCloneIamAuthIsSet() const;
    void unsethttpsCloneIamAuth();
    void setHttpsCloneIamAuth(const std::string& value);


protected:
    std::string httpsCloneIamAuth_;
    bool httpsCloneIamAuthIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateHttpsPasswordSetting_H_
