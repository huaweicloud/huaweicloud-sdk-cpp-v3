
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerSecurityGroup_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerSecurityGroup_H_

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
/// 弹性云服务器所属安全组列表。
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ServerSecurityGroup
    : public ModelBase
{
public:
    ServerSecurityGroup();
    virtual ~ServerSecurityGroup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ServerSecurityGroup members

    /// <summary>
    /// 安全组名称或者UUID。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 安全组ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerSecurityGroup_H_
