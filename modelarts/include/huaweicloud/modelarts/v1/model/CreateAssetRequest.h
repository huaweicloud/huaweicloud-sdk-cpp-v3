
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAssetRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAssetRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/CreateAssetReq.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateAssetRequest
    : public ModelBase
{
public:
    CreateAssetRequest();
    virtual ~CreateAssetRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAssetRequest members

    /// <summary>
    /// 工作空间ID。[获取方法请参见[查询工作空间列表](ListWorkspace.xml)。](tag:hc)未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**： OBS属主租户token。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getXStorageToken() const;
    bool xStorageTokenIsSet() const;
    void unsetxStorageToken();
    void setXStorageToken(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateAssetReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateAssetReq& value);


protected:
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string xStorageToken_;
    bool xStorageTokenIsSet_;
    CreateAssetReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateAssetRequest& dereference_from_shared_ptr(std::shared_ptr<CreateAssetRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAssetRequest_H_
