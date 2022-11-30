
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateVpcPeeringOption_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateVpcPeeringOption_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新peering对象
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  UpdateVpcPeeringOption
    : public ModelBase
{
public:
    UpdateVpcPeeringOption();
    virtual ~UpdateVpcPeeringOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateVpcPeeringOption members

    /// <summary>
    /// 功能说明：对等连接名称 取值范围：支持1~64个字符
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 功能说明：对等连接描述 取值范围：0-255个字符，支持数字、字母、中文字符
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateVpcPeeringOption_H_
