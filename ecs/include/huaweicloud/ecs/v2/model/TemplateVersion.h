
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateVersion_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateVersion_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/TemplateData.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  TemplateVersion
    : public ModelBase
{
public:
    TemplateVersion();
    virtual ~TemplateVersion();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateVersion members

    /// <summary>
    /// 
    /// </summary>

    TemplateData getTemplateData() const;
    bool templateDataIsSet() const;
    void unsettemplateData();
    void setTemplateData(const TemplateData& value);

    /// <summary>
    /// 版本号
    /// </summary>

    int32_t getVersionNumber() const;
    bool versionNumberIsSet() const;
    void unsetversionNumber();
    void setVersionNumber(int32_t value);

    /// <summary>
    /// 版本id
    /// </summary>

    std::string getVersionId() const;
    bool versionIdIsSet() const;
    void unsetversionId();
    void setVersionId(const std::string& value);

    /// <summary>
    /// 版本描述
    /// </summary>

    std::string getVersionDescription() const;
    bool versionDescriptionIsSet() const;
    void unsetversionDescription();
    void setVersionDescription(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 模板id
    /// </summary>

    std::string getLaunchTemplateId() const;
    bool launchTemplateIdIsSet() const;
    void unsetlaunchTemplateId();
    void setLaunchTemplateId(const std::string& value);


protected:
    TemplateData templateData_;
    bool templateDataIsSet_;
    int32_t versionNumber_;
    bool versionNumberIsSet_;
    std::string versionId_;
    bool versionIdIsSet_;
    std::string versionDescription_;
    bool versionDescriptionIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string launchTemplateId_;
    bool launchTemplateIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateVersion_H_
