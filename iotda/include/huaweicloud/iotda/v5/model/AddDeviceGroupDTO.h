
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddDeviceGroupDTO_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddDeviceGroupDTO_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建设备组请求结构体
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  AddDeviceGroupDTO
    : public ModelBase
{
public:
    AddDeviceGroupDTO();
    virtual ~AddDeviceGroupDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddDeviceGroupDTO members

    /// <summary>
    /// **参数说明**：设备组名称，单个资源空间下不可重复。 **取值范围**：长度不超过64，只允许中文、字母、数字、以及_? &#39;#().,&amp;%@!-等字符的组合。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数说明**：设备组描述。 **取值范围**：长度不超过64，只允许中文、字母、数字、以及_? &#39;#().,&amp;%@!-等字符的组合。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数说明**：父设备组ID，携带该参数时表示在该设备组下创建一个子设备组,动态群组不支持该参数。 **取值范围**：长度不超过36，十六进制字符串和连接符（-）的组合。
    /// </summary>

    std::string getSuperGroupId() const;
    bool superGroupIdIsSet() const;
    void unsetsuperGroupId();
    void setSuperGroupId(const std::string& value);

    /// <summary>
    /// **参数说明**：资源空间ID。此参数为非必选参数，存在多资源空间的用户需要使用该接口时，建议携带该参数指定创建的设备组归属到哪个资源空间下，否则创建的设备组将会归属到[[默认资源空间](https://support.huaweicloud.com/usermanual-iothub/iot_01_0006.html#section0)](tag:hws)[[默认资源空间](https://support.huaweicloud.com/intl/zh-cn/usermanual-iothub/iot_01_0006.html#section0)](tag:hws_hk)下。 **取值范围**：长度不超过36，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// **参数说明**：设备组类型，默认为静态设备组；当设备组类型为动态设备组时，需要填写动态设备组组规则
    /// </summary>

    std::string getGroupType() const;
    bool groupTypeIsSet() const;
    void unsetgroupType();
    void setGroupType(const std::string& value);

    /// <summary>
    /// **参数说明**：动态设备组规则语法和高级搜索保持一致，只需要填写where 子句内容，其余子句无需填写，todo补充说明
    /// </summary>

    std::string getDynamicGroupRule() const;
    bool dynamicGroupRuleIsSet() const;
    void unsetdynamicGroupRule();
    void setDynamicGroupRule(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string superGroupId_;
    bool superGroupIdIsSet_;
    std::string appId_;
    bool appIdIsSet_;
    std::string groupType_;
    bool groupTypeIsSet_;
    std::string dynamicGroupRule_;
    bool dynamicGroupRuleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddDeviceGroupDTO_H_
