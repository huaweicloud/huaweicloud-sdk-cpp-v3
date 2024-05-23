
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_Flavor_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_Flavor_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/FlavorExtraSpec.h>
#include <string>
#include <huaweicloud/ecs/v2/model/FlavorLink.h>
#include <vector>
#include <huaweicloud/ecs/v2/model/ServerAttachableQuantity.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 云服务器规格。
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  Flavor
    : public ModelBase
{
public:
    Flavor();
    virtual ~Flavor();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Flavor members

    /// <summary>
    /// 云服务器规格的ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 云服务器规格的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 云服务器规格对应的CPU核数。
    /// </summary>

    std::string getVcpus() const;
    bool vcpusIsSet() const;
    void unsetvcpus();
    void setVcpus(const std::string& value);

    /// <summary>
    /// 云服务器规格对应的内存大小，单位为MB。
    /// </summary>

    int32_t getRam() const;
    bool ramIsSet() const;
    void unsetram();
    void setRam(int32_t value);

    /// <summary>
    /// 云服务器规格对应要求的系统盘大小。  当前未使用该参数，缺省值为0。
    /// </summary>

    std::string getDisk() const;
    bool diskIsSet() const;
    void unsetdisk();
    void setDisk(const std::string& value);

    /// <summary>
    /// 云服务器规格对应要求的交换分区大小。  当前未使用该参数，缺省值为\&quot;\&quot;。
    /// </summary>

    std::string getSwap() const;
    bool swapIsSet() const;
    void unsetswap();
    void setSwap(const std::string& value);

    /// <summary>
    /// 扩展属性，临时盘大小。  当前未使用该参数，缺省值为0
    /// </summary>

    int32_t getOSFLVEXTDATAEphemeral() const;
    bool oSFLVEXTDATAEphemeralIsSet() const;
    void unsetoSFLVEXTDATAEphemeral();
    void setOSFLVEXTDATAEphemeral(int32_t value);

    /// <summary>
    /// 扩展属性，该云服务器规格是否禁用。  当前未使用该参数，缺省值为false。
    /// </summary>

    bool isOSFLVDISABLEDDisabled() const;
    bool oSFLVDISABLEDDisabledIsSet() const;
    void unsetoSFLVDISABLEDDisabled();
    void setOSFLVDISABLEDDisabled(bool value);

    /// <summary>
    /// 云服务器可使用网络带宽与网络硬件带宽的比例。  当前未使用该参数，缺省值为1.0。
    /// </summary>

    float getRxtxFactor() const;
    bool rxtxFactorIsSet() const;
    void unsetrxtxFactor();
    void setRxtxFactor(float value);

    /// <summary>
    /// 云服务器可使用网络带宽的软限制。  当前未使用该参数，缺省值为null。
    /// </summary>

    std::string getRxtxQuota() const;
    bool rxtxQuotaIsSet() const;
    void unsetrxtxQuota();
    void setRxtxQuota(const std::string& value);

    /// <summary>
    ///   云服务器可使用网络带宽的硬限制。  当前未使用该参数，缺省值为null。
    /// </summary>

    std::string getRxtxCap() const;
    bool rxtxCapIsSet() const;
    void unsetrxtxCap();
    void setRxtxCap(const std::string& value);

    /// <summary>
    /// 扩展属性，flavor是否给所有租户使用。  - true：表示给所有租户使用。 - false：表示给指定租户使用。  缺省值为true。
    /// </summary>

    bool isOsFlavorAccessIsPublic() const;
    bool osFlavorAccessIsPublicIsSet() const;
    void unsetosFlavorAccessIsPublic();
    void setOsFlavorAccessIsPublic(bool value);

    /// <summary>
    /// 规格相关快捷链接地址。
    /// </summary>

    std::vector<FlavorLink>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<FlavorLink>& value);

    /// <summary>
    /// 
    /// </summary>

    FlavorExtraSpec getOsExtraSpecs() const;
    bool osExtraSpecsIsSet() const;
    void unsetosExtraSpecs();
    void setOsExtraSpecs(const FlavorExtraSpec& value);

    /// <summary>
    /// 
    /// </summary>

    ServerAttachableQuantity getAttachableQuantity() const;
    bool attachableQuantityIsSet() const;
    void unsetattachableQuantity();
    void setAttachableQuantity(const ServerAttachableQuantity& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string vcpus_;
    bool vcpusIsSet_;
    int32_t ram_;
    bool ramIsSet_;
    std::string disk_;
    bool diskIsSet_;
    std::string swap_;
    bool swapIsSet_;
    int32_t oSFLVEXTDATAEphemeral_;
    bool oSFLVEXTDATAEphemeralIsSet_;
    bool oSFLVDISABLEDDisabled_;
    bool oSFLVDISABLEDDisabledIsSet_;
    float rxtxFactor_;
    bool rxtxFactorIsSet_;
    std::string rxtxQuota_;
    bool rxtxQuotaIsSet_;
    std::string rxtxCap_;
    bool rxtxCapIsSet_;
    bool osFlavorAccessIsPublic_;
    bool osFlavorAccessIsPublicIsSet_;
    std::vector<FlavorLink> links_;
    bool linksIsSet_;
    FlavorExtraSpec osExtraSpecs_;
    bool osExtraSpecsIsSet_;
    ServerAttachableQuantity attachableQuantity_;
    bool attachableQuantityIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_Flavor_H_
