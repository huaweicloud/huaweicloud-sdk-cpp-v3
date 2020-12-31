
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateVpcPeeringOption_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateVpcPeeringOption_H_

#include <huaweicloud/vpc/VpcExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>
#include "huaweicloud/vpc/model/VpcInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// peering对象
/// </summary>
class HUAWEICLOUD_VPC_EXPORT  CreateVpcPeeringOption
    : public ModelBase
{
public:
    CreateVpcPeeringOption();
    virtual ~CreateVpcPeeringOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateVpcPeeringOption members

    /// <summary>
    /// 功能说明：对等连接名称 取值范围：支持1~64个字符
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    VpcInfo getRequestVpcInfo() const;
    bool requestVpcInfoIsSet() const;
    void unsetrequestVpcInfo();
    void setRequestVpcInfo(const VpcInfo& value);

    /// <summary>
    /// 
    /// </summary>

    VpcInfo getAcceptVpcInfo() const;
    bool acceptVpcInfoIsSet() const;
    void unsetacceptVpcInfo();
    void setAcceptVpcInfo(const VpcInfo& value);


protected:
    std::string name_;
    bool nameIsSet_;
    VpcInfo requestVpcInfo_;
    bool requestVpcInfoIsSet_;
    VpcInfo acceptVpcInfo_;
    bool acceptVpcInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateVpcPeeringOption_H_
