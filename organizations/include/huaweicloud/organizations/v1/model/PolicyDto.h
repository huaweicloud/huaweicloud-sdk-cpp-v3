
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_PolicyDto_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_PolicyDto_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/organizations/v1/model/PolicySummaryDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 包含有关策略的详细信息的结构。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  PolicyDto
    : public ModelBase
{
public:
    PolicyDto();
    virtual ~PolicyDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PolicyDto members

    /// <summary>
    /// 策略的文本内容。
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PolicySummaryDto getPolicySummary() const;
    bool policySummaryIsSet() const;
    void unsetpolicySummary();
    void setPolicySummary(const PolicySummaryDto& value);


protected:
    std::string content_;
    bool contentIsSet_;
    PolicySummaryDto policySummary_;
    bool policySummaryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_PolicyDto_H_
