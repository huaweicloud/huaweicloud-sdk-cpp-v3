
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowDiffCommitResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowDiffCommitResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/DiffNoLineDto.h>
#include <huaweicloud/codehub/v4/model/DiffRefsDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ShowDiffCommitResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDiffCommitResponse();
    virtual ~ShowDiffCommitResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDiffCommitResponse members

    /// <summary>
    /// **参数解释：** 差异信息。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<DiffNoLineDto>& getDiffs();
    bool diffsIsSet() const;
    void unsetdiffs();
    void setDiffs(const std::vector<DiffNoLineDto>& value);

    /// <summary>
    /// 
    /// </summary>

    DiffRefsDto getDiffRefs() const;
    bool diffRefsIsSet() const;
    void unsetdiffRefs();
    void setDiffRefs(const DiffRefsDto& value);

    /// <summary>
    /// **参数解释：** 增加行数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getAddedLines() const;
    bool addedLinesIsSet() const;
    void unsetaddedLines();
    void setAddedLines(int32_t value);

    /// <summary>
    /// **参数解释：** 删除行数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getRemovedLines() const;
    bool removedLinesIsSet() const;
    void unsetremovedLines();
    void setRemovedLines(int32_t value);

    /// <summary>
    /// **参数解释：** 更改文件数目。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getChangeFileCount() const;
    bool changeFileCountIsSet() const;
    void unsetchangeFileCount();
    void setChangeFileCount(int32_t value);

    /// <summary>
    /// **参数解释：** 更改行数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getChangeLineCount() const;
    bool changeLineCountIsSet() const;
    void unsetchangeLineCount();
    void setChangeLineCount(int32_t value);

    /// <summary>
    /// **参数解释：** 是否过大。 **取值范围：** - true，大文件。 - false，非大文件
    /// </summary>

    bool isTooLarge() const;
    bool tooLargeIsSet() const;
    void unsettooLarge();
    void setTooLarge(bool value);


protected:
    std::vector<DiffNoLineDto> diffs_;
    bool diffsIsSet_;
    DiffRefsDto diffRefs_;
    bool diffRefsIsSet_;
    int32_t addedLines_;
    bool addedLinesIsSet_;
    int32_t removedLines_;
    bool removedLinesIsSet_;
    int32_t changeFileCount_;
    bool changeFileCountIsSet_;
    int32_t changeLineCount_;
    bool changeLineCountIsSet_;
    bool tooLarge_;
    bool tooLargeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowDiffCommitResponse_H_
