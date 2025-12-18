
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateMergeRequestApproverSettingRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateMergeRequestApproverSettingRequest_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/MergeRequestApproverSettingResultDto.h>

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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  UpdateMergeRequestApproverSettingRequest
    : public ModelBase
{
public:
    UpdateMergeRequestApproverSettingRequest();
    virtual ~UpdateMergeRequestApproverSettingRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateMergeRequestApproverSettingRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[[查询用户所有仓库](https://support.huaweicloud.com/eu/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_eu)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 合并请求审核设置id。
    /// </summary>

    int32_t getSettingId() const;
    bool settingIdIsSet() const;
    void unsetsettingId();
    void setSettingId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    MergeRequestApproverSettingResultDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const MergeRequestApproverSettingResultDto& value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    int32_t settingId_;
    bool settingIdIsSet_;
    MergeRequestApproverSettingResultDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateMergeRequestApproverSettingRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateMergeRequestApproverSettingRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateMergeRequestApproverSettingRequest_H_
