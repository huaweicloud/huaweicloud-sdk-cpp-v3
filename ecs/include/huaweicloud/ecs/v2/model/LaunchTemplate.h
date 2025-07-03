
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_LaunchTemplate_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_LaunchTemplate_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  LaunchTemplate
    : public ModelBase
{
public:
    LaunchTemplate();
    virtual ~LaunchTemplate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LaunchTemplate members

    /// <summary>
    /// 模板id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 模板名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 模板描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 模板默认版本号
    /// </summary>

    int32_t getDefaultVersion() const;
    bool defaultVersionIsSet() const;
    void unsetdefaultVersion();
    void setDefaultVersion(int32_t value);

    /// <summary>
    /// 模板最新版本号
    /// </summary>

    int32_t getLatestVersion() const;
    bool latestVersionIsSet() const;
    void unsetlatestVersion();
    void setLatestVersion(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    int32_t defaultVersion_;
    bool defaultVersionIsSet_;
    int32_t latestVersion_;
    bool latestVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_LaunchTemplate_H_
