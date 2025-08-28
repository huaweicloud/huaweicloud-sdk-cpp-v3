
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_KnowledgeLibraryInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_KnowledgeLibraryInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/KnowledgeTypeEnum.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/LanguageEnum.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 知识库基本信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  KnowledgeLibraryInfo
    : public ModelBase
{
public:
    KnowledgeLibraryInfo();
    virtual ~KnowledgeLibraryInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// KnowledgeLibraryInfo members

    /// <summary>
    /// 知识库ID。
    /// </summary>

    std::string getKnowledgeLibraryId() const;
    bool knowledgeLibraryIdIsSet() const;
    void unsetknowledgeLibraryId();
    void setKnowledgeLibraryId(const std::string& value);

    /// <summary>
    /// 知识库名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    LanguageEnum getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const LanguageEnum& value);

    /// <summary>
    /// 
    /// </summary>

    KnowledgeTypeEnum getKnowledgeType() const;
    bool knowledgeTypeIsSet() const;
    void unsetknowledgeType();
    void setKnowledgeType(const KnowledgeTypeEnum& value);

    /// <summary>
    /// 知识库大小(文档库为文档数量)
    /// </summary>

    int32_t getKnowledgeSize() const;
    bool knowledgeSizeIsSet() const;
    void unsetknowledgeSize();
    void setKnowledgeSize(int32_t value);

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
    std::string knowledgeLibraryId_;
    bool knowledgeLibraryIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    LanguageEnum language_;
    bool languageIsSet_;
    KnowledgeTypeEnum knowledgeType_;
    bool knowledgeTypeIsSet_;
    int32_t knowledgeSize_;
    bool knowledgeSizeIsSet_;
    int32_t topk_;
    bool topkIsSet_;
    double score_;
    bool scoreIsSet_;
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_KnowledgeLibraryInfo_H_
