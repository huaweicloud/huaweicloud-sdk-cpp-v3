
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_InstanceItem_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_InstanceItem_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/InstanceItemTagItem.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  InstanceItem
    : public ModelBase
{
public:
    InstanceItem();
    virtual ~InstanceItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceItem members

    /// <summary>
    /// **参数解释：** 实例ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 实例名称 **取值范围：** 不涉及。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// **参数解释：** 标签列表。如果没有标签，默认为空数组。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<InstanceItemTagItem>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<InstanceItemTagItem>& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::vector<InstanceItemTagItem> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_InstanceItem_H_
