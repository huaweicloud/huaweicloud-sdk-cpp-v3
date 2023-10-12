
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListQueryHttpCodeResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListQueryHttpCodeResponse_H_


#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v2/model/HttpCodeSummary.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V2_EXPORT  ListQueryHttpCodeResponse
    : public ModelBase, public HttpResponse
{
public:
    ListQueryHttpCodeResponse();
    virtual ~ListQueryHttpCodeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListQueryHttpCodeResponse members

    /// <summary>
    /// 基于时间轴的状态码
    /// </summary>

    std::vector<HttpCodeSummary>& getDataSeries();
    bool dataSeriesIsSet() const;
    void unsetdataSeries();
    void setDataSeries(const std::vector<HttpCodeSummary>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<HttpCodeSummary> dataSeries_;
    bool dataSeriesIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListQueryHttpCodeResponse_H_
