
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_Versions_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_Versions_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/SupportVersions.h>
#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 具体插件版本信息
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  Versions
    : public ModelBase
{
public:
    Versions();
    virtual ~Versions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Versions members

    /// <summary>
    /// 插件版本号
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 插件安装参数
    /// </summary>

    Object getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const Object& value);

    /// <summary>
    /// 是否为稳定版本
    /// </summary>

    bool isStable() const;
    bool stableIsSet() const;
    void unsetstable();
    void setStable(bool value);

    /// <summary>
    /// 供界面使用的翻译信息
    /// </summary>

    Object getTranslate() const;
    bool translateIsSet() const;
    void unsettranslate();
    void setTranslate(const Object& value);

    /// <summary>
    /// 支持集群版本号
    /// </summary>

    std::vector<SupportVersions>& getSupportVersions();
    bool supportVersionsIsSet() const;
    void unsetsupportVersions();
    void setSupportVersions(const std::vector<SupportVersions>& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    utility::datetime getCreationTimestamp() const;
    bool creationTimestampIsSet() const;
    void unsetcreationTimestamp();
    void setCreationTimestamp(const utility::datetime& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    utility::datetime getUpdateTimestamp() const;
    bool updateTimestampIsSet() const;
    void unsetupdateTimestamp();
    void setUpdateTimestamp(const utility::datetime& value);


protected:
    std::string version_;
    bool versionIsSet_;
    Object input_;
    bool inputIsSet_;
    bool stable_;
    bool stableIsSet_;
    Object translate_;
    bool translateIsSet_;
    std::vector<SupportVersions> supportVersions_;
    bool supportVersionsIsSet_;
    utility::datetime creationTimestamp_;
    bool creationTimestampIsSet_;
    utility::datetime updateTimestamp_;
    bool updateTimestampIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_Versions_H_
