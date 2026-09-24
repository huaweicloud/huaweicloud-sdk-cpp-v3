
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowProtectableRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowProtectableRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ShowProtectableRequest
    : public ModelBase
{
public:
    ShowProtectableRequest();
    virtual ~ShowProtectableRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProtectableRequest members

    /// <summary>
    /// 资源ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 可保护性类型 **约束限制：** 不涉及 **取值范围：** 可选参数为server,disk,turbo,workspace和workspace_v2 server： 云服务器类型 disk：云硬盘类型 turbo：turbo类型 workspace：workspace类型 workspace_v2：workspace_v2类型 **默认取值：** 不涉及
    /// </summary>

    std::string getProtectableType() const;
    bool protectableTypeIsSet() const;
    void unsetprotectableType();
    void setProtectableType(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string protectableType_;
    bool protectableTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowProtectableRequest& dereference_from_shared_ptr(std::shared_ptr<ShowProtectableRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowProtectableRequest_H_
