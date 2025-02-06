
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DeleteTagResourceReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DeleteTagResourceReqBody_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/DeleteTagDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// DeleteTagResource 操作的请求体。
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  DeleteTagResourceReqBody
    : public ModelBase
{
public:
    DeleteTagResourceReqBody();
    virtual ~DeleteTagResourceReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTagResourceReqBody members

    /// <summary>
    /// 用于管理资源的一组键值对
    /// </summary>

    std::vector<DeleteTagDto>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<DeleteTagDto>& value);


protected:
    std::vector<DeleteTagDto> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DeleteTagResourceReqBody_H_
