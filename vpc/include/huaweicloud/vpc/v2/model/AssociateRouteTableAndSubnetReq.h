
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_AssociateRouteTableAndSubnetReq_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_AssociateRouteTableAndSubnetReq_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  AssociateRouteTableAndSubnetReq
    : public ModelBase
{
public:
    AssociateRouteTableAndSubnetReq();
    virtual ~AssociateRouteTableAndSubnetReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateRouteTableAndSubnetReq members

    /// <summary>
    /// 路由表关联子网ID列表 
    /// </summary>

    std::vector<std::string>& getAssociate();
    bool associateIsSet() const;
    void unsetassociate();
    void setAssociate(const std::vector<std::string>& value);

    /// <summary>
    /// 路由表解除关联子网ID列表
    /// </summary>

    std::vector<std::string>& getDisassociate();
    bool disassociateIsSet() const;
    void unsetdisassociate();
    void setDisassociate(const std::vector<std::string>& value);


protected:
    std::vector<std::string> associate_;
    bool associateIsSet_;
    std::vector<std::string> disassociate_;
    bool disassociateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_AssociateRouteTableAndSubnetReq_H_
