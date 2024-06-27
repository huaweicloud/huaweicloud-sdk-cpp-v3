
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListCaptureTaskResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListCaptureTaskResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/HttpQueryCaptureTaskResponseData.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ListCaptureTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    ListCaptureTaskResponse();
    virtual ~ListCaptureTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCaptureTaskResponse members

    /// <summary>
    /// 查询抓包任务返回值。
    /// </summary>

    std::vector<HttpQueryCaptureTaskResponseData>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<HttpQueryCaptureTaskResponseData>& value);


protected:
    std::vector<HttpQueryCaptureTaskResponseData> data_;
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

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListCaptureTaskResponse_H_
