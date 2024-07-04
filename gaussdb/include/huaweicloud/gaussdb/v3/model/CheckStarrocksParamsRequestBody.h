
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckStarrocksParamsRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckStarrocksParamsRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CheckStarrocksParamsRequestBody
    : public ModelBase
{
public:
    CheckStarrocksParamsRequestBody();
    virtual ~CheckStarrocksParamsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckStarrocksParamsRequestBody members

    /// <summary>
    /// 需要进行比较的源参数模板ID。通过ListStarrocksInstanceInfo接口获得。
    /// </summary>

    std::string getSourceConfigurationId() const;
    bool sourceConfigurationIdIsSet() const;
    void unsetsourceConfigurationId();
    void setSourceConfigurationId(const std::string& value);


protected:
    std::string sourceConfigurationId_;
    bool sourceConfigurationIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckStarrocksParamsRequestBody_H_
