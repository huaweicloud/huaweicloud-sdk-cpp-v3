
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_InstanceRequestSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_InstanceRequestSpec_H_


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
/// spec是集合类的元素类型，内容为插件实例安装/升级的具体请求信息
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  InstanceRequestSpec
    : public ModelBase
{
public:
    InstanceRequestSpec();
    virtual ~InstanceRequestSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceRequestSpec members

    /// <summary>
    /// 待安装、升级插件的版本号，例如1.0.0 - 安装：该参数非必传，如果不传，匹配集群支持的最新版本 - 升级：该参数必传，需指定版本号 
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 集群id
    /// </summary>

    std::string getClusterID() const;
    bool clusterIDIsSet() const;
    void unsetclusterID();
    void setClusterID(const std::string& value);

    /// <summary>
    /// 插件模板安装参数（各插件不同），升级插件时需要填写全量安装参数，未填写参数将使用插件模板中的默认值，当前插件安装参数可通过查询插件实例接口获取。 
    /// </summary>

    std::map<std::string, Object>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::map<std::string, Object>& value);

    /// <summary>
    /// 待安装插件模板名称，如coredns
    /// </summary>

    std::string getAddonTemplateName() const;
    bool addonTemplateNameIsSet() const;
    void unsetaddonTemplateName();
    void setAddonTemplateName(const std::string& value);


protected:
    std::string version_;
    bool versionIsSet_;
    std::string clusterID_;
    bool clusterIDIsSet_;
    std::map<std::string, Object> values_;
    bool valuesIsSet_;
    std::string addonTemplateName_;
    bool addonTemplateNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_InstanceRequestSpec_H_
