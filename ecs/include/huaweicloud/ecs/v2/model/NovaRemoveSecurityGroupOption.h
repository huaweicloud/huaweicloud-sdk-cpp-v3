
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaRemoveSecurityGroupOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaRemoveSecurityGroupOption_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
///  
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaRemoveSecurityGroupOption
    : public ModelBase
{
public:
    NovaRemoveSecurityGroupOption();
    virtual ~NovaRemoveSecurityGroupOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaRemoveSecurityGroupOption members

    /// <summary>
    /// 弹性云服务器移除的安全组名称，会对云服务器中配置的网卡生效。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaRemoveSecurityGroupOption_H_
