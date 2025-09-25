
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ProtectedBranchBodyApiDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ProtectedBranchBodyApiDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/codehub/v4/model/ProtectedActionBasicApiDto.h>

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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ProtectedBranchBodyApiDto
    : public ModelBase
{
public:
    ProtectedBranchBodyApiDto();
    virtual ~ProtectedBranchBodyApiDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProtectedBranchBodyApiDto members

    /// <summary>
    /// **参数解释：** 保护分支名称。 **取值范围** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 事件列表。
    /// </summary>

    std::vector<ProtectedActionBasicApiDto>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<ProtectedActionBasicApiDto>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<ProtectedActionBasicApiDto> actions_;
    bool actionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ProtectedBranchBodyApiDto_H_
