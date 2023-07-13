
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListRecordContentsResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListRecordContentsResponse_H_

#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/RecordContentInfoV2.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ListRecordContentsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRecordContentsResponse();
    virtual ~ListRecordContentsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListRecordContentsResponse members

    /// <summary>
    /// 查询结果的总元素数量
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 录制内容数组
    /// </summary>

    std::vector<RecordContentInfoV2>& getRecordContents();
    bool recordContentsIsSet() const;
    void unsetrecordContents();
    void setRecordContents(const std::vector<RecordContentInfoV2>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<RecordContentInfoV2> recordContents_;
    bool recordContentsIsSet_;
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

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListRecordContentsResponse_H_
