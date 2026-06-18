
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DefEntryDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DefEntryDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 代码导航def相关信息
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  DefEntryDto
    : public ModelBase
{
public:
    DefEntryDto();
    virtual ~DefEntryDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DefEntryDto members

    /// <summary>
    /// **参数解释：** 标记名称。 **约束限制：** 不涉及。
    /// </summary>

    std::string getTagName() const;
    bool tagNameIsSet() const;
    void unsettagName();
    void setTagName(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件路径。 **约束限制：** 不涉及。
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// **参数解释：** blob文件ID。 **约束限制：** 不涉及。
    /// </summary>

    std::string getBlob() const;
    bool blobIsSet() const;
    void unsetblob();
    void setBlob(const std::string& value);

    /// <summary>
    /// **参数解释：** 索引行简要内容。 **约束限制：** 不涉及。
    /// </summary>

    std::string getLineImage() const;
    bool lineImageIsSet() const;
    void unsetlineImage();
    void setLineImage(const std::string& value);

    /// <summary>
    /// **参数解释：** 行号。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getLineNumber() const;
    bool lineNumberIsSet() const;
    void unsetlineNumber();
    void setLineNumber(int32_t value);

    /// <summary>
    /// **参数解释：** 范围信息。 **约束限制：** 不涉及。
    /// </summary>

    std::string getRange() const;
    bool rangeIsSet() const;
    void unsetrange();
    void setRange(const std::string& value);

    /// <summary>
    /// **参数解释：** 语法类型。 **约束限制：** 不涉及。
    /// </summary>

    std::string getSyntaxType() const;
    bool syntaxTypeIsSet() const;
    void unsetsyntaxType();
    void setSyntaxType(const std::string& value);

    /// <summary>
    /// **参数解释：** 所在版本号（commit id）。 **约束限制：** 不涉及。
    /// </summary>

    std::string getRevision() const;
    bool revisionIsSet() const;
    void unsetrevision();
    void setRevision(const std::string& value);

    /// <summary>
    /// **参数解释：** 其他信息。 **约束限制：** 不涉及。
    /// </summary>

    std::string getExtend() const;
    bool extendIsSet() const;
    void unsetextend();
    void setExtend(const std::string& value);


protected:
    std::string tagName_;
    bool tagNameIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    std::string blob_;
    bool blobIsSet_;
    std::string lineImage_;
    bool lineImageIsSet_;
    int32_t lineNumber_;
    bool lineNumberIsSet_;
    std::string range_;
    bool rangeIsSet_;
    std::string syntaxType_;
    bool syntaxTypeIsSet_;
    std::string revision_;
    bool revisionIsSet_;
    std::string extend_;
    bool extendIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DefEntryDto_H_
