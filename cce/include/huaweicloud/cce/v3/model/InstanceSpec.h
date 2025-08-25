
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_InstanceSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_InstanceSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// spec是集合类的元素类型，内容为插件实例具体信息
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  InstanceSpec
    : public ModelBase
{
public:
    InstanceSpec();
    virtual ~InstanceSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceSpec members

    /// <summary>
    /// 集群id
    /// </summary>

    std::string getClusterID() const;
    bool clusterIDIsSet() const;
    void unsetclusterID();
    void setClusterID(const std::string& value);

    /// <summary>
    /// 插件模板版本号，如1.0.0
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 插件模板名称，如coredns
    /// </summary>

    std::string getAddonTemplateName() const;
    bool addonTemplateNameIsSet() const;
    void unsetaddonTemplateName();
    void setAddonTemplateName(const std::string& value);

    /// <summary>
    /// 插件模板类型
    /// </summary>

    std::string getAddonTemplateType() const;
    bool addonTemplateTypeIsSet() const;
    void unsetaddonTemplateType();
    void setAddonTemplateType(const std::string& value);

    /// <summary>
    /// 插件模板logo图片的地址
    /// </summary>

    std::string getAddonTemplateLogo() const;
    bool addonTemplateLogoIsSet() const;
    void unsetaddonTemplateLogo();
    void setAddonTemplateLogo(const std::string& value);

    /// <summary>
    /// 插件模板所属类型
    /// </summary>

    std::vector<std::string>& getAddonTemplateLabels();
    bool addonTemplateLabelsIsSet() const;
    void unsetaddonTemplateLabels();
    void setAddonTemplateLabels(const std::vector<std::string>& value);

    /// <summary>
    /// 插件模板描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 插件模板安装参数（各插件不同），请根据具体插件模板信息填写安装参数。
    /// </summary>

    std::map<std::string, Object>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::map<std::string, Object>& value);


protected:
    std::string clusterID_;
    bool clusterIDIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string addonTemplateName_;
    bool addonTemplateNameIsSet_;
    std::string addonTemplateType_;
    bool addonTemplateTypeIsSet_;
    std::string addonTemplateLogo_;
    bool addonTemplateLogoIsSet_;
    std::vector<std::string> addonTemplateLabels_;
    bool addonTemplateLabelsIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::map<std::string, Object> values_;
    bool valuesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_InstanceSpec_H_
