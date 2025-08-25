
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotAddonInstancesResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotAddonInstancesResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/cce/v3/model/AddonInstance.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  ListAutopilotAddonInstancesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAutopilotAddonInstancesResponse();
    virtual ~ListAutopilotAddonInstancesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAutopilotAddonInstancesResponse members

    /// <summary>
    /// API类型，固定值“Addon”，该值不可修改。
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// API版本，固定值“v3”，该值不可修改。
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// 插件实例列表
    /// </summary>

    std::vector<AddonInstance>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<AddonInstance>& value);


protected:
    std::string kind_;
    bool kindIsSet_;
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::vector<AddonInstance> items_;
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

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotAddonInstancesResponse_H_
