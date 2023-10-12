
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowVaultProjectTagResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowVaultProjectTagResponse_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/cbr/v1/model/TagsResp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ShowVaultProjectTagResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowVaultProjectTagResponse();
    virtual ~ShowVaultProjectTagResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowVaultProjectTagResponse members

    /// <summary>
    /// 标签列表
    /// </summary>

    std::vector<TagsResp>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagsResp>& value);


protected:
    std::vector<TagsResp> tags_;
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

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowVaultProjectTagResponse_H_
