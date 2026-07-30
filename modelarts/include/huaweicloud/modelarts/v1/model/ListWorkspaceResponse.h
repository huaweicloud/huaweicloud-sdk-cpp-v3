
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkspaceResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkspaceResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/WorkspaceResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListWorkspaceResponse
    : public ModelBase, public HttpResponse
{
public:
    ListWorkspaceResponse();
    virtual ~ListWorkspaceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWorkspaceResponse members

    /// <summary>
    /// 工作空间的总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 此次请求返回的工作空间个数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// workspace属性列表。
    /// </summary>

    std::vector<WorkspaceResponse>& getWorkspaces();
    bool workspacesIsSet() const;
    void unsetworkspaces();
    void setWorkspaces(const std::vector<WorkspaceResponse>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::vector<WorkspaceResponse> workspaces_;
    bool workspacesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkspaceResponse_H_
