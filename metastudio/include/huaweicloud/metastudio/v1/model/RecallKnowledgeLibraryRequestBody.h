
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RecallKnowledgeLibraryRequestBody_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RecallKnowledgeLibraryRequestBody_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/KnowledgeTypeEnum.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 知识库召回测试请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  RecallKnowledgeLibraryRequestBody
    : public ModelBase
{
public:
    RecallKnowledgeLibraryRequestBody();
    virtual ~RecallKnowledgeLibraryRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecallKnowledgeLibraryRequestBody members

    /// <summary>
    /// 知识库名称。
    /// </summary>

    std::string getKnowledgeLibraryId() const;
    bool knowledgeLibraryIdIsSet() const;
    void unsetknowledgeLibraryId();
    void setKnowledgeLibraryId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    KnowledgeTypeEnum getKnowledgeType() const;
    bool knowledgeTypeIsSet() const;
    void unsetknowledgeType();
    void setKnowledgeType(const KnowledgeTypeEnum& value);

    /// <summary>
    /// 知识库召回请求文本
    /// </summary>

    std::string getQuery() const;
    bool queryIsSet() const;
    void unsetquery();
    void setQuery(const std::string& value);

    /// <summary>
    /// 文档库召回topk
    /// </summary>

    int32_t getTopk() const;
    bool topkIsSet() const;
    void unsettopk();
    void setTopk(int32_t value);

    /// <summary>
    /// 知识库召回得分
    /// </summary>

    double getScore() const;
    bool scoreIsSet() const;
    void unsetscore();
    void setScore(double value);


protected:
    std::string knowledgeLibraryId_;
    bool knowledgeLibraryIdIsSet_;
    KnowledgeTypeEnum knowledgeType_;
    bool knowledgeTypeIsSet_;
    std::string query_;
    bool queryIsSet_;
    int32_t topk_;
    bool topkIsSet_;
    double score_;
    bool scoreIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RecallKnowledgeLibraryRequestBody_H_
