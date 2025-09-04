
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_CreateInstanceResponse_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_CreateInstanceResponse_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotdm/v5/model/Tag.h>
#include <huaweicloud/iotdm/v5/model/AdditionalParams.h>
#include <huaweicloud/iotdm/v5/model/Flavor.h>
#include <string>
#include <huaweicloud/iotdm/v5/model/ChargeInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDM_V5_EXPORT  CreateInstanceResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateInstanceResponse();
    virtual ~CreateInstanceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateInstanceResponse members

    /// <summary>
    /// **参数说明**：实例类型。 **取值范围**： - standard：标准版实例 - enterprise：企业版实例 
    /// </summary>

    std::string getInstanceType() const;
    bool instanceTypeIsSet() const;
    void unsetinstanceType();
    void setInstanceType(const std::string& value);

    /// <summary>
    /// **参数说明**：实例ID。 **取值范围**：长度不超过36，由小写字母[a-f]、数字、连接符（-）的组成。 
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数说明**：实例名称 **取值范围**：由中文字符，英文字母、数字及“_”、“-”组成，且长度为[1-64]个字符。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Flavor getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const Flavor& value);

    /// <summary>
    /// **参数说明**：实例状态。 **取值范围**： - CREATING：实例正在创建 - ACTIVE：实例正常 - FROZEN：实例冻结 - TRADING: 实例正在进行交易 - MODIFYING：实例正在变更规格 - MODIFY_FAILED: 实例变更失败 - FAILED：实例创建失败 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ChargeInfo getChargeInfo() const;
    bool chargeInfoIsSet() const;
    void unsetchargeInfo();
    void setChargeInfo(const ChargeInfo& value);

    /// <summary>
    /// **参数说明**：设备接入实例的描述信息。 **取值范围**：长度不超过256，只允许中文、字母、数字、以及_，,.。、&amp;-等字符的组合。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数说明**：企业项目Id。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// **参数说明**: 设备接入实例的标签信息。如果实例有标签，则会有该字段，否则该字段为空。 
    /// </summary>

    std::vector<Tag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tag>& value);

    /// <summary>
    /// **参数说明**：订单号，创建包年包月实例时返回该参数。[查看订单详情请参考[查询订单详情](https://support.huaweicloud.com/api-bpconsole/zh-cn_topic_0075746564.html)。](tag:hws) 
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AdditionalParams getAdditionalParams() const;
    bool additionalParamsIsSet() const;
    void unsetadditionalParams();
    void setAdditionalParams(const AdditionalParams& value);


protected:
    std::string instanceType_;
    bool instanceTypeIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    Flavor flavor_;
    bool flavorIsSet_;
    std::string status_;
    bool statusIsSet_;
    ChargeInfo chargeInfo_;
    bool chargeInfoIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::vector<Tag> tags_;
    bool tagsIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;
    AdditionalParams additionalParams_;
    bool additionalParamsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_CreateInstanceResponse_H_
