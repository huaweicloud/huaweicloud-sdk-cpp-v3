
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListWatermarkTemplateResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListWatermarkTemplateResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v1/model/WatermarkTemplate.h>
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
class HUAWEICLOUD_LIVE_V1_EXPORT  ListWatermarkTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    ListWatermarkTemplateResponse();
    virtual ~ListWatermarkTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWatermarkTemplateResponse members

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 响应数据
    /// </summary>

    std::vector<WatermarkTemplate>& getTemplateInfos();
    bool templateInfosIsSet() const;
    void unsettemplateInfos();
    void setTemplateInfos(const std::vector<WatermarkTemplate>& value);

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
    std::vector<WatermarkTemplate> templateInfos_;
    bool templateInfosIsSet_;
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

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListWatermarkTemplateResponse_H_
