
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_ListAssociatedResourceRulesResponse_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_ListAssociatedResourceRulesResponse_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tms/v1/model/AssociatedResourceRule.h>
#include <vector>
#include <huaweicloud/tms/v1/model/PageInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  ListAssociatedResourceRulesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAssociatedResourceRulesResponse();
    virtual ~ListAssociatedResourceRulesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAssociatedResourceRulesResponse members

    /// <summary>
    /// 规则信息
    /// </summary>

    std::vector<AssociatedResourceRule>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<AssociatedResourceRule>& value);

    /// <summary>
    /// 记录总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    PageInfo getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfo& value);


protected:
    std::vector<AssociatedResourceRule> rules_;
    bool rulesIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;
    PageInfo pageInfo_;
    bool pageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_ListAssociatedResourceRulesResponse_H_
