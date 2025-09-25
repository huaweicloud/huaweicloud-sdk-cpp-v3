
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_AddProtectResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_AddProtectResponse_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codehub/v3/model/CommitRepoV2.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  AddProtectResponse
    : public ModelBase
{
public:
    AddProtectResponse();
    virtual ~AddProtectResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddProtectResponse members

    /// <summary>
    /// 分支名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CommitRepoV2 getCommit() const;
    bool commitIsSet() const;
    void unsetcommit();
    void setCommit(const CommitRepoV2& value);

    /// <summary>
    /// 是否保护
    /// </summary>

    bool isProtected() const;
    bool protectedIsSet() const;
    void unsetprotected();
    void setProtected(bool value);

    /// <summary>
    /// 是否允许开发者提交
    /// </summary>

    bool isDevelopersCanPush() const;
    bool developersCanPushIsSet() const;
    void unsetdevelopersCanPush();
    void setDevelopersCanPush(bool value);

    /// <summary>
    /// 是否允许开发者合并
    /// </summary>

    bool isDevelopersCanMerge() const;
    bool developersCanMergeIsSet() const;
    void unsetdevelopersCanMerge();
    void setDevelopersCanMerge(bool value);

    /// <summary>
    /// 是否允许管理员提交
    /// </summary>

    bool isMasterCanPush() const;
    bool masterCanPushIsSet() const;
    void unsetmasterCanPush();
    void setMasterCanPush(bool value);

    /// <summary>
    /// 是否允许管理员合并
    /// </summary>

    bool isMasterCanMerge() const;
    bool masterCanMergeIsSet() const;
    void unsetmasterCanMerge();
    void setMasterCanMerge(bool value);

    /// <summary>
    /// 没有人允许提交
    /// </summary>

    bool isNoOneCanPush() const;
    bool noOneCanPushIsSet() const;
    void unsetnoOneCanPush();
    void setNoOneCanPush(bool value);

    /// <summary>
    /// 没有人允许合并
    /// </summary>

    bool isNoOneCanMerge() const;
    bool noOneCanMergeIsSet() const;
    void unsetnoOneCanMerge();
    void setNoOneCanMerge(bool value);

    /// <summary>
    /// 是否在一个打开的合并请求
    /// </summary>

    bool isInAnOpenedMergeRequest() const;
    bool inAnOpenedMergeRequestIsSet() const;
    void unsetinAnOpenedMergeRequest();
    void setInAnOpenedMergeRequest(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    CommitRepoV2 commit_;
    bool commitIsSet_;
    bool protected_;
    bool protectedIsSet_;
    bool developersCanPush_;
    bool developersCanPushIsSet_;
    bool developersCanMerge_;
    bool developersCanMergeIsSet_;
    bool masterCanPush_;
    bool masterCanPushIsSet_;
    bool masterCanMerge_;
    bool masterCanMergeIsSet_;
    bool noOneCanPush_;
    bool noOneCanPushIsSet_;
    bool noOneCanMerge_;
    bool noOneCanMergeIsSet_;
    bool inAnOpenedMergeRequest_;
    bool inAnOpenedMergeRequestIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_AddProtectResponse_H_
