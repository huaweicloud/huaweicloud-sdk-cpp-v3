
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateProjectProtectedBranchesResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateProjectProtectedBranchesResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/ProjectProtectedActionResultApiDto.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  CreateProjectProtectedBranchesResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateProjectProtectedBranchesResponse();
    virtual ~CreateProjectProtectedBranchesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateProjectProtectedBranchesResponse members

    /// <summary>
    /// **参数解释：** 保护分支唯一标识。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 保护分支名称 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 事件列表。
    /// </summary>

    std::vector<ProjectProtectedActionResultApiDto>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<ProjectProtectedActionResultApiDto>& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<ProjectProtectedActionResultApiDto> actions_;
    bool actionsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateProjectProtectedBranchesResponse_H_
