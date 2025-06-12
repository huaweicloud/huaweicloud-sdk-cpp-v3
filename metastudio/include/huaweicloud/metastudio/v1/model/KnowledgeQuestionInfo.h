
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_KnowledgeQuestionInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_KnowledgeQuestionInfo_H_


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
/// 知识库问法信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  KnowledgeQuestionInfo
    : public ModelBase
{
public:
    KnowledgeQuestionInfo();
    virtual ~KnowledgeQuestionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// KnowledgeQuestionInfo members

    /// <summary>
    /// 问法ID。
    /// </summary>

    std::string getQuestionId() const;
    bool questionIdIsSet() const;
    void unsetquestionId();
    void setQuestionId(const std::string& value);

    /// <summary>
    /// 问法。
    /// </summary>

    std::string getQuestion() const;
    bool questionIsSet() const;
    void unsetquestion();
    void setQuestion(const std::string& value);

    /// <summary>
    /// 意图ID。
    /// </summary>

    std::string getIntentId() const;
    bool intentIdIsSet() const;
    void unsetintentId();
    void setIntentId(const std::string& value);

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


protected:
    std::string questionId_;
    bool questionIdIsSet_;
    std::string question_;
    bool questionIsSet_;
    std::string intentId_;
    bool intentIdIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_KnowledgeQuestionInfo_H_
