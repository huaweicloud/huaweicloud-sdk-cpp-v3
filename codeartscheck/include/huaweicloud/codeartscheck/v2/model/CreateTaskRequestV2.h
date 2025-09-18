
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CreateTaskRequestV2_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CreateTaskRequestV2_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/RuleSetV2.h>
#include <string>
#include <huaweicloud/codeartscheck/v2/model/IncConfigV2.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  CreateTaskRequestV2
    : public ModelBase
{
public:
    CreateTaskRequestV2();
    virtual ~CreateTaskRequestV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTaskRequestV2 members

    /// <summary>
    /// 检查类型，数组格式，默认为source
    /// </summary>

    std::vector<std::string>& getCheckType();
    bool checkTypeIsSet() const;
    void unsetcheckType();
    void setCheckType(const std::vector<std::string>& value);

    /// <summary>
    /// 仓库地址
    /// </summary>

    std::string getGitUrl() const;
    bool gitUrlIsSet() const;
    void unsetgitUrl();
    void setGitUrl(const std::string& value);

    /// <summary>
    /// 仓库分支
    /// </summary>

    std::string getGitBranch() const;
    bool gitBranchIsSet() const;
    void unsetgitBranch();
    void setGitBranch(const std::string& value);

    /// <summary>
    /// 检查语言，数组格式，支持cpp,java,js,python,php,css,html,go,typescript,csharp
    /// </summary>

    std::vector<std::string>& getLanguage();
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::vector<std::string>& value);

    /// <summary>
    /// 指定规则集
    /// </summary>

    std::vector<RuleSetV2>& getRuleSets();
    bool ruleSetsIsSet() const;
    void unsetruleSets();
    void setRuleSets(const std::vector<RuleSetV2>& value);

    /// <summary>
    /// 检查类型，支持full/inc两种类型，full表示全量检查，inc表示mr检查
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);

    /// <summary>
    /// 仓库有权限的用户名
    /// </summary>

    std::string getUsername() const;
    bool usernameIsSet() const;
    void unsetusername();
    void setUsername(const std::string& value);

    /// <summary>
    /// 仓库有权限的用户token
    /// </summary>

    std::string getAccessToken() const;
    bool accessTokenIsSet() const;
    void unsetaccessToken();
    void setAccessToken(const std::string& value);

    /// <summary>
    /// 仓库有权限的用户endpointId
    /// </summary>

    std::string getEndpointId() const;
    bool endpointIdIsSet() const;
    void unsetendpointId();
    void setEndpointId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    IncConfigV2 getIncConfig() const;
    bool incConfigIsSet() const;
    void unsetincConfig();
    void setIncConfig(const IncConfigV2& value);

    /// <summary>
    /// 是否打开fossbot检查,默认不开
    /// </summary>

    bool isEnableFossbot() const;
    bool enableFossbotIsSet() const;
    void unsetenableFossbot();
    void setEnableFossbot(bool value);

    /// <summary>
    /// 资源池id，可以从资源池管理页面获取
    /// </summary>

    std::string getResourcePoolId() const;
    bool resourcePoolIdIsSet() const;
    void unsetresourcePoolId();
    void setResourcePoolId(const std::string& value);


protected:
    std::vector<std::string> checkType_;
    bool checkTypeIsSet_;
    std::string gitUrl_;
    bool gitUrlIsSet_;
    std::string gitBranch_;
    bool gitBranchIsSet_;
    std::vector<std::string> language_;
    bool languageIsSet_;
    std::vector<RuleSetV2> ruleSets_;
    bool ruleSetsIsSet_;
    std::string taskType_;
    bool taskTypeIsSet_;
    std::string username_;
    bool usernameIsSet_;
    std::string accessToken_;
    bool accessTokenIsSet_;
    std::string endpointId_;
    bool endpointIdIsSet_;
    IncConfigV2 incConfig_;
    bool incConfigIsSet_;
    bool enableFossbot_;
    bool enableFossbotIsSet_;
    std::string resourcePoolId_;
    bool resourcePoolIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CreateTaskRequestV2_H_
