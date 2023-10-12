
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListAreaDetailResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListAreaDetailResponse_H_


#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v2/model/AreaDetail.h>
#include <string>
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
class HUAWEICLOUD_LIVE_V2_EXPORT  ListAreaDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAreaDetailResponse();
    virtual ~ListAreaDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAreaDetailResponse members

    /// <summary>
    /// 时间戳及相应时间的指标数值
    /// </summary>

    std::vector<AreaDetail>& getDataList();
    bool dataListIsSet() const;
    void unsetdataList();
    void setDataList(const std::vector<AreaDetail>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<AreaDetail> dataList_;
    bool dataListIsSet_;
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

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListAreaDetailResponse_H_
