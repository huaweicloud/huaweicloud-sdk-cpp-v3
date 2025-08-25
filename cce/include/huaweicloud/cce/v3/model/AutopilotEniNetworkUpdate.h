
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotEniNetworkUpdate_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotEniNetworkUpdate_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/AutopilotNetworkSubnet.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  AutopilotEniNetworkUpdate
    : public ModelBase
{
public:
    AutopilotEniNetworkUpdate();
    virtual ~AutopilotEniNetworkUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AutopilotEniNetworkUpdate members

    /// <summary>
    /// IPv4子网ID列表。 只允许新增子网，不可删除已有子网，请谨慎选择。  请求体中需包含所有已经存在的subnet。
    /// </summary>

    std::vector<AutopilotNetworkSubnet>& getSubnets();
    bool subnetsIsSet() const;
    void unsetsubnets();
    void setSubnets(const std::vector<AutopilotNetworkSubnet>& value);


protected:
    std::vector<AutopilotNetworkSubnet> subnets_;
    bool subnetsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotEniNetworkUpdate_H_
