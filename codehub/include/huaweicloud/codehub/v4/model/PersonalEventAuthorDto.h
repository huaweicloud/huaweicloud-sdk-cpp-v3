
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PersonalEventAuthorDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PersonalEventAuthorDto_H_


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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  PersonalEventAuthorDto
    : public ModelBase
{
public:
    PersonalEventAuthorDto();
    virtual ~PersonalEventAuthorDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PersonalEventAuthorDto members

    /// <summary>
    /// **参数解释：** 用户id。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 用户名。 **约束限制：** 不涉及。
    /// </summary>

    std::string getUsername() const;
    bool usernameIsSet() const;
    void unsetusername();
    void setUsername(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string username_;
    bool usernameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PersonalEventAuthorDto_H_
