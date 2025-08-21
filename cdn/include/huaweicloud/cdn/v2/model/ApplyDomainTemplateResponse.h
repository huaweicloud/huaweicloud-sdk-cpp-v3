
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ApplyDomainTemplateResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ApplyDomainTemplateResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/ApplyTmlDetail.h>
#include <string>
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
class HUAWEICLOUD_CDN_V2_EXPORT  ApplyDomainTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    ApplyDomainTemplateResponse();
    virtual ~ApplyDomainTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApplyDomainTemplateResponse members

    /// <summary>
    /// **参数解释：** 操作ID **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 应用模板状态（任务粒度） **约束限制：** 不涉及 **取值范围：** - success: 应用模板成功 - fail: 应用模板失败 **默认取值：** 不涉及
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<ApplyTmlDetail>& getDetail();
    bool detailIsSet() const;
    void unsetdetail();
    void setDetail(const std::vector<ApplyTmlDetail>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<ApplyTmlDetail> detail_;
    bool detailIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ApplyDomainTemplateResponse_H_
