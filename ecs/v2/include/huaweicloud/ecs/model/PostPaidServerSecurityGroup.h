
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServerSecurityGroup_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServerSecurityGroup_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

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
class HUAWEICLOUD_ECS_EXPORT  PostPaidServerSecurityGroup
    : public ModelBase
{
public:
    PostPaidServerSecurityGroup();
    virtual ~PostPaidServerSecurityGroup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PostPaidServerSecurityGroup members

    /// <summary>
    /// 可以为空，待创建云服务器的安全组，会对创建云服务器中配置的网卡生效。需要指定已有安全组的ID，UUID格式；若不传值，底层会按照空处理，不会创建安全组。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServerSecurityGroup_H_
