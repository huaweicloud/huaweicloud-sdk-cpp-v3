
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowHealthObjectCompareJobOverviewResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowHealthObjectCompareJobOverviewResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/ObjectsHealthCompareOverviewInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowHealthObjectCompareJobOverviewResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowHealthObjectCompareJobOverviewResponse();
    virtual ~ShowHealthObjectCompareJobOverviewResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowHealthObjectCompareJobOverviewResponse members

    /// <summary>
    /// 健康对比对象级对比结果。
    /// </summary>

    std::vector<ObjectsHealthCompareOverviewInfo>& getCompareResult();
    bool compareResultIsSet() const;
    void unsetcompareResult();
    void setCompareResult(const std::vector<ObjectsHealthCompareOverviewInfo>& value);


protected:
    std::vector<ObjectsHealthCompareOverviewInfo> compareResult_;
    bool compareResultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowHealthObjectCompareJobOverviewResponse_H_
