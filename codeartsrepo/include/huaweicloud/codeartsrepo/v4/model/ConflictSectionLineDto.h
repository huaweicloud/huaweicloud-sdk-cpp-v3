
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ConflictSectionLineDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ConflictSectionLineDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsrepo/v4/model/ConflictSectionLineMetaDataDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ConflictSectionLineDto
    : public ModelBase
{
public:
    ConflictSectionLineDto();
    virtual ~ConflictSectionLineDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConflictSectionLineDto members

    /// <summary>
    /// 行
    /// </summary>

    std::string getLineCode() const;
    bool lineCodeIsSet() const;
    void unsetlineCode();
    void setLineCode(const std::string& value);

    /// <summary>
    /// 类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 旧行
    /// </summary>

    int32_t getOldLine() const;
    bool oldLineIsSet() const;
    void unsetoldLine();
    void setOldLine(int32_t value);

    /// <summary>
    /// 新行
    /// </summary>

    int32_t getNewLine() const;
    bool newLineIsSet() const;
    void unsetnewLine();
    void setNewLine(int32_t value);

    /// <summary>
    /// 文本
    /// </summary>

    std::string getText() const;
    bool textIsSet() const;
    void unsettext();
    void setText(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ConflictSectionLineMetaDataDto getMetaData() const;
    bool metaDataIsSet() const;
    void unsetmetaData();
    void setMetaData(const ConflictSectionLineMetaDataDto& value);

    /// <summary>
    /// 富文本
    /// </summary>

    std::string getRichText() const;
    bool richTextIsSet() const;
    void unsetrichText();
    void setRichText(const std::string& value);

    /// <summary>
    /// 可接受建议
    /// </summary>

    bool isCanReceiveSuggestion() const;
    bool canReceiveSuggestionIsSet() const;
    void unsetcanReceiveSuggestion();
    void setCanReceiveSuggestion(bool value);


protected:
    std::string lineCode_;
    bool lineCodeIsSet_;
    std::string type_;
    bool typeIsSet_;
    int32_t oldLine_;
    bool oldLineIsSet_;
    int32_t newLine_;
    bool newLineIsSet_;
    std::string text_;
    bool textIsSet_;
    ConflictSectionLineMetaDataDto metaData_;
    bool metaDataIsSet_;
    std::string richText_;
    bool richTextIsSet_;
    bool canReceiveSuggestion_;
    bool canReceiveSuggestionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ConflictSectionLineDto_H_
