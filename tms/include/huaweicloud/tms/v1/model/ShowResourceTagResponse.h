
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_ShowResourceTagResponse_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_ShowResourceTagResponse_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tms/v1/model/TagVo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  ShowResourceTagResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowResourceTagResponse();
    virtual ~ShowResourceTagResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowResourceTagResponse members

    /// <summary>
    /// 资源标签列表
    /// </summary>

    std::vector<TagVo>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagVo>& value);


protected:
    std::vector<TagVo> tags_;
    bool tagsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_ShowResourceTagResponse_H_
