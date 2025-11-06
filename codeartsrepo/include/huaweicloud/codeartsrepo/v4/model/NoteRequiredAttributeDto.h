
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_NoteRequiredAttributeDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_NoteRequiredAttributeDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/RequiredAttributeDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 检视意见设置请求体
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  NoteRequiredAttributeDto
    : public ModelBase
{
public:
    NoteRequiredAttributeDto();
    virtual ~NoteRequiredAttributeDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NoteRequiredAttributeDto members

    /// <summary>
    /// **参数解释：** 检视意见必填项。
    /// </summary>

    std::vector<RequiredAttributeDto>& getNoteRequiredAttributes();
    bool noteRequiredAttributesIsSet() const;
    void unsetnoteRequiredAttributes();
    void setNoteRequiredAttributes(const std::vector<RequiredAttributeDto>& value);


protected:
    std::vector<RequiredAttributeDto> noteRequiredAttributes_;
    bool noteRequiredAttributesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_NoteRequiredAttributeDto_H_
