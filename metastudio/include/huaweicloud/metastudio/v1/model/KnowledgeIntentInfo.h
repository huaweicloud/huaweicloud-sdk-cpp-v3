
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_KnowledgeIntentInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_KnowledgeIntentInfo_H_


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
/// 知识库意图基本信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  KnowledgeIntentInfo
    : public ModelBase
{
public:
    KnowledgeIntentInfo();
    virtual ~KnowledgeIntentInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// KnowledgeIntentInfo members

    /// <summary>
    /// 意图ID。
    /// </summary>

    std::string getIntentId() const;
    bool intentIdIsSet() const;
    void unsetintentId();
    void setIntentId(const std::string& value);

    /// <summary>
    /// 主题。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 意图标识。
    /// </summary>

    std::string getIdentify() const;
    bool identifyIsSet() const;
    void unsetidentify();
    void setIdentify(const std::string& value);

    /// <summary>
    /// 问题答案。
    /// </summary>

    std::string getAnswer() const;
    bool answerIsSet() const;
    void unsetanswer();
    void setAnswer(const std::string& value);

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
    std::string intentId_;
    bool intentIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string identify_;
    bool identifyIsSet_;
    std::string answer_;
    bool answerIsSet_;
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_KnowledgeIntentInfo_H_
