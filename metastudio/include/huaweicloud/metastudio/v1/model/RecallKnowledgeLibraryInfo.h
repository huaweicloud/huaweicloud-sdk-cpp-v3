
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RecallKnowledgeLibraryInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RecallKnowledgeLibraryInfo_H_


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
/// 知识库召回测试响应。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  RecallKnowledgeLibraryInfo
    : public ModelBase
{
public:
    RecallKnowledgeLibraryInfo();
    virtual ~RecallKnowledgeLibraryInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecallKnowledgeLibraryInfo members

    /// <summary>
    /// 文档ID。
    /// </summary>

    std::string getDocumentId() const;
    bool documentIdIsSet() const;
    void unsetdocumentId();
    void setDocumentId(const std::string& value);

    /// <summary>
    /// 文档名称。
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 文档类型。
    /// </summary>

    std::string getFileType() const;
    bool fileTypeIsSet() const;
    void unsetfileType();
    void setFileType(const std::string& value);

    /// <summary>
    /// 问答对ID。
    /// </summary>

    std::string getQuestionAnswerId() const;
    bool questionAnswerIdIsSet() const;
    void unsetquestionAnswerId();
    void setQuestionAnswerId(const std::string& value);

    /// <summary>
    /// 召回文本
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// 知识库召回得分
    /// </summary>

    double getScore() const;
    bool scoreIsSet() const;
    void unsetscore();
    void setScore(double value);


protected:
    std::string documentId_;
    bool documentIdIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;
    std::string questionAnswerId_;
    bool questionAnswerIdIsSet_;
    std::string content_;
    bool contentIsSet_;
    double score_;
    bool scoreIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RecallKnowledgeLibraryInfo_H_
