
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_ListTagsResponse_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_ListTagsResponse_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tms/v1/model/TagListErrorItem.h>
#include <huaweicloud/tms/v1/model/TagResponse.h>
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
class HUAWEICLOUD_TMS_V1_EXPORT  ListTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTagsResponse();
    virtual ~ListTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTagsResponse members

    /// <summary>
    /// 标签列表
    /// </summary>

    std::vector<TagResponse>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagResponse>& value);

    /// <summary>
    /// 错误列表
    /// </summary>

    std::vector<TagListErrorItem>& getErrors();
    bool errorsIsSet() const;
    void unseterrors();
    void setErrors(const std::vector<TagListErrorItem>& value);


protected:
    std::vector<TagResponse> tags_;
    bool tagsIsSet_;
    std::vector<TagListErrorItem> errors_;
    bool errorsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_ListTagsResponse_H_
