
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CreateProjectProtectedBranchesRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CreateProjectProtectedBranchesRequest_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/ProtectedBranchBodyApiDto.h>
#include <string>

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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  CreateProjectProtectedBranchesRequest
    : public ModelBase
{
public:
    CreateProjectProtectedBranchesRequest();
    virtual ~CreateProjectProtectedBranchesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateProjectProtectedBranchesRequest members

    /// <summary>
    /// **参数解释：** 项目的32位uuid，项目唯一标识，通过[[查询项目列表](https://support.huaweicloud.com/api-projectman/ListProjectsV4.html)](tag:hws)[[查询项目列表](https://support.huaweicloud.com/intl/en-us/api-projectman/ListProjectsV4.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **取值范围：** 字符串长度32。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ProtectedBranchBodyApiDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ProtectedBranchBodyApiDto& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    ProtectedBranchBodyApiDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateProjectProtectedBranchesRequest& dereference_from_shared_ptr(std::shared_ptr<CreateProjectProtectedBranchesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CreateProjectProtectedBranchesRequest_H_
