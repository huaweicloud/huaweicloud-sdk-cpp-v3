
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ChangesTreeObjectDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ChangesTreeObjectDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/ChangesTreeObjectDto.h>
#include <string>
#include <huaweicloud/codeartsrepo/v4/model/ChangesTreeObjectDiffDto.h>
#include <vector>

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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ChangesTreeObjectDto
    : public ModelBase
{
public:
    ChangesTreeObjectDto();
    virtual ~ChangesTreeObjectDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangesTreeObjectDto members

    /// <summary>
    /// **参数解释：** 变更文件名。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件层级。
    /// </summary>

    int32_t getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(int32_t value);

    /// <summary>
    /// **参数解释：** 文件路径。
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件类型。
    /// </summary>

    std::string getFileType() const;
    bool fileTypeIsSet() const;
    void unsetfileType();
    void setFileType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ChangesTreeObjectDiffDto getDiff() const;
    bool diffIsSet() const;
    void unsetdiff();
    void setDiff(const ChangesTreeObjectDiffDto& value);

    /// <summary>
    /// **参数解释：** 子文件变更。
    /// </summary>

    std::vector<ChangesTreeObjectDto>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<ChangesTreeObjectDto>& value);


protected:
    std::string title_;
    bool titleIsSet_;
    int32_t level_;
    bool levelIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;
    ChangesTreeObjectDiffDto diff_;
    bool diffIsSet_;
    std::vector<ChangesTreeObjectDto>* items_;
    bool itemsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ChangesTreeObjectDto_H_
