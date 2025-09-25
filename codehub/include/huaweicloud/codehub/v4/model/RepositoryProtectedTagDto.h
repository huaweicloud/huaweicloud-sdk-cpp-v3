
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryProtectedTagDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryProtectedTagDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/codehub/v4/model/RepositoryProtectedActionDto.h>

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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  RepositoryProtectedTagDto
    : public ModelBase
{
public:
    RepositoryProtectedTagDto();
    virtual ~RepositoryProtectedTagDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepositoryProtectedTagDto members

    /// <summary>
    /// **参数解释：** 保护Tag ID。 **取值范围：** 1-2147483647
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 分支名称或通配符。 **取值范围：** 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 事件列表。 **取值范围：** 不涉及
    /// </summary>

    std::vector<RepositoryProtectedActionDto>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<RepositoryProtectedActionDto>& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<RepositoryProtectedActionDto> actions_;
    bool actionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryProtectedTagDto_H_
