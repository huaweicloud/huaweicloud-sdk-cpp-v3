
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListRecordDataResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListRecordDataResponse_H_

#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v2/model/RecordData.h>
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
class HUAWEICLOUD_LIVE_V2_EXPORT  ListRecordDataResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRecordDataResponse();
    virtual ~ListRecordDataResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListRecordDataResponse members

    /// <summary>
    /// 采样数据列表。 
    /// </summary>

    std::vector<RecordData>& getRecordDataList();
    bool recordDataListIsSet() const;
    void unsetrecordDataList();
    void setRecordDataList(const std::vector<RecordData>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<RecordData> recordDataList_;
    bool recordDataListIsSet_;
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

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListRecordDataResponse_H_
