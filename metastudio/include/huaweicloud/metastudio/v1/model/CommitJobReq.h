
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CommitJobReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CommitJobReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/JobTag.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用户提交任务请求
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CommitJobReq
    : public ModelBase
{
public:
    CommitJobReq();
    virtual ~CommitJobReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommitJobReq members

    /// <summary>
    /// 
    /// </summary>

    JobTag getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const JobTag& value);

    /// <summary>
    /// 一段描述信息,会呈现在资产库中。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 语音性别,是男性声音还是女性声音。 * FEMALE: 女性 * MALE: 男性
    /// </summary>

    std::string getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(const std::string& value);

    /// <summary>
    /// 音色名称。该名称会作为资产库中音色模型资产名称。
    /// </summary>

    std::string getVoiceName() const;
    bool voiceNameIsSet() const;
    void unsetvoiceName();
    void setVoiceName(const std::string& value);

    /// <summary>
    /// 训练语言,当前仅支持中文。 * CN: 中文 * EN: 英文
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 手机号
    /// </summary>

    std::string getPhone() const;
    bool phoneIsSet() const;
    void unsetphone();
    void setPhone(const std::string& value);

    /// <summary>
    /// 第三方用户id
    /// </summary>

    std::string getAppUserId() const;
    bool appUserIdIsSet() const;
    void unsetappUserId();
    void setAppUserId(const std::string& value);

    /// <summary>
    /// 模型输出语言类型
    /// </summary>

    std::string getOutputLanguage() const;
    bool outputLanguageIsSet() const;
    void unsetoutputLanguage();
    void setOutputLanguage(const std::string& value);

    /// <summary>
    /// 自定义试听文本
    /// </summary>

    std::string getCustomText() const;
    bool customTextIsSet() const;
    void unsetcustomText();
    void setCustomText(const std::string& value);


protected:
    JobTag tag_;
    bool tagIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string sex_;
    bool sexIsSet_;
    std::string voiceName_;
    bool voiceNameIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::string phone_;
    bool phoneIsSet_;
    std::string appUserId_;
    bool appUserIdIsSet_;
    std::string outputLanguage_;
    bool outputLanguageIsSet_;
    std::string customText_;
    bool customTextIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CommitJobReq_H_
