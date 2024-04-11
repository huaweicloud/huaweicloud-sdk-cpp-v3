
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ListDataCompareOverviewResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ListDataCompareOverviewResponse_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/DataCompareOverviewInfo.h>
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
class HUAWEICLOUD_DRS_V3_EXPORT  ListDataCompareOverviewResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDataCompareOverviewResponse();
    virtual ~ListDataCompareOverviewResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDataCompareOverviewResponse members

    /// <summary>
    /// 对比信息数量
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 信息列表
    /// </summary>

    std::vector<DataCompareOverviewInfo>& getDataCompareOverviewInfos();
    bool dataCompareOverviewInfosIsSet() const;
    void unsetdataCompareOverviewInfos();
    void setDataCompareOverviewInfos(const std::vector<DataCompareOverviewInfo>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<DataCompareOverviewInfo> dataCompareOverviewInfos_;
    bool dataCompareOverviewInfosIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ListDataCompareOverviewResponse_H_
