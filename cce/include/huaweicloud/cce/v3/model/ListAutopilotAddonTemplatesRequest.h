
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotAddonTemplatesRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotAddonTemplatesRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ListAutopilotAddonTemplatesRequest
    : public ModelBase
{
public:
    ListAutopilotAddonTemplatesRequest();
    virtual ~ListAutopilotAddonTemplatesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAutopilotAddonTemplatesRequest members

    /// <summary>
    /// 指定的插件名称或插件别名，不填写则查询列表。
    /// </summary>

    std::string getAddonTemplateName() const;
    bool addonTemplateNameIsSet() const;
    void unsetaddonTemplateName();
    void setAddonTemplateName(const std::string& value);

    /// <summary>
    /// 含义：可接受的最低升级版本  属性：隐藏参数
    /// </summary>

    std::string getBaseUpdateAddonVersion() const;
    bool baseUpdateAddonVersionIsSet() const;
    void unsetbaseUpdateAddonVersion();
    void setBaseUpdateAddonVersion(const std::string& value);

    /// <summary>
    /// 含义：查询的集群  属性：隐藏参数
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 含义：是否获取最新插件  属性：隐藏参数
    /// </summary>

    std::string getNewest() const;
    bool newestIsSet() const;
    void unsetnewest();
    void setNewest(const std::string& value);

    /// <summary>
    /// 含义：筛选的插件版本  属性：隐藏参数
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);


protected:
    std::string addonTemplateName_;
    bool addonTemplateNameIsSet_;
    std::string baseUpdateAddonVersion_;
    bool baseUpdateAddonVersionIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string newest_;
    bool newestIsSet_;
    std::string version_;
    bool versionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAutopilotAddonTemplatesRequest& dereference_from_shared_ptr(std::shared_ptr<ListAutopilotAddonTemplatesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotAddonTemplatesRequest_H_
