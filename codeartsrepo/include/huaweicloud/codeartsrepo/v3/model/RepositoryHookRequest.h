
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepositoryHookRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepositoryHookRequest_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  RepositoryHookRequest
    : public ModelBase
{
public:
    RepositoryHookRequest();
    virtual ~RepositoryHookRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepositoryHookRequest members

    /// <summary>
    /// 触发url
    /// </summary>

    std::string getHookUrl() const;
    bool hookUrlIsSet() const;
    void unsethookUrl();
    void setHookUrl(const std::string& value);

    /// <summary>
    /// 事件来源
    /// </summary>

    std::string getService() const;
    bool serviceIsSet() const;
    void unsetservice();
    void setService(const std::string& value);

    /// <summary>
    /// 安全令牌
    /// </summary>

    std::string getToken() const;
    bool tokenIsSet() const;
    void unsettoken();
    void setToken(const std::string& value);

    /// <summary>
    /// 触发事件
    /// </summary>

    std::vector<std::string>& getHookEvents();
    bool hookEventsIsSet() const;
    void unsethookEvents();
    void setHookEvents(const std::vector<std::string>& value);


protected:
    std::string hookUrl_;
    bool hookUrlIsSet_;
    std::string service_;
    bool serviceIsSet_;
    std::string token_;
    bool tokenIsSet_;
    std::vector<std::string> hookEvents_;
    bool hookEventsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepositoryHookRequest_H_
