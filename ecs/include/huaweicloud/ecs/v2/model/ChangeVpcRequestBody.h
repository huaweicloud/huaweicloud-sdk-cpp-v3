
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeVpcRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeVpcRequestBody_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ChangeVpcNicBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ChangeVpcRequestBody
    : public ModelBase
{
public:
    ChangeVpcRequestBody();
    virtual ~ChangeVpcRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeVpcRequestBody members

    /// <summary>
    /// 虚拟机私有云ID
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ChangeVpcNicBody getNic() const;
    bool nicIsSet() const;
    void unsetnic();
    void setNic(const ChangeVpcNicBody& value);


protected:
    std::string vpcId_;
    bool vpcIdIsSet_;
    ChangeVpcNicBody nic_;
    bool nicIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeVpcRequestBody_H_
