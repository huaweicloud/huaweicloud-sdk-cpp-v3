
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListTopicDetailsResponse_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListTopicDetailsResponse_H_

#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  ListTopicDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTopicDetailsResponse();
    virtual ~ListTopicDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListTopicDetailsResponse members

    /// <summary>
    /// 更新时间。时间格式为UTC时间，YYYY-MM-DDTHH:MM:SSZ。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 消息推送的策略。0表示发送失败，保留到失败队列，1表示直接丢弃发送失败的消息。
    /// </summary>

    int32_t getPushPolicy() const;
    bool pushPolicyIsSet() const;
    void unsetpushPolicy();
    void setPushPolicy(int32_t value);

    /// <summary>
    /// 创建时间。时间格式为UTC时间，YYYY-MM-DDTHH:MM:SSZ。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 创建Topic的名字。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// Topic的唯一的资源标识。可以通过[查看主题列表获](smn_api_51004.xml)取该标识。
    /// </summary>

    std::string getTopicUrn() const;
    bool topicUrnIsSet() const;
    void unsettopicUrn();
    void setTopicUrn(const std::string& value);

    /// <summary>
    /// Topic的显示名，推送邮件消息时，作为邮件发件人显示。
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// 请求的唯一标识ID。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 主题ID。
    /// </summary>

    std::string getTopicId() const;
    bool topicIdIsSet() const;
    void unsettopicId();
    void setTopicId(const std::string& value);


protected:
    std::string updateTime_;
    bool updateTimeIsSet_;
    int32_t pushPolicy_;
    bool pushPolicyIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string topicUrn_;
    bool topicUrnIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string topicId_;
    bool topicIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListTopicDetailsResponse_H_
