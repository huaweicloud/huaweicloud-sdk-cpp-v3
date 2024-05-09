
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ListObejectLevelCompareDetailResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ListObejectLevelCompareDetailResponse_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/ObjectsCompareDetailInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ListObejectLevelCompareDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ListObejectLevelCompareDetailResponse();
    virtual ~ListObejectLevelCompareDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListObejectLevelCompareDetailResponse members

    /// <summary>
    /// 对比数量。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 对象级对比详情。
    /// </summary>

    std::vector<ObjectsCompareDetailInfo>& getCompareDetail();
    bool compareDetailIsSet() const;
    void unsetcompareDetail();
    void setCompareDetail(const std::vector<ObjectsCompareDetailInfo>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<ObjectsCompareDetailInfo> compareDetail_;
    bool compareDetailIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ListObejectLevelCompareDetailResponse_H_
