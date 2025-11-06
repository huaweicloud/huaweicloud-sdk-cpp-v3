
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_SimpleDiffDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_SimpleDiffDto_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  SimpleDiffDto
    : public ModelBase
{
public:
    SimpleDiffDto();
    virtual ~SimpleDiffDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SimpleDiffDto members

    /// <summary>
    /// **参数解释：** 增加行数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getAddedLine() const;
    bool addedLineIsSet() const;
    void unsetaddedLine();
    void setAddedLine(int32_t value);

    /// <summary>
    /// **参数解释：** 删除行数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getDeletedLine() const;
    bool deletedLineIsSet() const;
    void unsetdeletedLine();
    void setDeletedLine(int32_t value);

    /// <summary>
    /// **参数解释：** 路径。 **取值范围：** 不涉及。
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);


protected:
    int32_t addedLine_;
    bool addedLineIsSet_;
    int32_t deletedLine_;
    bool deletedLineIsSet_;
    std::string path_;
    bool pathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_SimpleDiffDto_H_
