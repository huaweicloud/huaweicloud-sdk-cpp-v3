
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProjectVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProjectVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 项目信息。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ProjectVO
    : public ModelBase
{
public:
    ProjectVO();
    virtual ~ProjectVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProjectVO members

    /// <summary>
    /// **参数解释：** 项目uuid **取值范围：** 不涉及。
    /// </summary>

    std::string getIdentifier() const;
    bool identifierIsSet() const;
    void unsetidentifier();
    void setIdentifier(const std::string& value);

    /// <summary>
    /// **参数解释：** 项目名称 **取值范围：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 项目数字id **取值范围：** 不涉及。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 项目类型 **取值范围：** scrum。
    /// </summary>

    std::string getProjectType() const;
    bool projectTypeIsSet() const;
    void unsetprojectType();
    void setProjectType(const std::string& value);


protected:
    std::string identifier_;
    bool identifierIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t id_;
    bool idIsSet_;
    std::string projectType_;
    bool projectTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProjectVO_H_
