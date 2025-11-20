
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAddonPrecheckTasksResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAddonPrecheckTasksResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/AddonCheckTask.h>
#include <string>
#include <vector>
#include <huaweicloud/cce/v3/model/PageInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ListAddonPrecheckTasksResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAddonPrecheckTasksResponse();
    virtual ~ListAddonPrecheckTasksResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAddonPrecheckTasksResponse members

    /// <summary>
    /// **参数解释：** API类型 **取值范围：** 固定值\&quot;AddonCheck\&quot; 
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// **参数解释：** API版本 **取值范围：** 固定值\&quot;v3\&quot; 
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfo getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfo& value);

    /// <summary>
    /// **参数解释：** 插件检查任务信息列表，包含了插件检查任务ID，插件模板名称，插件实例ID等。 **约束限制：** 不涉及 
    /// </summary>

    std::vector<AddonCheckTask>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<AddonCheckTask>& value);


protected:
    std::string kind_;
    bool kindIsSet_;
    std::string apiVersion_;
    bool apiVersionIsSet_;
    PageInfo pageInfo_;
    bool pageInfoIsSet_;
    std::vector<AddonCheckTask> items_;
    bool itemsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAddonPrecheckTasksResponse_H_
