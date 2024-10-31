
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsSwitchResponseDTO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsSwitchResponseDTO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// ips特性状态返回查询
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  IpsSwitchResponseDTO
    : public ModelBase
{
public:
    IpsSwitchResponseDTO();
    virtual ~IpsSwitchResponseDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpsSwitchResponseDTO members

    /// <summary>
    /// ips开关id，此处为互联网边界防护对象id，可通过调用[查询防火墙实例接口](ListFirewallDetail.xml)获得，通过返回值中的data.records.protect_objects.object_id（.表示各对象之间层级的区分）获得
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 基础防御状态，0表示关闭，1表示开启
    /// </summary>

    int32_t getBasicDefenseStatus() const;
    bool basicDefenseStatusIsSet() const;
    void unsetbasicDefenseStatus();
    void setBasicDefenseStatus(int32_t value);

    /// <summary>
    /// 虚拟补丁状态，0表示关闭，1表示开启
    /// </summary>

    int32_t getVirtualPatchesStatus() const;
    bool virtualPatchesStatusIsSet() const;
    void unsetvirtualPatchesStatus();
    void setVirtualPatchesStatus(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    int32_t basicDefenseStatus_;
    bool basicDefenseStatusIsSet_;
    int32_t virtualPatchesStatus_;
    bool virtualPatchesStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsSwitchResponseDTO_H_
