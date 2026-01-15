
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_BindingVifDetails_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_BindingVifDetails_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  BindingVifDetails
    : public ModelBase
{
public:
    BindingVifDetails();
    virtual ~BindingVifDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BindingVifDetails members

    /// <summary>
    /// 是否为虚拟机的主网卡。
    /// </summary>

    bool isPrimaryInterface() const;
    bool primaryInterfaceIsSet() const;
    void unsetprimaryInterface();
    void setPrimaryInterface(bool value);

    /// <summary>
    /// 是否提供端口过滤特性, 如安全组和反MAC/IP欺骗。
    /// </summary>

    bool isPortFilter() const;
    bool portFilterIsSet() const;
    void unsetportFilter();
    void setPortFilter(bool value);

    /// <summary>
    /// 是否为ovs/bridge混合模式。
    /// </summary>

    bool isOvsHybridPlug() const;
    bool ovsHybridPlugIsSet() const;
    void unsetovsHybridPlug();
    void setOvsHybridPlug(bool value);

    /// <summary>
    /// 辅助弹性网卡的vlan ID。
    /// </summary>

    std::string getVlanId() const;
    bool vlanIdIsSet() const;
    void unsetvlanId();
    void setVlanId(const std::string& value);

    /// <summary>
    /// 辅助弹性网卡的宿主网卡ID。
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// 辅助弹性网卡的宿主网卡所属的设备ID。
    /// </summary>

    std::string getParentDeviceId() const;
    bool parentDeviceIdIsSet() const;
    void unsetparentDeviceId();
    void setParentDeviceId(const std::string& value);


protected:
    bool primaryInterface_;
    bool primaryInterfaceIsSet_;
    bool portFilter_;
    bool portFilterIsSet_;
    bool ovsHybridPlug_;
    bool ovsHybridPlugIsSet_;
    std::string vlanId_;
    bool vlanIdIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string parentDeviceId_;
    bool parentDeviceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_BindingVifDetails_H_
