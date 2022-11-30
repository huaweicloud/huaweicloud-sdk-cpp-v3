
#ifndef HUAWEICLOUD_SDK_IVS_V2_MODEL_IvsExtentionByIdCardImageResponseBody_result_H_
#define HUAWEICLOUD_SDK_IVS_V2_MODEL_IvsExtentionByIdCardImageResponseBody_result_H_

#include <huaweicloud/ivs/v2/IvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ivs/v2/model/ExtentionRespDataByIdCardImage.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 调用返回结果。
/// </summary>
class HUAWEICLOUD_IVS_V2_EXPORT  IvsExtentionByIdCardImageResponseBody_result
    : public ModelBase
{
public:
    IvsExtentionByIdCardImageResponseBody_result();
    virtual ~IvsExtentionByIdCardImageResponseBody_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// IvsExtentionByIdCardImageResponseBody_result members

    /// <summary>
    /// 子服务名称。
    /// </summary>

    std::string getServiceName() const;
    bool serviceNameIsSet() const;
    void unsetserviceName();
    void setServiceName(const std::string& value);

    /// <summary>
    /// 成功的结果数量，与resp_data字段对应。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 请求列表，用于支持批量调用。目前暂时只支持单个数据查询。
    /// </summary>

    std::vector<ExtentionRespDataByIdCardImage>& getRespData();
    bool respDataIsSet() const;
    void unsetrespData();
    void setRespData(const std::vector<ExtentionRespDataByIdCardImage>& value);


protected:
    std::string serviceName_;
    bool serviceNameIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::vector<ExtentionRespDataByIdCardImage> respData_;
    bool respDataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IVS_V2_MODEL_IvsExtentionByIdCardImageResponseBody_result_H_
