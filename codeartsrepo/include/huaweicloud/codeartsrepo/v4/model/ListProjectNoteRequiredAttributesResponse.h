
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListProjectNoteRequiredAttributesResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListProjectNoteRequiredAttributesResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListProjectNoteRequiredAttributesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListProjectNoteRequiredAttributesResponse();
    virtual ~ListProjectNoteRequiredAttributesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectNoteRequiredAttributesResponse members

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

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListProjectNoteRequiredAttributesResponse_H_
