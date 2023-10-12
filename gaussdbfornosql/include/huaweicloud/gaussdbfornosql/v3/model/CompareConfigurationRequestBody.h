
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_CompareConfigurationRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_CompareConfigurationRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  CompareConfigurationRequestBody
    : public ModelBase
{
public:
    CompareConfigurationRequestBody();
    virtual ~CompareConfigurationRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CompareConfigurationRequestBody members

    /// <summary>
    /// 需要进行比较的源参数模板ID。
    /// </summary>

    std::string getSourceConfigurationId() const;
    bool sourceConfigurationIdIsSet() const;
    void unsetsourceConfigurationId();
    void setSourceConfigurationId(const std::string& value);

    /// <summary>
    /// 需要进行比较的目标参数模板ID。
    /// </summary>

    std::string getTargetConfigurationId() const;
    bool targetConfigurationIdIsSet() const;
    void unsettargetConfigurationId();
    void setTargetConfigurationId(const std::string& value);


protected:
    std::string sourceConfigurationId_;
    bool sourceConfigurationIdIsSet_;
    std::string targetConfigurationId_;
    bool targetConfigurationIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_CompareConfigurationRequestBody_H_
