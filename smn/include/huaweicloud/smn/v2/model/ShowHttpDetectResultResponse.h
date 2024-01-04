
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ShowHttpDetectResultResponse_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ShowHttpDetectResultResponse_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/GetHttpDetectResponseBody_detail.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  ShowHttpDetectResultResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowHttpDetectResultResponse();
    virtual ~ShowHttpDetectResultResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowHttpDetectResultResponse members

    /// <summary>
    /// 
    /// </summary>

    GetHttpDetectResponseBody_detail getDetail() const;
    bool detailIsSet() const;
    void unsetdetail();
    void setDetail(const GetHttpDetectResponseBody_detail& value);

    /// <summary>
    /// http探测任务状态，0代表执行成功，终端可用，1代表未执行，2代表执行失败，终端不可用
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 请求ID
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);


protected:
    GetHttpDetectResponseBody_detail detail_;
    bool detailIsSet_;
    int32_t status_;
    bool statusIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ShowHttpDetectResultResponse_H_
