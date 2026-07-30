
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ModelArtsAgencyRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ModelArtsAgencyRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ModelArtsAgencyRequest
    : public ModelBase
{
public:
    ModelArtsAgencyRequest();
    virtual ~ModelArtsAgencyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModelArtsAgencyRequest members

    /// <summary>
    /// 委托名称后缀。  长度不大于50位。  委托名称前缀固定为ma_agency。  如该字段为iam-user01，则创建出来的委托名称为ma_agency_iam-user01。  默认为空，表示创建名称为modelarts_agency的委托。
    /// </summary>

    std::string getAgencyNameSuffix() const;
    bool agencyNameSuffixIsSet() const;
    void unsetagencyNameSuffix();
    void setAgencyNameSuffix(const std::string& value);


protected:
    std::string agencyNameSuffix_;
    bool agencyNameSuffixIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ModelArtsAgencyRequest_H_
