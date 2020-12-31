
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServerSecurityGroup_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServerSecurityGroup_H_

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
class HUAWEICLOUD_ECS_EXPORT  NovaServerSecurityGroup
    : public ModelBase
{
public:
    NovaServerSecurityGroup();
    virtual ~NovaServerSecurityGroup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaServerSecurityGroup members

    /// <summary>
    /// 安全组名称或者uuid。
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

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServerSecurityGroup_H_
