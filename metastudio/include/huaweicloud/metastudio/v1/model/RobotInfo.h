
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RobotInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RobotInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/RobotTypeEnum.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/LanguageEnum.h>
#include <huaweicloud/metastudio/v1/model/AsrTypeEnum.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 应用基本信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  RobotInfo
    : public ModelBase
{
public:
    RobotInfo();
    virtual ~RobotInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RobotInfo members

    /// <summary>
    /// 应用ID。
    /// </summary>

    std::string getRobotId() const;
    bool robotIdIsSet() const;
    void unsetrobotId();
    void setRobotId(const std::string& value);

    /// <summary>
    /// 应用名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 智能交互对话房间ID。
    /// </summary>

    std::string getRoomId() const;
    bool roomIdIsSet() const;
    void unsetroomId();
    void setRoomId(const std::string& value);

    /// <summary>
    /// 第三方应用ID。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 对接第三方应用厂商类型。 &gt; 0：科大讯飞AIUI；1：华为云CBS；2：科大讯飞星火交互认知大模型；5：第三方驱动；6：第三方语言模型；7：交互助手；8：奇妙问
    /// </summary>

    int32_t getAppType() const;
    bool appTypeIsSet() const;
    void unsetappType();
    void setAppType(int32_t value);

    /// <summary>
    /// 应用的AccessKey或帐号。
    /// </summary>

    std::string getAppKey() const;
    bool appKeyIsSet() const;
    void unsetappKey();
    void setAppKey(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RobotTypeEnum getRobotType() const;
    bool robotTypeIsSet() const;
    void unsetrobotType();
    void setRobotType(const RobotTypeEnum& value);

    /// <summary>
    /// 
    /// </summary>

    LanguageEnum getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const LanguageEnum& value);

    /// <summary>
    /// 创建时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 更新时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// CBS所在区域
    /// </summary>

    int32_t getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(int32_t value);

    /// <summary>
    /// CBS所在区域的projectId
    /// </summary>

    std::string getCbsProjectId() const;
    bool cbsProjectIdIsSet() const;
    void unsetcbsProjectId();
    void setCbsProjectId(const std::string& value);

    /// <summary>
    /// 第三方语言模型地址。
    /// </summary>

    std::string getLlmUrl() const;
    bool llmUrlIsSet() const;
    void unsetllmUrl();
    void setLlmUrl(const std::string& value);

    /// <summary>
    /// 是否采用流式响应。
    /// </summary>

    bool isIsStream() const;
    bool isStreamIsSet() const;
    void unsetisStream();
    void setIsStream(bool value);

    /// <summary>
    /// 支持的多轮对话数量，取值大于1时，请求第三方语言模型时将携带历史对话信息。
    /// </summary>

    int32_t getChatRounds() const;
    bool chatRoundsIsSet() const;
    void unsetchatRounds();
    void setChatRounds(int32_t value);

    /// <summary>
    /// 是否为正式环境
    /// </summary>

    bool isIsIflyProduction() const;
    bool isIflyProductionIsSet() const;
    void unsetisIflyProduction();
    void setIsIflyProduction(bool value);

    /// <summary>
    /// 语音识别后端点静音时长默认500ms
    /// </summary>

    int32_t getTailSilenceTime() const;
    bool tailSilenceTimeIsSet() const;
    void unsettailSilenceTime();
    void setTailSilenceTime(int32_t value);

    /// <summary>
    /// 奇妙问角色ID。
    /// </summary>

    std::string getRoleId() const;
    bool roleIdIsSet() const;
    void unsetroleId();
    void setRoleId(const std::string& value);

    /// <summary>
    /// SIS所在区域
    /// </summary>

    int32_t getSisRegion() const;
    bool sisRegionIsSet() const;
    void unsetsisRegion();
    void setSisRegion(int32_t value);

    /// <summary>
    /// SIS所在区域的projectId
    /// </summary>

    std::string getSisProjectId() const;
    bool sisProjectIdIsSet() const;
    void unsetsisProjectId();
    void setSisProjectId(const std::string& value);

    /// <summary>
    /// 是否开启热词
    /// </summary>

    bool isEnableHotWords() const;
    bool enableHotWordsIsSet() const;
    void unsetenableHotWords();
    void setEnableHotWords(bool value);

    /// <summary>
    /// 是否开启提问文本审核开关
    /// </summary>

    bool isEnableQuestionAudit() const;
    bool enableQuestionAuditIsSet() const;
    void unsetenableQuestionAudit();
    void setEnableQuestionAudit(bool value);

    /// <summary>
    /// 
    /// </summary>

    AsrTypeEnum getAsrType() const;
    bool asrTypeIsSet() const;
    void unsetasrType();
    void setAsrType(const AsrTypeEnum& value);

    /// <summary>
    /// ASR帐号。
    /// </summary>

    std::string getAsrAccount() const;
    bool asrAccountIsSet() const;
    void unsetasrAccount();
    void setAsrAccount(const std::string& value);


protected:
    std::string robotId_;
    bool robotIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string roomId_;
    bool roomIdIsSet_;
    std::string appId_;
    bool appIdIsSet_;
    int32_t appType_;
    bool appTypeIsSet_;
    std::string appKey_;
    bool appKeyIsSet_;
    RobotTypeEnum robotType_;
    bool robotTypeIsSet_;
    LanguageEnum language_;
    bool languageIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    int32_t region_;
    bool regionIsSet_;
    std::string cbsProjectId_;
    bool cbsProjectIdIsSet_;
    std::string llmUrl_;
    bool llmUrlIsSet_;
    bool isStream_;
    bool isStreamIsSet_;
    int32_t chatRounds_;
    bool chatRoundsIsSet_;
    bool isIflyProduction_;
    bool isIflyProductionIsSet_;
    int32_t tailSilenceTime_;
    bool tailSilenceTimeIsSet_;
    std::string roleId_;
    bool roleIdIsSet_;
    int32_t sisRegion_;
    bool sisRegionIsSet_;
    std::string sisProjectId_;
    bool sisProjectIdIsSet_;
    bool enableHotWords_;
    bool enableHotWordsIsSet_;
    bool enableQuestionAudit_;
    bool enableQuestionAuditIsSet_;
    AsrTypeEnum asrType_;
    bool asrTypeIsSet_;
    std::string asrAccount_;
    bool asrAccountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RobotInfo_H_
