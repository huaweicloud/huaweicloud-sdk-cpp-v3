
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MemberAccess_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MemberAccess_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  MemberAccess
    : public ModelBase
{
public:
    MemberAccess();
    virtual ~MemberAccess();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MemberAccess members

    /// <summary>
    /// **参数解释：** 访问级别。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getAccessLevel() const;
    bool accessLevelIsSet() const;
    void unsetaccessLevel();
    void setAccessLevel(int32_t value);

    /// <summary>
    /// **参数解释：** 通知级别。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getNotificationLevel() const;
    bool notificationLevelIsSet() const;
    void unsetnotificationLevel();
    void setNotificationLevel(int32_t value);


protected:
    int32_t accessLevel_;
    bool accessLevelIsSet_;
    int32_t notificationLevel_;
    bool notificationLevelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MemberAccess_H_
