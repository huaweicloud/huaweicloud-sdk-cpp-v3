
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_Topics_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_Topics_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  Topics
    : public ModelBase
{
public:
    Topics();
    virtual ~Topics();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Topics members

    /// <summary>
    /// 主题名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// Topic的唯一的资源标识。
    /// </summary>

    std::string getTopicUrn() const;
    bool topicUrnIsSet() const;
    void unsettopicUrn();
    void setTopicUrn(const std::string& value);

    /// <summary>
    /// Topic的显示名，推送邮件消息时，作为邮件发件人显示
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// 消息推送的策略
    /// </summary>

    int32_t getPushPolicy() const;
    bool pushPolicyIsSet() const;
    void unsetpushPolicy();
    void setPushPolicy(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string topicUrn_;
    bool topicUrnIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    int32_t pushPolicy_;
    bool pushPolicyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_Topics_H_
