
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_GetDataTransformationResp_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_GetDataTransformationResp_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/DataTransformationInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据加工行过滤配置信息
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  GetDataTransformationResp
    : public ModelBase
{
public:
    GetDataTransformationResp();
    virtual ~GetDataTransformationResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GetDataTransformationResp members

    /// <summary>
    /// 数据加工总数。
    /// </summary>

    int64_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int64_t value);

    /// <summary>
    /// 数据过滤配置信息。
    /// </summary>

    std::vector<DataTransformationInfo>& getFilterConditions();
    bool filterConditionsIsSet() const;
    void unsetfilterConditions();
    void setFilterConditions(const std::vector<DataTransformationInfo>& value);


protected:
    int64_t totalCount_;
    bool totalCountIsSet_;
    std::vector<DataTransformationInfo> filterConditions_;
    bool filterConditionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_GetDataTransformationResp_H_
