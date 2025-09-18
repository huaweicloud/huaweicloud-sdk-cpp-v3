
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_RunRequestV2_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_RunRequestV2_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 代码仓相关的信息非必填，主要是用于CodeFever临时仓库使用，不填时直接使用创建任务时已经提供的信息
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  RunRequestV2
    : public ModelBase
{
public:
    RunRequestV2();
    virtual ~RunRequestV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RunRequestV2 members

    /// <summary>
    /// 该任务对应临时仓库有权限的用户名
    /// </summary>

    std::string getUsername() const;
    bool usernameIsSet() const;
    void unsetusername();
    void setUsername(const std::string& value);

    /// <summary>
    /// 该任务对应临时仓库有权限的用户token
    /// </summary>

    std::string getAccessToken() const;
    bool accessTokenIsSet() const;
    void unsetaccessToken();
    void setAccessToken(const std::string& value);

    /// <summary>
    /// 该任务对应的临时仓库地址
    /// </summary>

    std::string getGitUrl() const;
    bool gitUrlIsSet() const;
    void unsetgitUrl();
    void setGitUrl(const std::string& value);

    /// <summary>
    /// 该任务对应的临时仓库分支
    /// </summary>

    std::string getGitBranch() const;
    bool gitBranchIsSet() const;
    void unsetgitBranch();
    void setGitBranch(const std::string& value);


protected:
    std::string username_;
    bool usernameIsSet_;
    std::string accessToken_;
    bool accessTokenIsSet_;
    std::string gitUrl_;
    bool gitUrlIsSet_;
    std::string gitBranch_;
    bool gitBranchIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_RunRequestV2_H_
