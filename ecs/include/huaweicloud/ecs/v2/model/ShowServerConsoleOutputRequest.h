
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerConsoleOutputRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerConsoleOutputRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ShowServerConsoleOutputRequest
    : public ModelBase
{
public:
    ShowServerConsoleOutputRequest();
    virtual ~ShowServerConsoleOutputRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowServerConsoleOutputRequest members

    /// <summary>
    /// 云服务器ID。
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);

    /// <summary>
    /// - 参数解释： 请求log行数。 - 约束限制： 不涉及。 - 取值范围： 大于等于-1。其中-1代表不限长度输出。 - 默认取值： 不填时默认50。
    /// </summary>

    int32_t getLength() const;
    bool lengthIsSet() const;
    void unsetlength();
    void setLength(int32_t value);


protected:
    std::string serverId_;
    bool serverIdIsSet_;
    int32_t length_;
    bool lengthIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowServerConsoleOutputRequest& dereference_from_shared_ptr(std::shared_ptr<ShowServerConsoleOutputRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerConsoleOutputRequest_H_
