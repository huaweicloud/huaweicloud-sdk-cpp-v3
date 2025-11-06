
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CheckGroupDeployKeyRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CheckGroupDeployKeyRequest_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/DeployKeyValueDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  CheckGroupDeployKeyRequest
    : public ModelBase
{
public:
    CheckGroupDeployKeyRequest();
    virtual ~CheckGroupDeployKeyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckGroupDeployKeyRequest members

    /// <summary>
    /// **参数解释：** 代码组id，代码组首页，Group ID后的数字Id
    /// </summary>

    int32_t getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    DeployKeyValueDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DeployKeyValueDto& value);


protected:
    int32_t groupId_;
    bool groupIdIsSet_;
    DeployKeyValueDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CheckGroupDeployKeyRequest& dereference_from_shared_ptr(std::shared_ptr<CheckGroupDeployKeyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CheckGroupDeployKeyRequest_H_
