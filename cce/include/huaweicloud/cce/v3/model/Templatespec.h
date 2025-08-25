
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_Templatespec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_Templatespec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/Versions.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 插件模板详细信息
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  Templatespec
    : public ModelBase
{
public:
    Templatespec();
    virtual ~Templatespec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Templatespec members

    /// <summary>
    /// 模板类型（helm，static）
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 是否为必安装插件
    /// </summary>

    bool isRequire() const;
    bool requireIsSet() const;
    void unsetrequire();
    void setRequire(bool value);

    /// <summary>
    /// 模板所属分组
    /// </summary>

    std::vector<std::string>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::vector<std::string>& value);

    /// <summary>
    /// Logo图片地址
    /// </summary>

    std::string getLogoURL() const;
    bool logoURLIsSet() const;
    void unsetlogoURL();
    void setLogoURL(const std::string& value);

    /// <summary>
    /// 插件详情描述及使用说明
    /// </summary>

    std::string getReadmeURL() const;
    bool readmeURLIsSet() const;
    void unsetreadmeURL();
    void setReadmeURL(const std::string& value);

    /// <summary>
    /// 模板描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 模板具体版本详情
    /// </summary>

    std::vector<Versions>& getVersions();
    bool versionsIsSet() const;
    void unsetversions();
    void setVersions(const std::vector<Versions>& value);


protected:
    std::string type_;
    bool typeIsSet_;
    bool require_;
    bool requireIsSet_;
    std::vector<std::string> labels_;
    bool labelsIsSet_;
    std::string logoURL_;
    bool logoURLIsSet_;
    std::string readmeURL_;
    bool readmeURLIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<Versions> versions_;
    bool versionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_Templatespec_H_
