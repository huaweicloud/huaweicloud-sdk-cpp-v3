
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowDeviceGroupResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowDeviceGroupResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ShowDeviceGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDeviceGroupResponse();
    virtual ~ShowDeviceGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDeviceGroupResponse members

    /// <summary>
    /// 设备组ID，用于唯一标识一个设备组，在创建设备组时由物联网平台分配。
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 设备组名称，单个资源空间下不可重复。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 设备组描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 父设备组ID，该设备组的父设备组ID。
    /// </summary>

    std::string getSuperGroupId() const;
    bool superGroupIdIsSet() const;
    void unsetsuperGroupId();
    void setSuperGroupId(const std::string& value);

    /// <summary>
    /// 设备组类型，分为动态设备组和静态设备组两种
    /// </summary>

    std::string getGroupType() const;
    bool groupTypeIsSet() const;
    void unsetgroupType();
    void setGroupType(const std::string& value);

    /// <summary>
    /// 动态设备组规则
    /// </summary>

    std::string getDynamicGroupRule() const;
    bool dynamicGroupRuleIsSet() const;
    void unsetdynamicGroupRule();
    void setDynamicGroupRule(const std::string& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string superGroupId_;
    bool superGroupIdIsSet_;
    std::string groupType_;
    bool groupTypeIsSet_;
    std::string dynamicGroupRule_;
    bool dynamicGroupRuleIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowDeviceGroupResponse_H_
