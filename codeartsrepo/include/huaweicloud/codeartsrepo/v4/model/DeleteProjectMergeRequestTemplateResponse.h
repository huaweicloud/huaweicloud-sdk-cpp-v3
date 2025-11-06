
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DeleteProjectMergeRequestTemplateResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DeleteProjectMergeRequestTemplateResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  DeleteProjectMergeRequestTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteProjectMergeRequestTemplateResponse();
    virtual ~DeleteProjectMergeRequestTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteProjectMergeRequestTemplateResponse members

    /// <summary>
    /// **参数解释：** 合并请求模板主键id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);


protected:
    int32_t id_;
    bool idIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DeleteProjectMergeRequestTemplateResponse_H_
