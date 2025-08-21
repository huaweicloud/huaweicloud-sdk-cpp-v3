
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowDomainTemplateResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowDomainTemplateResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/TemplateItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ShowDomainTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDomainTemplateResponse();
    virtual ~ShowDomainTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDomainTemplateResponse members

    /// <summary>
    /// **参数解释：** 查询域名模板总数 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<TemplateItem>& getTemlates();
    bool temlatesIsSet() const;
    void unsettemlates();
    void setTemlates(const std::vector<TemplateItem>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<TemplateItem> temlates_;
    bool temlatesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowDomainTemplateResponse_H_
