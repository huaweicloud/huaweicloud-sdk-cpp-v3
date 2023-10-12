
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowTranscodingsTemplateResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowTranscodingsTemplateResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/live/v1/model/AppQualityInfo.h>

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
class HUAWEICLOUD_LIVE_V1_EXPORT  ShowTranscodingsTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTranscodingsTemplateResponse();
    virtual ~ShowTranscodingsTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTranscodingsTemplateResponse members

    /// <summary>
    /// 查询结果的总元素数量
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 播放域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 转码模板
    /// </summary>

    std::vector<AppQualityInfo>& getTemplates();
    bool templatesIsSet() const;
    void unsettemplates();
    void setTemplates(const std::vector<AppQualityInfo>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::string domain_;
    bool domainIsSet_;
    std::vector<AppQualityInfo> templates_;
    bool templatesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowTranscodingsTemplateResponse_H_
