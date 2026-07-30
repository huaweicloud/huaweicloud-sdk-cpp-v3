
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceSecurityConfig_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceSecurityConfig_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 启动业务容器设置信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServiceSecurityConfig
    : public ModelBase
{
public:
    ServiceSecurityConfig();
    virtual ~ServiceSecurityConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceSecurityConfig members

    /// <summary>
    /// **参数解释：** 启动业务容器时设置的user_id，默认可为空。 **取值范围：** [1, 60000]。
    /// </summary>

    int64_t getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(int64_t value);

    /// <summary>
    /// **参数解释：** 启动业务容器时设置的group_id，默认可为空。 **取值范围：** [1, 60000]。
    /// </summary>

    int64_t getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(int64_t value);


protected:
    int64_t userId_;
    bool userIdIsSet_;
    int64_t groupId_;
    bool groupIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceSecurityConfig_H_
