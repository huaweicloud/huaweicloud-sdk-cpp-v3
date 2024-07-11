
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ResumePluginExtensionsRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ResumePluginExtensionsRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ResumePluginExtensionsRequestBody
    : public ModelBase
{
public:
    ResumePluginExtensionsRequestBody();
    virtual ~ResumePluginExtensionsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResumePluginExtensionsRequestBody members

    /// <summary>
    /// 插件名称
    /// </summary>

    std::string getPluginName() const;
    bool pluginNameIsSet() const;
    void unsetpluginName();
    void setPluginName(const std::string& value);

    /// <summary>
    /// 数据库列表
    /// </summary>

    std::vector<std::string>& getDbList();
    bool dbListIsSet() const;
    void unsetdbList();
    void setDbList(const std::vector<std::string>& value);

    /// <summary>
    /// 拓展模块名称
    /// </summary>

    std::string getExtensionName() const;
    bool extensionNameIsSet() const;
    void unsetextensionName();
    void setExtensionName(const std::string& value);

    /// <summary>
    /// 扩展开关。on表示开启，off表示关闭。
    /// </summary>

    std::string getExtensionAction() const;
    bool extensionActionIsSet() const;
    void unsetextensionAction();
    void setExtensionAction(const std::string& value);


protected:
    std::string pluginName_;
    bool pluginNameIsSet_;
    std::vector<std::string> dbList_;
    bool dbListIsSet_;
    std::string extensionName_;
    bool extensionNameIsSet_;
    std::string extensionAction_;
    bool extensionActionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ResumePluginExtensionsRequestBody_H_
