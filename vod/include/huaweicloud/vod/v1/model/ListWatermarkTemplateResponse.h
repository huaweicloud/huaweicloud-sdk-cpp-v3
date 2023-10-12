
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ListWatermarkTemplateResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ListWatermarkTemplateResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/WatermarkTemplate.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ListWatermarkTemplateResponse
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
    /// 水印模板信息。
    /// </summary>

    std::vector<WatermarkTemplate>& getTemplates();
    bool templatesIsSet() const;
    void unsettemplates();
    void setTemplates(const std::vector<WatermarkTemplate>& value);

    /// <summary>
    /// 总数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<WatermarkTemplate> templates_;
    bool templatesIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ListWatermarkTemplateResponse_H_
