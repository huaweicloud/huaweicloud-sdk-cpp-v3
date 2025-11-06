
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_WebhookParamsDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_WebhookParamsDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** Webhook设置参数。
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  WebhookParamsDto
    : public ModelBase
{
public:
    WebhookParamsDto();
    virtual ~WebhookParamsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WebhookParamsDto members

    /// <summary>
    /// **参数解释：** webhook地址。 **取值范围：** 字符串长度不少于0，不超过500。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否启用推送事件。
    /// </summary>

    bool isPushEvents() const;
    bool pushEventsIsSet() const;
    void unsetpushEvents();
    void setPushEvents(bool value);

    /// <summary>
    /// **参数解释：** 推送事件分支过滤正则规则。 **取值范围：** 字符串长度不少于0，不超过500。                
    /// </summary>

    std::string getPushEventsBranchRegexFilter() const;
    bool pushEventsBranchRegexFilterIsSet() const;
    void unsetpushEventsBranchRegexFilter();
    void setPushEventsBranchRegexFilter(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否启用Tag推送事件。
    /// </summary>

    bool isTagPushEvents() const;
    bool tagPushEventsIsSet() const;
    void unsettagPushEvents();
    void setTagPushEvents(bool value);

    /// <summary>
    /// **参数解释：** 是否启用合并请求事件。
    /// </summary>

    bool isMergeRequestsEvents() const;
    bool mergeRequestsEventsIsSet() const;
    void unsetmergeRequestsEvents();
    void setMergeRequestsEvents(bool value);

    /// <summary>
    /// **参数解释：** 是否启用评论事件。
    /// </summary>

    bool isNoteEvents() const;
    bool noteEventsIsSet() const;
    void unsetnoteEvents();
    void setNoteEvents(bool value);

    /// <summary>
    /// **参数解释：** token值，作为返回值时会使用掩码代替实际值。 **取值范围：** 字符串长度不少于0，不超过2000。
    /// </summary>

    std::string getToken() const;
    bool tokenIsSet() const;
    void unsettoken();
    void setToken(const std::string& value);

    /// <summary>
    /// **参数解释：** token类型，默认为X-Repo-Token。 **取值范围：** 字符串长度不少于0，不超过200。
    /// </summary>

    std::string getTokenType() const;
    bool tokenTypeIsSet() const;
    void unsettokenType();
    void setTokenType(const std::string& value);

    /// <summary>
    /// **参数解释：** 名称。 **取值范围：** 字符串长度不少于0，不超过200。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 描述。 **取值范围：** 字符串长度不少于0，不超过200。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string url_;
    bool urlIsSet_;
    bool pushEvents_;
    bool pushEventsIsSet_;
    std::string pushEventsBranchRegexFilter_;
    bool pushEventsBranchRegexFilterIsSet_;
    bool tagPushEvents_;
    bool tagPushEventsIsSet_;
    bool mergeRequestsEvents_;
    bool mergeRequestsEventsIsSet_;
    bool noteEvents_;
    bool noteEventsIsSet_;
    std::string token_;
    bool tokenIsSet_;
    std::string tokenType_;
    bool tokenTypeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_WebhookParamsDto_H_
