
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_EniNetworkUpdate_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_EniNetworkUpdate_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NetworkSubnet.h>
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
class HUAWEICLOUD_CCE_V3_EXPORT  EniNetworkUpdate
    : public ModelBase
{
public:
    EniNetworkUpdate();
    virtual ~EniNetworkUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EniNetworkUpdate members

    /// <summary>
    /// IPv4子网ID列表。1.19.10及以上版本的CCE Turbo集群支持多容器子网，同时支持增量更新容器子网列表。 只允许新增子网，不可删除已有子网，请谨慎选择。  请求体中需包含所有已经存在的subnet。
    /// </summary>

    std::vector<NetworkSubnet>& getSubnets();
    bool subnetsIsSet() const;
    void unsetsubnets();
    void setSubnets(const std::vector<NetworkSubnet>& value);


protected:
    std::vector<NetworkSubnet> subnets_;
    bool subnetsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_EniNetworkUpdate_H_
