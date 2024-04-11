
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ListContentCompareOverviewResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ListContentCompareOverviewResponse_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/NodeContentCompareOverviewResult.h>
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
class HUAWEICLOUD_DRS_V3_EXPORT  ListContentCompareOverviewResponse
    : public ModelBase, public HttpResponse
{
public:
    ListContentCompareOverviewResponse();
    virtual ~ListContentCompareOverviewResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListContentCompareOverviewResponse members

    /// <summary>
    /// 对比数量
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 信息列表
    /// </summary>

    std::vector<NodeContentCompareOverviewResult>& getContentCompareResultInfos();
    bool contentCompareResultInfosIsSet() const;
    void unsetcontentCompareResultInfos();
    void setContentCompareResultInfos(const std::vector<NodeContentCompareOverviewResult>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<NodeContentCompareOverviewResult> contentCompareResultInfos_;
    bool contentCompareResultInfosIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ListContentCompareOverviewResponse_H_
