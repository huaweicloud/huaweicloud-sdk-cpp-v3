
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_UpdatePublicipOption_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_UpdatePublicipOption_H_


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
class HUAWEICLOUD_EIP_V3_EXPORT  UpdatePublicipOption
    : public ModelBase
{
public:
    UpdatePublicipOption();
    virtual ~UpdatePublicipOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePublicipOption members

    /// <summary>
    /// 功能说明：公网IP的名称。
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);

    /// <summary>
    /// 功能说明：公网IP的描述信息 取值范围：0-256长度的字符串，不支持特殊字符&lt;&gt;
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 功能说明：端口所属实例类型 取值范围：PORT、NATGW、VPN、ELB、null 约束：associate_instance_type和associate_instance_id都不为空时表示绑定实例。 约束：associate_instance_type和associate_instance_id都为null时表示解绑实例，通过APIE调用需要切换为文本输入方式输入null值，可参考解绑请求实例。 约束：双栈公网IP不允许修改绑定的实例。
    /// </summary>

    std::string getAssociateInstanceType() const;
    bool associateInstanceTypeIsSet() const;
    void unsetassociateInstanceType();
    void setAssociateInstanceType(const std::string& value);

    /// <summary>
    /// 功能说明：端口所属实例ID，例如RDS实例ID 约束：associate_instance_type和associate_instance_id都不为空时表示绑定实例。 约束：associate_instance_type和associate_instance_id都为null时表示解绑实例，通过APIE调用需要切换为文本输入方式输入null值，可参考解绑请求实例。 约束：双栈公网IP不允许修改绑定的实例。
    /// </summary>

    std::string getAssociateInstanceId() const;
    bool associateInstanceIdIsSet() const;
    void unsetassociateInstanceId();
    void setAssociateInstanceId(const std::string& value);


protected:
    std::string alias_;
    bool aliasIsSet_;
    std::string description_;
    bool descriptionIsSet_;
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

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_UpdatePublicipOption_H_
