
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultBindRules_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultBindRules_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/BindRulesTags.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  VaultBindRules
    : public ModelBase
{
public:
    VaultBindRules();
    virtual ~VaultBindRules();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VaultBindRules members

    /// <summary>
    /// 按tags过滤自动绑定的资源  最小长度：1  最大长度：5
    /// </summary>

    std::vector<BindRulesTags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<BindRulesTags>& value);


protected:
    std::vector<BindRulesTags> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultBindRules_H_
