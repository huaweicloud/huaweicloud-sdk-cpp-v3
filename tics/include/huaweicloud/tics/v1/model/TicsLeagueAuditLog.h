
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsLeagueAuditLog_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsLeagueAuditLog_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  TicsLeagueAuditLog
    : public ModelBase
{
public:
    TicsLeagueAuditLog();
    virtual ~TicsLeagueAuditLog();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TicsLeagueAuditLog members

    /// <summary>
    /// 创建者账户id
    /// </summary>

    std::string getCreateUserDomainId() const;
    bool createUserDomainIdIsSet() const;
    void unsetcreateUserDomainId();
    void setCreateUserDomainId(const std::string& value);

    /// <summary>
    /// 创建者项目id
    /// </summary>

    std::string getCreateUserProjectId() const;
    bool createUserProjectIdIsSet() const;
    void unsetcreateUserProjectId();
    void setCreateUserProjectId(const std::string& value);

    /// <summary>
    /// 创建者别名
    /// </summary>

    std::string getCreatorAliasName() const;
    bool creatorAliasNameIsSet() const;
    void unsetcreatorAliasName();
    void setCreatorAliasName(const std::string& value);

    /// <summary>
    /// 事件结束时间
    /// </summary>

    utility::datetime getEventEndTime() const;
    bool eventEndTimeIsSet() const;
    void unseteventEndTime();
    void setEventEndTime(const utility::datetime& value);

    /// <summary>
    /// 事件信息
    /// </summary>

    std::string getEventInfo() const;
    bool eventInfoIsSet() const;
    void unseteventInfo();
    void setEventInfo(const std::string& value);

    /// <summary>
    /// 事件开始时间
    /// </summary>

    utility::datetime getEventStartTime() const;
    bool eventStartTimeIsSet() const;
    void unseteventStartTime();
    void setEventStartTime(const utility::datetime& value);

    /// <summary>
    /// 事件状态，NEW.新建,SUBMITING.提交中,ACCEPTED.已接收,DEPLOYING.部署中,RUNNING.运行中,SUCCEEDED.成功,FAILED.失败,TERMINATED.中止,TERMINATING.中止中,PENDING.等待中
    /// </summary>

    std::string getEventStatus() const;
    bool eventStatusIsSet() const;
    void unseteventStatus();
    void setEventStatus(const std::string& value);

    /// <summary>
    /// 日志记录id
    /// </summary>

    int64_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int64_t value);

    /// <summary>
    /// 联盟id
    /// </summary>

    std::string getLeagueId() const;
    bool leagueIdIsSet() const;
    void unsetleagueId();
    void setLeagueId(const std::string& value);

    /// <summary>
    /// 作业发起节点名称
    /// </summary>

    std::string getSponsorAgentName() const;
    bool sponsorAgentNameIsSet() const;
    void unsetsponsorAgentName();
    void setSponsorAgentName(const std::string& value);


protected:
    std::string createUserDomainId_;
    bool createUserDomainIdIsSet_;
    std::string createUserProjectId_;
    bool createUserProjectIdIsSet_;
    std::string creatorAliasName_;
    bool creatorAliasNameIsSet_;
    utility::datetime eventEndTime_;
    bool eventEndTimeIsSet_;
    std::string eventInfo_;
    bool eventInfoIsSet_;
    utility::datetime eventStartTime_;
    bool eventStartTimeIsSet_;
    std::string eventStatus_;
    bool eventStatusIsSet_;
    int64_t id_;
    bool idIsSet_;
    std::string leagueId_;
    bool leagueIdIsSet_;
    std::string sponsorAgentName_;
    bool sponsorAgentNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsLeagueAuditLog_H_
