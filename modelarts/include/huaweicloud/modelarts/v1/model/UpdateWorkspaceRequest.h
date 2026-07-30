
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateWorkspaceRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateWorkspaceRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/UpdateWorkspaceReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UpdateWorkspaceRequest
    : public ModelBase
{
public:
    UpdateWorkspaceRequest();
    virtual ~UpdateWorkspaceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateWorkspaceRequest members

    /// <summary>
    /// 工作空间ID。[获取方法请参见[查询工作空间列表](ListWorkspace.xml)。](tag:hc)未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateWorkspaceReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateWorkspaceReq& value);


protected:
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    UpdateWorkspaceReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateWorkspaceRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateWorkspaceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateWorkspaceRequest_H_
