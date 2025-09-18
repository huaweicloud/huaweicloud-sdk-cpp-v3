
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ListTemplateRulesResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ListTemplateRulesResponse_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/RuleItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ListTemplateRulesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTemplateRulesResponse();
    virtual ~ListTemplateRulesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTemplateRulesResponse members

    /// <summary>
    /// 规则集的规则列表信息
    /// </summary>

    std::vector<RuleItem>& getInfo();
    bool infoIsSet() const;
    void unsetinfo();
    void setInfo(const std::vector<RuleItem>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<RuleItem> info_;
    bool infoIsSet_;
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

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ListTemplateRulesResponse_H_
