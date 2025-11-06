
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_AddDeployKeyRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_AddDeployKeyRequestBody_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  AddDeployKeyRequestBody
    : public ModelBase
{
public:
    AddDeployKeyRequestBody();
    virtual ~AddDeployKeyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddDeployKeyRequestBody members

    /// <summary>
    /// 部署使用的SSH密钥的来源
    /// </summary>

    std::string getApplication() const;
    bool applicationIsSet() const;
    void unsetapplication();
    void setApplication(const std::string& value);

    /// <summary>
    /// 部署使用的SSH密钥是否可以推送代码
    /// </summary>

    bool isCanPush() const;
    bool canPushIsSet() const;
    void unsetcanPush();
    void setCanPush(bool value);

    /// <summary>
    /// 部署使用的SSH密钥
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 部署使用的SSH密钥名称
    /// </summary>

    std::string getKeyTitle() const;
    bool keyTitleIsSet() const;
    void unsetkeyTitle();
    void setKeyTitle(const std::string& value);


protected:
    std::string application_;
    bool applicationIsSet_;
    bool canPush_;
    bool canPushIsSet_;
    std::string key_;
    bool keyIsSet_;
    std::string keyTitle_;
    bool keyTitleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_AddDeployKeyRequestBody_H_
