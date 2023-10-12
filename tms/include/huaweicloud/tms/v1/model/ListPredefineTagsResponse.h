
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_ListPredefineTagsResponse_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_ListPredefineTagsResponse_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tms/v1/model/PredefineTag.h>
#include <string>
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
class HUAWEICLOUD_TMS_V1_EXPORT  ListPredefineTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPredefineTagsResponse();
    virtual ~ListPredefineTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPredefineTagsResponse members

    /// <summary>
    /// 分页位置标识（索引）。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 查询到的标签总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 查询到的标签列表
    /// </summary>

    std::vector<PredefineTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<PredefineTag>& value);


protected:
    std::string marker_;
    bool markerIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<PredefineTag> tags_;
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

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_ListPredefineTagsResponse_H_
