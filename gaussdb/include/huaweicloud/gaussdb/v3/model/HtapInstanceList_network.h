
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapInstanceList_network_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapInstanceList_network_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 网络信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  HtapInstanceList_network
    : public ModelBase
{
public:
    HtapInstanceList_network();
    virtual ~HtapInstanceList_network();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HtapInstanceList_network members

    /// <summary>
    /// 虚拟私有云ID。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 子网ID。
    /// </summary>

    std::string getSubNetId() const;
    bool subNetIdIsSet() const;
    void unsetsubNetId();
    void setSubNetId(const std::string& value);

    /// <summary>
    /// 安全组ID。
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);


protected:
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string subNetId_;
    bool subNetIdIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapInstanceList_network_H_
