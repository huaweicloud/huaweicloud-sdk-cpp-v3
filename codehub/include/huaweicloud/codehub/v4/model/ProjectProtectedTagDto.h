
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ProjectProtectedTagDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ProjectProtectedTagDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/ProjectProtectedTagActionDto.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ProjectProtectedTagDto
    : public ModelBase
{
public:
    ProjectProtectedTagDto();
    virtual ~ProjectProtectedTagDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProjectProtectedTagDto members

    /// <summary>
    /// **参数解释：** 保护tag名称。 **取值范围** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 事件列表。
    /// </summary>

    std::vector<ProjectProtectedTagActionDto>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<ProjectProtectedTagActionDto>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<ProjectProtectedTagActionDto> actions_;
    bool actionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ProjectProtectedTagDto_H_
