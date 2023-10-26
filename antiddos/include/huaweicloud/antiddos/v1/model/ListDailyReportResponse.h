
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ListDailyReportResponse_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ListDailyReportResponse_H_


#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/antiddos/v1/model/DailyData.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  ListDailyReportResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDailyReportResponse();
    virtual ~ListDailyReportResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDailyReportResponse members

    /// <summary>
    /// 24小时内的流量数据
    /// </summary>

    std::vector<DailyData>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<DailyData>& value);


protected:
    std::vector<DailyData> data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ListDailyReportResponse_H_
