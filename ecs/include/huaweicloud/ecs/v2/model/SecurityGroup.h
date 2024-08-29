
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_SecurityGroup_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_SecurityGroup_H_


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
/// 云服务器所属安全组信息。
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  SecurityGroup
    : public ModelBase
{
public:
    SecurityGroup();
    virtual ~SecurityGroup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SecurityGroup members

    /// <summary>
    /// 安全组名称。
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

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_SecurityGroup_H_
