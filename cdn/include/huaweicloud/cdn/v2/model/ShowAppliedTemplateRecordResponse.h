
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowAppliedTemplateRecordResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowAppliedTemplateRecordResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/ApplyRecord.h>
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
class HUAWEICLOUD_CDN_V2_EXPORT  ShowAppliedTemplateRecordResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAppliedTemplateRecordResponse();
    virtual ~ShowAppliedTemplateRecordResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAppliedTemplateRecordResponse members

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

    std::vector<ApplyRecord>& getElements();
    bool elementsIsSet() const;
    void unsetelements();
    void setElements(const std::vector<ApplyRecord>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<ApplyRecord> elements_;
    bool elementsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowAppliedTemplateRecordResponse_H_
