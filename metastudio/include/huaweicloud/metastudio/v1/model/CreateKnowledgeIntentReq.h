
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateKnowledgeIntentReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateKnowledgeIntentReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建知识库意图请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateKnowledgeIntentReq
    : public ModelBase
{
public:
    CreateKnowledgeIntentReq();
    virtual ~CreateKnowledgeIntentReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateKnowledgeIntentReq members

    /// <summary>
    /// 主题。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 问题答案。
    /// </summary>

    std::string getAnswer() const;
    bool answerIsSet() const;
    void unsetanswer();
    void setAnswer(const std::string& value);

    /// <summary>
    /// 技能ID。
    /// </summary>

    std::string getSkillId() const;
    bool skillIdIsSet() const;
    void unsetskillId();
    void setSkillId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string answer_;
    bool answerIsSet_;
    std::string skillId_;
    bool skillIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateKnowledgeIntentReq_H_
