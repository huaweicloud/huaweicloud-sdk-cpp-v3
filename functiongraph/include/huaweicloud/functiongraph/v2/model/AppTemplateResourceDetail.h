
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_AppTemplateResourceDetail_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_AppTemplateResourceDetail_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  AppTemplateResourceDetail
    : public ModelBase
{
public:
    AppTemplateResourceDetail();
    virtual ~AppTemplateResourceDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AppTemplateResourceDetail members

    /// <summary>
    /// 资源名称
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// 图标文件（base64编码）
    /// </summary>

    std::string getIcon() const;
    bool iconIsSet() const;
    void unseticon();
    void setIcon(const std::string& value);

    /// <summary>
    /// 超链接地址
    /// </summary>

    std::string getHref() const;
    bool hrefIsSet() const;
    void unsethref();
    void setHref(const std::string& value);


protected:
    std::string resourceName_;
    bool resourceNameIsSet_;
    std::string icon_;
    bool iconIsSet_;
    std::string href_;
    bool hrefIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_AppTemplateResourceDetail_H_
