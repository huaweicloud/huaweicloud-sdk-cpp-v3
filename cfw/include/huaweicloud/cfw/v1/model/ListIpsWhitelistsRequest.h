
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListIpsWhitelistsRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListIpsWhitelistsRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ListIpsWhitelistsRequest
    : public ModelBase
{
public:
    ListIpsWhitelistsRequest();
    virtual ~ListIpsWhitelistsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIpsWhitelistsRequest members

    /// <summary>
    /// **参数解释**： 防火墙ID，用户创建防火墙实例后产生的唯一ID，配置后可区分不同防火墙，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取 **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**： 白名单源地址 **约束限制**： 不涉及  **取值范围**： 不涉及  **默认取值**： 不涉及
    /// </summary>

    std::string getSourceAddress() const;
    bool sourceAddressIsSet() const;
    void unsetsourceAddress();
    void setSourceAddress(const std::string& value);

    /// <summary>
    /// **参数解释**：  目的地址  **约束限制**：  不涉及  **取值范围**：  不涉及  **默认取值**：  不涉及
    /// </summary>

    std::string getDestAddress() const;
    bool destAddressIsSet() const;
    void unsetdestAddress();
    void setDestAddress(const std::string& value);

    /// <summary>
    /// **参数解释**：  白名单名称  **约束限制**：  不涉及  **取值范围**： 不涉及  **默认取值**：  不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：  每页大小  **约束限制**：  不涉及  **取值范围**：  不涉及  **默认取值**：  不涉及
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**：  偏移量  **约束限制**：  不涉及  **取值范围**：  不涉及  **默认取值**：  不涉及
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    std::string sourceAddress_;
    bool sourceAddressIsSet_;
    std::string destAddress_;
    bool destAddressIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListIpsWhitelistsRequest& dereference_from_shared_ptr(std::shared_ptr<ListIpsWhitelistsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListIpsWhitelistsRequest_H_
