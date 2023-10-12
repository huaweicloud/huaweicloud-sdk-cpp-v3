
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_DisassociatePublicipsOption_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_DisassociatePublicipsOption_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  DisassociatePublicipsOption
    : public ModelBase
{
public:
    DisassociatePublicipsOption();
    virtual ~DisassociatePublicipsOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisassociatePublicipsOption members

    /// <summary>
    /// 功能说明：端口所属实例类型 取值范围：PORT、NATGW、VPN、ELB、null 约束：associate_instance_type和associate_instance_id都不为空时表示绑定实例； associate_instance_type和associate_instance_id都为null时解绑实例 约束：双栈公网IP不允许修改绑定的实例
    /// </summary>

    std::string getAssociateInstanceType() const;
    bool associateInstanceTypeIsSet() const;
    void unsetassociateInstanceType();
    void setAssociateInstanceType(const std::string& value);

    /// <summary>
    /// 功能说明：端口所属实例ID，例如RDS实例ID 约束：associate_instance_type和associate_instance_id都不为空时表示绑定实例； associate_instance_type和associate_instance_id都为null时解绑实例 约束：双栈公网IP不允许修改绑定的实例
    /// </summary>

    std::string getAssociateInstanceId() const;
    bool associateInstanceIdIsSet() const;
    void unsetassociateInstanceId();
    void setAssociateInstanceId(const std::string& value);


protected:
    std::string associateInstanceType_;
    bool associateInstanceTypeIsSet_;
    std::string associateInstanceId_;
    bool associateInstanceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_DisassociatePublicipsOption_H_
